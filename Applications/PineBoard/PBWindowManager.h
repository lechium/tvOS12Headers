//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBNavigationControllerDelegate.h"
#import "PBSDisplayStateObserver.h"

@class FBDisplayLayoutElement, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_source>, NSString, PBOSUpdateWindow, PBRemoteBulletinViewController, PBWindow, TVSUIBlackScreenRecoveryIterator, UIView, UIViewController, _PBWindowManagerAppTransitionHelper;

@interface PBWindowManager : NSObject <PBNavigationControllerDelegate, PBSDisplayStateObserver>
{
    _Bool _hasScheduledPresentDialog;	// 8 = 0x8
    _Bool _hasScheduledPresentBulletin;	// 9 = 0x9
    _Bool _siriIsFullscreen;	// 10 = 0xa
    _Bool _shouldAnimateCRDInstructionsHUD;	// 11 = 0xb
    _Bool _presentingAirPlayWindow;	// 12 = 0xc
    _Bool _useSnapshotForSiri;	// 13 = 0xd
    _Bool _siriAssertionCheckedOut;	// 14 = 0xe
    _Bool _dialogAssertionCheckedOut;	// 15 = 0xf
    PBRemoteBulletinViewController *_presentedBulletinViewController;	// 16 = 0x10
    PBOSUpdateWindow *_softwareUpdateWindow;	// 24 = 0x18
    PBWindow *_hotBlackWindow;	// 32 = 0x20
    PBWindow *_criticalAlertWindow;	// 40 = 0x28
    PBWindow *_eventMaskingWindow;	// 48 = 0x30
    PBWindow *_airPlayWindow;	// 56 = 0x38
    PBWindow *_bulletinWindow;	// 64 = 0x40
    PBWindow *_playbackLaunchShroudWindow;	// 72 = 0x48
    PBWindow *_dialogWindow;	// 80 = 0x50
    PBWindow *_siriWindow;	// 88 = 0x58
    PBWindow *_routingWindow;	// 96 = 0x60
    PBWindow *_nowPlayingWindow;	// 104 = 0x68
    PBWindow *_restrictionPINWindow;	// 112 = 0x70
    PBWindow *_screenSaverWindow;	// 120 = 0x78
    PBWindow *_appSwitcherWindow;	// 128 = 0x80
    PBWindow *_appTransitionWindow;	// 136 = 0x88
    PBWindow *_wallpaperWindow;	// 144 = 0x90
    PBWindow *_blackScreenRecoveryWindow;	// 152 = 0x98
    PBWindow *_crdLoadingWindow;	// 160 = 0xa0
    PBWindow *_crdInstructionsWindow;	// 168 = 0xa8
    PBWindow *_tvBarWindow;	// 176 = 0xb0
    NSMutableSet *_dialogHiddenClients;	// 184 = 0xb8
    NSObject<OS_dispatch_source> *_bulletinDismissalTimer;	// 192 = 0xc0
    NSMutableArray *_pendingDialogRequests;	// 200 = 0xc8
    NSMutableArray *_pendingBulletinRequests;	// 208 = 0xd0
    NSMutableArray *_pendingTransitionTransactions;	// 216 = 0xd8
    FBDisplayLayoutElement *_focusedAppDisplayLayoutElement;	// 224 = 0xe0
    _PBWindowManagerAppTransitionHelper *_appTransitionHelper;	// 232 = 0xe8
    unsigned long long _crdInstructionWindowIdentifier;	// 240 = 0xf0
    NSObject<OS_dispatch_group> *_crdInstructionWindowGroup;	// 248 = 0xf8
    UIViewController *_siriViewController;	// 256 = 0x100
    UIView *_siriSnapshotView;	// 264 = 0x108
    UIViewController *_pendingAirPlayController;	// 272 = 0x110
    long long _screenSaverState;	// 280 = 0x118
    TVSUIBlackScreenRecoveryIterator *_recoveryIterator;	// 288 = 0x120
}

