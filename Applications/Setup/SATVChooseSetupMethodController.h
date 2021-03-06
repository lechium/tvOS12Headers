//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SATVStepViewController.h"

#import "SATVBluetoothKeyboardManagerDelegate.h"
#import "SATVBranchStep.h"
#import "SATVChooseOptionViewDataSource.h"
#import "SATVChooseOptionViewDelegate.h"
#import "TVSUIDigitEntryViewControllerDelegate.h"

@class NSString, OBPrivacyLinkController, SATVBluetoothKeyboardManager, SATVChooseOptionView, SATVNavigationController, TVSUIDigitEntryViewController, UILabel;

@interface SATVChooseSetupMethodController : SATVStepViewController <SATVChooseOptionViewDataSource, SATVChooseOptionViewDelegate, SATVBluetoothKeyboardManagerDelegate, TVSUIDigitEntryViewControllerDelegate, SATVBranchStep>
{
    _Bool _bluetoothPairing;	// 8 = 0x8
    CDUnknownBlockType selectionHandler;	// 16 = 0x10
    SATVChooseOptionView *_chooseOptionView;	// 24 = 0x18
    UILabel *_keyboardPairingPromptLabel;	// 32 = 0x20
    SATVBluetoothKeyboardManager *_bluetoothKeyboardManager;	// 40 = 0x28
    TVSUIDigitEntryViewController *_digitEntryViewController;	// 48 = 0x30
    OBPrivacyLinkController *_privacyLink;	// 56 = 0x38
}

+ (id)stableKey;	// IMP=0x0000000100035a40
@property(retain, nonatomic) OBPrivacyLinkController *privacyLink; // @synthesize privacyLink=_privacyLink;
@property(nonatomic, getter=isBluetoothPairing) _Bool bluetoothPairing; // @synthesize bluetoothPairing=_bluetoothPairing;
@property(retain, nonatomic) TVSUIDigitEntryViewController *digitEntryViewController; // @synthesize digitEntryViewController=_digitEntryViewController;
@property(retain, nonatomic) SATVBluetoothKeyboardManager *bluetoothKeyboardManager; // @synthesize bluetoothKeyboardManager=_bluetoothKeyboardManager;
@property(retain, nonatomic) UILabel *keyboardPairingPromptLabel; // @synthesize keyboardPairingPromptLabel=_keyboardPairingPromptLabel;
@property(retain, nonatomic) SATVChooseOptionView *chooseOptionView; // @synthesize chooseOptionView=_chooseOptionView;
@property(copy, nonatomic) CDUnknownBlockType selectionHandler; // @synthesize selectionHandler;
- (void).cxx_destruct;	// IMP=0x00000001000377d8
- (void)digitEntryViewControllerDidCancel:(id)arg1;	// IMP=0x00000001000375ac
- (void)willAttemptToPairBluetoothKeyboardWithName:(id)arg1;	// IMP=0x0000000100037450
- (void)didFailToPairBluetoothKeyboardWithName:(id)arg1;	// IMP=0x00000001000372e4
- (void)didPairBluetoothKeyboardWithName:(id)arg1;	// IMP=0x0000000100037168
- (void)presentPIN:(long long)arg1 forKeyboardWithName:(id)arg2;	// IMP=0x0000000100036c30
- (void)didSelectSecondOptionForView:(id)arg1;	// IMP=0x0000000100036b8c
- (void)didSelectFirstOptionForView:(id)arg1;	// IMP=0x0000000100036ae8
- (id)secondOptionButtonFooterViewForView:(id)arg1;	// IMP=0x0000000100036ad0
- (id)firstOptionButtonFooterViewForView:(id)arg1;	// IMP=0x0000000100036ab8
- (id)secondOptionButtonTextForView:(id)arg1;	// IMP=0x0000000100036a30
- (id)firstOptionButtonTextForView:(id)arg1;	// IMP=0x00000001000369a8
- (id)subtitleTextForView:(id)arg1;	// IMP=0x00000001000368f8
- (id)titleTextForView:(id)arg1;	// IMP=0x0000000100036870
- (void)_popDigitEntryController;	// IMP=0x00000001000367ac
- (void)_stopBluetoothKeyboardPairing;	// IMP=0x0000000100036734
- (void)_beginBluetoothKeyboardPairing;	// IMP=0x00000001000366bc
- (void)_configureKeyboardPairingPromptLabel;	// IMP=0x00000001000361dc
- (id)preferredFocusEnvironments;	// IMP=0x0000000100036128
@property(readonly, nonatomic) SATVNavigationController *navigationController;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100035fcc
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100035f7c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100035ee8
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100035d18
- (void)loadView;	// IMP=0x0000000100035c1c
- (void)autoAdvance;	// IMP=0x0000000100035b88
- (void)dealloc;	// IMP=0x0000000100035b3c
- (id)init;	// IMP=0x0000000100035a6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isConfigured;
@property(copy, nonatomic) CDUnknownBlockType menuHandler;
@property(readonly) Class superclass;

@end

