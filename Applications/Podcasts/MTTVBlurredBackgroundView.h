//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UIVisualEffectView;

@interface MTTVBlurredBackgroundView : UIView
{
    UIImageView *_backgroundImageView;	// 8 = 0x8
    UIVisualEffectView *_blurredView;	// 16 = 0x10
}

@property(retain, nonatomic) UIVisualEffectView *blurredView; // @synthesize blurredView=_blurredView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;	// IMP=0x000000010005258c
- (void)setupSubviews;	// IMP=0x0000000100052498
- (void)layoutSubviews;	// IMP=0x0000000100052244
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000521ec

@end
