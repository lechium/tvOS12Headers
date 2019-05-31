/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:59 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class PLManagedAsset, NSString, NSDate;

@interface PLAssetAnalysisState : PLManagedObject

@property (nonatomic,retain) PLManagedAsset * asset; 
@property (assign,nonatomic) short workerType; 
@property (assign,nonatomic) int analysisState; 
@property (nonatomic,retain) NSString * assetUUID; 
@property (nonatomic,retain) NSDate * lastIgnoredDate; 
@property (nonatomic,retain) NSDate * ignoreUntilDate; 
@property (assign,nonatomic) int workerFlags; 
@property (assign,nonatomic) double sortToken; 
+(id)insertIntoManagedObjectContext:(id)arg1 forAsset:(id)arg2 workerType:(short)arg3 initialState:(int)arg4 lastIgnoreDate:(id)arg5 ignoreUntilDate:(id)arg6 workerFlags:(int)arg7 ;
+(id)_managedObjectContextForStateChangesWithPersistentStoreCoordinator:(id)arg1 ;
+(id)workerTypesPersistingAnalysisState;
+(BOOL)isUnitTestWorker:(short)arg1 ;
+(BOOL)_inqApplyChanges:(id)arg1 assetUUID:(id)arg2 inManagedObjectContext:(id)arg3 allowUnsafeSetProcessed:(BOOL)arg4 error:(id*)arg5 ;
+(id)_subArrayOfChanges:(id)arg1 toRetryWithConflicts:(id)arg2 ;
+(id)_managedObjectContextForStateChanges;
+(id)_sanitizeChanges:(id)arg1 ;
+(BOOL)_performTransactionApplyChanges:(id)arg1 assetUUID:(id)arg2 inManagedObjectContext:(id)arg3 allowUnsafeSetProcessed:(BOOL)arg4 error:(id*)arg5 ;
+(BOOL)_performTransactionResolveConflicts:(id)arg1 originalChanges:(id)arg2 assetUUID:(id)arg3 inManagedObjectContext:(id)arg4 allowUnsafeSetProcessed:(BOOL)arg5 newChanges:(id*)arg6 error:(id*)arg7 ;
+(unsigned long long)_countOfAssetsAllowedForProcessingInLibrary:(id)arg1 error:(id*)arg2 ;
+(id)_countOfAnalysisStatesByWorkerTypeWithPredicate:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
+(BOOL)_bulkUpdateAnalysisStatesTo:(int)arg1 predicate:(id)arg2 error:(id*)arg3 ;
+(void)_removeAnalysisRecordsWithPredicate:(id)arg1 ;
+(id)insertIntoPhotoLibrary:(id)arg1 forAsset:(id)arg2 workerType:(short)arg3 initialState:(int)arg4 lastIgnoreDate:(id)arg5 ignoreUntilDate:(id)arg6 workerFlags:(int)arg7 ;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(BOOL)applyAnalysisStateChanges:(id)arg1 assetUUID:(id)arg2 allowUnsafeSetProcessed:(BOOL)arg3 error:(id*)arg4 ;
+(id)keyPathDictionaryWithWorkerType:(short)arg1 workerFlags:(int)arg2 analysisState:(int)arg3 lastIgnoredDate:(id)arg4 ignoreUntilDate:(id)arg5 ;
+(void)requestAnalysisCountsWithCompletion:(/*^block*/id)arg1 ;
+(id)assetUUIDsFromAssetObjectIDs:(id)arg1 whereAllWorkerTypes:(id)arg2 matchState:(id)arg3 ;
+(id)analysisCountsForWorkerType:(short)arg1 ;
+(void)requestCountOfAnalysisRecordsForDeletedAssetsWithCompletion:(/*^block*/id)arg1 ;
+(id)deletedAssetUUIDsForAnalysisByWorkerType:(short)arg1 fetchLimit:(unsigned long long)arg2 inLibrary:(id)arg3 error:(id*)arg4 ;
+(BOOL)resetPendingStatesWithError:(id*)arg1 ;
+(BOOL)markStatesProcessedForWorkerType:(short)arg1 error:(id*)arg2 ;
+(BOOL)cleanupInvalidIgnoreUntilDatesWithError:(id*)arg1 ;
+(BOOL)clearIgnoreUntilDatesWithError:(id*)arg1 ;
+(void)removeAnalysisRecordsForDeletedAssetUUIDs:(id)arg1 forWorkerType:(short)arg2 ;
+(void)removeAnalysisRecordsWithNoAssetUUID;
+(int)defaultWorkerFlagsForWorkerType:(short)arg1 ;
+(id)workInfoForAnalysisWithWorkerType:(short)arg1 additionalStatesToExclude:(id)arg2 fetchLimit:(unsigned long long)arg3 inLibrary:(id)arg4 error:(id*)arg5 ;
+(id)entityName;
+(void)requestTotalProgressCountsForWorkerType:(short)arg1 states:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setSortToken:(double)arg1 ;
-(void)unionWorkerFlags:(int)arg1 ;
-(id)debugLogDescription;
-(id)mutableKeyPathDictionary;
-(void)setAsset:(PLManagedAsset *)arg1 ;
@end

