//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSCache, NSString, UIColor, UILabel;

@interface MTLabelStackView : UIView
{
    _Bool _heightWillChange;	// 8 = 0x8
    NSCache *_textSizeCache;	// 16 = 0x10
    _Bool _enabled;	// 24 = 0x18
    NSString *_titleTextStyle;	// 32 = 0x20
    NSString *_subtitleTextStyle;	// 40 = 0x28
    UIColor *_titleTextColor;	// 48 = 0x30
    UIColor *_subtitleTextColor;	// 56 = 0x38
    id <MTLabelStackViewDelegate> _delegate;	// 64 = 0x40
    double _subtitleMaxWidth;	// 72 = 0x48
    UILabel *_titleLabel;	// 80 = 0x50
    UILabel *_subtitleLabel;	// 88 = 0x58
}

+ (unsigned long long)defaultSubtitleNumberOfLines;	// IMP=0x00000001000f7a84
+ (unsigned long long)defaultTitleNumberOfLines;	// IMP=0x00000001000f7a7c
+ (id)defaultSubtitleFont;	// IMP=0x00000001000f7a18
+ (id)defaultTitleFont;	// IMP=0x00000001000f79b4
+ (id)defaultSubtitleTextStyle;	// IMP=0x00000001000f79a4
+ (id)defaultTitleTextStyle;	// IMP=0x00000001000f7994
+ (double)distanceBetweenLabelFramesWithTitleFont:(id)arg1 subtitleFont:(id)arg2 multilineTitle:(_Bool)arg3;	// IMP=0x00000001000f78d4
+ (double)distanceBetweenLabelFrames;	// IMP=0x00000001000f780c
+ (double)maxHeightForTitleNumberOfLines:(unsigned long long)arg1 subtitleNumberOfLines:(unsigned long long)arg2;	// IMP=0x00000001000f7704
+ (double)maxHeight;	// IMP=0x00000001000f7694
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) double subtitleMaxWidth; // @synthesize subtitleMaxWidth=_subtitleMaxWidth;
@property(nonatomic) __weak id <MTLabelStackViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001000f9060
@property(nonatomic) unsigned long long subtitleNumberOfLines;
@property(nonatomic) unsigned long long titleNumberOfLines;
@property(retain, nonatomic) UIColor *subtitleTextColor; // @synthesize subtitleTextColor=_subtitleTextColor;
@property(retain, nonatomic) UIColor *titleTextColor; // @synthesize titleTextColor=_titleTextColor;
@property(retain, nonatomic) NSString *subtitleTextStyle; // @synthesize subtitleTextStyle=_subtitleTextStyle;
@property(retain, nonatomic) NSString *titleTextStyle; // @synthesize titleTextStyle=_titleTextStyle;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *title;
- (void)_notifyDelegateIfHeightChanged;	// IMP=0x00000001000f8488
- (void)_heightWillChange;	// IMP=0x00000001000f846c
- (void)_updateSubtitleFont;	// IMP=0x00000001000f83b8
- (void)_updateTitleFont;	// IMP=0x00000001000f8304
- (id)sizeCacheKeyForLabel:(id)arg1 width:(double)arg2;	// IMP=0x00000001000f82c8
- (double)subtitleHeightForWidth:(double)arg1;	// IMP=0x00000001000f81a0
- (double)titleHeightForWidth:(double)arg1;	// IMP=0x00000001000f8078
- (double)distanceBetweenLabelFrames;	// IMP=0x00000001000f7f04
- (double)heightForWidth:(double)arg1;	// IMP=0x00000001000f7e80
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000f7e50
- (void)layoutSubviews;	// IMP=0x00000001000f7ca8
- (void)updateFonts;	// IMP=0x00000001000f7bb8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000f7a8c

@end

