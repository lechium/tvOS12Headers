//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVPPhotoLibraryCollectionViewController.h"

#import "PHPhotoLibraryChangeObserver.h"
#import "TVPCollectionViewCachingManagerDataSource.h"
#import "TVPPhotoLibraryOneUpViewControllerDelegate.h"

@class NSIndexPath, NSString, NSTimer, PHAssetCollection, PLCloudSharedAlbum, TVPCollectionViewCachingManager, TVPFetchManager, TVPModalPresenter, TVPSharedPSSubscriberListViewController;

@interface TVPPhotoLibraryAlbumViewController : TVPPhotoLibraryCollectionViewController <PHPhotoLibraryChangeObserver, TVPPhotoLibraryOneUpViewControllerDelegate, TVPCollectionViewCachingManagerDataSource>
{
    PHAssetCollection *_album;	// 8 = 0x8
    NSIndexPath *_preferredFocusIndexPath;	// 16 = 0x10
    TVPModalPresenter *_presenter;	// 24 = 0x18
    TVPFetchManager *_fetchManager;	// 32 = 0x20
    TVPCollectionViewCachingManager *_cachingManager;	// 40 = 0x28
    TVPSharedPSSubscriberListViewController *_subscribersListController;	// 48 = 0x30
    PLCloudSharedAlbum *_pl_sharedAlbum;	// 56 = 0x38
    NSTimer *_updateAssetsAndReloadTimer;	// 64 = 0x40
}

@property(retain, nonatomic) NSTimer *updateAssetsAndReloadTimer; // @synthesize updateAssetsAndReloadTimer=_updateAssetsAndReloadTimer;
@property(retain, nonatomic) PLCloudSharedAlbum *pl_sharedAlbum; // @synthesize pl_sharedAlbum=_pl_sharedAlbum;
@property(retain, nonatomic) TVPSharedPSSubscriberListViewController *subscribersListController; // @synthesize subscribersListController=_subscribersListController;
@property(retain, nonatomic) TVPCollectionViewCachingManager *cachingManager; // @synthesize cachingManager=_cachingManager;
@property(retain, nonatomic) TVPFetchManager *fetchManager; // @synthesize fetchManager=_fetchManager;
@property(retain, nonatomic) TVPModalPresenter *presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) NSIndexPath *preferredFocusIndexPath; // @synthesize preferredFocusIndexPath=_preferredFocusIndexPath;
@property(retain, nonatomic) PHAssetCollection *album; // @synthesize album=_album;
- (void).cxx_destruct;	// IMP=0x0000000100093cec
- (id)_indexPathsFromIndexes:(id)arg1;	// IMP=0x0000000100093a9c
- (void)_onSelectSubscribersButton:(id)arg1;	// IMP=0x0000000100093908
- (void)_onSelectDetailsButton:(id)arg1;	// IMP=0x0000000100093840
- (void)_sharedAlbumStreamDeletedOrUnsubscribedNotification:(id)arg1;	// IMP=0x00000001000937bc
- (void)_menuAction:(id)arg1;	// IMP=0x0000000100093784
- (void)_onSelectSlideshowButton:(id)arg1;	// IMP=0x00000001000936d0
- (void)_onSelectScreenSaverButton:(id)arg1;	// IMP=0x000000010009359c
- (id)_allPhotoAssets;	// IMP=0x0000000100093490
- (id)_assetAtIndexPath:(id)arg1;	// IMP=0x0000000100093388
- (void)_cancelExistingTimer;	// IMP=0x000000010009333c
- (void)_didFinishTimedInterval:(id)arg1;	// IMP=0x0000000100093224
- (id)collectionViewCachingManager:(id)arg1 assetsForIndexPaths:(id)arg2;	// IMP=0x0000000100093060
- (Class)_collectionViewCellClass;	// IMP=0x000000010009304c
- (Class)_sectionHeaderViewClass;	// IMP=0x0000000100093038
- (void)photoLibraryDidChange:(id)arg1;	// IMP=0x0000000100092e44
- (void)photoLibraryOneUpControllerWillPop:(id)arg1;	// IMP=0x0000000100092cf4
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x0000000100092c48
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000100092bbc
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000001000928dc
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000100092174
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100091e84
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000100091e2c
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x0000000100091de8
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x0000000100091da4
- (void)dealloc;	// IMP=0x0000000100091bc8
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100091b20
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100091a54
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100091930
- (void)viewDidLoad;	// IMP=0x0000000100091894
- (id)init;	// IMP=0x00000001000917c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

