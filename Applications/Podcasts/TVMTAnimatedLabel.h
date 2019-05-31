//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVMTLabel.h"

@class CALayer, NSArray, _TVAnimatedImageView;

@interface TVMTAnimatedLabel : TVMTLabel
{
    _Bool _marqueeNeeded;	// 8 = 0x8
    _Bool _marqueeing;	// 9 = 0x9
    CALayer *_maskLayer;	// 16 = 0x10
    _Bool _animating;	// 24 = 0x18
    _Bool _paused;	// 25 = 0x19
    float _scrollRate;	// 28 = 0x1c
    double _marqueeDelay;	// 32 = 0x20
    double _replicationPadding;	// 40 = 0x28
    double _maskCapWidth;	// 48 = 0x30
    double _crossfadeDuration;	// 56 = 0x38
    NSArray *_attributedStrings;	// 64 = 0x40
    unsigned long long _currentAttributedStringIndex;	// 72 = 0x48
    double _underPosterOutset;	// 80 = 0x50
    _TVAnimatedImageView *_currentMarqueeView;	// 88 = 0x58
    _TVAnimatedImageView *_nextMarqueeView;	// 96 = 0x60
}

@property(readonly, nonatomic) __weak _TVAnimatedImageView *nextMarqueeView; // @synthesize nextMarqueeView=_nextMarqueeView;
@property(readonly, nonatomic) __weak _TVAnimatedImageView *currentMarqueeView; // @synthesize currentMarqueeView=_currentMarqueeView;
@property(nonatomic) double underPosterOutset; // @synthesize underPosterOutset=_underPosterOutset;
@property(readonly, nonatomic) unsigned long long currentAttributedStringIndex; // @synthesize currentAttributedStringIndex=_currentAttributedStringIndex;
@property(copy, nonatomic) NSArray *attributedStrings; // @synthesize attributedStrings=_attributedStrings;
@property(nonatomic) double crossfadeDuration; // @synthesize crossfadeDuration=_crossfadeDuration;
@property(nonatomic) float scrollRate; // @synthesize scrollRate=_scrollRate;
@property(nonatomic) double maskCapWidth; // @synthesize maskCapWidth=_maskCapWidth;
@property(nonatomic) double replicationPadding; // @synthesize replicationPadding=_replicationPadding;
@property(nonatomic) double marqueeDelay; // @synthesize marqueeDelay=_marqueeDelay;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
- (void).cxx_destruct;	// IMP=0x000000010006c660
- (void)_applicationDidBecomeActiveNotification:(id)arg1;	// IMP=0x000000010006c4c8
- (void)_applicationWillResignActiveNotification:(id)arg1;	// IMP=0x000000010006c470
- (void)setMarqueeRunning:(_Bool)arg1;	// IMP=0x000000010006c464
- (void)setMarqueeEnabled:(_Bool)arg1;	// IMP=0x000000010006c460
- (void)_startMarqueeIfNeeded;	// IMP=0x000000010006ad78
- (_Bool)_shouldCycle;	// IMP=0x000000010006ad28
- (void)_clearLabelTextContents;	// IMP=0x000000010006ab68
- (void)_prepareNextMarquee;	// IMP=0x000000010006ab50
- (void)_nextAttributedString;	// IMP=0x000000010006a5f8
- (id)_imageForText:(_Bool)arg1;	// IMP=0x000000010006a400
- (void)drawTextInRect:(struct CGRect)arg1;	// IMP=0x000000010006a208
- (void)stopAndResetScrollWithDuration:(double)arg1;	// IMP=0x0000000100069a94
- (void)stopAnimatingWithoutResetWithDuration:(double)arg1;	// IMP=0x0000000100069a04
- (void)stopAnimating;	// IMP=0x0000000100069948
- (void)setNeedsDisplay;	// IMP=0x00000001000695b0
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000001000694d8
- (void)_clearAttributedStrings;	// IMP=0x0000000100069344
- (void)setAttributedText:(id)arg1;	// IMP=0x0000000100069284
- (void)setText:(id)arg1;	// IMP=0x00000001000691f8
- (void)dealloc;	// IMP=0x0000000100069180
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100068ecc

@end

