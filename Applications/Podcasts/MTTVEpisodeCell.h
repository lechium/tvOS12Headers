//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTTVEpisodeGenericCell.h"

@class MTEpisodeArtworkView, UIImageView, UILabel;

@interface MTTVEpisodeCell : MTTVEpisodeGenericCell
{
    _Bool _showsPlayState;	// 8 = 0x8
    _Bool _showsArtwork;	// 9 = 0x9
    MTEpisodeArtworkView *_artworkView;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_metadataLabel;	// 32 = 0x20
    UIImageView *_explicitIconView;	// 40 = 0x28
    UIImageView *_videoIconView;	// 48 = 0x30
}

+ (double)capHeightToTop;	// IMP=0x000000010005ca8c
+ (id)metadataFont;	// IMP=0x000000010005ca6c
+ (id)titleFont;	// IMP=0x000000010005ca4c
+ (double)height;	// IMP=0x000000010005ca40
@property(retain, nonatomic) UIImageView *videoIconView; // @synthesize videoIconView=_videoIconView;
@property(retain, nonatomic) UIImageView *explicitIconView; // @synthesize explicitIconView=_explicitIconView;
@property(retain, nonatomic) UILabel *metadataLabel; // @synthesize metadataLabel=_metadataLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MTEpisodeArtworkView *artworkView; // @synthesize artworkView=_artworkView;
@property(nonatomic) _Bool showsArtwork; // @synthesize showsArtwork=_showsArtwork;
@property(nonatomic) _Bool showsPlayState; // @synthesize showsPlayState=_showsPlayState;
- (void).cxx_destruct;	// IMP=0x000000010005ebc4
- (void)updatePlayStatusViewImage;	// IMP=0x000000010005ea94
- (void)updateColors;	// IMP=0x000000010005e940
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010005e3ac
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010005e2dc
- (void)layoutSubviews;	// IMP=0x000000010005d9c4
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000010005d94c
- (void)updatePlayStatusForCurrentPlayerItemDidChange;	// IMP=0x000000010005d8c0
- (void)setCurrentPlayerItem:(_Bool)arg1;	// IMP=0x000000010005d870
- (void)configureSubviews;	// IMP=0x000000010005d63c
- (id)_fetchMetadataText;	// IMP=0x000000010005d318
- (void)updateArtworkNowPlayingIndicator;	// IMP=0x000000010005d2bc
- (void)updateArtwork;	// IMP=0x000000010005d1c0
- (void)artworkDidChange:(id)arg1;	// IMP=0x000000010005d100
- (void)setEpisode:(id)arg1;	// IMP=0x000000010005cbac
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010005cb50

@end

