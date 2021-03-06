//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TVMusicPlaybackHelper : NSObject
{
}

+ (_Bool)_isPlayingOnLocalDevice;	// IMP=0x000000010009b6d8
+ (_Bool)_isAppleMusicSubscriber;	// IMP=0x000000010009b65c
+ (_Bool)_isVideoItemType:(unsigned long long)arg1;	// IMP=0x000000010009b64c
+ (void)_queueSongsWithRequest:(id)arg1 playNext:(_Bool)arg2;	// IMP=0x000000010009b54c
+ (void)_playSongsWithRequest:(id)arg1 playbackAction:(unsigned long long)arg2;	// IMP=0x000000010009b520
+ (void)_playSongsWithRequest:(id)arg1 startIdentifiers:(id)arg2 shuffle:(_Bool)arg3 initialPlaybackType:(unsigned long long)arg4;	// IMP=0x000000010009b3fc
+ (void)_playLibraryItemWithRequest:(id)arg1 identifiers:(id)arg2 playbackType:(unsigned long long)arg3;	// IMP=0x000000010009b2f0
+ (void)_playRequestWithItemType:(unsigned long long)arg1 requestBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010009afe8
+ (void)_playUsingAirPlayWithPlaybackIntent:(id)arg1 initialPlaybackType:(unsigned long long)arg2 playbackAction:(unsigned long long)arg3;	// IMP=0x000000010009abe0
+ (void)_playWithPlaybackIntent:(id)arg1 initialPlaybackType:(unsigned long long)arg2 playbackAction:(unsigned long long)arg3 checkSubscriptionStatus:(_Bool)arg4;	// IMP=0x000000010009a8a4
+ (void)_playVideoItemWithRequest:(id)arg1 item:(id)arg2;	// IMP=0x000000010009a82c
+ (id)_songsRequestForContainer:(id)arg1;	// IMP=0x000000010009a620
+ (void)playSongsInContainer:(id)arg1 startIdentifiers:(id)arg2 shuffle:(_Bool)arg3 itemSortDescriptors:(id)arg4 inSectionKind:(id)arg5 sectionSortDescriptors:(id)arg6 initialPlaybackType:(unsigned long long)arg7;	// IMP=0x000000010009a3e4
+ (void)playSongsInContainer:(id)arg1 startIdentifiers:(id)arg2 shuffle:(_Bool)arg3 itemSortDescriptors:(id)arg4;	// IMP=0x000000010009a350
+ (void)playSongsInContainer:(id)arg1 startIdentifiers:(id)arg2 initialPlaybackType:(unsigned long long)arg3;	// IMP=0x000000010009a2e0
+ (void)playSongsInContainer:(id)arg1 startIdentifiers:(id)arg2 shuffle:(_Bool)arg3;	// IMP=0x000000010009a26c
+ (void)shuffleAllLibrarySongs;	// IMP=0x000000010009a210
+ (void)playItemType:(unsigned long long)arg1 withPersistentID:(id)arg2 playbackAction:(unsigned long long)arg3;	// IMP=0x0000000100099b80
+ (void)playItemType:(unsigned long long)arg1 withPersistentID:(id)arg2;	// IMP=0x0000000100099b70
+ (void)playWithPlaybackIntent:(id)arg1 initialPlaybackType:(unsigned long long)arg2;	// IMP=0x0000000100099914
+ (void)playRadioWithPlaybackIntent:(id)arg1;	// IMP=0x00000001000998fc
+ (void)playFromRequest:(id)arg1 startItemIdentifiers:(id)arg2 initialPlaybackType:(unsigned long long)arg3;	// IMP=0x00000001000998a0
+ (void)playFromRequest:(id)arg1 shuffle:(_Bool)arg2 initialPlaybackType:(unsigned long long)arg3;	// IMP=0x0000000100099884
+ (void)playItemType:(unsigned long long)arg1 withMPObject:(id)arg2;	// IMP=0x0000000100099628
+ (_Bool)canPlayItemWithStoreID:(id)arg1 playbackAction:(unsigned long long)arg2;	// IMP=0x000000010009941c
+ (_Bool)canPlayItemType:(unsigned long long)arg1 withPersistentID:(id)arg2 playbackAction:(unsigned long long)arg3;	// IMP=0x000000010009916c

@end

