//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVCKDataClient.h"

#import "TVPMyPSAccessObjectDelegate.h"
#import "TVPSharedPSAccessObjectDelegate.h"

@class NSArray, NSDictionary, NSString, TVCKDataCollection, TVPAOSynchronizer, TVSiCloudAccountManager;

@interface TVPDataClient : TVCKDataClient <TVPMyPSAccessObjectDelegate, TVPSharedPSAccessObjectDelegate>
{
    _Bool _didFinishSyncForSharedStreams;	// 8 = 0x8
    NSArray *_activityPhotoAssets;	// 16 = 0x10
    TVCKDataCollection *_activityCollection;	// 24 = 0x18
    TVSiCloudAccountManager *_manager;	// 32 = 0x20
    TVPAOSynchronizer *_myPSAOSynchronizer;	// 40 = 0x28
    TVPAOSynchronizer *_sharedPSAOSynchronizer;	// 48 = 0x30
    NSDictionary *_pendingUserNotificationInfo;	// 56 = 0x38
}

@property(nonatomic) _Bool didFinishSyncForSharedStreams; // @synthesize didFinishSyncForSharedStreams=_didFinishSyncForSharedStreams;
@property(retain, nonatomic) NSDictionary *pendingUserNotificationInfo; // @synthesize pendingUserNotificationInfo=_pendingUserNotificationInfo;
@property(retain, nonatomic) TVPAOSynchronizer *sharedPSAOSynchronizer; // @synthesize sharedPSAOSynchronizer=_sharedPSAOSynchronizer;
@property(retain, nonatomic) TVPAOSynchronizer *myPSAOSynchronizer; // @synthesize myPSAOSynchronizer=_myPSAOSynchronizer;
@property(readonly, retain, nonatomic) TVSiCloudAccountManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) TVCKDataCollection *activityCollection; // @synthesize activityCollection=_activityCollection;
@property(copy, nonatomic) NSArray *activityPhotoAssets; // @synthesize activityPhotoAssets=_activityPhotoAssets;
- (void).cxx_destruct;	// IMP=0x0000000100058594
- (void)cancelLoad:(id)arg1;	// IMP=0x00000001000581d0
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000573ac
- (id)imageKeyForObject:(id)arg1;	// IMP=0x0000000100057148
- (id)_sharedPhotoStreamItemForAssetID:(id)arg1 inAlbumWithAlbumID:(id)arg2 accessObject:(id)arg3;	// IMP=0x0000000100057058
- (id)_sharedPhotoStreamItemForAsset:(id)arg1 inAlbum:(id)arg2 accessObject:(id)arg3;	// IMP=0x0000000100056f00
- (id)_myPhotoStreamItemForAsset:(id)arg1 accessObject:(id)arg2;	// IMP=0x0000000100056dfc
- (void)_updatePSCollectionTypeForCollectionID:(id)arg1 queryContext:(id)arg2;	// IMP=0x0000000100056940
- (void)_updateHasNewContentForCollectionID:(id)arg1 queryContext:(id)arg2;	// IMP=0x0000000100056578
- (void)_updateLikedForAssetID:(id)arg1 queryContext:(id)arg2;	// IMP=0x00000001000560fc
- (void)_updateLastAccessedItemForAssetID:(id)arg1 queryContext:(id)arg2;	// IMP=0x0000000100055d80
- (void)_collectSharedPhotoStreamItemsForCollectionID:(id)arg1 mediaType:(id)arg2 range:(CDStruct_912cb5d2)arg3 inItems:(id)arg4 queryContext:(id)arg5;	// IMP=0x0000000100055740
- (void)_collectRecentUpdatesItemsForCollectionID:(id)arg1 mediaType:(id)arg2 range:(CDStruct_912cb5d2)arg3 inItems:(id)arg4 queryContext:(id)arg5;	// IMP=0x0000000100054e70
- (void)_collectMyPhotoStreamItemsForCollectionID:(id)arg1 mediaType:(id)arg2 range:(CDStruct_912cb5d2)arg3 inItems:(id)arg4 queryContext:(id)arg5;	// IMP=0x0000000100054a34
- (void)_collectSharedPhotoStreamsForCollectionID:(id)arg1 type:(id)arg2 includeItems:(_Bool)arg3 inCollections:(id)arg4 queryContext:(id)arg5;	// IMP=0x0000000100053c08
- (void)_collectRecentUpdatesStreamForCollectionID:(id)arg1 type:(id)arg2 includeItems:(_Bool)arg3 inCollections:(id)arg4 queryContext:(id)arg5;	// IMP=0x0000000100052d48
- (void)_collectMyPhotoStreamForCollectionID:(id)arg1 type:(id)arg2 includeItems:(_Bool)arg3 inCollections:(id)arg4 queryContext:(id)arg5;	// IMP=0x0000000100052818
- (void)_tearDownSharedPS;	// IMP=0x0000000100052764
- (void)_setupSharedPS;	// IMP=0x0000000100052540
- (void)_tearDownMyPS;	// IMP=0x000000010005248c
- (void)_setupMyPS;	// IMP=0x0000000100052268
- (void)_onDisconnect;	// IMP=0x0000000100052234
- (void)_onConnect;	// IMP=0x0000000100052074
- (void)_performConnection;	// IMP=0x0000000100052068
- (void)_handleDeleteQueryWithContext:(id)arg1;	// IMP=0x0000000100051850
- (void)_handleUpdateQueryWithContext:(id)arg1;	// IMP=0x0000000100051188
- (void)_handleItemsQueryWithContext:(id)arg1;	// IMP=0x0000000100050844
- (void)_handleCollectionsQueryWithContext:(id)arg1;	// IMP=0x000000010004fd6c
- (void)_iCloudPhotosSettingsDidChange:(id)arg1;	// IMP=0x000000010004fd68
- (void)_accountActivityHandler:(id)arg1;	// IMP=0x000000010004fd64
- (void)sharedPSAccessObject:(id)arg1 finishedCheckingForChangesInfo:(id)arg2 error:(id)arg3;	// IMP=0x000000010004f950
- (void)sharedPSAccessObject:(id)arg1 isAssetUnviewedDidChangeForAssetID:(id)arg2 albumID:(id)arg3;	// IMP=0x000000010004f62c
- (void)sharedPSAccessObject:(id)arg1 commentsDidChangeForAssetID:(id)arg2 albumID:(id)arg3 likeStatusDidChange:(_Bool)arg4;	// IMP=0x000000010004f110
- (void)sharedPSAccessObject:(id)arg1 assetsDidRemoveForAssetIDs:(id)arg2 albumID:(id)arg3;	// IMP=0x000000010004eab8
- (void)sharedPSAccessObject:(id)arg1 assetsDidAddForAlbumID:(id)arg2 album:(id)arg3 assets:(id)arg4;	// IMP=0x000000010004e1a4
- (void)sharedPSAccessObject:(id)arg1 isAlbumUnviewedDidChangeForAlbumID:(id)arg2 album:(id)arg3;	// IMP=0x000000010004db80
- (void)sharedPSAccessObject:(id)arg1 subsribersDidChangeForAlbumID:(id)arg2 subscriptionStatusDidChange:(_Bool)arg3;	// IMP=0x000000010004d844
- (void)sharedPSAccessObject:(id)arg1 albumMetadataDidChangeForAlbum:(id)arg2 albumID:(id)arg3;	// IMP=0x000000010004d4a4
- (void)sharedPSAccessObject:(id)arg1 albumsDidRemoveForAlbumIDs:(id)arg2 byAlsoRemovingViewableAlbums:(_Bool)arg3;	// IMP=0x000000010004cff0
- (void)sharedPSAccessObject:(id)arg1 albumsDidAddByAlsoAddingViewableAlbums:(id)arg2 viewableAlbumsAdded:(_Bool)arg3;	// IMP=0x000000010004c714
- (void)sharedPSAccessObject:(id)arg1 willBeginSyncForPersonID:(id)arg2;	// IMP=0x000000010004c704
- (void)finishedCheckingChangesForMyPSAccessObject:(id)arg1 photoStreamAssets:(id)arg2;	// IMP=0x000000010004c178
- (void)assetsDidChangeForMyPSAccessObject:(id)arg1;	// IMP=0x000000010004be20
- (void)executeQuery:(id)arg1 withCompletionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010004bb90
- (_Bool)processQueryAsync:(id)arg1;	// IMP=0x000000010004bb88
- (_Bool)supportsProperty:(id)arg1;	// IMP=0x000000010004bb54
- (void)concreteDataClientDisconnect;	// IMP=0x000000010004bb48
- (void)concreteDataClientConnect;	// IMP=0x000000010004baa4
- (_Bool)didFinishSharedStreamsSync;	// IMP=0x000000010004ba94
- (id)photoStreamID;	// IMP=0x000000010004ba24
- (void)resolveMediaURLForItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010004b5a8
- (void)dealloc;	// IMP=0x000000010004b530
- (id)initWithSavedPersonID:(id)arg1;	// IMP=0x000000010004b474

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

