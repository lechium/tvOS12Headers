//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class NSLayoutConstraint, NSString, UILabel;

@interface TVPPhotoLibraryMomentsHeaderView : UICollectionReusableView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_subtitleLabel;	// 16 = 0x10
    UILabel *_dateLabel;	// 24 = 0x18
    NSLayoutConstraint *_titleBottomConstraint;	// 32 = 0x20
    NSLayoutConstraint *_subtitleBottomConstraint;	// 40 = 0x28
    NSLayoutConstraint *_dateBottomConstraint;	// 48 = 0x30
    double _focusedMargin;	// 56 = 0x38
    struct CGRect _focusedRect;	// 64 = 0x40
}

@property(nonatomic) double focusedMargin; // @synthesize focusedMargin=_focusedMargin;
@property(nonatomic) struct CGRect focusedRect; // @synthesize focusedRect=_focusedRect;
@property(retain, nonatomic) NSLayoutConstraint *dateBottomConstraint; // @synthesize dateBottomConstraint=_dateBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subtitleBottomConstraint; // @synthesize subtitleBottomConstraint=_subtitleBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleBottomConstraint; // @synthesize titleBottomConstraint=_titleBottomConstraint;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;	// IMP=0x0000000100028f10
- (_Bool)_isLabel:(id)arg1 aboveFocusedRect:(struct CGRect)arg2;	// IMP=0x0000000100028c38
- (_Bool)_hasSubtitle;	// IMP=0x0000000100028bdc
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x00000001000285bc
- (void)prepareForReuse;	// IMP=0x00000001000284d0
@property(copy, nonatomic) NSString *momentDate;
@property(copy, nonatomic) NSString *momentSubtitle;
@property(copy, nonatomic) NSString *momentTitle;
- (struct CGRect)_effectiveFocusedRect;	// IMP=0x0000000100028008
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100026e34
- (_Bool)canBecomeFocused;	// IMP=0x0000000100026e2c

@end

