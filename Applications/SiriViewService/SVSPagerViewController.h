//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SVSPagerViewDataSource.h"
#import "SVSPagerViewDelegate.h"

@class NSArray, NSMutableArray, NSString, SVSPagerView;

@interface SVSPagerViewController : UIViewController <SVSPagerViewDataSource, SVSPagerViewDelegate>
{
    NSMutableArray *_viewControllers;	// 8 = 0x8
    _Bool _textInputEnabled;	// 16 = 0x10
    UIViewController *_activePageViewController;	// 24 = 0x18
    id <SVSPagerViewControllerDelegate> _delegate;	// 32 = 0x20
}

@property(nonatomic) __weak id <SVSPagerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIViewController *activePageViewController; // @synthesize activePageViewController=_activePageViewController;
- (void).cxx_destruct;	// IMP=0x000000010007c55c
- (id)_viewControllerForPageView:(id)arg1;	// IMP=0x000000010007c308
- (void)pagerViewDidChangeTransitionState:(id)arg1;	// IMP=0x000000010007c2c0
- (void)pagerView:(id)arg1 didActivatePageView:(id)arg2 oldActivePageView:(id)arg3;	// IMP=0x000000010007c1a0
- (id)pagerView:(id)arg1 pageViewAtIndex:(long long)arg2;	// IMP=0x000000010007c13c
- (long long)numberOfPageViewsInPagerView:(id)arg1;	// IMP=0x000000010007c124
@property(readonly, nonatomic) unsigned long long transitionState;
@property(nonatomic, getter=isPagingEnabled) _Bool pagingEnabled;
- (_Bool)containsPageViewController:(id)arg1;	// IMP=0x000000010007c020
- (void)setActivePageViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010007be3c
- (void)removePageViewController:(id)arg1;	// IMP=0x000000010007bd54
- (void)addPageViewController:(id)arg1;	// IMP=0x000000010007bce8
- (void)insertPageViewController:(id)arg1 atIndex:(long long)arg2;	// IMP=0x000000010007bb44
@property(readonly, nonatomic) NSArray *pageViewControllers;
- (void)viewDidLoad;	// IMP=0x000000010007ba6c
- (void)loadView;	// IMP=0x000000010007b9f8
- (id)initWithTextInputEnabled:(_Bool)arg1;	// IMP=0x000000010007b96c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SVSPagerView *view; // @dynamic view;

@end

