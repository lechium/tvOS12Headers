//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class NSString;

@interface TVPModalPresentationAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _presenting;	// 8 = 0x8
}

+ (id)_transformAnimationFactory;	// IMP=0x0000000100032dd4
+ (id)_alphaAnimationFactory;	// IMP=0x0000000100032da0
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
- (void)animateTransition:(id)arg1;	// IMP=0x000000010003257c
- (double)transitionDuration:(id)arg1;	// IMP=0x000000010003254c
- (id)initForPresenting:(_Bool)arg1;	// IMP=0x00000001000324fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

