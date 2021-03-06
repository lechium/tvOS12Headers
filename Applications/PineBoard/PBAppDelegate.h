//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "BKSTerminationAssertionObserver.h"
#import "LSApplicationWorkspaceObserverProtocol.h"
#import "PBLanguageChangeObserverDelegate.h"
#import "PBMediaRemoteObserverDelegate.h"
#import "UIApplicationDelegate.h"
#import "UISApplicationSupportServiceDelegate.h"

@class ASDRepairApplicationRequest, BBDataProviderConnection, NSMutableOrderedSet, NSObject<OS_dispatch_queue>, NSString, PBLanguageChangeObserver, PBSUserActivityTrigger, PBSafeAreaWindow, PBSerialNumberWindow, PBUserNotificationHandler, TVPAudioRoutingController, TVSBackgroundTask, UISApplicationSupportService, UIWindow;

@interface PBAppDelegate : UIResponder <BKSTerminationAssertionObserver, LSApplicationWorkspaceObserverProtocol, PBMediaRemoteObserverDelegate, PBLanguageChangeObserverDelegate, UISApplicationSupportServiceDelegate, UIApplicationDelegate>
{
    PBUserNotificationHandler *_userNotificationHandler;	// 8 = 0x8
    PBSafeAreaWindow *_safeAreaWindow;	// 16 = 0x10
    PBSerialNumberWindow *_serialNumberWindow;	// 24 = 0x18
    PBSUserActivityTrigger *_musicNowPlayingTrigger;	// 32 = 0x20
    _Bool _tooHot;	// 40 = 0x28
    _Bool _awaitingFirstAppLaunch;	// 41 = 0x29
    BBDataProviderConnection *_bulletinBoardConnection;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_bulletinBoardQueue;	// 56 = 0x38
    UISApplicationSupportService *_uiAppSupportService;	// 64 = 0x40
    _Bool _shouldDisableIdleTimer;	// 72 = 0x48
    _Bool _appLaunchDisabled;	// 73 = 0x49
    _Bool _awaitingSiriOptInOfferResponse;	// 74 = 0x4a
    _Bool __kioskRelaunchDisabled;	// 75 = 0x4b
    TVSBackgroundTask *_programmingGuideBackgroundTask;	// 80 = 0x50
    id _buddyPrefsObservingToken;	// 88 = 0x58
    NSMutableOrderedSet *_mutableDeepLinkingAppHistory;	// 96 = 0x60
    PBLanguageChangeObserver *_languageChangeObserver;	// 104 = 0x68
    TVPAudioRoutingController *_audioRoutingController;	// 112 = 0x70
    ASDRepairApplicationRequest *_inFlightAppRepairRequest;	// 120 = 0x78
}

