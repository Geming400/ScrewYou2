"""Used to generate everything in the './src/generated' folder
"""

import re
import argparse
import os
import time
from typing import Final

HOOK_MACRO: Final[str] = "SCREWYOU2_HOOK"
INIT_MACRO: Final[str] = "SCREWYOU2_HOOK_INIT"

parser = argparse.ArgumentParser(
        description='Used to generated "./src/generated/"'
        )

parser.add_argument("geometrydash_broma_file")
parser.add_argument("-o", "--output", default="./src/",
                    help="The location of the output")
parser.add_argument("-i", "--ignore", default="",
                    help="A list of classes to ignore. Each elements is separated by a semi-colon")

class GDClass:
    name: str
    params: str
    platforms: set[str]
    
    def __init__(self, name: str, params: str, platforms: set[str]) -> None:
        self.name = name
        self.params = params
        self.platforms = platforms
    
    def isWin(self): return "win" in self.platforms
    def isMac(self): return "imac" in self.platforms
    def isIos(self): return "ios" in self.platforms
    def isAndroid(self): return "imac" in self.platforms
    
    def isBindingAvalaible(self):
        return self.isWin() or self.isMac() or self.isIos() or self.isAndroid()
    
    def isAllPlatforms(self):
        return self.isWin() and self.isMac() and self.isIos() and self.isAndroid()
    
    def createIfdefs(self):
        if not self.isBindingAvalaible() or self.isAllPlatforms(): return ""
        if self.platforms or self.platforms != ['']:
            ret = ""
            
            DEFINED_TEXT = "defined "
            
            win = "GEODE_IS_WINDOWS" if self.isWin() else ""
            android = "GEODE_IS_ANDROID" if self.isAndroid() else ""
            mac = "GEODE_IS_MACOS" if self.isMac() else ""
            ios = "GEODE_IS_IOS" if self.isIos() else ""
            
            if win:
                ret += DEFINED_TEXT + win + " || "
            if android:
                ret += DEFINED_TEXT + android + " || "
            if mac:
                ret += DEFINED_TEXT + mac + " || "
            if ios:
                ret += DEFINED_TEXT + ios + " || "
            return "#if " + ret.removesuffix(" || ")
        return ""
    
    def build(self, hook_macro: str = HOOK_MACRO, init_macro: str = INIT_MACRO):
        ifDefs = self.createIfdefs()

        if self.params == "":
            initMacroCall = f"{init_macro}({self.name})"
        else:
            initMacroCall = f"{init_macro}({self.name}, {removeTypes(self.params)})"
        
        includeCall = f"#include <Geode/modify/{self.name}.hpp>"
        hookCall = f"""{hook_macro}({self.name}, {self.params})
{initMacroCall}"""
        
        ret: str = ""
        if ifDefs:
            ret = f"""
{includeCall}
{ifDefs}
{hookCall}
#endif

"""
        else:
            ret = f"""{includeCall}
{hookCall}

"""
        
        return ret
    

def addArgs(string: str):
    # :trol:
    def removeTotallyNotNeededCPPfeaturesThatNobodyWillEverNeed(string: str):
        return string.replace("const", "").replace("*", "").replace("&", "").strip()
        
    """Adds arguments to a c++ function

    Args:
        string: the arguments

    Returns:
        The arguments
    """
    if string == "": return ""
    
    params = string.replace(", ", ",").strip().split(",")
    newParams: list[str] = list()
    for i, param in enumerate(params):
        _param = removeTotallyNotNeededCPPfeaturesThatNobodyWillEverNeed(param)
        if (" " in _param or _param == ""):
            newParams.append(param)
            continue
        newParams.append(f"{param} p{i}")
    if len(newParams) == 0:
        return string.strip()
    
    ret = ", ".join(newParams)
    return ret

def removeTypes(string: str):
    """Removes the arguments from a c++ function

    Args:
        string: the argument string

    Returns:
        The arguments (without the types)
    """
    if string == "": return ""
    
    params = string.replace(", ", ",").strip().split(",")
    newParams: list[str] = []
    for param in params:
        splittedParams = param.split(" ")
        newParams.append(splittedParams[len(splittedParams) - 1])
    if len(newParams) == 0:
        return string.strip()
    
    ret = ", ".join(newParams)
    return ret
    

