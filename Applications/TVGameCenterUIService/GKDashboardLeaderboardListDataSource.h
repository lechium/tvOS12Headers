//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKCollectionDataSource.h"

@class GKGameRecord, GKLeaderboardSet, NSArray, NSDictionary;

@interface GKDashboardLeaderboardListDataSource : GKCollectionDataSource
{
    NSDictionary *_assetNames;	// 8 = 0x8
    GKGameRecord *_gameRecord;	// 16 = 0x10
    GKLeaderboardSet *_leaderboardSet;	// 24 = 0x18
    NSArray *_leaderboards;	// 32 = 0x20
}

@property(retain, nonatomic) NSArray *leaderboards; // @synthesize leaderboards=_leaderboards;
@property(retain, nonatomic) GKLeaderboardSet *leaderboardSet; // @synthesize leaderboardSet=_leaderboardSet;
@property(retain, nonatomic) GKGameRecord *gameRecord; // @synthesize gameRecord=_gameRecord;
@property(retain, nonatomic) NSDictionary *assetNames; // @synthesize assetNames=_assetNames;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010001e990
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010001e95c
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000010001e948
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010001e710
- (id)sectionHeaderText;	// IMP=0x000000010001e618
- (id)itemForIndexPath:(id)arg1;	// IMP=0x000000010001e578
- (double)preferredCollectionHeight;	// IMP=0x000000010001e56c
- (long long)itemCount;	// IMP=0x000000010001e554
- (void)removeLeaderboardsWithoutImages;	// IMP=0x000000010001e3b8
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010001dd98
- (void)setupCollectionView:(id)arg1;	// IMP=0x000000010001dc50
- (void)dealloc;	// IMP=0x000000010001dbb8
- (id)initWithGameRecord:(id)arg1 leaderboardSet:(id)arg2;	// IMP=0x000000010001db24

@end

