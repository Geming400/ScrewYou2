// Generated using 'generate.py'
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

#define SCREWYOU2_HOOK(className, ...) \
class $modify(Screwd##className, ##className) { \
    bool init(__VA_ARGS__) // `SCREWYOU2_HOOK_INIT()` macro goes here

#define SCREWYOU2_HOOK_INIT(className, ...) { \
        log::info("Class {} has been killed: ", CLASS_NAME, ScrewYou2Manager::get()->isKilled(CLASS_NAME)); \
        if (ScrewYou2Manager::get()->isKilled(CLASS_NAME) && Mod::get()->getSettingValue<bool>("enabled")) return getReturnValue();\
        if (!##className::init(__VA_ARGS__)) return false; \
    } \
};

// Hooking classes
// You might notice that the 'GEODE_IS_DEKSTOP' and 'GEODE_IS_MOBILE' macros aren't used, this is just because
// this file was automatically generated, so I just didn't want to bother with that, not like it was going
// to change a thing either way


SCREWYOU2_HOOK(AccountLoginLayer, gd::string p0)
SCREWYOU2_HOOK_INIT(AccountLoginLayer, p0)

SCREWYOU2_HOOK(AccountRegisterLayer, )
SCREWYOU2_HOOK_INIT(AccountRegisterLayer, )

SCREWYOU2_HOOK(AchievementBar, char const* title, char const* desc, char const* icon, bool quest)
SCREWYOU2_HOOK_INIT(AchievementBar, title, desc, icon, quest)

SCREWYOU2_HOOK(AchievementManager, )
SCREWYOU2_HOOK_INIT(AchievementManager, )

SCREWYOU2_HOOK(AchievementNotifier, )
SCREWYOU2_HOOK_INIT(AchievementNotifier, )

SCREWYOU2_HOOK(AnimatedGameObject, int p0)
SCREWYOU2_HOOK_INIT(AnimatedGameObject, p0)

SCREWYOU2_HOOK(ArtistCell, )
SCREWYOU2_HOOK_INIT(ArtistCell, )

SCREWYOU2_HOOK(AudioAssetsBrowser, gd::vector<int>& songIds, gd::vector<int>& sfxIds)
SCREWYOU2_HOOK_INIT(AudioAssetsBrowser, songIds, sfxIds)

#ifdef defined GEODE_IS_WINDOWS
SCREWYOU2_HOOK(AudioEffectsLayer, gd::string p0)
SCREWYOU2_HOOK_INIT(AudioEffectsLayer, p0)
#endif

SCREWYOU2_HOOK(AudioLineGuideGameObject, )
SCREWYOU2_HOOK_INIT(AudioLineGuideGameObject, )

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(BonusDropdown, gd::string p0, int p1)
SCREWYOU2_HOOK_INIT(BonusDropdown, p0, p1)
#endif

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(BoomListLayer, BoomListView* p0, char const* p1)
SCREWYOU2_HOOK_INIT(BoomListLayer, p0, p1)
#endif

SCREWYOU2_HOOK(BoomListView, cocos2d::CCArray* p0, TableViewCellDelegate* p1, float p2, float p3, int p4, BoomListType p5, float p6)
SCREWYOU2_HOOK_INIT(BoomListView, p0, p1, p2, p3, p4, p5, p6)

SCREWYOU2_HOOK(BoomScrollLayer, cocos2d::CCArray* p0, int p1, bool p2, cocos2d::CCArray* p3, DynamicScrollDelegate* p4)
SCREWYOU2_HOOK_INIT(BoomScrollLayer, p0, p1, p2, p3, p4)

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(BrowseSmartKeyLayer, GJSmartTemplate* p0, gd::string p1)
SCREWYOU2_HOOK_INIT(BrowseSmartKeyLayer, p0, p1)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(BrowseSmartTemplateLayer, GJSmartTemplate* p0, SmartBrowseFilter p1)
SCREWYOU2_HOOK_INIT(BrowseSmartTemplateLayer, p0, p1)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(ButtonSprite, cocos2d::CCSprite* topSprite, int width, int unused, float height, float scale, bool absolute, char const* bgSprite, bool noScaleSpriteForBG)
SCREWYOU2_HOOK_INIT(ButtonSprite, topSprite, width, unused, height, scale, absolute, bgSprite, noScaleSpriteForBG)
#endif

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(CCAlertCircle, )
SCREWYOU2_HOOK_INIT(CCAlertCircle, )
#endif

SCREWYOU2_HOOK(CCBlockLayer, )
SCREWYOU2_HOOK_INIT(CCBlockLayer, )

SCREWYOU2_HOOK(CCCircleWave, float startRadius, float endRadius, float duration, bool fadeIn, bool easeOut)
SCREWYOU2_HOOK_INIT(CCCircleWave, startRadius, endRadius, duration, fadeIn, easeOut)

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(CCCountdown, )
SCREWYOU2_HOOK_INIT(CCCountdown, )
#endif

SCREWYOU2_HOOK(CCMenuItemSpriteExtra, cocos2d::CCNode* sprite, cocos2d::CCNode* disabledSprite, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback)
SCREWYOU2_HOOK_INIT(CCMenuItemSpriteExtra, sprite, disabledSprite, target, callback)

SCREWYOU2_HOOK(CCNodeContainer, )
SCREWYOU2_HOOK_INIT(CCNodeContainer, )

SCREWYOU2_HOOK(CCTextInputNode, float p0, float p1, char const* p2, char const* p3, int p4, char const* p5)
SCREWYOU2_HOOK_INIT(CCTextInputNode, p0, p1, p2, p3, p4, p5)

SCREWYOU2_HOOK(ChallengeNode, GJChallengeItem* challengeItem, ChallengesPage* challengesPage, bool isNew)
SCREWYOU2_HOOK_INIT(ChallengeNode, challengeItem, challengesPage, isNew)

SCREWYOU2_HOOK(ChallengesPage, )
SCREWYOU2_HOOK_INIT(ChallengesPage, )

SCREWYOU2_HOOK(CharacterColorPage, )
SCREWYOU2_HOOK_INIT(CharacterColorPage, )

SCREWYOU2_HOOK(CheckpointGameObject, )
SCREWYOU2_HOOK_INIT(CheckpointGameObject, )

SCREWYOU2_HOOK(CheckpointObject, )
SCREWYOU2_HOOK_INIT(CheckpointObject, )

