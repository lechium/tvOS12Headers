//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTTVPodcastEpisodePlaceholderViewController.h"

@class MTAllPropertyChangesQueryObserver, NSString, UILabel;

@interface MTTVPodcastGoneDarkDetailViewController : MTTVPodcastEpisodePlaceholderViewController
{
    UILabel *_reasonLabel;	// 8 = 0x8
    NSString *_darkReason;	// 16 = 0x10
    MTAllPropertyChangesQueryObserver *_darkObserver;	// 24 = 0x18
}

@property(retain, nonatomic) MTAllPropertyChangesQueryObserver *darkObserver; // @synthesize darkObserver=_darkObserver;
@property(retain, nonatomic) NSString *darkReason; // @synthesize darkReason=_darkReason;
@property(retain, nonatomic) UILabel *reasonLabel; // @synthesize reasonLabel=_reasonLabel;
- (void).cxx_destruct;	// IMP=0x000000010015a4d0
- (void)viewWillLayoutSubviews;	// IMP=0x000000010015a01c
- (void)viewDidLoad;	// IMP=0x0000000100159fac
- (void)loadView;	// IMP=0x0000000100159f10
- (void)updateDarkReason;	// IMP=0x0000000100159d00
- (void)_updateColors;	// IMP=0x0000000100159c4c
- (void)setPodcast:(id)arg1;	// IMP=0x0000000100159b60
- (id)initWithPodcast:(id)arg1;	// IMP=0x0000000100159b2c

@end

