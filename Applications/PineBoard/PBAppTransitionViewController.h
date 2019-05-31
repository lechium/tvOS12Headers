//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PBAppTransitionContextDelegate.h"

@class NSMutableArray, NSString, PBAppTransitionTransaction, TVSStateMachine, UIView;

@interface PBAppTransitionViewController : UIViewController <PBAppTransitionContextDelegate>
{
    _Bool _shouldUseLaunchImage;	// 8 = 0x8
    _Bool _appSwitcherToDefaultKiosk;	// 9 = 0x9
    PBAppTransitionTransaction *_transitionTransaction;	// 16 = 0x10
    CDUnknownBlockType _completion;	// 24 = 0x18
    TVSStateMachine *_stateMachine;	// 32 = 0x20
    double _animationDuration;	// 40 = 0x28
    long long _transitionType;	// 48 = 0x30
    UIView *_visibleViewAfterInitialAnimation;	// 56 = 0x38
    UIView *_wallpaperView;	// 64 = 0x40
    NSMutableArray *_overlayWindows;	// 72 = 0x48
    UIView *_overlayHostContainer;	// 80 = 0x50
}

@property(retain, nonatomic) UIView *overlayHostContainer; // @synthesize overlayHostContainer=_overlayHostContainer;
@property(retain, nonatomic) NSMutableArray *overlayWindows; // @synthesize overlayWindows=_overlayWindows;
@property(retain, nonatomic) UIView *wallpaperView; // @synthesize wallpaperView=_wallpaperView;
@property(retain, nonatomic) UIView *visibleViewAfterInitialAnimation; // @synthesize visibleViewAfterInitialAnimation=_visibleViewAfterInitialAnimation;
@property(readonly, nonatomic) _Bool appSwitcherToDefaultKiosk; // @synthesize appSwitcherToDefaultKiosk=_appSwitcherToDefaultKiosk;
@property(readonly, nonatomic) long long transitionType; // @synthesize transitionType=_transitionType;
@property(readonly, nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(readonly, nonatomic) _Bool shouldUseLaunchImage; // @synthesize shouldUseLaunchImage=_shouldUseLaunchImage;
@property(readonly, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) PBAppTransitionTransaction *transitionTransaction; // @synthesize transitionTransaction=_transitionTransaction;
- (void).cxx_destruct;	// IMP=0x0000000100035e70
- (void)_disableOverlayWindowsHosting;	// IMP=0x0000000100035b24
- (void)_installOverlayWindowsInOverlayContainer;	// IMP=0x00000001000358a4
- (id)context;	// IMP=0x000000010003587c
- (void)_complete;	// IMP=0x0000000100035588
- (void)_startForegroundUpdate;	// IMP=0x0000000100035544
- (void)_beginFinalTransitionAnimation;	// IMP=0x0000000100034efc
- (void)_beginInitialTransitionAnimation;	// IMP=0x0000000100033728
- (void)_configureStateMachine;	// IMP=0x0000000100032ed4
- (void)contextTransitionDidFail:(id)arg1;	// IMP=0x0000000100032e88
- (void)contextReadyForFinalTransition:(id)arg1;	// IMP=0x0000000100032e3c
- (void)contextForegroundUpdateComplete:(id)arg1;	// IMP=0x0000000100032df0
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100032d4c
- (void)viewDidLoad;	// IMP=0x0000000100032ca0
- (void)abortTransition;	// IMP=0x0000000100032c5c
- (void)addOverlayWindow:(id)arg1;	// IMP=0x0000000100032bd4
- (id)initWithTransitionTransaction:(id)arg1;	// IMP=0x0000000100032730
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000326e4
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100032688

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
