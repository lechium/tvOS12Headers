//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TVPPlaybackViewControllerDelegate.h"

@class NSString, TVPPlaybackViewController;

@interface TVHNowPlayingManager : NSObject <TVPPlaybackViewControllerDelegate>
{
    TVPPlaybackViewController *_nowPlayingViewController;	// 8 = 0x8
}

+ (id)_contextMenuDataWithMenuItems:(id)arg1 title:(id)arg2 artistName:(id)arg3;	// IMP=0x0000000100009a6c
+ (id)_mediaItemForPlayerMediaItem:(id)arg1;	// IMP=0x00000001000099ec
+ (id)sharedInstance;	// IMP=0x0000000100008c78
@property(retain, nonatomic) TVPPlaybackViewController *nowPlayingViewController; // @synthesize nowPlayingViewController=_nowPlayingViewController;
- (void).cxx_destruct;	// IMP=0x0000000100009c28
- (id)_displayCollectionURLForMediaItem:(id)arg1 collectionType:(unsigned long long)arg2;	// IMP=0x000000010000990c
- (void)_displayCollectionForMediaItem:(id)arg1 collectionType:(unsigned long long)arg2;	// IMP=0x00000001000097b0
- (id)_displayAlbumArtistMenuWithPlayerMediaItem:(id)arg1;	// IMP=0x000000010000952c
- (id)_displayAlbumMenuWithPlayerMediaItem:(id)arg1;	// IMP=0x00000001000092a8
- (void)_handleNowPlayingViewDidDisappearNotification:(id)arg1;	// IMP=0x00000001000091e4
- (void)_handleNowPlayingViewWillAppearNotification:(id)arg1;	// IMP=0x0000000100009160
- (void)contextMenuForMediaItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008f60
- (void)showNowPlayingViewControllerIfNeeded;	// IMP=0x0000000100008e78
- (void)dealloc;	// IMP=0x0000000100008dc4
- (id)init;	// IMP=0x0000000100008cf8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
