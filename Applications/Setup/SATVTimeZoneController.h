//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SATVStepViewController.h"

#import "SATVListStep.h"
#import "SATVTimeZoneSearchViewControllerDelegate.h"

@class NSString, SATVNavigationController, SATVTimeZoneSearchViewController, SATVTimeZoneView, UILabel, UISystemInputViewController;

@interface SATVTimeZoneController : SATVStepViewController <SATVTimeZoneSearchViewControllerDelegate, SATVListStep>
{
    _Bool _pressedDone;	// 8 = 0x8
    CDUnknownBlockType selectionHandler;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    SATVTimeZoneSearchViewController *_searchTableViewController;	// 32 = 0x20
    UISystemInputViewController *_systemInputViewController;	// 40 = 0x28
    SATVTimeZoneView *_timeZoneView;	// 48 = 0x30
}

+ (id)stableKey;	// IMP=0x000000010004ef5c
@property(retain, nonatomic) SATVTimeZoneView *timeZoneView; // @synthesize timeZoneView=_timeZoneView;
@property(retain, nonatomic) UISystemInputViewController *systemInputViewController; // @synthesize systemInputViewController=_systemInputViewController;
@property(retain, nonatomic) SATVTimeZoneSearchViewController *searchTableViewController; // @synthesize searchTableViewController=_searchTableViewController;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType selectionHandler; // @synthesize selectionHandler;
- (void).cxx_destruct;	// IMP=0x000000010004ffb8
- (void)setTimeZoneCityID:(id)arg1;	// IMP=0x000000010004fbe8
- (id)_dateTimePreferences;	// IMP=0x000000010004fb64
- (void)_doneButtonPressed:(id)arg1;	// IMP=0x000000010004fb48
- (_Bool)_enableAutomaticKeyboardPressDone;	// IMP=0x000000010004fb40
- (_Bool)_disableAutomaticKeyboardUI;	// IMP=0x000000010004fb38
- (void)viewController:(id)arg1 didSelectCity:(id)arg2;	// IMP=0x000000010004fb28
- (void)_textDidChange;	// IMP=0x000000010004fa74
@property(readonly, nonatomic) _Bool isConfigured;
- (id)preferredFocusEnvironments;	// IMP=0x000000010004f910
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010004f880
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010004f61c
- (void)viewDidLoad;	// IMP=0x000000010004f468
- (void)loadView;	// IMP=0x000000010004f008
- (void)autoAdvance;	// IMP=0x000000010004ef88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) CDUnknownBlockType menuHandler;
@property(readonly, nonatomic) SATVNavigationController *navigationController; // @dynamic navigationController;
@property(readonly) Class superclass;

@end