SCREWYOU2_HOOK(CollisionBlockPopup, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(CollisionBlockPopup, p0, p1)

SCREWYOU2_HOOK(ColorActionSprite, )
SCREWYOU2_HOOK_INIT(ColorActionSprite, )

SCREWYOU2_HOOK(ColorChannelSprite, )
SCREWYOU2_HOOK_INIT(ColorChannelSprite, )

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(ColorSelectLiveOverlay, ColorAction* p0, ColorAction* p1, EffectGameObject* p2)
SCREWYOU2_HOOK_INIT(ColorSelectLiveOverlay, p0, p1, p2)
#endif

SCREWYOU2_HOOK(ColorSelectPopup, EffectGameObject* p0, cocos2d::CCArray* p1, ColorAction* p2)
SCREWYOU2_HOOK_INIT(ColorSelectPopup, p0, p1, p2)

SCREWYOU2_HOOK(CommentCell, )
SCREWYOU2_HOOK_INIT(CommentCell, )

SCREWYOU2_HOOK(CommunityCreditsPage, )
SCREWYOU2_HOOK_INIT(CommunityCreditsPage, )

SCREWYOU2_HOOK(ConfigureHSVWidget, cocos2d::ccHSVValue hsv, bool unused, bool addInputs)
SCREWYOU2_HOOK_INIT(ConfigureHSVWidget, hsv, unused, addInputs)

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(ConfigureValuePopup, ConfigureValuePopupDelegate* p0, float p1, float p2, float p3, gd::string p4, gd::string p5)
SCREWYOU2_HOOK_INIT(ConfigureValuePopup, p0, p1, p2, p3, p4, p5)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(CreateGuidelinesLayer, CustomSongDelegate* p0, AudioGuidelinesType p1)
SCREWYOU2_HOOK_INIT(CreateGuidelinesLayer, p0, p1)
#endif

SCREWYOU2_HOOK(CreateParticlePopup, ParticleGameObject* p0, cocos2d::CCArray* p1, gd::string p2)
SCREWYOU2_HOOK_INIT(CreateParticlePopup, p0, p1, p2)

SCREWYOU2_HOOK(CreatorLayer, )
SCREWYOU2_HOOK_INIT(CreatorLayer, )

SCREWYOU2_HOOK(CurrencyRewardLayer, int orbs, int stars, int moons, int diamonds, CurrencySpriteType demonKey, int keyCount, CurrencySpriteType shardType, int shardsCount, cocos2d::CCPoint position, CurrencyRewardType rewardType, float p10, float time)
SCREWYOU2_HOOK_INIT(CurrencyRewardLayer, orbs, stars, moons, diamonds, demonKey, keyCount, shardType, shardsCount, position, rewardType, p10, time)

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(CurrencySprite, CurrencySpriteType p0, bool p1)
SCREWYOU2_HOOK_INIT(CurrencySprite, p0, p1)
#endif

SCREWYOU2_HOOK(CustomizeObjectLayer, GameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(CustomizeObjectLayer, p0, p1)

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(CustomizeObjectSettingsPopup, GameObject* p0, cocos2d::CCArray* p1, CustomizeObjectLayer* p2)
SCREWYOU2_HOOK_INIT(CustomizeObjectSettingsPopup, p0, p1, p2)
#endif

SCREWYOU2_HOOK(CustomSFXCell, )
SCREWYOU2_HOOK_INIT(CustomSFXCell, )

SCREWYOU2_HOOK(CustomSFXWidget, SFXInfoObject* p0, CustomSFXDelegate* p1, bool p2, bool p3, bool p4, bool p5, bool p6)
SCREWYOU2_HOOK_INIT(CustomSFXWidget, p0, p1, p2, p3, p4, p5, p6)

SCREWYOU2_HOOK(CustomSongCell, )
SCREWYOU2_HOOK_INIT(CustomSongCell, )

SCREWYOU2_HOOK(CustomSongLayer, CustomSongDelegate* p0)
SCREWYOU2_HOOK_INIT(CustomSongLayer, p0)

SCREWYOU2_HOOK(CustomSongWidget, SongInfoObject* songInfo, CustomSongDelegate* songDelegate, bool showSongSelect, bool showPlayMusic, bool showDownload, bool isRobtopSong, bool unkBool, bool isMusicLibrary, int unk)
SCREWYOU2_HOOK_INIT(CustomSongWidget, songInfo, songDelegate, showSongSelect, showPlayMusic, showDownload, isRobtopSong, unkBool, isMusicLibrary, unk)

SCREWYOU2_HOOK(DailyLevelNode, GJGameLevel* p0, DailyLevelPage* p1, bool p2)
SCREWYOU2_HOOK_INIT(DailyLevelNode, p0, p1, p2)

SCREWYOU2_HOOK(DailyLevelPage, GJTimedLevelType p0)
SCREWYOU2_HOOK_INIT(DailyLevelPage, p0)

SCREWYOU2_HOOK(DemonFilterSelectLayer, )
SCREWYOU2_HOOK_INIT(DemonFilterSelectLayer, )

SCREWYOU2_HOOK(DemonInfoPopup, int easyClassic, int mediumClassic, int hardClassic, int insaneClassic, int extremeClassic, int easyPlatformer, int mediumPlatformer, int hardPlatformer, int insanePlatformer, int extremePlatformer, int weekly, int gauntlet)
SCREWYOU2_HOOK_INIT(DemonInfoPopup, easyClassic, mediumClassic, hardClassic, insaneClassic, extremeClassic, easyPlatformer, mediumPlatformer, hardPlatformer, insanePlatformer, extremePlatformer, weekly, gauntlet)

SCREWYOU2_HOOK(DialogLayer, DialogObject* p0, cocos2d::CCArray* p1, int p2)
SCREWYOU2_HOOK_INIT(DialogLayer, p0, p1, p2)

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS || defined GEODE_IS_IOS
SCREWYOU2_HOOK(DrawGridLayer, cocos2d::CCNode* p0, LevelEditorLayer* p1)
SCREWYOU2_HOOK_INIT(DrawGridLayer, p0, p1)
#endif

SCREWYOU2_HOOK(DungeonBarsSprite, )
SCREWYOU2_HOOK_INIT(DungeonBarsSprite, )

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(EditButtonBar, cocos2d::CCArray* objects, cocos2d::CCPoint position, int tab, bool hasCreateItems, int columns, int rows)
SCREWYOU2_HOOK_INIT(EditButtonBar, objects, position, tab, hasCreateItems, columns, rows)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(EditGameObjectPopup, EffectGameObject* p0, cocos2d::CCArray* p1, bool p2)
SCREWYOU2_HOOK_INIT(EditGameObjectPopup, p0, p1, p2)
#endif

SCREWYOU2_HOOK(EditLevelLayer, GJGameLevel* p0)
SCREWYOU2_HOOK_INIT(EditLevelLayer, p0)

SCREWYOU2_HOOK(EditorOptionsLayer, )
SCREWYOU2_HOOK_INIT(EditorOptionsLayer, )

SCREWYOU2_HOOK(EditorPauseLayer, LevelEditorLayer* p0)
SCREWYOU2_HOOK_INIT(EditorPauseLayer, p0)

SCREWYOU2_HOOK(EditorUI, LevelEditorLayer* editorLayer)
SCREWYOU2_HOOK_INIT(EditorUI, editorLayer)

SCREWYOU2_HOOK(EditTriggersPopup, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(EditTriggersPopup, p0, p1)

SCREWYOU2_HOOK(EffectGameObject, char const* p0)
SCREWYOU2_HOOK_INIT(EffectGameObject, p0)

SCREWYOU2_HOOK(EndPortalObject, )
SCREWYOU2_HOOK_INIT(EndPortalObject, )

SCREWYOU2_HOOK(EndTriggerGameObject, )
SCREWYOU2_HOOK_INIT(EndTriggerGameObject, )

#ifdef defined GEODE_IS_WINDOWS
SCREWYOU2_HOOK(EnhancedGameObject, char const* p0)
SCREWYOU2_HOOK_INIT(EnhancedGameObject, p0)
#endif

SCREWYOU2_HOOK(EventLinkTrigger, )
SCREWYOU2_HOOK_INIT(EventLinkTrigger, )

SCREWYOU2_HOOK(ExplodeItemSprite, )
SCREWYOU2_HOOK_INIT(ExplodeItemSprite, )

SCREWYOU2_HOOK(ExtendedLayer, )
SCREWYOU2_HOOK_INIT(ExtendedLayer, )

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(FileSaveManager, )
SCREWYOU2_HOOK_INIT(FileSaveManager, )
#endif

SCREWYOU2_HOOK(FindObjectPopup, )
SCREWYOU2_HOOK_INIT(FindObjectPopup, )

SCREWYOU2_HOOK(FLAlertLayer, int p0)
SCREWYOU2_HOOK_INIT(FLAlertLayer, p0)

SCREWYOU2_HOOK(FMODLevelVisualizer, )
SCREWYOU2_HOOK_INIT(FMODLevelVisualizer, )

SCREWYOU2_HOOK(FollowRewardPage, )
SCREWYOU2_HOOK_INIT(FollowRewardPage, )

SCREWYOU2_HOOK(FRequestProfilePage, bool p0)
SCREWYOU2_HOOK_INIT(FRequestProfilePage, p0)

SCREWYOU2_HOOK(FriendRequestPopup, GJFriendRequest* p0)
SCREWYOU2_HOOK_INIT(FriendRequestPopup, p0)

SCREWYOU2_HOOK(FriendsProfilePage, UserListType type)
SCREWYOU2_HOOK_INIT(FriendsProfilePage, type)

SCREWYOU2_HOOK(GameCell, )
SCREWYOU2_HOOK_INIT(GameCell, )

SCREWYOU2_HOOK(GameLevelManager, )
SCREWYOU2_HOOK_INIT(GameLevelManager, )

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(GameLevelOptionsLayer, GJGameLevel* p0)
SCREWYOU2_HOOK_INIT(GameLevelOptionsLayer, p0)
#endif

SCREWYOU2_HOOK(GameManager, )
SCREWYOU2_HOOK_INIT(GameManager, )

SCREWYOU2_HOOK(GameStatsManager, )
SCREWYOU2_HOOK_INIT(GameStatsManager, )

SCREWYOU2_HOOK(GauntletLayer, GauntletType p0)
SCREWYOU2_HOOK_INIT(GauntletLayer, p0)

SCREWYOU2_HOOK(GauntletNode, GJMapPack* p0)
SCREWYOU2_HOOK_INIT(GauntletNode, p0)

SCREWYOU2_HOOK(GauntletSelectLayer, int p0)
SCREWYOU2_HOOK_INIT(GauntletSelectLayer, p0)

SCREWYOU2_HOOK(GhostTrailEffect, )
SCREWYOU2_HOOK_INIT(GhostTrailEffect, )

SCREWYOU2_HOOK(GJAccountManager, )
SCREWYOU2_HOOK_INIT(GJAccountManager, )

SCREWYOU2_HOOK(GJAccountSettingsLayer, int p0)
SCREWYOU2_HOOK_INIT(GJAccountSettingsLayer, p0)

SCREWYOU2_HOOK(GJActionManager, )
SCREWYOU2_HOOK_INIT(GJActionManager, )

SCREWYOU2_HOOK(GJBaseGameLayer, )
SCREWYOU2_HOOK_INIT(GJBaseGameLayer, )

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(GJBigSprite, )
SCREWYOU2_HOOK_INIT(GJBigSprite, )
#endif

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(GJBigSpriteNode, )
SCREWYOU2_HOOK_INIT(GJBigSpriteNode, )
#endif

SCREWYOU2_HOOK(GJColorSetupLayer, LevelSettingsObject* p0)
SCREWYOU2_HOOK_INIT(GJColorSetupLayer, p0)

SCREWYOU2_HOOK(GJComment, )
SCREWYOU2_HOOK_INIT(GJComment, )

SCREWYOU2_HOOK(GJCommentListLayer, BoomListView* listView, char const* title, cocos2d::ccColor4B color, float width, float height, bool blueBorder)
SCREWYOU2_HOOK_INIT(GJCommentListLayer, listView, title, color, width, height, blueBorder)

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(GJDifficultySprite, int p0, GJDifficultyName p1)
SCREWYOU2_HOOK_INIT(GJDifficultySprite, p0, p1)
#endif

SCREWYOU2_HOOK(GJDropDownLayer, char const* p0, float p1, bool p2)
SCREWYOU2_HOOK_INIT(GJDropDownLayer, p0, p1, p2)

SCREWYOU2_HOOK(GJEffectManager, )
SCREWYOU2_HOOK_INIT(GJEffectManager, )

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(GJFlyGroundLayer, )
SCREWYOU2_HOOK_INIT(GJFlyGroundLayer, )
#endif

SCREWYOU2_HOOK(GJFollowCommandLayer, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(GJFollowCommandLayer, p0, p1)

SCREWYOU2_HOOK(GJFriendRequest, )
SCREWYOU2_HOOK_INIT(GJFriendRequest, )

SCREWYOU2_HOOK(GJGameLevel, )
SCREWYOU2_HOOK_INIT(GJGameLevel, )

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS || defined GEODE_IS_IOS
SCREWYOU2_HOOK(GJGameLoadingLayer, GJGameLevel* level, bool editor)
SCREWYOU2_HOOK_INIT(GJGameLoadingLayer, level, editor)
#endif

SCREWYOU2_HOOK(GJGarageLayer, )
SCREWYOU2_HOOK_INIT(GJGarageLayer, )

SCREWYOU2_HOOK(GJGradientLayer, )
SCREWYOU2_HOOK_INIT(GJGradientLayer, )

SCREWYOU2_HOOK(GJGroundLayer, int p0, int p1)
SCREWYOU2_HOOK_INIT(GJGroundLayer, p0, p1)

SCREWYOU2_HOOK(GJItemIcon, UnlockType p0, int p1, cocos2d::ccColor3B p2, cocos2d::ccColor3B p3, bool p4, bool p5, bool p6, cocos2d::ccColor3B p7)
SCREWYOU2_HOOK_INIT(GJItemIcon, p0, p1, p2, p3, p4, p5, p6, p7)

SCREWYOU2_HOOK(GJLevelList, )
SCREWYOU2_HOOK_INIT(GJLevelList, )

SCREWYOU2_HOOK(GJLevelScoreCell, )
SCREWYOU2_HOOK_INIT(GJLevelScoreCell, )

SCREWYOU2_HOOK(GJListLayer, BoomListView* p0, char const* p1, cocos2d::ccColor4B p2, float p3, float p4, int p5)
SCREWYOU2_HOOK_INIT(GJListLayer, p0, p1, p2, p3, p4, p5)

SCREWYOU2_HOOK(GJLocalLevelScoreCell, )
SCREWYOU2_HOOK_INIT(GJLocalLevelScoreCell, )

SCREWYOU2_HOOK(GJMapPack, )
SCREWYOU2_HOOK_INIT(GJMapPack, )

SCREWYOU2_HOOK(GJMessageCell, )
SCREWYOU2_HOOK_INIT(GJMessageCell, )

#ifdef defined GEODE_IS_WINDOWS
SCREWYOU2_HOOK(GJMessagePopup, GJUserMessage* p0)
SCREWYOU2_HOOK_INIT(GJMessagePopup, p0)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(GJMGLayer, int p0)
SCREWYOU2_HOOK_INIT(GJMGLayer, p0)
#endif

SCREWYOU2_HOOK(GJMultiplayerManager, )
SCREWYOU2_HOOK_INIT(GJMultiplayerManager, )

SCREWYOU2_HOOK(GJObjectDecoder, )
SCREWYOU2_HOOK_INIT(GJObjectDecoder, )

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(GJOptionsLayer, int p0)
SCREWYOU2_HOOK_INIT(GJOptionsLayer, p0)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(GJPathPage, int p0, GJPathsLayer* p1)
SCREWYOU2_HOOK_INIT(GJPathPage, p0, p1)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(GJPathRewardPopup, int p0)
SCREWYOU2_HOOK_INIT(GJPathRewardPopup, p0)
#endif

SCREWYOU2_HOOK(GJPathsLayer, )
SCREWYOU2_HOOK_INIT(GJPathsLayer, )

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(GJPathSprite, int p0)
SCREWYOU2_HOOK_INIT(GJPathSprite, p0)
#endif

SCREWYOU2_HOOK(GJPFollowCommandLayer, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(GJPFollowCommandLayer, p0, p1)

SCREWYOU2_HOOK(GJPromoPopup, gd::string p0)
SCREWYOU2_HOOK_INIT(GJPromoPopup, p0)

SCREWYOU2_HOOK(GJRequestCell, )
SCREWYOU2_HOOK_INIT(GJRequestCell, )

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(GJRewardItem, int chestID, int timeRemaining, gd::string p2)
SCREWYOU2_HOOK_INIT(GJRewardItem, chestID, timeRemaining, p2)
#endif

SCREWYOU2_HOOK(GJRobotSprite, int p0, gd::string p1)
SCREWYOU2_HOOK_INIT(GJRobotSprite, p0, p1)

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(GJRotateCommandLayer, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(GJRotateCommandLayer, p0, p1)
#endif

SCREWYOU2_HOOK(GJRotationControl, )
SCREWYOU2_HOOK_INIT(GJRotationControl, )

SCREWYOU2_HOOK(GJScaleControl, )
SCREWYOU2_HOOK_INIT(GJScaleControl, )

SCREWYOU2_HOOK(GJScoreCell, )
SCREWYOU2_HOOK_INIT(GJScoreCell, )

SCREWYOU2_HOOK(GJShopLayer, ShopType p0)
SCREWYOU2_HOOK_INIT(GJShopLayer, p0)

SCREWYOU2_HOOK(GJSmartBlockPreviewSprite, )
SCREWYOU2_HOOK_INIT(GJSmartBlockPreviewSprite, )

SCREWYOU2_HOOK(GJSongBrowser, )
SCREWYOU2_HOOK_INIT(GJSongBrowser, )

SCREWYOU2_HOOK(GJSpecialColorSelect, int p0, GJSpecialColorSelectDelegate* p1, ColorSelectType p2)
SCREWYOU2_HOOK_INIT(GJSpecialColorSelect, p0, p1, p2)

SCREWYOU2_HOOK(GJTransformControl, )
SCREWYOU2_HOOK_INIT(GJTransformControl, )

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(GJUINode, UIButtonConfig& p0)
SCREWYOU2_HOOK_INIT(GJUINode, p0)
#endif

SCREWYOU2_HOOK(GJUserCell, )
SCREWYOU2_HOOK_INIT(GJUserCell, )

SCREWYOU2_HOOK(GJUserMessage, )
SCREWYOU2_HOOK_INIT(GJUserMessage, )

SCREWYOU2_HOOK(GJUserScore, )
SCREWYOU2_HOOK_INIT(GJUserScore, )

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(GJWorldNode, int p0, WorldSelectLayer* p1)
SCREWYOU2_HOOK_INIT(GJWorldNode, p0, p1)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(GJWriteMessagePopup, int p0, int p1)
SCREWYOU2_HOOK_INIT(GJWriteMessagePopup, p0, p1)
#endif

SCREWYOU2_HOOK(GManager, )
SCREWYOU2_HOOK_INIT(GManager, )

SCREWYOU2_HOOK(GradientTriggerObject, )
SCREWYOU2_HOOK_INIT(GradientTriggerObject, )

SCREWYOU2_HOOK(GravityEffectSprite, )
SCREWYOU2_HOOK_INIT(GravityEffectSprite, )

SCREWYOU2_HOOK(HardStreak, )
SCREWYOU2_HOOK_INIT(HardStreak, )

SCREWYOU2_HOOK(HSVLiveOverlay, GameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(HSVLiveOverlay, p0, p1)

SCREWYOU2_HOOK(HSVWidgetPopup, cocos2d::ccHSVValue hsv, HSVWidgetDelegate* delegate, gd::string title)
SCREWYOU2_HOOK_INIT(HSVWidgetPopup, hsv, delegate, title)

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(InfoAlertButton, gd::string title, gd::string desc, float spriteScale)
SCREWYOU2_HOOK_INIT(InfoAlertButton, title, desc, spriteScale)
#endif

SCREWYOU2_HOOK(InfoLayer, GJGameLevel* p0, GJUserScore* p1, GJLevelList* p2)
SCREWYOU2_HOOK_INIT(InfoLayer, p0, p1, p2)

SCREWYOU2_HOOK(ItemInfoPopup, int p0, UnlockType p1)
SCREWYOU2_HOOK_INIT(ItemInfoPopup, p0, p1)

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(KeybindingsLayer, )
SCREWYOU2_HOOK_INIT(KeybindingsLayer, )
#endif

SCREWYOU2_HOOK(KeyframeAnimTriggerObject, )
SCREWYOU2_HOOK_INIT(KeyframeAnimTriggerObject, )

SCREWYOU2_HOOK(KeyframeGameObject, )
SCREWYOU2_HOOK_INIT(KeyframeGameObject, )

SCREWYOU2_HOOK(LabelGameObject, )
SCREWYOU2_HOOK_INIT(LabelGameObject, )

SCREWYOU2_HOOK(LeaderboardsLayer, LeaderboardState p0)
SCREWYOU2_HOOK_INIT(LeaderboardsLayer, p0)

SCREWYOU2_HOOK(LevelAreaInnerLayer, bool returning)
SCREWYOU2_HOOK_INIT(LevelAreaInnerLayer, returning)

SCREWYOU2_HOOK(LevelAreaLayer, )
SCREWYOU2_HOOK_INIT(LevelAreaLayer, )

SCREWYOU2_HOOK(LevelBrowserLayer, GJSearchObject* p0)
SCREWYOU2_HOOK_INIT(LevelBrowserLayer, p0)

SCREWYOU2_HOOK(LevelCell, )
SCREWYOU2_HOOK_INIT(LevelCell, )

SCREWYOU2_HOOK(LevelEditorLayer, GJGameLevel* p0, bool p1)
SCREWYOU2_HOOK_INIT(LevelEditorLayer, p0, p1)

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(LevelFeatureLayer, int p0)
SCREWYOU2_HOOK_INIT(LevelFeatureLayer, p0)
#endif

SCREWYOU2_HOOK(LevelInfoLayer, GJGameLevel* level, bool challenge)
SCREWYOU2_HOOK_INIT(LevelInfoLayer, level, challenge)

SCREWYOU2_HOOK(LevelLeaderboard, GJGameLevel* p0, LevelLeaderboardType p1, LevelLeaderboardMode p2)
SCREWYOU2_HOOK_INIT(LevelLeaderboard, p0, p1, p2)

SCREWYOU2_HOOK(LevelListLayer, GJLevelList* p0)
SCREWYOU2_HOOK_INIT(LevelListLayer, p0)

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(LevelOptionsLayer, LevelSettingsObject* p0)
SCREWYOU2_HOOK_INIT(LevelOptionsLayer, p0)
#endif

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(LevelOptionsLayer2, LevelSettingsObject* p0)
SCREWYOU2_HOOK_INIT(LevelOptionsLayer2, p0)
#endif

SCREWYOU2_HOOK(LevelPage, GJGameLevel* p0)
SCREWYOU2_HOOK_INIT(LevelPage, p0)

SCREWYOU2_HOOK(LevelSearchLayer, int p0)
SCREWYOU2_HOOK_INIT(LevelSearchLayer, p0)

SCREWYOU2_HOOK(LevelSelectLayer, int page)
SCREWYOU2_HOOK_INIT(LevelSelectLayer, page)

SCREWYOU2_HOOK(LevelSettingsLayer, LevelSettingsObject* p0, LevelEditorLayer* p1)
SCREWYOU2_HOOK_INIT(LevelSettingsLayer, p0, p1)

SCREWYOU2_HOOK(LevelSettingsObject, )
SCREWYOU2_HOOK_INIT(LevelSettingsObject, )

SCREWYOU2_HOOK(LikeItemLayer, LikeItemType p0, int p1, int p2)
SCREWYOU2_HOOK_INIT(LikeItemLayer, p0, p1, p2)

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(ListButtonBar, cocos2d::CCArray* items, cocos2d::CCPoint position, int columns, int rows, float columnOffset, float rowOffset, float offset, float arrowOffset, int arrowType)
SCREWYOU2_HOOK_INIT(ListButtonBar, items, position, columns, rows, columnOffset, rowOffset, offset, arrowOffset, arrowType)
#endif

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(ListButtonPage, cocos2d::CCArray* items, cocos2d::CCPoint position, int columns, int rows, float columnOffset, float rowOffset, float offset)
SCREWYOU2_HOOK_INIT(ListButtonPage, items, position, columns, rows, columnOffset, rowOffset, offset)
#endif

SCREWYOU2_HOOK(LoadingCircle, )
SCREWYOU2_HOOK_INIT(LoadingCircle, )

SCREWYOU2_HOOK(LoadingLayer, bool p0)
SCREWYOU2_HOOK_INIT(LoadingLayer, p0)

SCREWYOU2_HOOK(LocalLevelManager, )
SCREWYOU2_HOOK_INIT(LocalLevelManager, )

SCREWYOU2_HOOK(MapPackCell, )
SCREWYOU2_HOOK_INIT(MapPackCell, )

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(MapSelectLayer, )
SCREWYOU2_HOOK_INIT(MapSelectLayer, )
#endif

SCREWYOU2_HOOK(MenuGameLayer, )
SCREWYOU2_HOOK_INIT(MenuGameLayer, )

SCREWYOU2_HOOK(MenuLayer, )
SCREWYOU2_HOOK_INIT(MenuLayer, )

SCREWYOU2_HOOK(MessagesProfilePage, bool p0)
SCREWYOU2_HOOK_INIT(MessagesProfilePage, p0)

SCREWYOU2_HOOK(MoreOptionsLayer, )
SCREWYOU2_HOOK_INIT(MoreOptionsLayer, )

SCREWYOU2_HOOK(MoreSearchLayer, )
SCREWYOU2_HOOK_INIT(MoreSearchLayer, )

SCREWYOU2_HOOK(MoreVideoOptionsLayer, )
SCREWYOU2_HOOK_INIT(MoreVideoOptionsLayer, )

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(MultiplayerLayer, )
SCREWYOU2_HOOK_INIT(MultiplayerLayer, )
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(MultiTriggerPopup, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(MultiTriggerPopup, p0, p1)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(MusicBrowser, int p0, GJSongType p1)
SCREWYOU2_HOOK_INIT(MusicBrowser, p0, p1)
#endif

SCREWYOU2_HOOK(MusicDownloadManager, )
SCREWYOU2_HOOK_INIT(MusicDownloadManager, )

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(NCSInfoLayer, CustomSongLayer* p0)
SCREWYOU2_HOOK_INIT(NCSInfoLayer, p0)
#endif

SCREWYOU2_HOOK(NewgroundsInfoLayer, )
SCREWYOU2_HOOK_INIT(NewgroundsInfoLayer, )

SCREWYOU2_HOOK(NumberInputLayer, )
SCREWYOU2_HOOK_INIT(NumberInputLayer, )

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(OBB2D, cocos2d::CCPoint center, float width, float height, float rotationAngle)
SCREWYOU2_HOOK_INIT(OBB2D, center, width, height, rotationAngle)
#endif

SCREWYOU2_HOOK(ObjectControlGameObject, )
SCREWYOU2_HOOK_INIT(ObjectControlGameObject, )

SCREWYOU2_HOOK(ObjectManager, )
SCREWYOU2_HOOK_INIT(ObjectManager, )

SCREWYOU2_HOOK(ObjectToolbox, )
SCREWYOU2_HOOK_INIT(ObjectToolbox, )

SCREWYOU2_HOOK(ParentalOptionsLayer, )
SCREWYOU2_HOOK_INIT(ParentalOptionsLayer, )

SCREWYOU2_HOOK(ParticleGameObject, )
SCREWYOU2_HOOK_INIT(ParticleGameObject, )

SCREWYOU2_HOOK(PlayerCheckpoint, )
SCREWYOU2_HOOK_INIT(PlayerCheckpoint, )

SCREWYOU2_HOOK(PlayerControlGameObject, )
SCREWYOU2_HOOK_INIT(PlayerControlGameObject, )

SCREWYOU2_HOOK(PlayerFireBoostSprite, )
SCREWYOU2_HOOK_INIT(PlayerFireBoostSprite, )

SCREWYOU2_HOOK(PlayerObject, int player, int ship, GJBaseGameLayer* gameLayer, cocos2d::CCLayer* layer, bool playLayer)
SCREWYOU2_HOOK_INIT(PlayerObject, player, ship, gameLayer, layer, playLayer)

SCREWYOU2_HOOK(PlayLayer, GJGameLevel* level, bool useReplay, bool dontCreateObjects)
SCREWYOU2_HOOK_INIT(PlayLayer, level, useReplay, dontCreateObjects)

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(PriceLabel, int p0)
SCREWYOU2_HOOK_INIT(PriceLabel, p0)
#endif

SCREWYOU2_HOOK(ProfilePage, int accountID, bool ownProfile)
SCREWYOU2_HOOK_INIT(ProfilePage, accountID, ownProfile)

SCREWYOU2_HOOK(PurchaseItemPopup, GJStoreItem* p0)
SCREWYOU2_HOOK_INIT(PurchaseItemPopup, p0)

SCREWYOU2_HOOK(RandTriggerGameObject, )
SCREWYOU2_HOOK_INIT(RandTriggerGameObject, )

SCREWYOU2_HOOK(RateDemonLayer, int p0)
SCREWYOU2_HOOK_INIT(RateDemonLayer, p0)

SCREWYOU2_HOOK(RateLevelLayer, int p0)
SCREWYOU2_HOOK_INIT(RateLevelLayer, p0)

SCREWYOU2_HOOK(RateStarsLayer, int p0, bool p1, bool p2)
SCREWYOU2_HOOK_INIT(RateStarsLayer, p0, p1, p2)

SCREWYOU2_HOOK(RewardsPage, )
SCREWYOU2_HOOK_INIT(RewardsPage, )

SCREWYOU2_HOOK(RewardUnlockLayer, int p0, RewardsPage* p1)
SCREWYOU2_HOOK_INIT(RewardUnlockLayer, p0, p1)

SCREWYOU2_HOOK(RotateGameplayGameObject, )
SCREWYOU2_HOOK_INIT(RotateGameplayGameObject, )

SCREWYOU2_HOOK(SearchButton, char const* p0, char const* p1, float p2, char const* p3)
SCREWYOU2_HOOK_INIT(SearchButton, p0, p1, p2, p3)

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SearchSFXPopup, gd::string p0)
SCREWYOU2_HOOK_INIT(SearchSFXPopup, p0)
#endif

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SecretGame01Layer, )
SCREWYOU2_HOOK_INIT(SecretGame01Layer, )
#endif

SCREWYOU2_HOOK(SecretLayer, )
SCREWYOU2_HOOK_INIT(SecretLayer, )

SCREWYOU2_HOOK(SecretLayer2, )
SCREWYOU2_HOOK_INIT(SecretLayer2, )

SCREWYOU2_HOOK(SecretLayer3, )
SCREWYOU2_HOOK_INIT(SecretLayer3, )

SCREWYOU2_HOOK(SecretLayer4, )
SCREWYOU2_HOOK_INIT(SecretLayer4, )

SCREWYOU2_HOOK(SecretLayer5, )
SCREWYOU2_HOOK_INIT(SecretLayer5, )

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SecretLayer6, )
SCREWYOU2_HOOK_INIT(SecretLayer6, )
#endif

SCREWYOU2_HOOK(SecretNumberLayer, )
SCREWYOU2_HOOK_INIT(SecretNumberLayer, )

SCREWYOU2_HOOK(SecretRewardsLayer, bool p0)
SCREWYOU2_HOOK_INIT(SecretRewardsLayer, p0)

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SelectArtLayer, SelectArtType p0, int p1)
SCREWYOU2_HOOK_INIT(SelectArtLayer, p0, p1)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SelectEventLayer, SetupEventLinkPopup* p0, gd::set<int>& p1)
SCREWYOU2_HOOK_INIT(SelectEventLayer, p0, p1)
#endif

SCREWYOU2_HOOK(SelectFontLayer, LevelEditorLayer* p0)
SCREWYOU2_HOOK_INIT(SelectFontLayer, p0)

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SelectListIconLayer, int p0)
SCREWYOU2_HOOK_INIT(SelectListIconLayer, p0)
#endif

SCREWYOU2_HOOK(SelectPremadeLayer, )
SCREWYOU2_HOOK_INIT(SelectPremadeLayer, )

SCREWYOU2_HOOK(SelectSettingLayer, SelectSettingType p0, int p1)
SCREWYOU2_HOOK_INIT(SelectSettingLayer, p0, p1)

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SelectSFXSortLayer, AudioSortType p0)
SCREWYOU2_HOOK_INIT(SelectSFXSortLayer, p0)
#endif

SCREWYOU2_HOOK(SequenceTriggerGameObject, )
SCREWYOU2_HOOK_INIT(SequenceTriggerGameObject, )

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetColorIDPopup, int p0)
SCREWYOU2_HOOK_INIT(SetColorIDPopup, p0)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetFolderPopup, int value, bool isCreated, gd::string title)
SCREWYOU2_HOOK_INIT(SetFolderPopup, value, isCreated, title)
#endif

