/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/ML3DatabaseConnectionDelegate.h>
#import <libobjc.A.dylib/ML3DatabaseConnectionPoolDelegate.h>

@protocol OS_dispatch_queue, ML3MusicLibraryDelegate;
@class NSObject, NSString, NSLock, ML3AccountCacheDatabase, ML3LibraryNotificationManager, NSMutableDictionary, ML3DatabaseConnectionPool, NSArray, ML3Container, ML3DatabaseMetadata;

@interface ML3MusicLibrary : NSObject <ML3DatabaseConnectionDelegate, ML3DatabaseConnectionPoolDelegate> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSString* _libraryUID;
	NSLock* _libraryUIDLock;
	NSString* _syncLibraryUID;
	ML3AccountCacheDatabase* _accountCacheDatabase;
	ML3LibraryNotificationManager* _notificationManager;
	iPhoneSortKeyBuilderRef _sortKeyBuilder;
	NSMutableDictionary* _optimizedLibraryEntityFilterPredicatesByEntityClass;
	NSMutableDictionary* _optimizedLibraryContainerFilterPredicatesByContainerClass;
	NSMutableDictionary* _optimizedLibraryPublicEntityFilterPredicatesByEntityClass;
	NSMutableDictionary* _optimizedLibraryPublicContainerFilterPredicatesByContainerClass;
	BOOL _isHomeSharingLibraryLoaded;
	BOOL _isHomeSharingLibrary;
	id<ML3MusicLibraryDelegate> _delegate;
	ML3DatabaseConnectionPool* _connectionPool;
	NSString* _databasePath;
	NSArray* _libraryEntityFilterPredicates;
	NSArray* _libraryContainerFilterPredicates;
	NSArray* _libraryPublicEntityFilterPredicates;
	NSArray* _libraryPublicContainerFilterPredicates;

}

