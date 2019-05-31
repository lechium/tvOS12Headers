//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImageView, UILabel;

@interface TVPSharedPSOneUpSupplementaryView : UIView
{
    NSString *_commentsBadgeResource;	// 8 = 0x8
    unsigned long long _totalComments;	// 16 = 0x10
    UIView *_commentsBubbleView;	// 24 = 0x18
    UILabel *_commentsTextView;	// 32 = 0x20
    UIImageView *_swipeUpChevronImageView;	// 40 = 0x28
    UIImageView *_bubbleImageView;	// 48 = 0x30
}

@property(retain, nonatomic) UIImageView *bubbleImageView; // @synthesize bubbleImageView=_bubbleImageView;
@property(retain, nonatomic) UIImageView *swipeUpChevronImageView; // @synthesize swipeUpChevronImageView=_swipeUpChevronImageView;
@property(retain, nonatomic) UILabel *commentsTextView; // @synthesize commentsTextView=_commentsTextView;
@property(retain, nonatomic) UIView *commentsBubbleView; // @synthesize commentsBubbleView=_commentsBubbleView;
@property(nonatomic) unsigned long long totalComments; // @synthesize totalComments=_totalComments;
@property(copy, nonatomic) NSString *commentsBadgeResource; // @synthesize commentsBadgeResource=_commentsBadgeResource;
- (void).cxx_destruct;	// IMP=0x000000010002dd78
- (void)_addSubviews;	// IMP=0x000000010002dc28
- (void)layoutSubviews;	// IMP=0x000000010002d830
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010002d748
- (id)init;	// IMP=0x000000010002d414

@end

