//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface TVNPRoutingMusicBarsView : UIView
{
    _Bool _canAnimate;	// 8 = 0x8
    unsigned long long _state;	// 16 = 0x10
    unsigned long long _internalState;	// 24 = 0x18
    NSArray *_barViews;	// 32 = 0x20
}

@property(readonly, copy, nonatomic) NSArray *barViews; // @synthesize barViews=_barViews;
@property(nonatomic) unsigned long long internalState; // @synthesize internalState=_internalState;
@property(nonatomic) _Bool canAnimate; // @synthesize canAnimate=_canAnimate;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;	// IMP=0x00000001000115bc
- (void)_removeAnimations;	// IMP=0x0000000100011424
- (void)_addAnimationsWithRepeatCount:(float)arg1;	// IMP=0x000000010001106c
- (void)_setBarHeights:(double)arg1;	// IMP=0x0000000100010ef4
- (void)_setSubviewsHidden:(_Bool)arg1;	// IMP=0x0000000100010dc8
- (void)_updateInternalState;	// IMP=0x0000000100010d98
- (void)tintColorDidChange;	// IMP=0x0000000100010ac0
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000100010a38
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010001084c

@end

