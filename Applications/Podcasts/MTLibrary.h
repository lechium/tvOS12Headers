//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTCoalescableWorkController;

@interface MTLibrary : NSObject
{
    MTCoalescableWorkController *_deleteHiddenPodcastsWorkController;	// 8 = 0x8
    _Bool _iTunesMatchEnabled;	// 16 = 0x10
    id _cloudClient;	// 24 = 0x18
    _Bool _subscriptionSyncEnabled;	// 32 = 0x20
    _Bool _updateInProgress;	// 33 = 0x21
}

+ (unsigned long long)freeSpace;	// IMP=0x000000010000e788
+ (_Bool)isSupportedUrlString:(id)arg1;	// IMP=0x0000000100009c04
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100008da8
+ (id)sharedInstance;	// IMP=0x0000000100008ccc
+ (void)initialize;	// IMP=0x0000000100008c4c
@property(nonatomic, getter=isUpdateInProgress) _Bool updateInProgress; // @synthesize updateInProgress=_updateInProgress;
@property(readonly, nonatomic, getter=isSubscriptionSyncEnabled) _Bool subscriptionSyncEnabled; // @synthesize subscriptionSyncEnabled=_subscriptionSyncEnabled;
- (void).cxx_destruct;	// IMP=0x000000010000e8e4
- (id)storeContext;	// IMP=0x000000010000e72c
- (id)carPlayContext;	// IMP=0x000000010000e6d0
- (id)resetableImportContext;	// IMP=0x000000010000e674
- (id)importContext;	// IMP=0x000000010000e618
- (id)privateQueueContext;	// IMP=0x000000010000e5bc
- (id)mainQueueContext;	// IMP=0x000000010000e560
- (id)mainOrPrivateContext;	// IMP=0x000000010000e504
- (_Bool)canDeleteEpisode:(id)arg1;	// IMP=0x000000010000e440
- (_Bool)setPlayState:(long long)arg1 manually:(_Bool)arg2 forUserActionOnEpisode:(id)arg3 saveChanges:(_Bool)arg4;	// IMP=0x000000010000e360
- (_Bool)setPlayed:(_Bool)arg1 manually:(_Bool)arg2 forUserActionOnEpisode:(id)arg3 saveChanges:(_Bool)arg4;	// IMP=0x000000010000e348
- (_Bool)setPlayState:(long long)arg1 manually:(_Bool)arg2 forUserActionOnEpisodeUuid:(id)arg3;	// IMP=0x000000010000e0fc
- (_Bool)setPlayed:(_Bool)arg1 manually:(_Bool)arg2 forUserActionOnEpisodeUuid:(id)arg3;	// IMP=0x000000010000deac
- (void)markAsSaved:(_Bool)arg1 forEpisodeUuids:(id)arg2;	// IMP=0x000000010000db34
- (_Bool)setStationShowGroupOrder:(id)arg1 forStation:(id)arg2;	// IMP=0x000000010000d638
- (_Bool)setEpisodesOrder:(id)arg1 forStation:(id)arg2;	// IMP=0x000000010000d13c
- (_Bool)setPodcastsOrder:(id)arg1;	// IMP=0x000000010000cc48
- (_Bool)setStationsOrder:(id)arg1;	// IMP=0x000000010000c7c0
- (void)deleteAllTopLevelStationsExcludingFolders;	// IMP=0x000000010000c4bc
- (void)deleteAllPodcasts;	// IMP=0x000000010000c16c
- (void)deleteOrphanedEpisodes;	// IMP=0x000000010000bd0c
- (void)deleteEpisodeUuids:(id)arg1;	// IMP=0x000000010000bcfc
- (void)_deleteEpisodeUuids:(id)arg1 forced:(_Bool)arg2;	// IMP=0x000000010000bcec
- (void)_deleteEpisodeUuids:(id)arg1 forced:(_Bool)arg2 save:(_Bool)arg3;	// IMP=0x000000010000b8f4
- (void)_deletePodcast:(id)arg1 ctx:(id)arg2;	// IMP=0x000000010000b448
- (void)_deletePodcastWithId:(id)arg1 ctx:(id)arg2;	// IMP=0x000000010000b3bc
- (void)deleteStationWithUuid:(id)arg1;	// IMP=0x000000010000b188
- (void)deletePlaylist:(id)arg1;	// IMP=0x000000010000b04c
- (void)_deleteHiddenPodcasts;	// IMP=0x000000010000ada0
- (void)deleteHiddenPodcastsSynchronously;	// IMP=0x000000010000ad94
- (void)deleteHiddenPodcasts;	// IMP=0x000000010000ac14
- (void)_deletePodcastWithUuid:(id)arg1 forced:(_Bool)arg2 ctx:(id)arg3;	// IMP=0x000000010000a864
- (void)deleteFromSyncPodcastsWithUuids:(id)arg1;	// IMP=0x000000010000a624
- (void)deletePodcastWithUuid:(id)arg1 shouldSave:(_Bool)arg2;	// IMP=0x000000010000a46c
- (void)deletePodcastWithUuid:(id)arg1;	// IMP=0x000000010000a45c
- (_Bool)isSubscribedToPodcastWithUuid:(id)arg1;	// IMP=0x000000010000a1b4
- (_Bool)isSubscribedToPodcastWithFeedUrl:(id)arg1;	// IMP=0x000000010000a0c4
- (void)markPlaylistsForUpdateForPodcastUuids:(id)arg1;	// IMP=0x0000000100009c18
- (void)disableSubscriptionOnPodcastUuid:(id)arg1 setSyncDirty:(_Bool)arg2;	// IMP=0x0000000100009b88
- (void)disableSubscriptionOnPodcastUuid:(id)arg1 setSyncDirty:(_Bool)arg2 ctx:(id)arg3;	// IMP=0x00000001000099c0
- (void)disableSubscriptionOnPodcastUuid:(id)arg1;	// IMP=0x00000001000099b0
- (void)enableSubscriptionOnPodcastUuid:(id)arg1 setSyncDirty:(_Bool)arg2 ctx:(id)arg3;	// IMP=0x000000010000988c
- (void)enableSubscriptionOnPodcastUuid:(id)arg1 setSyncDirty:(_Bool)arg2;	// IMP=0x000000010000972c
- (void)enableSubscriptionOnPodcastUuid:(id)arg1;	// IMP=0x000000010000971c
- (void)finishPlayingEpisodeUuid:(id)arg1;	// IMP=0x0000000100009444
- (id)lastUpdatedDateAttributedString;	// IMP=0x0000000100009308
- (id)lastUpdatedDateString;	// IMP=0x0000000100009100
- (void)_userDefaultsDidChange:(id)arg1;	// IMP=0x00000001000090ec
- (void)updateiTunesPlaylistForiTunesMatchState;	// IMP=0x0000000100008f9c
- (_Bool)iTunesMatchEnabled;	// IMP=0x0000000100008f8c
- (id)copy;	// IMP=0x0000000100008f64
- (id)init;	// IMP=0x0000000100008dc8

@end