+ (id)sharedApplicationDelegate;	// IMP=0x00000001000da5c8
@property(nonatomic) _Bool _kioskRelaunchDisabled; // @synthesize _kioskRelaunchDisabled=__kioskRelaunchDisabled;
@property(retain, nonatomic) ASDRepairApplicationRequest *inFlightAppRepairRequest; // @synthesize inFlightAppRepairRequest=_inFlightAppRepairRequest;
@property(nonatomic) _Bool awaitingSiriOptInOfferResponse; // @synthesize awaitingSiriOptInOfferResponse=_awaitingSiriOptInOfferResponse;
@property(nonatomic) _Bool appLaunchDisabled; // @synthesize appLaunchDisabled=_appLaunchDisabled;
@property(retain, nonatomic) TVPAudioRoutingController *audioRoutingController; // @synthesize audioRoutingController=_audioRoutingController;
@property(nonatomic) _Bool shouldDisableIdleTimer; // @synthesize shouldDisableIdleTimer=_shouldDisableIdleTimer;
@property(retain, nonatomic) PBLanguageChangeObserver *languageChangeObserver; // @synthesize languageChangeObserver=_languageChangeObserver;
@property(readonly, nonatomic) NSMutableOrderedSet *mutableDeepLinkingAppHistory; // @synthesize mutableDeepLinkingAppHistory=_mutableDeepLinkingAppHistory;
@property(retain, nonatomic) id buddyPrefsObservingToken; // @synthesize buddyPrefsObservingToken=_buddyPrefsObservingToken;
@property(retain, nonatomic) TVSBackgroundTask *programmingGuideBackgroundTask; // @synthesize programmingGuideBackgroundTask=_programmingGuideBackgroundTask;
- (void).cxx_destruct;	// IMP=0x00000001000eb350
- (void)applicationIconDidChange:(id)arg1;	// IMP=0x00000001000eaf88
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x00000001000eacfc
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x00000001000eac88
- (void)noteTerminationAssertionEfficacyChangedTo:(unsigned long long)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x00000001000eaab8
- (_Bool)_applicationForPIDIsPlaying:(int)arg1;	// IMP=0x00000001000eaa34
- (void)_updateAirPlayUIActiveState;	// IMP=0x00000001000ea8c8
- (_Bool)_requestSleepForReason:(id)arg1;	// IMP=0x00000001000ea744
- (_Bool)_requestWakeForReason:(id)arg1;	// IMP=0x00000001000ea5c0
- (void)stopSiriWithContext:(id)arg1;	// IMP=0x00000001000ea410
- (void)startSiriWithContext:(id)arg1;	// IMP=0x00000001000ea1d4
- (void)activateSiriWithContext:(id)arg1;	// IMP=0x00000001000e9f98
- (void)_setLateNightModeEnabled:(_Bool)arg1;	// IMP=0x00000001000e9ee4
- (void)_handleDisableLateNightModeNotification:(id)arg1;	// IMP=0x00000001000e9ec4
- (void)_handleEnableLateNightModeNotification:(id)arg1;	// IMP=0x00000001000e9ea4
- (void)_performObliterationIfNeeded;	// IMP=0x00000001000e98bc
- (_Bool)_wakeDeviceForSiriInteractionWithContext:(id)arg1;	// IMP=0x00000001000e9734
- (void)_prepareForDeviceWake;	// IMP=0x00000001000e9670
- (void)_prepareForDeviceSleep;	// IMP=0x00000001000e9650
- (void)_setConstantAudioOutputEnabled:(_Bool)arg1;	// IMP=0x00000001000e95ec
- (void)_updateConstantAudioOutput;	// IMP=0x00000001000e9518
- (void)_updateEventMaskingWindow;	// IMP=0x00000001000e9478
- (void)_displayDialogForPermissionRequest:(id)arg1 fromResponder:(id)arg2;	// IMP=0x00000001000e8f38
- (_Bool)handlePermissionRequest:(id)arg1;	// IMP=0x00000001000e8c90
- (_Bool)_keyboardFocusedInApp:(id)arg1;	// IMP=0x00000001000e8bb4
- (_Bool)_shouldShowSiri;	// IMP=0x00000001000e8894
- (_Bool)_shouldShowTVBar;	// IMP=0x00000001000e87d4
- (void)_setupWebinspector;	// IMP=0x00000001000e8774
- (void)_startObservingPurpleBuddyPrefs;	// IMP=0x00000001000e869c
- (_Bool)_shouldEnableNavigationSoundsForBundleIdentifier:(id)arg1 context:(id)arg2;	// IMP=0x00000001000e85b0
- (void)_resumeActivity;	// IMP=0x00000001000e84b4
- (void)_stopAllActivity;	// IMP=0x00000001000e82d0
- (void)_pausePlayback;	// IMP=0x00000001000e82b0
- (void)_handleThermalNotification:(id)arg1;	// IMP=0x00000001000e7fc0
- (_Bool)_shouldPresentSystemNowPlayingForReason:(unsigned long long)arg1;	// IMP=0x00000001000e7e58
- (void)_handleMusicNowPlayingTrigger:(id)arg1;	// IMP=0x00000001000e7d50
- (void)_setIdleTimerDisabled:(_Bool)arg1;	// IMP=0x00000001000e7d28
- (void)_loadBundles;	// IMP=0x00000001000e7cdc
- (void)_configureAskPermission;	// IMP=0x00000001000e7bc4
- (void)_presentSiriOptInDialogWithViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000e78b4
- (_Bool)_presentTVButtonBehaviorAlert;	// IMP=0x00000001000e76a0
- (_Bool)_suggestUserEnableDictation;	// IMP=0x00000001000e7368
- (_Bool)_suggestUserEnableAssistantAndDictation;	// IMP=0x00000001000e7158
- (void)_launchAppSwitcher;	// IMP=0x00000001000e6f24
- (void)_launchTVSettingsWithOpenURL:(id)arg1;	// IMP=0x00000001000e6dec
- (_Bool)_launchConferenceRoomDisplayAppWithReason:(unsigned long long)arg1;	// IMP=0x00000001000e6d80
- (void)_launchPurpleBuddy;	// IMP=0x00000001000e6bfc
- (_Bool)_launchTVWatchList;	// IMP=0x00000001000e6794
- (_Bool)_launchTVSearch;	// IMP=0x00000001000e65fc
- (void)_ensureTVAirPlayRunning;	// IMP=0x00000001000e6460
- (void)_deactivateApplicationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000e6304
- (void)_deactivateFocusedAppWithOptions:(id)arg1;	// IMP=0x00000001000e608c
- (void)handleFocusedAppRequestDeactivation;	// IMP=0x00000001000e5fac
- (void)presentNowPlayingWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000e5ef4
- (void)presentSystemRoutingUIWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000e5db4
- (void)launchKioskAppFromSetup;	// IMP=0x00000001000e528c
- (_Bool)_launchKioskAppWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000e5074
- (void)launchKioskAppWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e4f74
- (void)launchKioskApp;	// IMP=0x00000001000e4f54
- (void)enableKioskRelaunchForPPT;	// IMP=0x00000001000e4f44
- (void)disableKioskRelaunchForPPT;	// IMP=0x00000001000e4f30
- (void)_updateNowPlayingTrigger;	// IMP=0x00000001000e4d10
- (void)_sendActionOrShowUnconfiguredAlertForAction:(long long)arg1;	// IMP=0x00000001000e4840
- (void)_startBulletinBoardServer;	// IMP=0x00000001000e474c
- (void)_handleFairplayLaunchFailureForApplication:(id)arg1;	// IMP=0x00000001000e40c4
- (void)_handleStoreAccountChangedNotification;	// IMP=0x00000001000e3e38
- (void)_resetProgrammingGuideRefreshTaskWithTimeIntervalInSeconds:(double)arg1;	// IMP=0x00000001000e3d00
- (void)_updateProgrammingGuide;	// IMP=0x00000001000e3b58
- (void)_updateWhatsNewCheckTimeInterval;	// IMP=0x00000001000e3a08
- (void)_startStoreURLBagMonitoring;	// IMP=0x00000001000e37b0
- (void)_startSoftwareUpdateService;	// IMP=0x00000001000e3764
- (void)_handleProgrammingGuideDidUpdateNotification;	// IMP=0x00000001000e3680
- (void)_handleStoreURLBagDidLoadNotification;	// IMP=0x00000001000e35ac
- (void)_kickoffAppDepotReload;	// IMP=0x00000001000e3510
- (void)appTransitionDidCompleteForContext:(id)arg1;	// IMP=0x00000001000e3168
- (void)appTransitionWillBeginForContext:(id)arg1;	// IMP=0x00000001000e3034
- (void)observer:(id)arg1 didObserveLanguageChange:(_Bool)arg2 localeChange:(_Bool)arg3 source:(long long)arg4;	// IMP=0x00000001000e2c9c
- (void)_setupLanguageChangeObserving;	// IMP=0x00000001000e2bc4
- (void)mediaRemoteObserverNowPlayingInfoDidChange:(id)arg1 nowPlayingInfo:(id)arg2;	// IMP=0x00000001000e2b14
- (void)mediaRemoteObserverNowPlayingAppDidChange:(id)arg1;	// IMP=0x00000001000e29b8
- (void)mediaRemoteObserverIsPlayingDidChange:(id)arg1;	// IMP=0x00000001000e2784
- (_Bool)mediaRemoteObserverShouldShowTrackChangeBulletin:(id)arg1;	// IMP=0x00000001000e25dc
- (_Bool)_wouldExpectPlayPauseLongPressShouldPresentNowPlayingRoutingUI;	// IMP=0x00000001000e2458
- (_Bool)_wouldExpectPlayPauseButtonUpShouldPause;	// IMP=0x00000001000e241c
- (_Bool)_wouldExpectPlayPauseButtonDownShouldPause;	// IMP=0x00000001000e23e8
- (_Bool)_wouldExpectPlayPauseButtonShouldPause:(_Bool *)arg1;	// IMP=0x00000001000e2260
- (void)handleDirectionalTapEvent:(id)arg1;	// IMP=0x00000001000e20ec
- (void)handleExposeAllTapEvent;	// IMP=0x00000001000e2014
- (void)handleTVLongPressEvent:(id)arg1;	// IMP=0x00000001000e1d80
- (void)handleTVTripleTapEvent;	// IMP=0x00000001000e1c2c
- (void)handleTVDoubleTapEvent;	// IMP=0x00000001000e1adc
- (void)handleTVTapEventAsThirdTapEventInAppSwitcher;	// IMP=0x00000001000e19d0
- (void)handleTVTapEvent;	// IMP=0x00000001000e0bd0
- (void)handlePowerOffTapEvent;	// IMP=0x00000001000e0aec
- (void)handlePowerOnTapEvent;	// IMP=0x00000001000e0a08
- (void)handlePowerToggleTapEvent;	// IMP=0x00000001000e08d0
- (void)handleVolumeDownLongPressEvent:(id)arg1;	// IMP=0x00000001000e0720
- (void)handleVolumeUpLongPressEvent:(id)arg1;	// IMP=0x00000001000e0570
- (void)handlePlayPauseLongPressEvent:(id)arg1;	// IMP=0x00000001000e03d0
- (void)handleFastForwardLongPressEvent:(id)arg1;	// IMP=0x00000001000e029c
- (void)handleRewindLongPressEvent:(id)arg1;	// IMP=0x00000001000e0168
- (void)handleSkipBackwardsRepeatingPressEvent:(id)arg1;	// IMP=0x00000001000e0068
- (void)handleSkipForwardsRepeatingPressEvent:(id)arg1;	// IMP=0x00000001000dff68
- (void)_handleSkipGestureRecognizer:(id)arg1 withCommand:(unsigned int)arg2 interval:(double)arg3;	// IMP=0x00000001000dfe88
- (void)handlePreviousTrackTapEvent;	// IMP=0x00000001000dfdac
- (void)handleNextTrackTapEvent;	// IMP=0x00000001000dfcd0
- (void)handleFastForwardTapEvent;	// IMP=0x00000001000dfbc8
- (void)handleRewindTapEvent;	// IMP=0x00000001000dfac0
- (void)_changePlaybackRateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000df96c
- (void)handleStopTapEvent;	// IMP=0x00000001000df890
- (void)handlePauseTapEvent;	// IMP=0x00000001000df7b4
- (void)handlePlayTapEvent;	// IMP=0x00000001000df6d8
- (void)handlePlayPauseTapEvent;	// IMP=0x00000001000df5e8
- (_Bool)shouldTogglePlayPauseOnButtonUp;	// IMP=0x00000001000df4ec
- (_Bool)shouldTogglePlayPauseOnButtonDown;	// IMP=0x00000001000df3f0
- (void)_sendMediaRemoteCommand:(unsigned int)arg1;	// IMP=0x00000001000df3d0
- (void)_sendMediaRemoteCommand:(unsigned int)arg1 withOptions:(id)arg2;	// IMP=0x00000001000df148
- (_Bool)_shouldSendMediaRemoteCommand:(unsigned int)arg1;	// IMP=0x00000001000dee98
- (void)handleMicrophoneButtonDownEvent:(id)arg1;	// IMP=0x00000001000ded88
- (void)handleMicrophoneLongPressEvent:(id)arg1;	// IMP=0x00000001000debb4
- (void)handleMicrophoneTapEvent:(id)arg1;	// IMP=0x00000001000dea38
- (_Bool)handleUnhandledMenuEvent;	// IMP=0x00000001000de7e0
- (void)_updateTripleTapMenu;	// IMP=0x00000001000de700
- (void)handleQuadrupleMenuTapEvent;	// IMP=0x00000001000de610
- (void)handleMenuLongPressEvent:(id)arg1;	// IMP=0x00000001000de210
- (void)handleACHomeSingleTapEvent;	// IMP=0x00000001000de134
- (void)handleMenuSingleTapEvent;	// IMP=0x00000001000de058
- (_Bool)_handleMenuOrACHomeSingleTapEventWithYesForMenuNoForACHome:(_Bool)arg1;	// IMP=0x00000001000ddd38
- (void)handleMenuDoubleTapEvent;	// IMP=0x00000001000ddc7c
- (void)handleMenuTripleTapEvent;	// IMP=0x00000001000dda90
- (void)_handleAppStateDidChange;	// IMP=0x00000001000dd70c
- (void)_registerProcessManagerNotificationHandlers;	// IMP=0x00000001000dd0c4
- (void)_startSteadyStateServices;	// IMP=0x00000001000dcf20
- (void)_handleProcessDidActivate:(id)arg1 suspended:(_Bool)arg2;	// IMP=0x00000001000dce50
- (void)_handleProcessWillActivate:(id)arg1 suspended:(_Bool)arg2 withContext:(id)arg3;	// IMP=0x00000001000dcd44
- (void)_handleProcessDidExit:(id)arg1 applicationProcess:(id)arg2;	// IMP=0x00000001000dc640
- (void)_handlePineBoardPrefsDidChange;	// IMP=0x00000001000dc548
- (void)requestPasscodeUnlockUIForClient:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000dc524
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x00000001000dc32c
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x00000001000daad0
- (void)tvs_bindAccessibilityMenuOptionsBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;	// IMP=0x00000001000da9c8
- (id)AccessibilityMenuOptionsBinding;	// IMP=0x00000001000da974
@property(readonly, nonatomic) PBSUserActivityTrigger *musicNowPlayingTrigger;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000da74c
- (void)dealloc;	// IMP=0x00000001000da6a8
- (id)init;	// IMP=0x00000001000da624

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

