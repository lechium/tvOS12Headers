//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_HBIconProgressTransition.h"

@class CAMediaTimingFunction;

@interface _HBIconProgressPausedTransition : _HBIconProgressTransition
{
    double _totalElapsedTime;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    CAMediaTimingFunction *_timingFunction;	// 24 = 0x18
    _Bool _toPaused;	// 32 = 0x20
    double _fraction;	// 40 = 0x28
}

+ (id)newTransitionToPaused:(_Bool)arg1;	// IMP=0x00000001000445a8
- (void).cxx_destruct;	// IMP=0x00000001000449b8
- (void)_updateElapsedTimeFromFraction;	// IMP=0x00000001000448e8
- (void)_updateTimingFunction;	// IMP=0x0000000100044860
- (void)_updateView:(id)arg1;	// IMP=0x00000001000447ac
- (_Bool)isCompleteWithView:(id)arg1;	// IMP=0x0000000100044790
- (void)completeTransitionAndUpdateView:(id)arg1;	// IMP=0x0000000100044774
- (void)updateView:(id)arg1 withElapsedTime:(double)arg2;	// IMP=0x00000001000446c8
- (void)updateToPaused:(_Bool)arg1;	// IMP=0x0000000100044654
- (id)_initToPaused:(_Bool)arg1;	// IMP=0x00000001000445dc

@end