SCREWYOU2_HOOK(SetGroupIDLayer, GameObject* obj, cocos2d::CCArray* objs)
SCREWYOU2_HOOK_INIT(SetGroupIDLayer, obj, objs)

SCREWYOU2_HOOK(SetIDPopup, int current, int begin, int end, gd::string title, gd::string button, bool p5, int p6, float p7, bool p8, bool p9)
SCREWYOU2_HOOK_INIT(SetIDPopup, current, begin, end, title, button, p5, p6, p7, p8, p9)

SCREWYOU2_HOOK(SetItemIDLayer, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetItemIDLayer, p0, p1)

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetLevelOrderPopup, int levelID, int order, int amount)
SCREWYOU2_HOOK_INIT(SetLevelOrderPopup, levelID, order, amount)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetTargetIDLayer, EffectGameObject* p0, cocos2d::CCArray* p1, gd::string p2, gd::string p3, int p4, int p5, int p6)
SCREWYOU2_HOOK_INIT(SetTargetIDLayer, p0, p1, p2, p3, p4, p5, p6)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetTextPopup, gd::string p0, gd::string p1, int p2, gd::string p3, gd::string p4, bool p5, float p6)
SCREWYOU2_HOOK_INIT(SetTextPopup, p0, p1, p2, p3, p4, p5, p6)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupAdvFollowEditPhysicsPopup, AdvancedFollowEditObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupAdvFollowEditPhysicsPopup, p0, p1)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupAdvFollowPopup, AdvancedFollowTriggerObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupAdvFollowPopup, p0, p1)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupAdvFollowRetargetPopup, AdvancedFollowEditObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupAdvFollowRetargetPopup, p0, p1)
#endif

