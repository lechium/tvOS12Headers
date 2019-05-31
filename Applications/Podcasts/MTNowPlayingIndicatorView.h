//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSMutableArray, UIColor;

@interface MTNowPlayingIndicatorView : UIControl
{
    NSMutableArray *_levelViews;	// 8 = 0x8
    _Bool _showsLevelGutters;	// 16 = 0x10
    double _interLevelSpacing;	// 24 = 0x18
    double _levelCornerRadius;	// 32 = 0x20
    double _levelWidth;	// 40 = 0x28
    double _maximumLevelHeight;	// 48 = 0x30
    double _minimumLevelHeight;	// 56 = 0x38
    long long _numberOfLevels;	// 64 = 0x40
    long long _playbackState;	// 72 = 0x48
    long long _bounceStyle;	// 80 = 0x50
    UIColor *_levelGuttersColor;	// 88 = 0x58
}

@property(retain, nonatomic) UIColor *levelGuttersColor; // @synthesize levelGuttersColor=_levelGuttersColor;
@property(nonatomic) _Bool showsLevelGutters; // @synthesize showsLevelGutters=_showsLevelGutters;
@property(nonatomic) long long bounceStyle; // @synthesize bounceStyle=_bounceStyle;
@property(nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
@property(nonatomic) long long numberOfLevels; // @synthesize numberOfLevels=_numberOfLevels;
@property(nonatomic) double minimumLevelHeight; // @synthesize minimumLevelHeight=_minimumLevelHeight;
@property(nonatomic) double maximumLevelHeight; // @synthesize maximumLevelHeight=_maximumLevelHeight;
@property(nonatomic) double levelWidth; // @synthesize levelWidth=_levelWidth;
@property(nonatomic) double levelCornerRadius; // @synthesize levelCornerRadius=_levelCornerRadius;
@property(nonatomic) double interLevelSpacing; // @synthesize interLevelSpacing=_interLevelSpacing;
- (void).cxx_destruct;	// IMP=0x00000001000fd848
- (_Bool)canBecomeFocused;	// IMP=0x00000001000fd780
- (double)_fixedSeedValueForBarIndex:(unsigned long long)arg1;	// IMP=0x00000001000fd75c
- (double)_randomSeedValueForBar;	// IMP=0x00000001000fd724
- (double)_seedValueForBarIndex:(unsigned long long)arg1;	// IMP=0x00000001000fd6c8
- (void)_updateLevelAnimations;	// IMP=0x00000001000fd020
- (void)_reloadLevelViews;	// IMP=0x00000001000fcd00
- (void)_removeAllAnimations:(_Bool)arg1;	// IMP=0x00000001000fca34
- (void)tintColorDidChange;	// IMP=0x00000001000fc89c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000fc838
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000001000fc6ec
- (void)layoutSubviews;	// IMP=0x00000001000fc4f8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000fc3b0

@end

