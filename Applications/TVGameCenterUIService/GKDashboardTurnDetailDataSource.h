//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKCollectionDataSource.h"

@class GKTurnBasedMatch;

@interface GKDashboardTurnDetailDataSource : GKCollectionDataSource
{
    GKTurnBasedMatch *_match;	// 8 = 0x8
}

@property(retain, nonatomic) GKTurnBasedMatch *match; // @synthesize match=_match;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000100004c80
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100004ab4
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000100004aac
- (id)sectionHeaderText;	// IMP=0x0000000100004a34
- (id)itemForIndexPath:(id)arg1;	// IMP=0x0000000100004984
- (double)preferredCollectionHeight;	// IMP=0x0000000100004970
- (long long)itemCount;	// IMP=0x0000000100004940
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100004924
- (void)setupCollectionView:(id)arg1;	// IMP=0x00000001000048ac
- (void)dealloc;	// IMP=0x0000000100004854
- (id)initWithMatch:(id)arg1;	// IMP=0x00000001000047bc

@end