SCREWYOU2_HOOK(SetupAnimationPopup, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupAnimationPopup, p0, p1)

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupAnimSettingsPopup, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupAnimSettingsPopup, p0, p1)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupAreaAnimTriggerPopup, EnterEffectObject* p0, cocos2d::CCArray* p1, int p2)
SCREWYOU2_HOOK_INIT(SetupAreaAnimTriggerPopup, p0, p1, p2)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupAreaFadeTriggerPopup, EnterEffectObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupAreaFadeTriggerPopup, p0, p1)
#endif

SCREWYOU2_HOOK(SetupAreaMoveTriggerPopup, EnterEffectObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupAreaMoveTriggerPopup, p0, p1)

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupAreaRotateTriggerPopup, EnterEffectObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupAreaRotateTriggerPopup, p0, p1)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupAreaTintTriggerPopup, EnterEffectObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupAreaTintTriggerPopup, p0, p1)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupAreaTransformTriggerPopup, EnterEffectObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupAreaTransformTriggerPopup, p0, p1)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupAreaTriggerPopup, EnterEffectObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupAreaTriggerPopup, p0, p1)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupArtSwitchPopup, ArtTriggerGameObject* p0, cocos2d::CCArray* p1, int p2)
SCREWYOU2_HOOK_INIT(SetupArtSwitchPopup, p0, p1, p2)
#endif

