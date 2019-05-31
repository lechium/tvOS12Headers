//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSTimer, TVPImageLoaderQueue, UIImageView;

@interface TVPImageCrossfadeView : UIView
{
    NSTimer *_crossfadeTimer;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    TVPImageLoaderQueue *_loaderQueue;	// 24 = 0x18
    NSArray *_imageProxies;	// 32 = 0x20
    double _crossfadePeriod;	// 40 = 0x28
    double _crossfadeDuration;	// 48 = 0x30
    struct UIEdgeInsets _padding;	// 56 = 0x38
}

@property(nonatomic) double crossfadeDuration; // @synthesize crossfadeDuration=_crossfadeDuration;
@property(nonatomic) double crossfadePeriod; // @synthesize crossfadePeriod=_crossfadePeriod;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(copy, nonatomic) NSArray *imageProxies; // @synthesize imageProxies=_imageProxies;
- (void).cxx_destruct;	// IMP=0x000000010003378c
- (void)_crossfadeToImage:(id)arg1;	// IMP=0x0000000100033484
- (void)_loadNextImage:(id)arg1;	// IMP=0x00000001000333dc
- (void)_startTimer;	// IMP=0x0000000100033324
- (void)layoutSubviews;	// IMP=0x0000000100032f88
- (void)didMoveToSuperview;	// IMP=0x0000000100032f20
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100032e18

@end

