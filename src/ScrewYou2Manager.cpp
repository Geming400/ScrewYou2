#include "ScrewYou2Manager.hpp"
#include "utils.hpp"

#include <Geode/Geode.hpp>

using namespace geode::prelude;

ScrewYou2Manager* ScrewYou2Manager::get() {
    static ScrewYou2Manager* inst;
    if (inst) return inst;
    inst = new ScrewYou2Manager();
    return inst;
}

std::vector<std::string> ScrewYou2Manager::getSurvivingClasses() {
    return m_survivingClasses;
}

bool ScrewYou2Manager::isKilled(std::string className) {
    return !ranges::contains(m_survivingClasses, className);
}

void ScrewYou2Manager::killClass(std::string className) {
    log::info("Killed {}", className);
    ranges::remove(m_survivingClasses, className);
}

void ScrewYou2Manager::killRandomClass() {
    if (m_survivingClasses.empty()) return;
    
    auto killedClass = modUtils::select_randomly(m_survivingClasses.begin(), m_survivingClasses.end());

    log::info("Killed {}", *killedClass);
    m_survivingClasses.erase(killedClass);
}