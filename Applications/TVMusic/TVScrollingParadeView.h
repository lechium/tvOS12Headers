//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"

@class NSArray, NSMutableArray, NSObject<OS_dispatch_group>, NSString, _TVImageLoaderQueue;

@interface TVScrollingParadeView : UIView <CAAnimationDelegate>
{
    _Bool _animating;	// 8 = 0x8
    unsigned long long _additionalImageViewCount;	// 16 = 0x10
    NSObject<OS_dispatch_group> *_animationGroup;	// 24 = 0x18
    NSMutableArray *_imageViews;	// 32 = 0x20
    _TVImageLoaderQueue *_loaderQueue;	// 40 = 0x28
    _Bool _paused;	// 48 = 0x30
    NSArray *_artworkCatalogs;	// 56 = 0x38
}

@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(copy, nonatomic) NSArray *artworkCatalogs; // @synthesize artworkCatalogs=_artworkCatalogs;
- (void).cxx_destruct;	// IMP=0x000000010009856c
- (void)_stopAnimations;	// IMP=0x0000000100098398
- (void)_startAnimations;	// IMP=0x0000000100097a14
- (void)_addImageToAnimationContainer:(id)arg1;	// IMP=0x0000000100097744
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0000000100097734
- (void)layoutSubviews;	// IMP=0x0000000100096fac
- (void)didMoveToWindow;	// IMP=0x0000000100096ef0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100096e14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
