//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSString, SATVActivityIndicatorViewController, SATVLoginView, TVSStateMachine, UISystemInputViewController;

@interface SATVCloudLoginViewController : UIViewController
{
    NSString *_organizationName;	// 8 = 0x8
    NSString *_username;	// 16 = 0x10
    NSString *_password;	// 24 = 0x18
    NSString *_customPrompt;	// 32 = 0x20
    TVSStateMachine *_loginStateMachine;	// 40 = 0x28
    UISystemInputViewController *_systemInputViewController;	// 48 = 0x30
    SATVLoginView *_loginView;	// 56 = 0x38
    SATVActivityIndicatorViewController *_activityIndicatorViewController;	// 64 = 0x40
}

@property(retain, nonatomic) SATVActivityIndicatorViewController *activityIndicatorViewController; // @synthesize activityIndicatorViewController=_activityIndicatorViewController;
@property(retain, nonatomic) SATVLoginView *loginView; // @synthesize loginView=_loginView;
@property(retain, nonatomic) UISystemInputViewController *systemInputViewController; // @synthesize systemInputViewController=_systemInputViewController;
@property(retain, nonatomic) TVSStateMachine *loginStateMachine; // @synthesize loginStateMachine=_loginStateMachine;
@property(retain, nonatomic) NSString *customPrompt; // @synthesize customPrompt=_customPrompt;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
- (void).cxx_destruct;	// IMP=0x000000010004a0ac
- (void)_authenticateWithUsername:(id)arg1 password:(id)arg2;	// IMP=0x0000000100049f40
- (void)_crossFadeLoginViewWithChanges:(CDUnknownBlockType)arg1;	// IMP=0x0000000100049cec
- (void)_setUsernamePlaceholder;	// IMP=0x0000000100049c04
- (void)_setPasswordPlaceholder;	// IMP=0x0000000100049b1c
- (void)_showPasswordScreen;	// IMP=0x0000000100049714
- (void)_showUsernameScreen;	// IMP=0x00000001000491e8
- (void)_reloadForStateChange;	// IMP=0x0000000100049084
- (void)_setTextFieldText:(id)arg1;	// IMP=0x0000000100048ff4
- (void)_clearTextField;	// IMP=0x0000000100048f8c
- (id)_textFieldText;	// IMP=0x0000000100048ef8
- (void)_hideLoginView;	// IMP=0x0000000100048e34
- (void)_hideActivityIndicator;	// IMP=0x0000000100048ca0
- (void)_showActivityIndicator;	// IMP=0x0000000100048b7c
- (void)_updatePreferredFocusedViewForGridLayoutGuide;	// IMP=0x00000001000489c0
- (void)_textDidChange;	// IMP=0x00000001000488b8
- (void)_menuSelected;	// IMP=0x0000000100048870
- (void)_continueButtonSelected;	// IMP=0x0000000100048828
- (void)_setControlTargets;	// IMP=0x00000001000487ac
- (void)_setViewsForInitialState;	// IMP=0x000000010004822c
- (void)_registerStateMachineEvents;	// IMP=0x0000000100047cd4
- (void)_setupSystemInputViewController;	// IMP=0x0000000100047b20
- (void)_doneButtonPressed:(id)arg1;	// IMP=0x0000000100047a70
- (_Bool)_enableAutomaticKeyboardPressDone;	// IMP=0x0000000100047a68
- (_Bool)_disableAutomaticKeyboardUI;	// IMP=0x0000000100047a60
- (id)preferredFocusEnvironments;	// IMP=0x00000001000479e8
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000478f0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010004781c
- (void)viewDidLoad;	// IMP=0x0000000100047534
- (void)loadView;	// IMP=0x0000000100047370
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x00000001000472e0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100047208

@end
