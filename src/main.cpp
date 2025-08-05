#include <Geode/Geode.hpp>
#include "ScrewYou2Manager.hpp"

using namespace geode::prelude;

#include <Geode/modify/PlayerObject.hpp>
class $modify(PlayerObjectButBetter, PlayerObject) {
    void playerDestroyed(bool p0) {
        PlayerObject::playerDestroyed(true);

        // Testing this amazing mod
        // ScrewYou2Manager::get()->killClass("MenuLayer");
        for (size_t i = 0; i < Mod::get()->getSettingValue<int64_t>("intensity"); i++) {
            ScrewYou2Manager::get()->killRandomClass();
        }
    }
};