SCREWYOU2_HOOK(SetupAudioLineGuidePopup, AudioLineGuideGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupAudioLineGuidePopup, p0, p1)

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupBGSpeedTrigger, EffectGameObject* p0, cocos2d::CCArray* p1, int p2)
SCREWYOU2_HOOK_INIT(SetupBGSpeedTrigger, p0, p1, p2)
#endif

SCREWYOU2_HOOK(SetupCameraEdgePopup, CameraTriggerGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupCameraEdgePopup, p0, p1)

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupCameraGuidePopup, CameraTriggerGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupCameraGuidePopup, p0, p1)
#endif

SCREWYOU2_HOOK(SetupCameraModePopup, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupCameraModePopup, p0, p1)

SCREWYOU2_HOOK(SetupCameraOffsetTrigger, CameraTriggerGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupCameraOffsetTrigger, p0, p1)

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupCameraRotatePopup, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupCameraRotatePopup, p0, p1)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupCameraRotatePopup2, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupCameraRotatePopup2, p0, p1)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupCheckpointPopup, CheckpointGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupCheckpointPopup, p0, p1)
#endif

SCREWYOU2_HOOK(SetupCoinLayer, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupCoinLayer, p0, p1)

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupCollisionStateTriggerPopup, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupCollisionStateTriggerPopup, p0, p1)
#endif

