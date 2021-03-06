//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MTPlaybackQueueFactory : NSObject
{
}

+ (id)_uuidForEpisode:(id)arg1;	// IMP=0x00000001001c947c
+ (id)_latestOrOldestEpisodeForPodcastUuid:(id)arg1 restrictToUserEpisodes:(_Bool)arg2 excludeExplicit:(long long)arg3 latest:(_Bool)arg4 ctx:(id)arg5;	// IMP=0x00000001001c9174
+ (id)_oldestEpisodeForPodcastUuid:(id)arg1 restrictToUserEpisodes:(_Bool)arg2 excludeExplicit:(long long)arg3 ctx:(id)arg4;	// IMP=0x00000001001c90f4
+ (id)_latestEpisodeForPodcastUuid:(id)arg1 restrictToUserEpisodes:(_Bool)arg2 excludeExplicit:(long long)arg3 ctx:(id)arg4;	// IMP=0x00000001001c9074
+ (id)_episodeToPlayForPodcastUuid:(id)arg1 playbackOrder:(long long)arg2 excludeExplicit:(long long)arg3 ctx:(id)arg4;	// IMP=0x00000001001c8e34
+ (id)episodeUuidsForPlayStationUuid:(id)arg1 limit:(long long)arg2;	// IMP=0x00000001001c88e4
+ (id)episodeUuidsForPlayPodcastUuid:(id)arg1 order:(long long)arg2 limit:(long long)arg3 error:(long long *)arg4;	// IMP=0x00000001001c816c
+ (_Bool)_isContinuousPlaybackEnabledForLimit:(long long)arg1;	// IMP=0x00000001001c80e8
+ (id)_manifestForPlayMyOldestPodcasts;	// IMP=0x00000001001c8098
+ (id)_manifestForPlayMyLatestPodcasts;	// IMP=0x00000001001c8048
+ (id)_manifestForPlayMyPodcasts;	// IMP=0x00000001001c7fb4
+ (id)playEpisodeUuid:(id)arg1 context:(long long)arg2 limit:(long long)arg3;	// IMP=0x00000001001c7ce8
+ (id)playEpisodeUuid:(id)arg1 limit:(long long)arg2;	// IMP=0x00000001001c7cd0
+ (id)playEpisodeUuid:(id)arg1 context:(long long)arg2;	// IMP=0x00000001001c7cc0
+ (id)playEpisodeUuid:(id)arg1;	// IMP=0x00000001001c7cb0
+ (id)playStationUuid:(id)arg1 episodeUuid:(id)arg2 limit:(long long)arg3;	// IMP=0x00000001001c7938
+ (id)playStationUuid:(id)arg1 limit:(long long)arg2;	// IMP=0x00000001001c7920
+ (id)playStationUuid:(id)arg1 episodeUuid:(id)arg2;	// IMP=0x00000001001c78b8
+ (id)playStationUuid:(id)arg1;	// IMP=0x00000001001c78a8
+ (id)playPodcastUuid:(id)arg1 order:(long long)arg2 limit:(long long)arg3;	// IMP=0x00000001001c7898
+ (id)playPodcastUuid:(id)arg1 order:(long long)arg2 limit:(long long)arg3 error:(long long *)arg4;	// IMP=0x00000001001c7530
+ (id)playPodcastUuid:(id)arg1 limit:(long long)arg2;	// IMP=0x00000001001c7518
+ (id)playPodcastUuid:(id)arg1 order:(long long)arg2;	// IMP=0x00000001001c7508
+ (id)playPodcastUuid:(id)arg1;	// IMP=0x00000001001c74f8
+ (id)playMyPodcastsWithOrder:(long long)arg1;	// IMP=0x00000001001c749c
+ (id)playListenNow;	// IMP=0x00000001001c7178

@end

