//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SATVChoiceViewDataSource.h"
#import "SATVChoiceViewDelegate.h"

@class NSString, SATVChoiceView;

@interface SATVConsentViewController : UIViewController <SATVChoiceViewDelegate, SATVChoiceViewDataSource>
{
    _Bool _centeredHorizontally;	// 8 = 0x8
    SATVChoiceView *_choiceView;	// 16 = 0x10
    id <SATVConsentViewControllerDelegate> _delegate;	// 24 = 0x18
    id <SATVConsentViewControllerDataSource> _dataSource;	// 32 = 0x20
    double _maximumChoiceViewWidth;	// 40 = 0x28
    double _choiceViewHorizontalCenter;	// 48 = 0x30
}

@property(nonatomic, getter=isCenteredHorizontally) _Bool centeredHorizontally; // @synthesize centeredHorizontally=_centeredHorizontally;
@property(nonatomic) double choiceViewHorizontalCenter; // @synthesize choiceViewHorizontalCenter=_choiceViewHorizontalCenter;
@property(nonatomic) double maximumChoiceViewWidth; // @synthesize maximumChoiceViewWidth=_maximumChoiceViewWidth;
@property(nonatomic) __weak id <SATVConsentViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <SATVConsentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SATVChoiceView *choiceView; // @synthesize choiceView=_choiceView;
- (void).cxx_destruct;	// IMP=0x000000010001bb78
- (void)didSelectAuxiliaryButton;	// IMP=0x000000010001b9f0
- (void)didSelectFooterButton;	// IMP=0x000000010001b944
- (void)didSelectChoice:(unsigned long long)arg1;	// IMP=0x000000010001b8b4
- (id)auxiliaryButtonViewForChoiceView:(id)arg1;	// IMP=0x000000010001b800
- (id)footerButtonViewForChoiceView:(id)arg1;	// IMP=0x000000010001b74c
- (id)auxiliaryButtonTextForChoiceView:(id)arg1;	// IMP=0x000000010001b698
- (id)footerButtonTextForChoiceView:(id)arg1;	// IMP=0x000000010001b5e4
- (id)footnoteTextForChoiceView:(id)arg1;	// IMP=0x000000010001b530
- (id)choiceHeaderButtonTextForChoiceView:(id)arg1;	// IMP=0x000000010001b4a8
- (id)subtitleTextForChoiceView:(id)arg1;	// IMP=0x000000010001b44c
- (id)titleTextForChoiceView:(id)arg1;	// IMP=0x000000010001b3f0
- (id)choiceView:(id)arg1 textForChoice:(unsigned long long)arg2;	// IMP=0x000000010001b328
- (id)preferredFocusEnvironments;	// IMP=0x000000010001b274
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010001b0a0
- (void)viewDidLayoutSubviews;	// IMP=0x000000010001aea4
- (void)loadView;	// IMP=0x000000010001adb8
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010001ad1c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