SCREWYOU2_HOOK(SetupCollisionTriggerPopup, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupCollisionTriggerPopup, p0, p1)

SCREWYOU2_HOOK(SetupCountTriggerPopup, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupCountTriggerPopup, p0, p1)

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupDashRingPopup, DashRingObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupDashRingPopup, p0, p1)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupEndPopup, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupEndPopup, p0, p1)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupEnterEffectPopup, EnterEffectObject* p0, cocos2d::CCArray* p1, int p2)
SCREWYOU2_HOOK_INIT(SetupEnterEffectPopup, p0, p1, p2)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupEnterTriggerPopup, EnterEffectObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupEnterTriggerPopup, p0, p1)
#endif

SCREWYOU2_HOOK(SetupEventLinkPopup, EventLinkTrigger* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupEventLinkPopup, p0, p1)

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupForceBlockPopup, ForceBlockGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupForceBlockPopup, p0, p1)
#endif

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupGameplayOffsetPopup, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupGameplayOffsetPopup, p0, p1)
#endif

SCREWYOU2_HOOK(SetupGradientPopup, GradientTriggerObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupGradientPopup, p0, p1)

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupGravityModPopup, EffectGameObject* p0, cocos2d::CCArray* p1, bool p2)
SCREWYOU2_HOOK_INIT(SetupGravityModPopup, p0, p1, p2)
#endif

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupGravityTriggerPopup, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupGravityTriggerPopup, p0, p1)
#endif

