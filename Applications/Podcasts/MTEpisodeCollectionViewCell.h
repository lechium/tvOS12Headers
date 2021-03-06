//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTCollectionViewCell.h"

#import "MTEpisodeLockupDelegate.h"

@class MTColorTheme, MTEpisode, MTEpisodeActionController, MTEpisodeLockup, NSString, UIView;

@interface MTEpisodeCollectionViewCell : MTCollectionViewCell <MTEpisodeLockupDelegate>
{
    UIView *_lockupContainer;	// 8 = 0x8
    MTEpisodeLockup *_episodeLockup;	// 16 = 0x10
}

+ (double)maximumContentWidthForStyle:(unsigned long long)arg1;	// IMP=0x00000001000ad928
+ (struct CGSize)artworkSizeForStyle:(unsigned long long)arg1;	// IMP=0x00000001000ad914
+ (double)estimatedHeightForWidth:(double)arg1 style:(unsigned long long)arg2;	// IMP=0x00000001000ad83c
+ (double)estimatedHeightForWidth:(double)arg1 showsArtwork:(_Bool)arg2;	// IMP=0x00000001000ad7f4
+ (unsigned long long)styleForWidth:(double)arg1 showsArtwork:(_Bool)arg2;	// IMP=0x00000001000ad7e0
@property(retain, nonatomic) MTEpisodeLockup *episodeLockup; // @synthesize episodeLockup=_episodeLockup;
@property(retain, nonatomic) UIView *lockupContainer; // @synthesize lockupContainer=_lockupContainer;
- (void).cxx_destruct;	// IMP=0x00000001000af0bc
- (void)clearLayer:(id)arg1;	// IMP=0x00000001000af020
- (void)lockupDidChangeSize:(id)arg1;	// IMP=0x00000001000aef2c
- (void)lockup:(id)arg1 moreButtonTapped:(id)arg2;	// IMP=0x00000001000aeebc
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000001000aee24
- (void)moreButtonTapped:(id)arg1;	// IMP=0x00000001000aee20
- (void)updateOverlayForSelectedOrIsNew;	// IMP=0x00000001000ae8d0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000ae7f0
- (void)layoutSubviews;	// IMP=0x00000001000ae690
- (void)prepareForReuse;	// IMP=0x00000001000ae5e8
- (void)fixEmptyTextContainers;	// IMP=0x00000001000ae5a8
- (void)invalidateLayoutMargins;	// IMP=0x00000001000ae568
- (void)invalidateSizeMetrics;	// IMP=0x00000001000ae528
- (void)updateActionSheetsAndPopovers;	// IMP=0x00000001000ae4e8
- (void)dismissActionSheetsAndPopovers;	// IMP=0x00000001000ae4a8
@property(readonly, nonatomic) MTEpisodeActionController *actionController;
@property(nonatomic, getter=isCurrentPlayerItem) _Bool currentPlayerItem;
@property(nonatomic, getter=isExpanded) _Bool expanded;
@property(retain, nonatomic) MTColorTheme *colorTheme;
@property(retain, nonatomic) MTEpisode *episode;
- (void)updateCurrentRowHeight;	// IMP=0x00000001000ae104
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000001000adff8
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000001000adfa8
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000ade78
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000ade6c
@property(nonatomic) _Bool showsPlayState;
@property(nonatomic) _Bool showsPubDate;
@property(nonatomic) unsigned long long style;
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x00000001000adbc4
- (void)dealloc;	// IMP=0x00000001000adb50
- (void)setupCell;	// IMP=0x00000001000ad994
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000ad93c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MTEpisodeCollectionViewCellDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

