//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseProcessor.h"

@class NSMutableDictionary;

@interface MTPodcastAndEpisodeProcessor : MTBaseProcessor
{
    NSMutableDictionary *_episodeObservers;	// 8 = 0x8
}

@property(retain, nonatomic) NSMutableDictionary *episodeObservers; // @synthesize episodeObservers=_episodeObservers;
- (void).cxx_destruct;	// IMP=0x00000001000e1314
- (id)episodeUuids;	// IMP=0x00000001000e1110
- (id)podcastUuids;	// IMP=0x00000001000e0fb4
- (id)episodeObserverForPodcastUuid:(id)arg1;	// IMP=0x00000001000e0ef0
- (void)episodeResultsChangedForPodcast:(id)arg1 withDeletedIds:(id)arg2 andInsertIds:(id)arg3;	// IMP=0x00000001000e0e88
- (id)createEpisodeObserverForPodcastUuid:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3;	// IMP=0x00000001000e0ae8
- (void)removeEpisodeObserverForPodcast:(id)arg1;	// IMP=0x00000001000e09d8
- (void)addEpisodeObserverForPodcast:(id)arg1;	// IMP=0x00000001000e0844
- (void)updateEpisodePredicates;	// IMP=0x00000001000e05d4
- (void)resultsChangedWithDeletedIds:(id)arg1 andInsertIds:(id)arg2;	// IMP=0x00000001000e05c8
- (id)episodeSortDescriptorsForPodcast:(id)arg1;	// IMP=0x00000001000e05b8
- (id)episodePredicateForPodcast:(id)arg1;	// IMP=0x00000001000e056c
- (id)podcastPredicate;	// IMP=0x00000001000e0528
- (id)predicate;	// IMP=0x00000001000e051c
- (id)entityName;	// IMP=0x00000001000e050c
- (id)init;	// IMP=0x00000001000e0490

@end

