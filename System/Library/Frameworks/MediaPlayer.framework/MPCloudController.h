/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HSCloudAvailability, OS_dispatch_queue;
@class NSObject, MSVDistributedNotificationObserver, HSCloudClient;

@interface MPCloudController : NSObject {

	NSObject*<HSCloudAvailability> _cloudAvailabilityController;
	BOOL _isUpdateInProgress;
	int _preferencesChangedNotifyToken;
	BOOL _preferencesChangedNotifyTokenIsValid;
	NSObject*<OS_dispatch_queue> _queue;
	MSVDistributedNotificationObserver* _addToPlaylistBehaviorChangedObserver;
	BOOL _isCloudLibraryUpdateInProgress;
	BOOL _isCloudLibraryInitialImport;
	BOOL _isJaliscoUpdateInProgress;
	BOOL _isJaliscoInitialImport;
	BOOL _isCloudEnabled;
	BOOL _jaliscoGeniusEnabled;
	HSCloudClient* _cloudClient;

}

@property (nonatomic,readonly) BOOL canShowCloudDownloadButtons; 
@property (nonatomic,readonly) BOOL canDefaultMediaLibraryShowCloudContent; 
@property (nonatomic,readonly) BOOL canShowCloudMusic; 
@property (nonatomic,readonly) BOOL canShowCloudVideo; 
@property (nonatomic,readonly) BOOL isCloudEnabled;                                                  //@synthesize isCloudEnabled=_isCloudEnabled - In the implementation block
@property (nonatomic,readonly) BOOL hasCloudLockerAccount; 
@property (nonatomic,readonly) BOOL hasPurchaseHistoryAccount; 
@property (nonatomic,readonly) HSCloudClient * cloudClient;                                          //@synthesize cloudClient=_cloudClient - In the implementation block
@property (nonatomic,readonly) BOOL isUpdateInProgress; 
@property (nonatomic,readonly) BOOL isInitialImport; 
@property (nonatomic,readonly) BOOL isCloudLibraryUpdateInProgress;                                  //@synthesize isCloudLibraryUpdateInProgress=_isCloudLibraryUpdateInProgress - In the implementation block
@property (nonatomic,readonly) BOOL isCloudLibraryInitialImport;                                     //@synthesize isCloudLibraryInitialImport=_isCloudLibraryInitialImport - In the implementation block
@property (nonatomic,readonly) BOOL isJaliscoUpdateInProgress;                                       //@synthesize isJaliscoUpdateInProgress=_isJaliscoUpdateInProgress - In the implementation block
@property (nonatomic,readonly) BOOL isJaliscoInitialImport;                                          //@synthesize isJaliscoInitialImport=_isJaliscoInitialImport - In the implementation block
@property (nonatomic,readonly) BOOL isGeniusEnabled; 
@property (getter=isJaliscoGeniusEnabled,nonatomic,readonly) BOOL jaliscoGeniusEnabled;              //@synthesize jaliscoGeniusEnabled=_jaliscoGeniusEnabled - In the implementation block
@property (nonatomic,readonly) BOOL enablingJaliscoGeniusRequiresTerms; 
+(id)sharedCloudController;
+(BOOL)isMediaApplication;
+(void)migrateCellularDataPreferencesIfNeeded;
+(BOOL)isEnablingCloudLibraryDestructive;
-(void)removePlaylistsWithSagaIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeItemsWithSagaIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)hideItemsWithPurchaseHistoryIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isCloudLibraryEnabled;
-(BOOL)isGeniusEnabled;
-(void)setLikedState:(long long)arg1 forAlbumWithStoreID:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)setLikedState:(long long)arg1 forEntityWithStoreID:(long long)arg2 withMediaType:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)isCloudEnabled;
-(void)uploadArtworkForPlaylist:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sdk_createPlaylistWithPersistenID:(unsigned long long)arg1 properties:(id)arg2 tracklist:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)becomeActive;
-(void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistWithPersistentID:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)sdk_addStoreItemWithOpaqueID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)cloudAddToPlaylistBehavior;
-(void)addStoreItemWithAdamID:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addStorePlaylistWithGlobalID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)uploadCloudItemProperties;
-(void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2 ;
-(void)setLikedState:(long long)arg1 forEntityWithStoreID:(long long)arg2 withMediaType:(unsigned long long)arg3 ;
-(void)setCollectionProperties:(id)arg1 forCollectionWithPersistentID:(long long)arg2 groupingType:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setLikedState:(long long)arg1 forAlbumWithStoreID:(long long)arg2 ;
-(void)uploadCloudPlaylistProperties;
-(void)setLikedState:(long long)arg1 forPlaylistWithGlobalID:(id)arg2 ;
-(void)sdk_addStoreItemWithOpaqueID:(id)arg1 toPlaylistWithPersistentID:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)canShowCloudMusic;
-(BOOL)canShowCloudVideo;
-(BOOL)hasProperNetworkConditionsToPlayMedia;
-(void)addItemWithSagaID:(unsigned long long)arg1 toPlaylistWithPersistentID:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)addStoreItemWithAdamID:(long long)arg1 toPlaylistWithPersistentID:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)loadGeniusItemsForSagaID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)createPlaylistWithPersistentID:(unsigned long long)arg1 properties:(id)arg2 trackList:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)loadArtworkForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 artworkSourceType:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)deprioritizeArtworkRequestForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 artworkSourceType:(long long)arg4 ;
-(void)loadArtworkInfoForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 artworkSourceType:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)canShowCloudDownloadButtonsDidChangeNotification:(id)arg1 ;
-(void)canShowCloudTracksDidChangeNotification:(id)arg1 ;
-(void)isCellularDataRestrictedDidChangeNotification:(id)arg1 ;
-(void)hasProperNetworkConditionsToShowCloudMediaDidChangeNotification:(id)arg1 ;
-(BOOL)hasProperNetworkConditionsToShowCloudMedia;
-(BOOL)isCellularDataRestrictedForMusic;
-(BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
-(BOOL)isCellularDataRestrictedForVideos;
-(BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
-(BOOL)isCellularDataRestrictedForStoreApps;
-(BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
-(BOOL)canShowCloudDownloadButtons;
-(void)addGeniusPlaylistWithPersistentID:(unsigned long long)arg1 name:(id)arg2 seedItemSagaIDs:(id)arg3 itemSagaIDs:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)publishPlaylistWithSagaID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)becomeActiveAndWaitUntilDone:(BOOL)arg1 ;
-(void)_initializeUpdateInProgressState;
-(void)loadUpdateProgressWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)resignActive;
-(void)setCloudAddToPlaylistBehavior:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2 ;
-(void)loadJaliscoGeniusTermsAndConditionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setLikedState:(long long)arg1 forPlaylistWithGlobalID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isCellularDataRestricted;
-(BOOL)shouldProhibitActionsForCurrentNetworkConditions;
-(BOOL)canDefaultMediaLibraryShowCloudContent;
-(void)updateSubscribedPlaylistWithSagaID:(unsigned long long)arg1 ignoreMinRefreshInterval:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)hasPurchaseHistoryAccount;
-(BOOL)hasCloudLockerAccount;
-(BOOL)isInitialImport;
-(BOOL)isCloudLibraryInitialImport;
-(BOOL)isJaliscoInitialImport;
-(BOOL)isUpdateInProgress;
-(BOOL)isCloudLibraryUpdateInProgress;
-(BOOL)isJaliscoUpdateInProgress;
-(void)loadCloudMusicLibraryUpdateProgressWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadJaliscoLibraryUpdateProgressWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)enableCloudLibraryWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)disableCloudLibraryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateJaliscoMediaLibraryWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)enablingJaliscoGeniusRequiresTerms;
-(void)acceptJaliscGeniusTermsAndConditionsVersion:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)fetchRecommendedContentWithSeedTrackID:(long long)arg1 seedTrackIDType:(long long)arg2 count:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(HSCloudClient *)cloudClient;
-(BOOL)isJaliscoGeniusEnabled;
-(id)init;
-(void)dealloc;
@end