SCREWYOU2_HOOK(SetupInstantCollisionTriggerPopup, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupInstantCollisionTriggerPopup, p0, p1)

SCREWYOU2_HOOK(SetupInstantCountPopup, CountTriggerGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupInstantCountPopup, p0, p1)

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupInteractObjectPopup, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupInteractObjectPopup, p0, p1)
#endif

SCREWYOU2_HOOK(SetupItemCompareTriggerPopup, ItemTriggerGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupItemCompareTriggerPopup, p0, p1)

SCREWYOU2_HOOK(SetupItemEditTriggerPopup, ItemTriggerGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupItemEditTriggerPopup, p0, p1)

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupKeyframeAnimPopup, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupKeyframeAnimPopup, p0, p1)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupKeyframePopup, KeyframeGameObject* p0, cocos2d::CCArray* p1, LevelEditorLayer* p2)
SCREWYOU2_HOOK_INIT(SetupKeyframePopup, p0, p1, p2)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupMGTrigger, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupMGTrigger, p0, p1)
#endif

SCREWYOU2_HOOK(SetupMoveCommandPopup, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupMoveCommandPopup, p0, p1)

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupObjectControlPopup, ObjectControlGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupObjectControlPopup, p0, p1)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupObjectOptions2Popup, GameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupObjectOptions2Popup, p0, p1)
#endif

SCREWYOU2_HOOK(SetupObjectOptionsPopup, GameObject* p0, cocos2d::CCArray* p1, SetGroupIDLayer* p2)
SCREWYOU2_HOOK_INIT(SetupObjectOptionsPopup, p0, p1, p2)

SCREWYOU2_HOOK(SetupObjectTogglePopup, EffectGameObject* p0, cocos2d::CCArray* p1, bool p2)
SCREWYOU2_HOOK_INIT(SetupObjectTogglePopup, p0, p1, p2)

SCREWYOU2_HOOK(SetupOpacityPopup, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupOpacityPopup, p0, p1)

SCREWYOU2_HOOK(SetupOptionsTriggerPopup, GameOptionsTrigger* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupOptionsTriggerPopup, p0, p1)

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupPersistentItemTriggerPopup, ItemTriggerGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupPersistentItemTriggerPopup, p0, p1)
#endif

SCREWYOU2_HOOK(SetupPickupTriggerPopup, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupPickupTriggerPopup, p0, p1)

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupPlatformerEndPopup, EndTriggerGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupPlatformerEndPopup, p0, p1)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupPlayerControlPopup, PlayerControlGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupPlayerControlPopup, p0, p1)
#endif

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupPortalPopup, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupPortalPopup, p0, p1)
#endif

SCREWYOU2_HOOK(SetupPulsePopup, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupPulsePopup, p0, p1)

SCREWYOU2_HOOK(SetupRandAdvTriggerPopup, RandTriggerGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupRandAdvTriggerPopup, p0, p1)

SCREWYOU2_HOOK(SetupRandTriggerPopup, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupRandTriggerPopup, p0, p1)

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupResetTriggerPopup, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupResetTriggerPopup, p0, p1)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupReverbPopup, SFXTriggerGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupReverbPopup, p0, p1)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupRotateCommandPopup, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupRotateCommandPopup, p0, p1)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupRotateGameplayPopup, RotateGameplayGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupRotateGameplayPopup, p0, p1)
#endif

SCREWYOU2_HOOK(SetupRotatePopup, EnhancedGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupRotatePopup, p0, p1)

SCREWYOU2_HOOK(SetupSequenceTriggerPopup, SequenceTriggerGameObject* p0)
SCREWYOU2_HOOK_INIT(SetupSequenceTriggerPopup, p0)

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupSFXEditPopup, SFXTriggerGameObject* p0, cocos2d::CCArray* p1, bool p2)
SCREWYOU2_HOOK_INIT(SetupSFXEditPopup, p0, p1, p2)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupSFXPopup, SFXTriggerGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupSFXPopup, p0, p1)
#endif

#ifdef defined GEODE_IS_WINDOWS
SCREWYOU2_HOOK(SetupShaderEffectPopup, EffectGameObject* p0, cocos2d::CCArray* p1, int p2)
SCREWYOU2_HOOK_INIT(SetupShaderEffectPopup, p0, p1, p2)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupShakePopup, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupShakePopup, p0, p1)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupSmartBlockLayer, SmartGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupSmartBlockLayer, p0, p1)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupSmartTemplateLayer, GJSmartTemplate* p0)
SCREWYOU2_HOOK_INIT(SetupSmartTemplateLayer, p0)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupSongTriggerPopup, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupSongTriggerPopup, p0, p1)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupSpawnParticlePopup, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupSpawnParticlePopup, p0, p1)
#endif

SCREWYOU2_HOOK(SetupSpawnPopup, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupSpawnPopup, p0, p1)

SCREWYOU2_HOOK(SetupStaticCameraPopup, CameraTriggerGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupStaticCameraPopup, p0, p1)

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupStopTriggerPopup, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupStopTriggerPopup, p0, p1)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupTeleportPopup, TeleportPortalObject* p0, cocos2d::CCArray* p1, int p2, bool p3)
SCREWYOU2_HOOK_INIT(SetupTeleportPopup, p0, p1, p2, p3)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupTimerControlTriggerPopup, TimerTriggerGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupTimerControlTriggerPopup, p0, p1)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupTimerEventTriggerPopup, TimerTriggerGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupTimerEventTriggerPopup, p0, p1)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupTimerTriggerPopup, TimerTriggerGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupTimerTriggerPopup, p0, p1)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupTimeWarpPopup, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupTimeWarpPopup, p0, p1)
#endif

SCREWYOU2_HOOK(SetupTouchTogglePopup, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupTouchTogglePopup, p0, p1)

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SetupTransformPopup, TransformTriggerGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupTransformPopup, p0, p1)
#endif

SCREWYOU2_HOOK(SetupTriggerPopup, EffectGameObject* trigger, cocos2d::CCArray* triggers, float width, float height, int background)
SCREWYOU2_HOOK_INIT(SetupTriggerPopup, trigger, triggers, width, height, background)

