//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MTPlaybackIdentifierUtil : NSObject
{
}

+ (unsigned long long)_playReasonFromString:(id)arg1;	// IMP=0x00000001000cccf4
+ (long long)_episodeOrderFromString:(id)arg1;	// IMP=0x00000001000ccc78
+ (id)_playbackRequestIdentifierWithHost:(id)arg1 queryComponents:(id)arg2;	// IMP=0x00000001000cc9e8
+ (id)_playbackRequestIdentifierWithHost:(id)arg1 queryKey:(id)arg2 value:(id)arg3;	// IMP=0x00000001000cc8d4
+ (unsigned long long)_playQueueTypeForRequestURL:(id)arg1;	// IMP=0x00000001000cc698
+ (id)requestIdentifierForPlayerItem:(id)arg1;	// IMP=0x00000001000cc1c8
+ (void)fetchPlayerItemsForPlaybackQueueRequestIdentifiers:(id)arg1 initiatedByAnotherUser:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000cb5f8
+ (void)fetchPlayerItemsForPlaybackQueueRequestIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000cb5a4
+ (struct _MRSystemAppPlaybackQueue *)playbackQueueWithAccountInfoForPlayerItem:(id)arg1;	// IMP=0x00000001000cb4b4
+ (id)requestIdentifiersForManifest:(id)arg1 queueStatus:(out unsigned long long *)arg2;	// IMP=0x00000001000cae18
+ (struct _MRSystemAppPlaybackQueue *)playbackQueueWithAccountInfoForManifest:(id)arg1 queueStatus:(out unsigned long long *)arg2;	// IMP=0x00000001000cadc0
+ (id)podcastUuidForSetPlaybackQueueRequestIdentifier:(id)arg1;	// IMP=0x00000001000ca7f4
+ (id)episodeUuidForSetPlaybackQueueRequestIdentifier:(id)arg1;	// IMP=0x00000001000ca4ac
+ (struct _MRSystemAppPlaybackQueue *)playbackQueueWithAccountInfoForIdentifiers:(id)arg1;	// IMP=0x00000001000ca3ec
+ (id)universalPlaybackQueueRequestIdentifierForEpisode:(id)arg1;	// IMP=0x00000001000c9fa0
+ (id)universalPlaybackQueueIdentifiersForStationUuid:(id)arg1 limit:(long long)arg2 queueStatus:(out unsigned long long *)arg3;	// IMP=0x00000001000c9af4
+ (id)universalPlaybackQueueIdentifiersForStationUuid:(id)arg1 episodeUuid:(id)arg2 episodeGuid:(id)arg3 episodeStoreId:(unsigned long long)arg4 podcastFeedUrl:(id)arg5;	// IMP=0x00000001000c98cc
+ (id)universalPlaybackQueueIdentifierForStationUuid:(id)arg1 episodeGuid:(id)arg2 episodeStoreId:(unsigned long long)arg3 podcastFeedUrl:(id)arg4;	// IMP=0x00000001000c9838
+ (id)localPlaybackQueueIdentifierForStationUuid:(id)arg1 episodeUuid:(id)arg2;	// IMP=0x00000001000c97c8
+ (id)localPlaybackQueueIdentifierForStationUuid:(id)arg1;	// IMP=0x00000001000c97b8
+ (id)playbackQueueIdentifierForPodcastAdamId:(id)arg1 sampPlaybackOrder:(id)arg2;	// IMP=0x00000001000c96a8
+ (id)universalPlaybackQueueIdentifiersForPodcastUuid:(id)arg1 playbackOrder:(long long)arg2 limit:(long long)arg3 queueStatus:(out unsigned long long *)arg4;	// IMP=0x00000001000c91fc
+ (id)universalPlaybackQueueIdentifiersForPodcastUuid:(id)arg1 sampPlaybackOrder:(id)arg2 limit:(long long)arg3 queueStatus:(out unsigned long long *)arg4;	// IMP=0x00000001000c916c
+ (id)universalPlaybackQueueIdentifiersForPodcastUuid:(id)arg1 podcastFeedUrl:(id)arg2 podcastStoreId:(unsigned long long)arg3 episodeUuid:(id)arg4 episodeGuid:(id)arg5 episodeStoreId:(unsigned long long)arg6 sampPlaybackOrder:(id)arg7;	// IMP=0x00000001000c8c04
+ (id)universalPlaybackQueueIdentifiersForPodcastUuid:(id)arg1 podcastFeedUrl:(id)arg2 podcastStoreId:(unsigned long long)arg3 episodeUuid:(id)arg4 episodeGuid:(id)arg5 episodeStoreId:(unsigned long long)arg6;	// IMP=0x00000001000c8b30
+ (id)universalPlaybackQueueIdentifiersForPodcastUuid:(id)arg1 podcastFeedUrl:(id)arg2 podcastStoreId:(unsigned long long)arg3;	// IMP=0x00000001000c8aa0
+ (id)universalPlaybackQueueIdentifierForPodcastFeedUrl:(id)arg1 podcastStoreId:(unsigned long long)arg2 episodeGuid:(id)arg3 episodeStoreId:(unsigned long long)arg4 sampPlaybackOrder:(id)arg5;	// IMP=0x00000001000c89f8
+ (id)localPlaybackQueueIdentifierForPodcastUuid:(id)arg1 episodeUuid:(id)arg2 sampPlaybackOrder:(id)arg3;	// IMP=0x00000001000c8914
+ (id)localPlaybackQueueIdentifierForPodcastUuid:(id)arg1 sampPlaybackOrder:(id)arg2;	// IMP=0x00000001000c88ac
+ (id)playbackQueueIdentifierForEpisodeAdamId:(id)arg1;	// IMP=0x00000001000c8888
+ (id)playbackQueueIdentifierForPlayMyPodcastsWithPlaybackOrder:(id)arg1;	// IMP=0x00000001000c8864
+ (_Bool)isUniversalPlaybackIdentifierURLString:(id)arg1;	// IMP=0x00000001000c87e0
+ (_Bool)isSubscribeCommandURLString:(id)arg1;	// IMP=0x00000001000c875c
+ (_Bool)isLocalSetPlaybackQueueURLString:(id)arg1;	// IMP=0x00000001000c85f8
+ (id)playbackRequestURLWithPlayReason:(unsigned long long)arg1 baseRequestURLString:(id)arg2;	// IMP=0x00000001000c8348

@end

