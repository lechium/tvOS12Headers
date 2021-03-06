//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTTVFetchedCollectionWithSectionsViewController.h"

#import "MTTVCreateStationButtonCollectionViewCellDelegate.h"
#import "MTTVPodcastActionController.h"
#import "MTTVStationActionControllerDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UITextFieldDelegate.h"

@class MTTVPodcastActionController, MTTVStationActionController, NSString, UITextField;

@interface MTTVPodcastsAndStationsViewController : MTTVFetchedCollectionWithSectionsViewController <UITextFieldDelegate, UICollectionViewDelegateFlowLayout, MTTVPodcastActionController, MTTVStationActionControllerDelegate, MTTVCreateStationButtonCollectionViewCellDelegate>
{
    _Bool _hasStations;	// 8 = 0x8
    UITextField *_hiddenTextField;	// 16 = 0x10
    MTTVPodcastActionController *_podcastActionController;	// 24 = 0x18
    MTTVStationActionController *_stationActionController;	// 32 = 0x20
}

+ (id)notSubscribedPodcastResultsController;	// IMP=0x00000001000d0528
+ (id)subscribedPodcastResultsController;	// IMP=0x00000001000d0400
+ (id)predicateForStations;	// IMP=0x00000001000d03ec
+ (id)createFirstStationResultsController;	// IMP=0x00000001000d0320
+ (id)stationResultsController;	// IMP=0x00000001000d01dc
+ (id)globalHeaderResultsController;	// IMP=0x00000001000d011c
+ (id)resultsController;	// IMP=0x00000001000cff88
@property(nonatomic) _Bool hasStations; // @synthesize hasStations=_hasStations;
@property(retain, nonatomic) MTTVStationActionController *stationActionController; // @synthesize stationActionController=_stationActionController;
@property(retain, nonatomic) MTTVPodcastActionController *podcastActionController; // @synthesize podcastActionController=_podcastActionController;
@property(retain, nonatomic) UITextField *hiddenTextField; // @synthesize hiddenTextField=_hiddenTextField;
- (void).cxx_destruct;	// IMP=0x00000001000d3240
- (void)buttonCell:(id)arg1 didSelectButton:(id)arg2;	// IMP=0x00000001000d31b8
- (void)_updateFocusabilityForCreateStationButtonFooter;	// IMP=0x00000001000d2fc0
- (void)_updateSectionHeaderVisbilityForSubscribedPodcasts;	// IMP=0x00000001000d2ecc
- (void)_didUpdateCollectionView:(id)arg1;	// IMP=0x00000001000d2e40
- (id)_indexPathForPodcastUuid:(id)arg1;	// IMP=0x00000001000d2d6c
- (void)_showCreateStationUI;	// IMP=0x00000001000d2c84
- (_Bool)_hasOnePodcast;	// IMP=0x00000001000d2be0
- (_Bool)_hasUnsubscribedPodcasts;	// IMP=0x00000001000d2b8c
- (_Bool)_hasSubscribedPodcasts;	// IMP=0x00000001000d2b38
- (_Bool)_hasStations;	// IMP=0x00000001000d2ae4
- (_Bool)_isIndexPathForCreateNewStation:(id)arg1;	// IMP=0x00000001000d2a30
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x00000001000d2800
- (void)performDeleteStation:(id)arg1;	// IMP=0x00000001000d2788
- (void)performShowSettingsForStation:(id)arg1;	// IMP=0x00000001000d26ac
- (void)performDeletePodcast:(id)arg1;	// IMP=0x00000001000d262c
- (void)performShowSettingsForPodcast:(id)arg1;	// IMP=0x00000001000d255c
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000001000d2424
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000001000d222c
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x00000001000d20b4
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x00000001000d20a4
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000001000d1fe4
- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x00000001000d1f94
- (id)collectionView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000001000d1ef8
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x00000001000d1e58
- (id)reuseIdentifierForItemAtIndexPath:(id)arg1;	// IMP=0x00000001000d1d54
- (void)tearDownEmptyContentViewController;	// IMP=0x00000001000d1ce0
- (void)standupEmptyContentViewController;	// IMP=0x00000001000d1c6c
- (void)updateListState;	// IMP=0x00000001000d1b70
- (void)collectionView:(id)arg1 configureCell:(id)arg2 withPodcast:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x00000001000d1a30
- (void)collectionView:(id)arg1 configureCell:(id)arg2 withStation:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x00000001000d17ec
- (void)collectionView:(id)arg1 configureCell:(id)arg2 withObject:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x00000001000d16ec
- (void)collectionView:(id)arg1 didLongPressItemAtIndexPath:(id)arg2;	// IMP=0x00000001000d14c8
- (void)playItemAtIndexPath:(id)arg1;	// IMP=0x00000001000d12b4
- (void)artworkDidChange:(id)arg1;	// IMP=0x00000001000d10b4
- (void)unregisterForArtworkChangeNotifications;	// IMP=0x00000001000d1054
- (void)registerForArtworkChangeNotifications;	// IMP=0x00000001000d0fec
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000001000d0f74
- (void)registerCollectionViewClasses;	// IMP=0x00000001000d0d5c
- (void)viewDidLoad;	// IMP=0x00000001000d0908
- (void)dealloc;	// IMP=0x00000001000d08bc
- (id)init;	// IMP=0x00000001000d0650

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