SCREWYOU2_HOOK(SetupZoomTriggerPopup, EffectGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(SetupZoomTriggerPopup, p0, p1)

SCREWYOU2_HOOK(SFXBrowser, int p0)
SCREWYOU2_HOOK_INIT(SFXBrowser, p0)

SCREWYOU2_HOOK(ShaderLayer, )
SCREWYOU2_HOOK_INIT(ShaderLayer, )

SCREWYOU2_HOOK(ShardsPage, )
SCREWYOU2_HOOK_INIT(ShardsPage, )

SCREWYOU2_HOOK(ShareCommentLayer, gd::string title, int charLimit, CommentType type, int ID, gd::string desc)
SCREWYOU2_HOOK_INIT(ShareCommentLayer, title, charLimit, type, ID, desc)

SCREWYOU2_HOOK(ShareLevelLayer, GJGameLevel* level)
SCREWYOU2_HOOK_INIT(ShareLevelLayer, level)

SCREWYOU2_HOOK(ShareLevelSettingsLayer, GJGameLevel* p0)
SCREWYOU2_HOOK_INIT(ShareLevelSettingsLayer, p0)

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(ShareListLayer, GJLevelList* p0)
SCREWYOU2_HOOK_INIT(ShareListLayer, p0)
#endif

SCREWYOU2_HOOK(SimplePlayer, int p0)
SCREWYOU2_HOOK_INIT(SimplePlayer, p0)

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SlideInLayer, )
SCREWYOU2_HOOK_INIT(SlideInLayer, )
#endif

SCREWYOU2_HOOK(Slider, cocos2d::CCNode* p0, cocos2d::SEL_MenuHandler p1, char const* p2, char const* p3, char const* p4, char const* p5, float p6)
SCREWYOU2_HOOK_INIT(Slider, p0, p1, p2, p3, p4, p5, p6)

SCREWYOU2_HOOK(SmartTemplateCell, )
SCREWYOU2_HOOK_INIT(SmartTemplateCell, )

SCREWYOU2_HOOK(SongCell, )
SCREWYOU2_HOOK_INIT(SongCell, )

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SongInfoLayer, gd::string p0, gd::string p1, gd::string p2, gd::string p3, gd::string p4, gd::string p5, int p6, gd::string p7, int p8)
SCREWYOU2_HOOK_INIT(SongInfoLayer, p0, p1, p2, p3, p4, p5, p6, p7, p8)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_IOS
SCREWYOU2_HOOK(SongInfoObject, int songID, gd::string songName, gd::string artistName, int artistID, float filesize, gd::string youtubeVideo, gd::string youtubeChannel, gd::string url, int nongType, gd::string extraArtistIDs, bool isNew, int libraryOrder, int priority)
SCREWYOU2_HOOK_INIT(SongInfoObject, songID, songName, artistName, artistID, filesize, youtubeVideo, youtubeChannel, url, nongType, extraArtistIDs, isNew, libraryOrder, priority)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(SongOptionsLayer, CustomSongDelegate* p0)
SCREWYOU2_HOOK_INIT(SongOptionsLayer, p0)
#endif

SCREWYOU2_HOOK(SongSelectNode, int p0, bool p1, LevelSettingsObject* p2, SongSelectType p3, cocos2d::CCPoint p4, cocos2d::CCNode* p5, cocos2d::CCMenu* p6, bool p7)
SCREWYOU2_HOOK_INIT(SongSelectNode, p0, p1, p2, p3, p4, p5, p6, p7)

SCREWYOU2_HOOK(SpawnParticleGameObject, )
SCREWYOU2_HOOK_INIT(SpawnParticleGameObject, )

SCREWYOU2_HOOK(SpawnTriggerGameObject, )
SCREWYOU2_HOOK_INIT(SpawnTriggerGameObject, )

SCREWYOU2_HOOK(StarInfoPopup, int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, bool p9)
SCREWYOU2_HOOK_INIT(StarInfoPopup, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9)

SCREWYOU2_HOOK(StartPosObject, )
SCREWYOU2_HOOK_INIT(StartPosObject, )

SCREWYOU2_HOOK(TextAlertPopup, gd::string text, float delay, float scale, int opacity, gd::string font)
SCREWYOU2_HOOK_INIT(TextAlertPopup, text, delay, scale, opacity, font)

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(TextArea, gd::string str, char const* font, float scale, float width, cocos2d::CCPoint anchor, float lineHeight, bool disableColor)
SCREWYOU2_HOOK_INIT(TextArea, str, font, scale, width, anchor, lineHeight, disableColor)
#endif

SCREWYOU2_HOOK(TopArtistsLayer, )
SCREWYOU2_HOOK_INIT(TopArtistsLayer, )

SCREWYOU2_HOOK(TOSPopup, )
SCREWYOU2_HOOK_INIT(TOSPopup, )

SCREWYOU2_HOOK(TutorialLayer, )
SCREWYOU2_HOOK_INIT(TutorialLayer, )

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(TutorialPopup, gd::string p0)
SCREWYOU2_HOOK_INIT(TutorialPopup, p0)
#endif

SCREWYOU2_HOOK(UILayer, GJBaseGameLayer* p0)
SCREWYOU2_HOOK_INIT(UILayer, p0)

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(UIObjectSettingsPopup, UISettingsGameObject* p0, cocos2d::CCArray* p1)
SCREWYOU2_HOOK_INIT(UIObjectSettingsPopup, p0, p1)
#endif

SCREWYOU2_HOOK(UIOptionsLayer, bool p0)
SCREWYOU2_HOOK_INIT(UIOptionsLayer, p0)

SCREWYOU2_HOOK(UIPOptionsLayer, )
SCREWYOU2_HOOK_INIT(UIPOptionsLayer, )

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(UISaveLoadLayer, UIOptionsLayer* p0)
SCREWYOU2_HOOK_INIT(UISaveLoadLayer, p0)
#endif

SCREWYOU2_HOOK(UISettingsGameObject, )
SCREWYOU2_HOOK_INIT(UISettingsGameObject, )

SCREWYOU2_HOOK(UpdateAccountSettingsPopup, GJAccountSettingsLayer* p0, int p1, int p2, int p3, gd::string p4, gd::string p5, gd::string p6)
SCREWYOU2_HOOK_INIT(UpdateAccountSettingsPopup, p0, p1, p2, p3, p4, p5, p6)

SCREWYOU2_HOOK(UploadActionPopup, UploadPopupDelegate* delegate, gd::string str)
SCREWYOU2_HOOK_INIT(UploadActionPopup, delegate, str)

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(UploadListPopup, GJLevelList* p0)
SCREWYOU2_HOOK_INIT(UploadListPopup, p0)
#endif

#ifdef defined GEODE_IS_WINDOWS || defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(UploadPopup, GJGameLevel* p0)
SCREWYOU2_HOOK_INIT(UploadPopup, p0)
#endif

SCREWYOU2_HOOK(URLCell, )
SCREWYOU2_HOOK_INIT(URLCell, )

SCREWYOU2_HOOK(VideoOptionsLayer, )
SCREWYOU2_HOOK_INIT(VideoOptionsLayer, )

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(WorldLevelPage, GJGameLevel* p0, GJWorldNode* p1)
SCREWYOU2_HOOK_INIT(WorldLevelPage, p0, p1)
#endif

#ifdef defined GEODE_IS_ANDROID || defined GEODE_IS_MACOS
SCREWYOU2_HOOK(WorldSelectLayer, int p0)
SCREWYOU2_HOOK_INIT(WorldSelectLayer, p0)
#endif
