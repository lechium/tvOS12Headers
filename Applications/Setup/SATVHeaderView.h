//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIActivityIndicatorView, UILabel;

@interface SATVHeaderView : UIView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_subtitleLabel;	// 16 = 0x10
    UIActivityIndicatorView *_activitiyIndicatorView;	// 24 = 0x18
    UIView *_activityIndicatorContainerView;	// 32 = 0x20
}

@property(retain, nonatomic) UIView *activityIndicatorContainerView; // @synthesize activityIndicatorContainerView=_activityIndicatorContainerView;
@property(retain, nonatomic) UIActivityIndicatorView *activitiyIndicatorView; // @synthesize activitiyIndicatorView=_activitiyIndicatorView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;	// IMP=0x000000010008ade8
- (void)hideActivityIndicator;	// IMP=0x000000010008ac6c
- (void)showActivityIndicator;	// IMP=0x000000010008ab80
- (struct CGSize)_subtitleSizeForSize:(struct CGSize)arg1;	// IMP=0x000000010008aafc
- (struct CGSize)_titleSizeForSize:(struct CGSize)arg1;	// IMP=0x000000010008aa78
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010008a920
- (id)viewForLastBaselineLayout;	// IMP=0x000000010008a914
- (id)viewForFirstBaselineLayout;	// IMP=0x000000010008a908
- (void)layoutSubviews;	// IMP=0x000000010008a678
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010008a07c

@end