if __name__ == "__main__":
    gdClasses: dict[str, GDClass] = {}
    unavailableClasses: int = 0
    
    args = parser.parse_args()
    
    toIgnore: list[str] = args.ignore.lower().split(";")
    
    def path(file: str):
        return os.path.normpath(args.output + "\\generated\\" + file) # pyright: ignore[reportAttributeAccessIssue]

    currentClass: str = ""

    if not os.path.exists(os.path.normpath(f"{args.output}/generated/")):
        print("Creating path", os.path.normpath(f"{args.output}/generated/"))
        os.mkdir(os.path.normpath(f"{args.output}/generated/"))

    print(f"Finding classes from {os.path.normpath(args.geometrydash_broma_file)}")

    time1 = time.time()

    with open(os.path.normpath(args.geometrydash_broma_file)) as classes:
        regex = r"(class (\w)+)|((bool init\(.+\))|(bool init\(\))) =[\w, ]+;" # fire regex
        matches = re.finditer(regex, classes.read(), re.MULTILINE | re.IGNORECASE)

        ignoreNextInitFunc: bool = False
        
        for match in matches:
            if "bool init(" in match.group(): # a init() function:
                if ignoreNextInitFunc:
                    ignoreNextInitFunc = False
                    continue
                
                if " = " in match.group():
                    funcSignature, unparsedPlatforms = match.group().strip().split(" = ")
                else:
                    continue
                    #funcSignature, unparsedPlatforms = (match.group().strip(), "")
                
                params = addArgs(funcSignature.replace("bool init(", "").replace(")", ""))
                
                if any(x in unparsedPlatforms for x in ("win", "m1", "imac", "ios")):
                    platforms = set(re.sub(r" 0x.+?(,|;)", "", unparsedPlatforms).strip().removeprefix("=").strip().split(" "))
                    gdClasses[currentClass] = GDClass(currentClass, params, platforms)
            else:
                if not gdClasses.get(currentClass) and currentClass != "":
                    unavailableClasses += 1
                    #print(f"    {currentClass} is not avalaible on any platforms")
                    
                _class = match.group().replace("class ", "")
                if any(x in _class.lower() for x in toIgnore) and toIgnore != ['']:
                    print(f"    Ignoring class {_class}")
                    ignoreNextInitFunc = True
                    continue
                currentClass = f"{_class}"
    
    print(f"Found {len(gdClasses)} classes with {unavailableClasses} unavailable classes (= they don't have bindings) !")
    print("Now creating files...")
    
    # classes.hpp
    
    with open(path("classes.hpp"), "w") as f:
        print("Creating 'classes.hpp'")
        text = """// Generated using 'generate.py'
#include <vector>
#include <string>

constexpr std::vector<std::string> getClasses() {
    std::vector<std::string> classes;
"""

        text += f"    classes.reserve({len(gdClasses)});\n\n"
        for classInst in gdClasses.values():
            if classInst.isBindingAvalaible():
                text += f"    classes.push_back(\"{classInst.name}\");\n"
        text += "    return classes;\n}"
        f.write(text)
    
        # hooks.cpp
    
        with open(path("hooks.cpp"), "w") as f:
            print("Creating 'hooks.cpp'")
            text = """// Generated using 'generate.py'
// Can't wait for someone to destroy `PlayerObject`'s as their first destroyed init :3
#include <Geode/Geode.hpp>
#include "../ScrewYou2Manager.hpp"

using namespace geode::prelude;

// Cursed macros but whatever, this isn't supposed to be the most readable thing after all

bool getReturnValue() {
    auto returnVal = Mod::get()->getSettingValue<std::string>("return-value");
    switch (hash(returnVal.c_str())) {
        case hash("true"): return true;
        case hash("false"): return false;
        default: return true;
    }
}

#define SCREWYOU2_HOOK(className, ...) \\
class $modify(Screwd##className, ##className) { \\
    bool init(__VA_ARGS__) // `SCREWYOU2_HOOK_INIT()` macro goes here

#define SCREWYOU2_HOOK_INIT(className, ...) { \\
        log::info("Class {} has been killed: ", CLASS_NAME, ScrewYou2Manager::get()->isKilled(CLASS_NAME)); \\
        if (ScrewYou2Manager::get()->isKilled(CLASS_NAME) && Mod::get()->getSettingValue<bool>("enabled")) return getReturnValue();\\
        if (!##className::init(__VA_ARGS__)) return false; \\
    } \\
};

// Hooking classes
// You might notice that the 'GEODE_IS_DEKSTOP' and 'GEODE_IS_MOBILE' macros aren't used, this is just because
// this file was automatically generated, so I just didn't want to bother with that, not like it was going
// to change a thing either way

"""

            for className, classInst in gdClasses.items():
                text += classInst.build()
            f.write(text)
            
    time2 = time.time()
    
    print("Done !")
    print(f"Finished in {time2 - time1} seconds !")
                