@property (nonatomic,readonly) BOOL supportsUbiquitousPlaybackPositions; 
@property (assign,nonatomic,__weak) id<ML3MusicLibraryDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) ML3DatabaseConnectionPool * connectionPool;                       //@synthesize connectionPool=_connectionPool - In the implementation block
@property (nonatomic,readonly) NSString * databasePath;                                          //@synthesize databasePath=_databasePath - In the implementation block
@property (nonatomic,readonly) NSString * libraryUID; 
@property (nonatomic,readonly) long long currentRevision; 
@property (nonatomic,readonly) long long currentContentRevision; 
@property (assign,nonatomic) long long syncGenerationID; 
@property (nonatomic,readonly) long long autoFilledTracksTotalSize; 
@property (assign,nonatomic) NSString * syncLibraryID; 
@property (getter=isLibraryEmpty,nonatomic,readonly) BOOL libraryEmpty; 
@property (nonatomic,readonly) ML3Container * currentDevicePurchasesPlaylist; 
@property (nonatomic,readonly) ML3Container * currentDevicePlaybackHistoryPlaylist; 
@property (nonatomic,readonly) ML3DatabaseMetadata * databaseInfo; 
@property (nonatomic,readonly) NSArray * localizedSectionIndexTitles; 
@property (nonatomic,readonly) NSArray * preferredAudioTracks; 
@property (nonatomic,readonly) NSArray * preferredSubtitleTracks; 
@property (assign,nonatomic) BOOL isHomeSharingLibrary; 
@property (nonatomic,readonly) BOOL mediaRestrictionEnabled; 
@property (assign,nonatomic) BOOL downloadOnAddToLibrary; 
@property (nonatomic,retain) NSArray * libraryEntityFilterPredicates;                            //@synthesize libraryEntityFilterPredicates=_libraryEntityFilterPredicates - In the implementation block
@property (nonatomic,retain) NSArray * libraryContainerFilterPredicates;                         //@synthesize libraryContainerFilterPredicates=_libraryContainerFilterPredicates - In the implementation block
@property (nonatomic,retain) NSArray * libraryPublicEntityFilterPredicates;                      //@synthesize libraryPublicEntityFilterPredicates=_libraryPublicEntityFilterPredicates - In the implementation block
@property (nonatomic,retain) NSArray * libraryPublicContainerFilterPredicates;                   //@synthesize libraryPublicContainerFilterPredicates=_libraryPublicContainerFilterPredicates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)updateTrackIntegrityOnConnection:(id)arg1 ;
+(id)mediaFolderPath;
+(BOOL)deviceSupportsMultipleLibraries;
+(id)sharedLibraryDatabasePath;
+(id)widthLimitedSetValuesQueue;
+(id)indexSchemaSQL;
+(id)assistantSyncDataChangedNotificationName;
+(id)pathForResourceFileOrFolder:(int)arg1 basePath:(id)arg2 relativeToBase:(BOOL)arg3 createParentFolderIfNecessary:(BOOL)arg4 ;
+(BOOL)userVersionMatchesSystemUsingConnection:(id)arg1 ;
+(id)allTables;
+(BOOL)orderingLanguageMatchesSystemUsingConnection:(id)arg1 ;
+(void)disableSharedLibrary;
+(void)disableAutomaticDatabaseValidation;
+(void)enableAutomaticDatabaseValidation;
+(BOOL)companionDeviceActiveStoreAccountIsSubscriber;
+(void)setCompanionDeviceActiveStoreAccountSubscriber:(BOOL)arg1 ;
+(id)localizedSectionHeaderForSectionHeader:(id)arg1 ;
+(id)localizedSectionIndexTitleForSectionHeader:(id)arg1 ;
+(id)sectionIndexTitleForSectionHeader:(id)arg1 ;
+(void)enumerateSortMapTablesUsingBlock:(/*^block*/id)arg1 ;
+(int)userVersionUsingConnection:(id)arg1 ;
+(id)allPragmaSQL;
+(id)allSchemaSQL;
+(id)allTriggersSQL;
+(id)sortMapNewSchemaSQL;
+(id)itemNewSchemaSQL;
+(id)itemIndexSchemaSQL;
+(BOOL)dropIndexesUsingConnection:(id)arg1 tableNames:(const char*)arg2 ;
+(id)mediaFolderPathByAppendingPathComponent:(id)arg1 ;
+(id)mediaFolderRelativePath:(id)arg1 ;
+(id)storeLinkSchemaSQL;
+(id)sortMapSchemaSQL;
+(id)itemSchemaSQL;
+(id)controlDirectoryPathWithBasePath:(id)arg1 ;
+(id)pathForResourceFileOrFolder:(int)arg1 basePath:(id)arg2 relativeToBase:(BOOL)arg3 isFolder:(BOOL*)arg4 ;
+(id)pathForBaseLocationPath:(long long)arg1 ;
+(id)databasePathForUnitTest:(id)arg1 withBasePath:(id)arg2 ;
+(id)unitTestableLibraryForTest:(id)arg1 basePath:(id)arg2 setupSQLFilenames:(id)arg3 ;
+(id)sharedLibrary;
+(id)pathForResourceFileOrFolder:(int)arg1 ;
+(id)sectionIndexTitles;
-(NSString *)databasePath;
-(void)enumerateArtworkTokensForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)checkoutWriterConnection;
-(void)notifyEntitiesAddedOrRemoved;
-(void)notifyContentsDidChange;
-(void)checkInDatabaseConnection:(id)arg1 ;
-(void)performAsyncDatabaseWriteTransactionWithBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)notifyNonContentsPropertyDidChange;
-(void)notifyInvisiblePropertyDidChange;
-(id)initWithPath:(id)arg1 readOnly:(BOOL)arg2 populateUnitTestTablesBlock:(/*^block*/id)arg3 ;
-(void)_effectiveSettingsDidChangeNotification:(id)arg1 ;
-(void)_loggingSettingsDidChangeNotification:(id)arg1 ;
-(void)_updateDatabaseConnectionsProfilingLevel;
-(ML3DatabaseMetadata *)databaseInfo;
-(BOOL)validateDatabase;
-(BOOL)_canConfigureMediaLibraryDatabaseConnection:(id)arg1 ;
-(void)_configureMediaLibraryDatabaseConnection:(id)arg1 ;
-(void)_teardownMediaLibraryDatabaseConnection:(id)arg1 ;
-(id)checkoutReaderConnection;
-(BOOL)_clearAllRowsFromTables:(id)arg1 ;
-(BOOL)cleanupArtworkWithOptions:(unsigned long long)arg1 ;
-(void)accessSortKeyBuilder:(/*^block*/id)arg1 ;
-(unsigned long long)unknownSectionIndex;
-(void)_postClientNotificationWithDistributedName:(id)arg1 localName:(id)arg2 ;
-(void)saveTrackMetadataSinceRevision:(long long)arg1 withGrappaID:(unsigned)arg2 ;
-(void)savePlaylistsSinceRevision:(long long)arg1 withGrappaID:(unsigned)arg2 ;
-(BOOL)updateSortMapOnConnection:(id)arg1 forceUpdateOriginals:(BOOL)arg2 ;
-(void)removeTracksWithPersistentIDs:(id)arg1 fromSource:(int)arg2 usingConnection:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(long long)purgeableStorageSizeWithUrgency:(unsigned long long)arg1 ;
-(long long)clearPurgeableStorageAmount:(long long)arg1 withUrgency:(unsigned long long)arg2 ;
-(void)_autogenerateArtworkForRelativePath:(id)arg1 artworkType:(long long)arg2 mediaType:(unsigned)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)_insertArtworkRowWithArtworkToken:(id)arg1 artworkType:(long long)arg2 sourceType:(long long)arg3 relativePath:(id)arg4 ;
-(void)_convertOriginalArtworkToDevicePreferredFormatFromSourceURL:(id)arg1 toDestinationURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_updateBestArtworkTokensForArtworkToken:(id)arg1 artworkType:(long long)arg2 sourceType:(long long)arg3 preserveExistingAvailableToken:(BOOL)arg4 usingConnection:(id)arg5 ;
-(void)_deleteAllArtworkVariantsAtRelativePaths:(id)arg1 ;
-(void)updateBestArtworkTokenForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 retrievalTime:(double)arg4 usingConnection:(id)arg5 ;
-(BOOL)_insertArtworkRowWithArtworkToken:(id)arg1 artworkType:(long long)arg2 sourceType:(long long)arg3 relativePath:(id)arg4 usingConnection:(id)arg5 ;
-(id)_allArtworkVariantDirectories;
-(void)importArtworkTokenForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkToken:(id)arg3 artworkType:(long long)arg4 sourceType:(long long)arg5 usingConnection:(id)arg6 ;
-(void)removeArtworkTokenForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 usingConnection:(id)arg5 ;
-(void)updateBestArtworkTokenForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 retrievalTime:(double)arg4 preserveExistingAvailableToken:(BOOL)arg5 usingConnection:(id)arg6 ;
-(BOOL)_determineAndUpdateBestArtworkTokensForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 retrievalTime:(double)arg4 preserveExistingAvailableToken:(BOOL)arg5 usingConnection:(id)arg6 ;
-(BOOL)isHomeSharingLibrary;
-(BOOL)cleanupArtworkWithOptions:(unsigned long long)arg1 usingConnection:(id)arg2 ;
-(BOOL)_removeOrphanedArtworkTokensUsingConnection:(id)arg1 ;
-(BOOL)_removeOrphanedArtworkMetadataUsingConnection:(id)arg1 ;
-(BOOL)_removeOrphanedArtworkAssetsUsingConnection:(id)arg1 ;
-(BOOL)_removeInvalidAvailableArtworkTokensUsingConnection:(id)arg1 ;
-(void)removeOrphanedTracksOnlyInCaches:(BOOL)arg1 ;
-(BOOL)hasPresignedValidity;
-(BOOL)verifyPresignedValidity;
-(void)updateTrackIntegrity;
-(void)deletePresignedValidity;
-(void)connectionWillOpenDatabase:(id)arg1 ;
-(void)connectionDidOpenDatabase:(id)arg1 ;
-(void)connectionWillCloseDatabase:(id)arg1 ;
-(void)connectionDidBeginDatabaseTransaction:(id)arg1 ;
-(void)connection:(id)arg1 didEndDatabaseTransactionAndCommit:(BOOL)arg2 ;
-(void)connectionPool:(id)arg1 createdNewConnection:(id)arg2 ;
-(void)setIsHomeSharingLibrary:(BOOL)arg1 ;
-(BOOL)downloadOnAddToLibrary;
-(void)setDownloadOnAddToLibrary:(BOOL)arg1 ;
-(void)setSyncGenerationID:(long long)arg1 ;
-(void)setSyncLibraryID:(NSString *)arg1 ;
-(NSString *)syncLibraryID;
-(void)setLibraryUID:(NSString *)arg1 ;
-(BOOL)mediaRestrictionEnabled;
-(id)libraryEntityFilterPredicatesForEntityClass:(Class)arg1 ;
-(id)libraryEntityFilterPredicatesForContainerClass:(Class)arg1 ;
-(void)reconnectToDatabase;
-(void)performReadOnlyDatabaseTransactionWithBlock:(/*^block*/id)arg1 ;
-(BOOL)automaticDatabaseValidationDisabled;
-(int)currentDatabaseVersion;
-(BOOL)createIndexes;
-(BOOL)emptyAllTables;
-(BOOL)clearAllGeniusData;
-(BOOL)clearAllCloudKVSData;
-(id)accountCacheDatabase;
-(id)groupingKeyForString:(id)arg1 ;
-(id)groupingKeysForStrings:(id)arg1 ;
-(void)notifySectionsDidChange;
-(void)notifyCloudLibraryAvailabilityDidChange;
-(void)notifyLibraryImportDidFinish;
-(void)notifyKeepLocalStateDidChange;
-(void)saveTrackMetadata;
-(void)savePlaylists;
-(BOOL)requiresSchemaOnlyUpdatesOnConnection:(id)arg1 ;
-(BOOL)requiresNonSchemaUpdatesOnConnection:(id)arg1 ;
-(BOOL)updateSortMap;
-(void)getChangedPersistentIDsAfterRevision:(long long)arg1 revisionTrackingCode:(long long)arg2 maximumRevisionType:(int)arg3 usingBlock:(/*^block*/id)arg4 ;
-(BOOL)persistentID:(long long)arg1 changedAfterRevision:(long long)arg2 revisionTrackingCode:(long long)arg3 ;
-(unsigned long long)countOfChangedPersistentIdsAfterRevision:(long long)arg1 revisionTrackingCode:(unsigned long long)arg2 maximumRevisionType:(int)arg3 ;
-(void)removeSource:(int)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)removeSource:(int)arg1 usingConnection:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)removeTracksWithPersistentIDs:(id)arg1 fromSource:(int)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)removePlaylistsWithPersistentIDs:(id)arg1 fromSource:(int)arg2 usingConnection:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(long long)autoFilledTracksTotalSize;
-(long long)autoFilledTracksTotalSizeWithUrgency:(unsigned long long)arg1 ;
-(long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)arg1 ;
-(long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)arg1 urgency:(unsigned long long)arg2 ;
-(void)autogenerateSupportedSizesForAllOriginalArtworkWithConnection:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)importExistingOriginalArtworkWithArtworkToken:(id)arg1 artworkType:(long long)arg2 sourceType:(long long)arg3 mediaType:(unsigned)arg4 ;
-(BOOL)importOriginalArtworkFromFileURL:(id)arg1 withArtworkToken:(id)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 mediaType:(unsigned)arg5 ;
-(BOOL)removeArtworkAssetWithToken:(id)arg1 ;
-(BOOL)deleteArtworkToken:(id)arg1 ;
-(void)migrateExistingArtworkToken:(id)arg1 newArtworkToken:(id)arg2 newSourceType:(long long)arg3 ;
-(void)removeArtworkTokenForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 ;
-(void)removeTombstonesForDeletedItems;
-(void)removeOrphanedTracks;
-(void)removeItemsWithFamilyAccountID:(unsigned long long)arg1 purchaserAccountID:(unsigned long long)arg2 downloaderAccountID:(unsigned long long)arg3 ;
-(void)migratePresignedValidity;
-(id)_newGeniusDBConnectionAtPath:(id)arg1 ;
-(ML3DatabaseConnectionPool *)connectionPool;
-(NSArray *)libraryEntityFilterPredicates;
-(NSArray *)libraryContainerFilterPredicates;
-(NSArray *)libraryPublicEntityFilterPredicates;
-(NSArray *)libraryPublicContainerFilterPredicates;
-(SCD_Struct_ML5)nameOrderForString:(id)arg1 ;
-(BOOL)supportsUbiquitousPlaybackPositions;
-(id)artistGroupingKeyForArtistName:(id)arg1 seriesName:(id)arg2 ;
-(id)artistForArtistName:(id)arg1 seriesName:(id)arg2 ;
-(id)albumForAlbumArtistPersistentID:(long long)arg1 albumName:(id)arg2 feedURL:(id)arg3 seasonNumber:(id)arg4 compilation:(BOOL)arg5 ;
-(BOOL)repairAlbumArtistRelationshipsWithConnection:(id)arg1 ;
-(BOOL)_validateDatabaseUsingConnection:(id)arg1 error:(id*)arg2 ;
-(BOOL)coerceValidDatabaseWithError:(id*)arg1 ;
-(BOOL)inTransactionUpdateSortMapOnConnection:(id)arg1 forceUpdateOriginals:(BOOL)arg2 ;
-(BOOL)inTransactionUpdateSearchMapOnConnection:(id)arg1 ;
-(id)_systemUnicodeVersionData;
-(BOOL)coalesceMismatchedCollectionsUsingConnection:(id)arg1 ;
-(id)insertStringsIntoSortMap:(id)arg1 didReSortMap:(BOOL*)arg2 ;
-(BOOL)_coalesceMismatchedCollectionClass:(Class)arg1 usingConnection:(id)arg2 ;
-(BOOL)updateSortMapOnConnection:(id)arg1 ;
-(BOOL)validateSortMapUnicodeVersionOnConnection:(id)arg1 ;
-(id)insertStringsIntoSortMap:(id)arg1 ;
-(long long)insertStringIntoSortMapNoTransaction:(id)arg1 ;
-(id)genreForGenre:(id)arg1 ;
-(id)composerForComposerName:(id)arg1 ;
-(id)albumArtistForEffectiveAlbumArtistName:(id)arg1 ;
-(BOOL)updateSystemPlaylistNamesForCurrentLanguage;
-(void)updateOrderingLanguagesForCurrentLanguage;
-(BOOL)autoFilledTracksArePurgeable;
-(long long)purgeableStorageSizeWithUrgency:(unsigned long long)arg1 includeAutoFilledTracks:(BOOL)arg2 ;
-(long long)_databaseFileFreeSpace;
-(BOOL)shouldOptimizeStorage;
-(unsigned long long)_managedPurgeableTracksTotalSizeWithUrgency:(unsigned long long)arg1 ;
-(long long)_purgeableTracksTotalSizeWithUrgency:(unsigned long long)arg1 includeAutoFilledTracks:(BOOL)arg2 ;
-(long long)_purgeableArtworkTotalSizeWithUrgency:(unsigned long long)arg1 ;
-(long long)_clearAllCloudAssets;
-(long long)clearPurgeableStorageAmount:(long long)arg1 withUrgency:(unsigned long long)arg2 includeAutoFilledTracks:(BOOL)arg3 ;
-(long long)_clearDatabaseFileFreeSpace;
-(long long)_clearOrphanedAssetsOfAmount:(long long)arg1 withUrgency:(unsigned long long)arg2 ;
-(unsigned long long)_managedClearPurgeableTracksOfAmount:(unsigned long long)arg1 urgency:(unsigned long long)arg2 ;
-(long long)_clearPurgeableTracksOfAmount:(long long)arg1 withUrgency:(unsigned long long)arg2 includeAutoFilledTracks:(BOOL)arg3 ;
-(long long)_clearPurgeableArtworkOfAmount:(long long)arg1 withUrgency:(unsigned long long)arg2 ;
-(long long)_clearPurgeableTracksOfAmount:(long long)arg1 withUrgency:(unsigned long long)arg2 includeCloudAssets:(BOOL)arg3 includeAutoFilledTracks:(BOOL)arg4 ;
-(long long)_artworkTotalSize;
-(void)_enumeratePurgeableStreamedTracksForUrgency:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_enumeratePurgeableAlbumTracksForUrgency:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_enumeratePurgeablePodcastEpisodesForUrgency:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_nonPurgeableAlbumsQuerySQLWithUrgency:(unsigned long long)arg1 ;
-(id)_purgeableItemsPredicateSQLWithUrgency:(unsigned long long)arg1 ;
-(long long)minimumPurgeableStorage;
-(unsigned long long)_totalSizeForAllNonCacheTracks;
-(id)_purgeableAlbumsQuerySQLWithUrgency:(unsigned long long)arg1 ;
-(void)_enumeratePurgeableTracksForUrgency:(unsigned long long)arg1 includeAutoFilledTracks:(BOOL)arg2 includeCloudAssets:(BOOL)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)_purgeableTrackPredicateWithUrgency:(unsigned long long)arg1 includeAutoFilledTracks:(BOOL)arg2 includeCloudAssets:(BOOL)arg3 ;
-(BOOL)_shouldPurgeKeepLocalTracksForUrgency:(unsigned long long)arg1 ;
-(id)_allKeepLocalPlaylistTracks;
-(id)_notInKeepLocalCollectionPredicate;
-(long long)_cloudAssetsTotalSize;
-(long long)clearAllRemovedTracks;
-(void)setAutoFilledTracksArePurgeable:(BOOL)arg1 ;
-(void)setShouldOptimizeStorage:(BOOL)arg1 ;
-(void)setMinimumPurgeableStorage:(long long)arg1 ;
-(id)uppService;
-(void)updateUbiquitousDatabaseByRemovingUbiquitousMetadataFromTrackWithPersistentID:(long long)arg1 ;
-(void)updateMusicLibraryByApplyingUbiquitousBookmarkMetadataToTrackWithPersistentID:(long long)arg1 ;
-(long long)syncIdFromMultiverseId:(id)arg1 ;
-(BOOL)prepareUnitTestDatabaseWithSQLFromContentsOfFile:(id)arg1 error:(id*)arg2 ;
-(long long)currentRevision;
-(long long)currentContentRevision;
-(void)importArtworkTokenForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkToken:(id)arg3 artworkType:(long long)arg4 sourceType:(long long)arg5 ;
-(BOOL)importOriginalArtworkFromImageData:(id)arg1 withArtworkToken:(id)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 mediaType:(unsigned)arg5 ;
-(void)notifyDisplayValuesPropertyDidChange;
-(long long)syncGenerationID;
-(id)localizedSectionHeaderForSectionIndex:(unsigned long long)arg1 ;
-(NSArray *)localizedSectionIndexTitles;
-(BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2 ;
-(id)valueForDatabaseProperty:(id)arg1 ;
-(BOOL)isCurrentThreadInTransaction;
-(BOOL)deleteDatabaseProperty:(id)arg1 ;
-(BOOL)recordPlayEventForAlbumPersistentID:(long long)arg1 ;
-(unsigned long long)sectionIndexTitleIndexForSectionIndex:(unsigned long long)arg1 ;
-(NSString *)libraryUID;
-(void)databaseConnectionAllowingWrites:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performDatabaseTransactionWithBlock:(/*^block*/id)arg1 ;
-(BOOL)recordPlayEventForContainerPersistentID:(long long)arg1 ;
-(ML3Container *)currentDevicePlaybackHistoryPlaylist;
-(NSArray *)preferredAudioTracks;
-(NSArray *)preferredSubtitleTracks;
-(void)enumeratePersistentIDsAfterRevision:(long long)arg1 revisionTrackingCode:(unsigned long long)arg2 maximumRevisionType:(int)arg3 forMediaTypes:(id)arg4 inUsersLibrary:(BOOL)arg5 usingBlock:(/*^block*/id)arg6 ;
-(void)setLibraryEntityFilterPredicates:(NSArray *)arg1 ;
-(void)setLibraryContainerFilterPredicates:(NSArray *)arg1 ;
-(void)setLibraryPublicEntityFilterPredicates:(NSArray *)arg1 ;
-(void)setLibraryPublicContainerFilterPredicates:(NSArray *)arg1 ;
-(ML3Container *)currentDevicePurchasesPlaylist;
-(void)enumeratePersistentIDsAfterRevision:(long long)arg1 revisionTrackingCode:(unsigned long long)arg2 maximumRevisionType:(int)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)retrieveBestArtworkTokensForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 retrievalTime:(double)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)isArtworkTokenAvailable:(id)arg1 ;
-(long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)arg1 urgency:(unsigned long long)arg2 respectSongMattress:(BOOL)arg3 ;
-(BOOL)isLibraryEmpty;
-(void)dealloc;
-(void)setDelegate:(id<ML3MusicLibraryDelegate>)arg1 ;
-(id<ML3MusicLibraryDelegate>)delegate;
-(id)initWithPath:(id)arg1 ;
@end

