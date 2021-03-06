//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewController.h"

#import "MTResultsControllerDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class MTCollectionSectionHeaderView, MTCompositeResultsController, NSArray, NSMutableDictionary, NSString, UIRefreshControl;

@interface MTFetchedCollectionWithSectionsViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout, MTResultsControllerDelegate>
{
    NSMutableDictionary *_frcChangesDict;	// 8 = 0x8
    MTCollectionSectionHeaderView *_floatingHeaderView;	// 16 = 0x10
    MTCompositeResultsController *_compositeResultsController;	// 24 = 0x18
    UIRefreshControl *_refreshControl;	// 32 = 0x20
    unsigned long long _frcState;	// 40 = 0x28
    NSArray *_sections;	// 48 = 0x30
}

@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property unsigned long long frcState; // @synthesize frcState=_frcState;
@property(retain, nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
- (void).cxx_destruct;	// IMP=0x00000001001700c0
- (_Bool)hideHeaderForEmptySection:(long long)arg1;	// IMP=0x0000000100170050
- (id)collectionView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000010016ffd0
- (void)collectionView:(id)arg1 configureReusableView:(id)arg2 ofSupplementaryElementOfKind:(id)arg3 forItemAtIndexPath:(id)arg4;	// IMP=0x000000010016fe58
- (void)collectionView:(id)arg1 configureCell:(id)arg2 withObject:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x000000010016fe54
- (void)_didUpdateCollectionView:(id)arg1;	// IMP=0x000000010016fe50
- (void)_willUpdateCollectionView:(id)arg1;	// IMP=0x000000010016fe4c
- (id)validIndexPathsForIndexPaths:(id)arg1;	// IMP=0x000000010016fbf4
- (void)updateCollectionViewForUpdates:(id)arg1;	// IMP=0x000000010016f3ec
- (void)updateCollectionViewForUpdates:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010016f2cc
- (id)createSectionCountDictionary;	// IMP=0x000000010016f140
- (_Bool)updatesContainChanges:(id)arg1;	// IMP=0x000000010016f01c
- (_Bool)updatesContainsInsertSection:(id)arg1 sectionCountDict:(id)arg2;	// IMP=0x000000010016ee04
- (_Bool)updatesContainsDeleteSection:(id)arg1 sectionCountDict:(id)arg2;	// IMP=0x000000010016eb90
- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x000000010016e864
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;	// IMP=0x000000010016e4b8
- (void)controllerWillChangeContent:(id)arg1;	// IMP=0x000000010016e2dc
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x000000010016e1d0
- (id)reuseIdentifierForItemAtIndexPath:(id)arg1;	// IMP=0x000000010016e1a4
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000010016e0bc
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010016dfc4
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000010016df48
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000010016defc
- (id)indexPathForObject:(id)arg1;	// IMP=0x000000010016dea8
- (id)indexPathsForObject:(id)arg1;	// IMP=0x000000010016dc98
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x000000010016db38
@property(retain, nonatomic) MTCompositeResultsController *compositeResultsController; // @synthesize compositeResultsController=_compositeResultsController;
- (void)registerCollectionViewClasses;	// IMP=0x000000010016d92c
- (void)viewDidLoad;	// IMP=0x000000010016d878
- (void)reloadDataSource;	// IMP=0x000000010016d490
- (id)initWithCollectionViewLayout:(id)arg1 compositeFetchedResultsController:(id)arg2;	// IMP=0x000000010016d3e4
- (id)initWithCompositeFetchedResultsController:(id)arg1;	// IMP=0x000000010016d364

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