+ (void)_registerWindowNotificationHandlers;	// IMP=0x00000001000443a8
+ (id)_rootNavigationViewControllerForWindow:(id)arg1;	// IMP=0x0000000100044328
+ (id)sharedInstance;	// IMP=0x0000000100037980
@property(retain, nonatomic) TVSUIBlackScreenRecoveryIterator *recoveryIterator; // @synthesize recoveryIterator=_recoveryIterator;
@property(nonatomic) _Bool dialogAssertionCheckedOut; // @synthesize dialogAssertionCheckedOut=_dialogAssertionCheckedOut;
@property(nonatomic) _Bool siriAssertionCheckedOut; // @synthesize siriAssertionCheckedOut=_siriAssertionCheckedOut;
@property(nonatomic) long long screenSaverState; // @synthesize screenSaverState=_screenSaverState;
@property(retain, nonatomic) UIViewController *pendingAirPlayController; // @synthesize pendingAirPlayController=_pendingAirPlayController;
@property(readonly, nonatomic) UIView *siriSnapshotView; // @synthesize siriSnapshotView=_siriSnapshotView;
@property(readonly, nonatomic) UIViewController *siriViewController; // @synthesize siriViewController=_siriViewController;
@property(readonly, nonatomic) _Bool useSnapshotForSiri; // @synthesize useSnapshotForSiri=_useSnapshotForSiri;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *crdInstructionWindowGroup; // @synthesize crdInstructionWindowGroup=_crdInstructionWindowGroup;
@property(nonatomic) unsigned long long crdInstructionWindowIdentifier; // @synthesize crdInstructionWindowIdentifier=_crdInstructionWindowIdentifier;
@property(retain, nonatomic) _PBWindowManagerAppTransitionHelper *appTransitionHelper; // @synthesize appTransitionHelper=_appTransitionHelper;
@property(retain, nonatomic) FBDisplayLayoutElement *focusedAppDisplayLayoutElement; // @synthesize focusedAppDisplayLayoutElement=_focusedAppDisplayLayoutElement;
@property(readonly, nonatomic) NSMutableArray *pendingTransitionTransactions; // @synthesize pendingTransitionTransactions=_pendingTransitionTransactions;
@property(readonly, nonatomic) NSMutableArray *pendingBulletinRequests; // @synthesize pendingBulletinRequests=_pendingBulletinRequests;
@property(readonly, nonatomic) NSMutableArray *pendingDialogRequests; // @synthesize pendingDialogRequests=_pendingDialogRequests;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *bulletinDismissalTimer; // @synthesize bulletinDismissalTimer=_bulletinDismissalTimer;
@property(readonly, copy, nonatomic) NSMutableSet *dialogHiddenClients; // @synthesize dialogHiddenClients=_dialogHiddenClients;
@property(retain, nonatomic, setter=setTVBarWindow:) PBWindow *tvBarWindow; // @synthesize tvBarWindow=_tvBarWindow;
@property(retain, nonatomic) PBWindow *crdInstructionsWindow; // @synthesize crdInstructionsWindow=_crdInstructionsWindow;
@property(retain, nonatomic) PBWindow *crdLoadingWindow; // @synthesize crdLoadingWindow=_crdLoadingWindow;
@property(retain, nonatomic) PBWindow *blackScreenRecoveryWindow; // @synthesize blackScreenRecoveryWindow=_blackScreenRecoveryWindow;
@property(retain, nonatomic) PBWindow *wallpaperWindow; // @synthesize wallpaperWindow=_wallpaperWindow;
@property(retain, nonatomic) PBWindow *appTransitionWindow; // @synthesize appTransitionWindow=_appTransitionWindow;
@property(retain, nonatomic) PBWindow *appSwitcherWindow; // @synthesize appSwitcherWindow=_appSwitcherWindow;
@property(retain, nonatomic) PBWindow *screenSaverWindow; // @synthesize screenSaverWindow=_screenSaverWindow;
@property(retain, nonatomic) PBWindow *restrictionPINWindow; // @synthesize restrictionPINWindow=_restrictionPINWindow;
@property(retain, nonatomic) PBWindow *nowPlayingWindow; // @synthesize nowPlayingWindow=_nowPlayingWindow;
@property(retain, nonatomic) PBWindow *routingWindow; // @synthesize routingWindow=_routingWindow;
@property(retain, nonatomic) PBWindow *siriWindow; // @synthesize siriWindow=_siriWindow;
@property(retain, nonatomic) PBWindow *dialogWindow; // @synthesize dialogWindow=_dialogWindow;
@property(retain, nonatomic) PBWindow *playbackLaunchShroudWindow; // @synthesize playbackLaunchShroudWindow=_playbackLaunchShroudWindow;
@property(retain, nonatomic) PBWindow *bulletinWindow; // @synthesize bulletinWindow=_bulletinWindow;
@property(retain, nonatomic) PBWindow *airPlayWindow; // @synthesize airPlayWindow=_airPlayWindow;
@property(retain, nonatomic) PBWindow *eventMaskingWindow; // @synthesize eventMaskingWindow=_eventMaskingWindow;
@property(retain, nonatomic) PBWindow *criticalAlertWindow; // @synthesize criticalAlertWindow=_criticalAlertWindow;
@property(retain, nonatomic) PBWindow *hotBlackWindow; // @synthesize hotBlackWindow=_hotBlackWindow;
@property(nonatomic) _Bool presentingAirPlayWindow; // @synthesize presentingAirPlayWindow=_presentingAirPlayWindow;
@property(retain, nonatomic) PBOSUpdateWindow *softwareUpdateWindow; // @synthesize softwareUpdateWindow=_softwareUpdateWindow;
@property(nonatomic) _Bool shouldAnimateCRDInstructionsHUD; // @synthesize shouldAnimateCRDInstructionsHUD=_shouldAnimateCRDInstructionsHUD;
@property(nonatomic) _Bool siriIsFullscreen; // @synthesize siriIsFullscreen=_siriIsFullscreen;
@property(retain, nonatomic) PBRemoteBulletinViewController *presentedBulletinViewController; // @synthesize presentedBulletinViewController=_presentedBulletinViewController;
- (void).cxx_destruct;	// IMP=0x0000000100044bcc
- (void)_updateLayoutElementsWithFocusedProcess:(id)arg1;	// IMP=0x0000000100044160
- (void)_updateKeyWindow;	// IMP=0x0000000100044034
- (id)_highestPriorityWindowBelow:(id)arg1 eventsOnly:(_Bool)arg2;	// IMP=0x0000000100043690
- (id)_highestPriorityWindow;	// IMP=0x0000000100042da4
- (id)_lazyTVBarWindow;	// IMP=0x0000000100042b4c
- (id)_lazyHotBlackWindow;	// IMP=0x000000010004299c
- (id)_lazyEventMaskingWindow;	// IMP=0x0000000100042850
- (id)_lazyCRDInstructionsWindow;	// IMP=0x000000010004262c
- (id)_lazyCRDLoadingWindow;	// IMP=0x0000000100042408
- (id)_lazyWallpaperWindow;	// IMP=0x000000010004230c
- (id)_lazyAppTransitionWindow;	// IMP=0x00000001000421f4
- (id)_lazyAppSwitcherWindow;	// IMP=0x000000010004204c
- (id)_lazyBulletinWindow;	// IMP=0x0000000100041f50
- (id)_lazyDialogWindowForRequest:(id)arg1;	// IMP=0x0000000100041d8c
- (id)_lazySiriWindow;	// IMP=0x0000000100041bc8
- (id)_lazyBlackScreenRecoveryWindow;	// IMP=0x0000000100041954
- (id)_lazyRestrictionPINWindow;	// IMP=0x00000001000416b8
- (id)_lazyNowPlayingWindow;	// IMP=0x0000000100041430
- (id)_lazyRoutingWindow;	// IMP=0x00000001000411b0
- (id)_lazyAirPlayWindow;	// IMP=0x0000000100040f30
- (id)_lazyScreenSaverWindow;	// IMP=0x0000000100040d6c
- (id)_lazyPlaybackLaunchShroudWindow;	// IMP=0x0000000100040b60
- (void)_dismissTVBarWindow:(id)arg1;	// IMP=0x0000000100040ac4
- (_Bool)dismissTVBarWindow;	// IMP=0x0000000100040a0c
- (_Bool)presentTVBarViewController:(id)arg1;	// IMP=0x0000000100040958
@property(readonly, nonatomic) _Bool presentingTVBarWindow;
- (void)_dismissCRDInstructionsWindow:(id)arg1;	// IMP=0x0000000100040860
- (void)dismissCRDInstructionsWindow;	// IMP=0x00000001000407a0
- (void)presentCRDInstructionsWindow;	// IMP=0x00000001000402a8
@property(readonly, nonatomic) _Bool presentingCRDInstructionsWindow;
- (void)_incrementCRDInstructionWindowIdentifier;	// IMP=0x0000000100040210
- (void)_dismissCRDLoadingWindow:(id)arg1;	// IMP=0x0000000100040174
- (_Bool)dismissCRDLoadingWindow;	// IMP=0x00000001000400bc
- (void)presentCRDLoadingWindow;	// IMP=0x000000010003fde4
@property(readonly, nonatomic) _Bool presentingCRDLoadingWindow;
- (void)_dismissTransitionShroudWindow:(id)arg1;	// IMP=0x000000010003fce0
- (void)_dismissAppTransitionWindow:(id)arg1;	// IMP=0x000000010003fc28
- (void)_dismissWindowsForAppLaunch:(id)arg1;	// IMP=0x000000010003fa34
- (_Bool)cancelCurrentAppTransition;	// IMP=0x000000010003f99c
- (void)_cancelPendingTransitionTransactions;	// IMP=0x000000010003f834
- (void)shroudTransitionWithDuration:(double)arg1 delay:(double)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000010003f584
- (void)_beginShroudedAppTransitionTransaction:(id)arg1 duration:(double)arg2 delay:(double)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x000000010003f1cc
- (void)_beginPendingTransitionTransaction;	// IMP=0x000000010003ef50
- (void)_beginAppTransitionTransaction:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003e8b0
- (void)beginAppTransitionWithTransaction:(id)arg1;	// IMP=0x000000010003e330
@property(readonly, nonatomic) _Bool presentingAppTransition;
- (void)_dismissAppSwitcherWindow;	// IMP=0x000000010003e21c
- (_Bool)_shouldActivateAppSwitcher;	// IMP=0x000000010003e034
- (_Bool)dismissAppSwitcher;	// IMP=0x000000010003df7c
- (_Bool)presentAppSwitcher;	// IMP=0x000000010003df00
@property(readonly, nonatomic) _Bool presentingAppSwitcher;
- (void)_dismissAirPlayWindow;	// IMP=0x000000010003ddec
- (_Bool)dismissAirPlayWindow;	// IMP=0x000000010003dd38
- (void)presentAirPlayViewController:(id)arg1;	// IMP=0x000000010003dad4
- (void)dismissHotBlackWindow;	// IMP=0x000000010003d920
- (void)presentHotBlackWindow;	// IMP=0x000000010003d888
- (void)displayState:(id)arg1 didChangeWithConnection:(long long)arg2;	// IMP=0x000000010003d78c
- (void)dismissEventMaskingWindow;	// IMP=0x000000010003d714
- (void)presentEventMaskingWindow;	// IMP=0x000000010003d6b0
- (void)dismissThermalWarningWindow;	// IMP=0x000000010003d620
- (void)presentThermalWarningWindow;	// IMP=0x000000010003d530
- (void)dismissSoftwareUpdateWindow;	// IMP=0x000000010003d4b8
- (void)presentSoftwareUpdateWindow;	// IMP=0x000000010003d3c0
- (void)_cancelBulletinTimer;	// IMP=0x000000010003d384
- (void)_presentNextBulletin;	// IMP=0x000000010003ce6c
- (void)_schedulePresentBulletin;	// IMP=0x000000010003cd08
- (void)_enqueueBulletinPresentationRequest:(id)arg1;	// IMP=0x000000010003cc54
- (_Bool)dismissBulletinWindow;	// IMP=0x000000010003cb6c
- (_Bool)dismissBulletinViewController:(id)arg1;	// IMP=0x000000010003c9a4
- (void)updateBulletinViewControllerTimeout:(id)arg1 timeoutInSeconds:(double)arg2;	// IMP=0x000000010003c8d8
- (void)presentBulletinViewController:(id)arg1 withTimeoutInSeconds:(double)arg2;	// IMP=0x000000010003c864
- (void)navigationController:(id)arg1 didDismissViewController:(id)arg2;	// IMP=0x000000010003c844
- (void)_executePresentationRequest:(id)arg1;	// IMP=0x000000010003c498
- (void)_presentNextDialog;	// IMP=0x000000010003bfbc
- (void)_schedulePresentDialog;	// IMP=0x000000010003be98
- (void)_enqueueDialogPresentationRequest:(id)arg1;	// IMP=0x000000010003bdf4
- (_Bool)_dismissDialogWindow;	// IMP=0x000000010003bd0c
- (_Bool)_suspendDialogWindow;	// IMP=0x000000010003bb78
- (_Bool)_retirePresentationRequestForViewController:(id)arg1;	// IMP=0x000000010003b9b0
- (void)dismissDialogViewController:(id)arg1;	// IMP=0x000000010003b8f4
- (_Bool)hideDialogWindowForClient:(id)arg1;	// IMP=0x000000010003b664
- (_Bool)_unhideDialogWindowForClients:(id)arg1;	// IMP=0x000000010003b274
- (_Bool)unhideDialogWindowForClient:(id)arg1;	// IMP=0x000000010003b208
- (void)presentDialogViewController:(id)arg1 options:(id)arg2;	// IMP=0x000000010003b084
- (void)presentDialogViewController:(id)arg1;	// IMP=0x000000010003b064
@property(readonly, nonatomic) _Bool presentingDialogWindow;
- (void)setUseSnapshotForSiri:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010003aa10
- (_Bool)dismissSiriWindow;	// IMP=0x000000010003a894
- (_Bool)hideSiriWindow;	// IMP=0x000000010003a708
- (void)_unhideSiriWindow;	// IMP=0x000000010003a5dc
- (_Bool)_willHideSiriWindow;	// IMP=0x000000010003a510
- (void)presentSiriViewController:(id)arg1;	// IMP=0x000000010003a36c
@property(readonly, nonatomic) _Bool presentingSiriSession;
- (void)_dismissBlackScreenRecoveryWindow:(id)arg1;	// IMP=0x000000010003a274
- (_Bool)dismissBlackScreenRecoveryWindow;	// IMP=0x000000010003a164
- (_Bool)presentBlackScreenRecoveryForDisplayModes:(id)arg1 selectionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100039910
- (void)_dismissRestrictionPINWindow:(id)arg1;	// IMP=0x0000000100039840
- (_Bool)dismissRestrictionPINWindow;	// IMP=0x0000000100039788
- (void)presentRestrictionPINWindow:(CDUnknownBlockType)arg1;	// IMP=0x00000001000393b8
@property(readonly, nonatomic) _Bool presentingPINRequest;
- (void)_dismissRoutingWindow:(id)arg1;	// IMP=0x00000001000392c0
- (_Bool)dismissRoutingViewControllerWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000391e4
- (_Bool)presentRoutingViewController:(id)arg1 options:(id)arg2;	// IMP=0x0000000100039104
@property(readonly, nonatomic) _Bool presentingRouting;
- (void)_dismissNowPlayingWindow:(id)arg1;	// IMP=0x000000010003900c
- (_Bool)dismissNowPlayingViewControllerWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100038f30
- (_Bool)presentNowPlayingViewController:(id)arg1 options:(id)arg2;	// IMP=0x0000000100038e50
@property(readonly, nonatomic) _Bool presentingNowPlaying;
- (_Bool)isScreenSaverWindowKey;	// IMP=0x0000000100038da8
- (void)_destroyScreenSaverWindow;	// IMP=0x0000000100038d24
- (void)forceDismissScreenSaver;	// IMP=0x0000000100038c0c
- (void)dismissScreenSaverWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000387ec
- (void)presentScreenSaverWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100038158
- (_Bool)_dialogRequestIsRemote:(id)arg1;	// IMP=0x00000001000380ec
- (_Bool)_presentedDialogIsRemote;	// IMP=0x000000010003806c
- (_Bool)shouldForwardSystemAppEvent;	// IMP=0x0000000100037cd0
- (void)dealloc;	// IMP=0x0000000100037c58
- (id)init;	// IMP=0x0000000100037a5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

