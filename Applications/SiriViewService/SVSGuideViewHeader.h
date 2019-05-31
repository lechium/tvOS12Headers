//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

#import "SiriUIReusableView.h"

@class NSString, SiriUISnippetViewController, UILabel, UIView;

@interface SVSGuideViewHeader : UICollectionReusableView <SiriUIReusableView>
{
    UIView *_contentView;	// 8 = 0x8
    UILabel *_headerLabel;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    struct UIEdgeInsets _edgeInsets;	// 32 = 0x20
}

+ (id)_font;	// IMP=0x00000001000257e0
+ (struct UIEdgeInsets)_edgeInsets;	// IMP=0x000000010002578c
+ (id)elementKind;	// IMP=0x000000010002577c
+ (id)reuseIdentifier;	// IMP=0x000000010002571c
+ (double)firstLineBaselineOffsetFromTop;	// IMP=0x0000000100025638
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 text:(id)arg2;	// IMP=0x0000000100025590
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 text:(id)arg2 edgeInsets:(struct UIEdgeInsets)arg3;	// IMP=0x0000000100025404
+ (double)defaultHeight;	// IMP=0x0000000100025314
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;	// IMP=0x0000000100025834
- (void)layoutSubviews;	// IMP=0x00000001000251b0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100024f84

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak SiriUISnippetViewController *snippetViewController;
@property(readonly) Class superclass;

@end
