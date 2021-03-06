//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CADisplayLink;

@interface HBIconProgressView2 : UIView
{
    long long _progressState;	// 8 = 0x8
    double _modelProgress;	// 16 = 0x10
    _Bool _modelPaused;	// 24 = 0x18
    double _backgroundAlphaValue;	// 32 = 0x20
    unsigned long long _backgroundGoalTick;	// 40 = 0x28
    double _circleRadiusFactor;	// 48 = 0x30
    unsigned long long _circleGoalTick;	// 56 = 0x38
    double _progressValue;	// 64 = 0x40
    unsigned long long _progressGoalTick;	// 72 = 0x48
    double _holeRadiusFactor;	// 80 = 0x50
    unsigned long long _holeGoalTick;	// 88 = 0x58
    double _pausedRadiusFactor;	// 96 = 0x60
    unsigned long long _pausedGoalTick;	// 104 = 0x68
    unsigned long long _ticksPerSecond;	// 112 = 0x70
    CADisplayLink *_displayLink;	// 120 = 0x78
    id <HBIconProgressViewDelegate> _delegate;	// 128 = 0x80
}

@property(nonatomic) id <HBIconProgressViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100007130
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000100006518
- (void)setState:(long long)arg1 paused:(_Bool)arg2 fractionLoaded:(double)arg3 animated:(_Bool)arg4;	// IMP=0x0000000100006348
- (void)_gotoHoleState:(unsigned long long)arg1;	// IMP=0x00000001000061f4
- (void)_gotoProgressState:(unsigned long long)arg1;	// IMP=0x0000000100006134
- (void)_gotoBackgroundOrCircleState:(unsigned long long)arg1;	// IMP=0x0000000100005fac
- (void)_adjustPaused:(_Bool)arg1:(unsigned long long)arg2;	// IMP=0x0000000100005f14
- (void)_clearDisplayLink;	// IMP=0x0000000100005ed8
- (void)_ensureDisplayLink;	// IMP=0x0000000100005e0c
- (void)_onDisplayLink:(id)arg1;	// IMP=0x0000000100005e00
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x0000000100005da8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100005d00

@end

