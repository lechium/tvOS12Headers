//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSDictionary, NSString, TVPSlideshowUtilities, UILabel, UITableView;

@interface TVPSlideshowSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    NSArray *_slideshowSettings;	// 16 = 0x10
    NSDictionary *_slideshowThemeSettings;	// 24 = 0x18
    NSDictionary *_slideshowTransitionMapping;	// 32 = 0x20
    NSArray *_slideshowTransitionSettings;	// 40 = 0x28
    NSArray *_photoAssets;	// 48 = 0x30
    TVPSlideshowUtilities *_slideshowUtilities;	// 56 = 0x38
    UITableView *_slideshowSettingsView;	// 64 = 0x40
    UITableView *_slideshowTransitionStyleView;	// 72 = 0x48
    UILabel *_slideshowLabel;	// 80 = 0x50
    UILabel *_transitionLabel;	// 88 = 0x58
}

@property(retain, nonatomic) UILabel *transitionLabel; // @synthesize transitionLabel=_transitionLabel;
@property(retain, nonatomic) UILabel *slideshowLabel; // @synthesize slideshowLabel=_slideshowLabel;
@property(retain, nonatomic) UITableView *slideshowTransitionStyleView; // @synthesize slideshowTransitionStyleView=_slideshowTransitionStyleView;
@property(retain, nonatomic) UITableView *slideshowSettingsView; // @synthesize slideshowSettingsView=_slideshowSettingsView;
@property(retain, nonatomic) TVPSlideshowUtilities *slideshowUtilities; // @synthesize slideshowUtilities=_slideshowUtilities;
@property(retain, nonatomic) NSArray *photoAssets; // @synthesize photoAssets=_photoAssets;
@property(retain, nonatomic) NSArray *slideshowTransitionSettings; // @synthesize slideshowTransitionSettings=_slideshowTransitionSettings;
@property(retain, nonatomic) NSDictionary *slideshowTransitionMapping; // @synthesize slideshowTransitionMapping=_slideshowTransitionMapping;
@property(retain, nonatomic) NSDictionary *slideshowThemeSettings; // @synthesize slideshowThemeSettings=_slideshowThemeSettings;
@property(retain, nonatomic) NSArray *slideshowSettings; // @synthesize slideshowSettings=_slideshowSettings;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;	// IMP=0x000000010001c744
- (void)_initializeSlideshowSettings;	// IMP=0x000000010001b75c
- (struct CGSize)_getAttributedTextSize:(id)arg1 font:(id)arg2 maxWidth:(double)arg3;	// IMP=0x000000010001b698
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010001ae40
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010001a800
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000010001a760
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010001a6c8
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000010001a6ac
- (void)_slideshowThemeChanged:(id)arg1;	// IMP=0x000000010001a15c
- (id)preferredFocusEnvironments;	// IMP=0x000000010001a060
- (void)dealloc;	// IMP=0x0000000100019fe8
- (void)viewDidLoad;	// IMP=0x000000010001993c
- (void)loadView;	// IMP=0x0000000100019864
- (void)refreshPhotoAssets:(id)arg1;	// IMP=0x0000000100019824
- (id)init;	// IMP=0x000000010001975c
- (id)initWithPhotoAssets:(id)arg1;	// IMP=0x00000001000196cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

