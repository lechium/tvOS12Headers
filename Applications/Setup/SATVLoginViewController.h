//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SATVStepViewController.h"

#import "SATVActionStep.h"

@class NSString, SATVActivityIndicatorViewController, SATVLoginView, TVSStateMachine, TVSiCloudAccountManager, UISystemInputViewController;

@interface SATVLoginViewController : SATVStepViewController <SATVActionStep>
{
    _Bool _iCloudLoggedIn;	// 8 = 0x8
    _Bool _didLoginOrSkipFromAppleID;	// 9 = 0x9
    _Bool _comingFromTapToSetup;	// 10 = 0xa
    CDUnknownBlockType completionHandler;	// 16 = 0x10
    TVSStateMachine *_loginStateMachine;	// 24 = 0x18
    UISystemInputViewController *_systemInputViewController;	// 32 = 0x20
    SATVLoginView *_loginView;	// 40 = 0x28
    SATVActivityIndicatorViewController *_activityIndicatorViewController;	// 48 = 0x30
    NSString *_appleIDUsername;	// 56 = 0x38
    NSString *_iCloudUsername;	// 64 = 0x40
    NSString *_iTunesUsername;	// 72 = 0x48
    TVSiCloudAccountManager *_iCloudAccountManager;	// 80 = 0x50
    CDUnknownBlockType _clientMenuHandler;	// 88 = 0x58
}

+ (id)stableKey;	// IMP=0x0000000100010ad8
@property(copy, nonatomic) CDUnknownBlockType clientMenuHandler; // @synthesize clientMenuHandler=_clientMenuHandler;
@property(nonatomic) _Bool comingFromTapToSetup; // @synthesize comingFromTapToSetup=_comingFromTapToSetup;
@property(nonatomic) _Bool didLoginOrSkipFromAppleID; // @synthesize didLoginOrSkipFromAppleID=_didLoginOrSkipFromAppleID;
@property(nonatomic, getter=isiCloudLoggedIn) _Bool iCloudLoggedIn; // @synthesize iCloudLoggedIn=_iCloudLoggedIn;
@property(retain, nonatomic) TVSiCloudAccountManager *iCloudAccountManager; // @synthesize iCloudAccountManager=_iCloudAccountManager;
@property(retain, nonatomic) NSString *iTunesUsername; // @synthesize iTunesUsername=_iTunesUsername;
@property(retain, nonatomic) NSString *iCloudUsername; // @synthesize iCloudUsername=_iCloudUsername;
@property(retain, nonatomic) NSString *appleIDUsername; // @synthesize appleIDUsername=_appleIDUsername;
@property(retain, nonatomic) SATVActivityIndicatorViewController *activityIndicatorViewController; // @synthesize activityIndicatorViewController=_activityIndicatorViewController;
@property(retain, nonatomic) SATVLoginView *loginView; // @synthesize loginView=_loginView;
@property(retain, nonatomic) UISystemInputViewController *systemInputViewController; // @synthesize systemInputViewController=_systemInputViewController;
@property(retain, nonatomic) TVSStateMachine *loginStateMachine; // @synthesize loginStateMachine=_loginStateMachine;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler;
- (void).cxx_destruct;	// IMP=0x0000000100016e20
- (void)_loginComplete;	// IMP=0x0000000100016b94
- (void)_postLoginSucceeded;	// IMP=0x0000000100016b4c
- (void)_postLoginFailed;	// IMP=0x0000000100016b04
- (void)_postAuthenticationResults:(_Bool)arg1 forEmailAddress:(id)arg2;	// IMP=0x0000000100016ab8
- (void)_authenticateiCloudAccountWithUsername:(id)arg1 password:(id)arg2;	// IMP=0x0000000100016898
- (void)_authenticateStoreAccountWithUsername:(id)arg1 password:(id)arg2;	// IMP=0x0000000100016678
- (void)_authenticateAppleIDWithUsername:(id)arg1 password:(id)arg2;	// IMP=0x0000000100016458
- (void)_crossFadeLoginViewWithChanges:(CDUnknownBlockType)arg1;	// IMP=0x0000000100016204
- (void)_setUsernamePlaceholder;	// IMP=0x000000010001611c
- (void)_setPasswordPlaceholder;	// IMP=0x0000000100016034
- (void)_showiCloudPasswordScreen;	// IMP=0x0000000100015c2c
- (void)_showiCloudUsernameScreen;	// IMP=0x0000000100015858
- (void)_showiTunesPasswordScreen;	// IMP=0x0000000100015450
- (void)_showiTunesUsernameScreen;	// IMP=0x000000010001507c
- (void)_showAppleIDPasswordScreen;	// IMP=0x0000000100014c74
- (void)_showAppleIDUsernameScreen;	// IMP=0x00000001000148a0
- (void)_reloadForStateChange;	// IMP=0x000000010001473c
- (void)_setTextFieldText:(id)arg1;	// IMP=0x00000001000146ac
- (void)_clearTextField;	// IMP=0x0000000100014644
- (id)_textFieldText;	// IMP=0x00000001000145b0
- (void)_hideLoginView;	// IMP=0x00000001000144ec
- (void)_hideActivityIndicator;	// IMP=0x0000000100014358
- (void)_showActivityIndicator;	// IMP=0x0000000100014234
- (void)_updatePreferredFocusedViewForGridLayoutGuide;	// IMP=0x0000000100013fc4
- (void)_rememberEmailRecentInput:(id)arg1;	// IMP=0x0000000100013f9c
- (void)_textDidChange;	// IMP=0x0000000100013e94
- (void)_menuSelected;	// IMP=0x0000000100013e4c
- (void)_useSeparateIDsSelected;	// IMP=0x0000000100013e04
- (void)_skipButtonSelected;	// IMP=0x0000000100013dbc
- (void)_continueButtonSelected;	// IMP=0x0000000100013d74
- (void)_setControlTargets;	// IMP=0x0000000100013c38
- (void)_setViewsForInitialState;	// IMP=0x000000010001357c
- (void)_registerStateMachineEvents;	// IMP=0x0000000100011854
- (void)_doneButtonPressed:(id)arg1;	// IMP=0x00000001000117a4
- (_Bool)_enableAutomaticKeyboardPressDone;	// IMP=0x000000010001179c
- (_Bool)_disableAutomaticKeyboardUI;	// IMP=0x0000000100011794
- (id)preferredFocusEnvironments;	// IMP=0x000000010001171c
@property(copy, nonatomic) CDUnknownBlockType menuHandler;
- (void)reset;	// IMP=0x0000000100011630
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100011538
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100011498
- (void)_setupSystemInputViewController;	// IMP=0x00000001000112e4
- (void)viewDidLoad;	// IMP=0x0000000100011100
- (void)loadView;	// IMP=0x0000000100010f3c
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x0000000100010eac
- (void)autoAdvance;	// IMP=0x0000000100010e28
- (id)init;	// IMP=0x0000000100010b04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isConfigured;
@property(readonly) Class superclass;

@end

