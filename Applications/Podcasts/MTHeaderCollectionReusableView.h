//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class NSString, UILabel, UIView;

@interface MTHeaderCollectionReusableView : UICollectionReusableView
{
    UILabel *_headerLabel;	// 8 = 0x8
}

+ (id)reuseIdentifier;	// IMP=0x0000000100110c3c
+ (double)height;	// IMP=0x0000000100110c30
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
- (void).cxx_destruct;	// IMP=0x0000000100111098
- (void)setupSubviews;	// IMP=0x0000000100110ff8
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100110f70
- (void)prepareForReuse;	// IMP=0x0000000100110f1c
- (void)layoutSubviews;	// IMP=0x0000000100110e6c
@property(copy, nonatomic) NSString *title;
@property(readonly, nonatomic) UIView *titleView;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100110c58

@end

