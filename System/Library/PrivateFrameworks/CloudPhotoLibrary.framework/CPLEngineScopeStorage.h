/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class _CPLEngineScopeCache, NSMutableSet, NSString, CPLPlatformObject;

@interface CPLEngineScopeStorage : CPLEngineStorage <CPLAbstractObject> {

	_CPLEngineScopeCache* _scopeCache;
	NSMutableSet* _scopeIdentifiersExcludedFromMingling;
	NSMutableSet* _scopeIdentifiersManuallyExcludedFromMingling;
	BOOL _shouldResetGlobalsForMainScope;
	BOOL _scheduleATransportUpdate;
	BOOL _scheduleAScopeUpdate;
	BOOL _schedulePushHighPriorityToTransport;
	BOOL _schedulePushToTransport;
	BOOL _schedulePullFromTransport;
	BOOL _schedulePullFromClient;
	BOOL _shouldChangeSyncManagerPriorityBoost;
	BOOL _syncManagerPriorityBoost;
	BOOL _someScopeMightHaveToBePulledByClient;
	BOOL _clearSomeScopeMightHaveToBePulledByClient;

}

@property (nonatomic,readonly) BOOL hasStagedSyncAnchors; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
-(id)initWithEngineStore:(id)arg1 name:(id)arg2 ;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;
-(id)enumeratorForScopesNeedingToUpdateTransport;
-(long long)transportUpdateTaskForScope:(id)arg1 ;
-(id)flagsForScope:(id)arg1 ;
-(BOOL)setScope:(id)arg1 hasCompletedTransportUpdate:(long long)arg2 error:(id*)arg3 ;
-(BOOL)setValue:(BOOL)arg1 forFlag:(long long)arg2 forScope:(id)arg3 error:(id*)arg4 ;
-(id)libraryInfoForScope:(id)arg1 ;
-(BOOL)storeScopeListSyncAnchor:(NSData*)arg1 error:(id*)arg2 ;
-(BOOL)resetLocalSyncStateForScope:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetCompleteSyncStateForScope:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetCompleteSyncStateIncludingIDMappingForScope:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetSyncAnchorForScope:(id)arg1 error:(id*)arg2 ;
-(id)enumeratorForScopesIncludeInactive:(BOOL)arg1 ;
-(unsigned long long)supportedFeatureVersionInLastSyncForScope:(id)arg1 ;
-(BOOL)setScopeNeedsUpdateFromTransport:(id)arg1 error:(id*)arg2 ;
-(BOOL)setScopeHasChangesToPullFromTransport:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasStagedSyncAnchors;
-(id)scopeWithIdentifier:(id)arg1 ;
-(id)createScopeWithIdentifier:(id)arg1 scopeType:(long long)arg2 flags:(long long)arg3 transportScope:(id)arg4 error:(id*)arg5 ;
-(NSData*)scopeListSyncAnchor;
-(BOOL)setScopeHasChangesToPushToTransport:(id)arg1 error:(id*)arg2 ;
-(BOOL)clientAcknowledegedScopeChanges:(id)arg1 error:(id*)arg2 ;
-(id)filterOnScopesAllowingMingling;
-(BOOL)storeTransientSyncAnchor:(NSData*)arg1 forScope:(id)arg2 error:(id*)arg3 ;
-(BOOL)valueForFlag:(long long)arg1 forScope:(id)arg2 ;
-(NSData*)transientSyncAnchorForScope:(id)arg1 ;
-(BOOL)setSyncAnchor:(NSData*)arg1 forScope:(id)arg2 error:(id*)arg3 ;
-(BOOL)hasStagedSyncAnchorForScope:(id)arg1 ;
-(BOOL)setAllScopesHasChangesToPullFromTransportWithError:(id*)arg1 ;
-(long long)indexForLocalScopeIdentifier:(id)arg1 ;
-(long long)indexForCloudScopeIdentifier:(id)arg1 ;
-(id)transportScopeForScope:(id)arg1 ;
-(void)_cacheScope:(id)arg1 ;
-(BOOL)hasScopesNeedingToPushHighPriorityChangesToTransport;
-(id)enumeratorForScopesNeedingUpdateFromTransport;
-(id)enumeratorForScopesNeedingToPushHighPriorityChangesToTransport;
-(id)enumeratorForScopesNeedingToPushChangesToTransport;
-(BOOL)hasScopesNeedingToPushChangesToTransport;
-(void)_forceSyncManagerPriorityBoost;
-(long long)pushToTransportTaskForScope:(id)arg1 ;
-(BOOL)setScope:(id)arg1 hasCompletedPushToTransportTask:(long long)arg2 error:(id*)arg3 ;
-(void)_checkSyncManagerPriorityBoost;
-(BOOL)doesScopeNeedToPushChangesToTransport:(id)arg1 ;
-(id)enumeratorForScopesNeedingToPullChangesFromTransport;
-(BOOL)hasScopesNeedingToPullChangesFromTransport;
-(long long)pullFromTransportTaskForScope:(id)arg1 ;
-(BOOL)setScope:(id)arg1 hasCompletedPullFromTransportTask:(long long)arg2 error:(id*)arg3 ;
-(BOOL)doesScopeNeedToPullChangesFromTransport:(id)arg1 ;
-(BOOL)setPullFromTransportExpirationInterval:(double)arg1 scope:(id)arg2 error:(id*)arg3 ;
-(id)_scopeChangeForScope:(id)arg1 ;
-(BOOL)setScopeNeedsToBePulledByClient:(id)arg1 error:(id*)arg2 ;
-(BOOL)doesScopeNeedToBePulledByClient:(id)arg1 ;
-(id)_scopeWithIdentifier:(id)arg1 ;
-(id)_createScopeFromScopeChange:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteScopeWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)setScopeNeedsToUpdateTransport:(id)arg1 error:(id*)arg2 ;
-(BOOL)doesScopeNeedToUpdateTransport:(id)arg1 ;
-(BOOL)setScopeType:(long long)arg1 forScope:(id)arg2 error:(id*)arg3 ;
-(BOOL)updateFlags:(id)arg1 forScope:(id)arg2 error:(id*)arg3 ;
-(BOOL)setTransportScope:(id)arg1 forScope:(id)arg2 error:(id*)arg3 ;
-(BOOL)_handledDisabledFeaturesForScopeIfNecessary:(id)arg1 type:(long long)arg2 error:(id*)arg3 ;
-(void)_clearScopeCache;
-(void)includeScopeIdentifierInMingling:(id)arg1 ;
-(void)forceIncludeScopeIdentifierInMingling:(id)arg1 ;
-(id)_scopeWithLocalIndex:(long long)arg1 ;
-(id)_scopeWithCloudIndex:(long long)arg1 ;
-(id)scopedIdentifierForLocalScopedIdentifier:(id)arg1 ;
-(id)scopedIdentifierForCloudScopedIdentifier:(id)arg1 ;
-(BOOL)resetSyncStateForScope:(id)arg1 error:(id*)arg2 ;
-(BOOL)storeSupportedFeatureVersionInLastSync:(unsigned long long)arg1 forScope:(id)arg2 error:(id*)arg3 ;
-(BOOL)setupResetSyncTransportGroupForScope:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetLocalRecordsForScopeWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)_resetLocalSyncStateForScope:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetCloudRecordsForScopeWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)_resetCompleteSyncStateForScope:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetStableRecordsForScopeWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)setupAnchorResetTransportGroupForScope:(id)arg1 error:(id*)arg2 ;
-(long long)stableScopeIndexForScopeIdentifier:(id)arg1 ;
-(id)statusDictionaryForScope:(id)arg1 ;
-(id)primaryScope;
-(void)_resetGlobalsForMainScope;
-(id)disabledDateForScope:(id)arg1 ;
-(BOOL)setDisabledDate:(id)arg1 forScope:(id)arg2 error:(id*)arg3 ;
-(id)deleteDateForScope:(id)arg1 ;
-(BOOL)setDeleteDate:(id)arg1 forScope:(id)arg2 error:(id*)arg3 ;
-(id)uploadTransportGroupForScope:(id)arg1 ;
-(id)downloadTransportGroupForScope:(id)arg1 ;
-(unsigned long long)estimatedSizeForScope:(id)arg1 ;
-(unsigned long long)estimatedAssetCountForScope:(id)arg1 ;
-(BOOL)hasFinishedInitialSyncForScope:(id)arg1 ;
-(BOOL)didDropSomeRecordsForScope:(id)arg1 ;
-(BOOL)setDidDropSomeRecordsForScope:(id)arg1 error:(id*)arg2 ;
-(BOOL)commitSyncAnchorForScope:(id)arg1 error:(id*)arg2 ;
-(BOOL)discardStagedSyncAnchorForScope:(id)arg1 error:(id*)arg2 ;
-(BOOL)discardStagedSyncAnchorWithScopeFilter:(id)arg1 error:(id*)arg2 ;
-(BOOL)setHasFetchedInitialSyncAnchor:(BOOL)arg1 forScope:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)_indexOfCurrentClassForInitialQueriesForScope:(id)arg1 ;
-(NSData*)initialSyncAnchorForScope:(id)arg1 ;
-(BOOL)hasScopeFetchedInitialSyncAnchor:(id)arg1 ;
-(BOOL)setInitialSyncAnchor:(NSData*)arg1 forScope:(id)arg2 error:(id*)arg3 ;
-(BOOL)hasFinishedAFullSyncForScope:(id)arg1 ;
-(BOOL)storeEstimatedSize:(unsigned long long)arg1 estimatedAssetCount:(unsigned long long)arg2 forScope:(id)arg3 error:(id*)arg4 ;
-(BOOL)updateInitialSyncTransportGroupEstimatedSize:(unsigned long long)arg1 assetCount:(unsigned long long)arg2 forScope:(id)arg3 error:(id*)arg4 ;
-(BOOL)upgradeScopesWithNewLibraryOption:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)remainingClassesForInitialQueryForScope:(id)arg1 ;
-(id)filterForIncludedScopeIdentifiers:(id)arg1 ;
-(id)filterForExcludedScopeIdentifiers:(id)arg1 ;
-(id)_scopeWithStableIndex:(long long)arg1 ;
-(id)scopeChangesNeedingToBePulledByClientWithMaximumCount:(unsigned long long)arg1 ;
-(BOOL)updateScopeWithChange:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasScopesNeedingToUpdateTransport;
-(id)allScopeIdentifiersIncludeInactive:(BOOL)arg1 ;
-(id)scopeIdentifierForLocalScopeIndex:(long long)arg1 ;
-(id)scopeIdentifierForCloudScopeIndex:(long long)arg1 ;
-(BOOL)setLocalScopeIndexOnChange:(id)arg1 ;
-(BOOL)setCloudScopeIndexOnChange:(id)arg1 ;
-(id)validLocalScopeIndexes;
-(id)validCloudScopeIndexes;
-(BOOL)setupInitialSyncTransportGroupsForScope:(id)arg1 error:(id*)arg2 ;
-(BOOL)clearTransportGroupsForScope:(id)arg1 error:(id*)arg2 ;
-(BOOL)setLibraryInfo:(id)arg1 forScope:(id)arg2 error:(id*)arg3 ;
-(NSData*)syncAnchorForScope:(id)arg1 ;
-(BOOL)disableInitialQueriesForScope:(id)arg1 error:(id*)arg2 ;
-(Class)classOfRecordsForInitialQueryForScope:(id)arg1 ;
-(BOOL)markInitialQueryIsDoneForRecordsOfClass:(Class)arg1 forScope:(id)arg2 error:(id*)arg3 ;
-(BOOL)resetInitialSyncAnchorForScope:(id)arg1 error:(id*)arg2 ;
-(BOOL)supportedFeatureVersionIsMostRecentForScope:(id)arg1 ;
-(void)excludeScopeIdentifierFromMingling:(id)arg1 ;
-(void)forceExcludeScopeIdentifierFromMingling:(id)arg1 ;
-(unsigned long long)scopeType;
-(BOOL)openWithError:(id*)arg1 ;
-(id)status;
@end

