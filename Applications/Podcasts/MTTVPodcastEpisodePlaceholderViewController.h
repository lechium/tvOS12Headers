//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class MTPodcast, UIImageView;

@interface MTTVPodcastEpisodePlaceholderViewController : UIViewController
{
    MTPodcast *_podcast;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) MTPodcast *podcast; // @synthesize podcast=_podcast;
- (void).cxx_destruct;	// IMP=0x0000000100043830
- (id)_fetchArtwork;	// IMP=0x0000000100043670
- (_Bool)_isDarkBackground;	// IMP=0x0000000100043620
- (void)_updateColors;	// IMP=0x000000010004355c
- (void)_update;	// IMP=0x00000001000434b8
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100043380
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000432e4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100043294
- (void)viewDidLoad;	// IMP=0x0000000100043244
- (void)loadView;	// IMP=0x00000001000431a8
- (id)initWithPodcast:(id)arg1;	// IMP=0x0000000100043134

@end
