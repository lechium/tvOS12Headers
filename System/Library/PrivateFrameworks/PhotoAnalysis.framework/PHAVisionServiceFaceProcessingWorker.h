/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoAnalysis/PhotoAnalysis-Structs.h>
#import <PhotoAnalysis/PHAVisionServiceWorker.h>
#import <libobjc.A.dylib/PVNotificationListener.h>
#import <libobjc.A.dylib/PVVisionIntegrating.h>
#import <libobjc.A.dylib/PVPersonPromoterDelegate.h>
#import <libobjc.A.dylib/PLPhotoAnalysisVisionServiceFaceProcessingProtocol.h>

@class PhotoVision, PHAVisionServicePersistenceDelegate, NSMutableDictionary, NSURL, NSString;

@interface PHAVisionServiceFaceProcessingWorker : PHAVisionServiceWorker <PVNotificationListener, PVVisionIntegrating, PVPersonPromoterDelegate, PLPhotoAnalysisVisionServiceFaceProcessingProtocol> {

	PhotoVision* _photoVision;
	PHAVisionServicePersistenceDelegate* _persistenceDelegate;
	SCD_Struct_PH4 _analysisStatistics;
	NSMutableDictionary* _state;
	unsigned long long _incrementalPersonProcessingStage;
	BOOL _disabledByUserDefaults;
	unsigned long long _faceAnalysisOptions;
	unsigned long long _faceIDModelRebuildPeriod;
	NSURL* _suggestionLoggingDirectory;
	BOOL _suggestionLoggingSessionOpen;
	BOOL _suggestionsLoggingEnabled;
	BOOL _clustererNeedsSyncing;
	BOOL _personBuilderMergeCandidatesEnabled;
	unsigned long long _lastMinimumFaceGroupSizeForCreatingMergeCandidates;

}

@property (assign,nonatomic) unsigned long long incrementalPersonProcessingStage;                                //@synthesize incrementalPersonProcessingStage=_incrementalPersonProcessingStage - In the implementation block
@property (assign,nonatomic) BOOL personBuilderMergeCandidatesEnabled;                                           //@synthesize personBuilderMergeCandidatesEnabled=_personBuilderMergeCandidatesEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long lastMinimumFaceGroupSizeForCreatingMergeCandidates;              //@synthesize lastMinimumFaceGroupSizeForCreatingMergeCandidates=_lastMinimumFaceGroupSizeForCreatingMergeCandidates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(short)workerType;
+(BOOL)runsExclusively;
+(long long)applicationDataFolderIdentifier;
-(void)pingFaceWorkerWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)performFaceProcessingOnAssetWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)suggestPersonsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)suggestVerifiedPersonLocalIdentifierForFaceWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)suggestVerifiedPersonLocalIdentifierForPersonWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)renderFaceTilesForFaceLocalIdentifiers:(id)arg1 inAssetWithLocalIdentifier:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(BOOL)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)resetFaceClusteringStateWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)resetPeopleWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)resetFaceClassificationModelWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)reclusterFacesWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)processPersonsWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)faceClusteringInformation:(unsigned long long)arg1 withContext:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)validateClusterCacheWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)faceProcessingStatusForUserInterfaceWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestSuggestedMePersonIdentifierWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)personPromoterStatusWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)faceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)rebuildPersonsWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)warmup;
-(id)suggestedMeIdentifierWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 updateBlock:(/*^block*/id)arg3 ;
-(id)densityClusteringForObjects:(id)arg1 maximumDistance:(double)arg2 minimumNumberOfObjects:(unsigned long long)arg3 withDistanceBlock:(/*^block*/id)arg4 ;
-(id)bestRepresentativeFaceForPerson:(id)arg1 qualityMeasureByFace:(id)arg2 canceler:(id)arg3 ;
-(id)keyFaceForPerson:(id)arg1 qualityMeasureByFace:(id)arg2 updateBlock:(/*^block*/id)arg3 ;
-(id)performSocialGroupsIdentifiersWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 overTheYearsComputation:(BOOL)arg3 updateBlock:(/*^block*/id)arg4 ;
-(BOOL)hasAdditionalJobsForScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2 ;
-(id)nextAdditionalJobWithScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2 ;
-(id)statusAsDictionary;
-(id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2 ;
-(BOOL)getLocallyAvailableAssetResource:(id*)arg1 forAnalyzingAsset:(id)arg2 error:(id*)arg3 ;
-(void)configureRequest:(id)arg1 algorithmUmbrellaVersion:(unsigned)arg2 ;
-(void)cooldown;
-(id)preferredAssetResourcesForAnalyzingAsset:(id)arg1 ;
-(unsigned long long)analyzeAssetResourceFileAtURL:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id*)arg4 ;
-(unsigned long long)analyzeImageData:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id*)arg4 ;
-(BOOL)processAsset:(id)arg1 error:(id*)arg2 ;
-(void)willCompleteJob:(id)arg1 ;
-(id)_faceToFaceCountMapForFaces:(id)arg1 ;
-(BOOL)stopAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(BOOL)performPersonBuildingWithCanceler:(id)arg1 error:(id*)arg2 ;
-(BOOL)processDirtyFaceCrop:(id)arg1 error:(id*)arg2 ;
-(BOOL)performFaceClusteringWithCompletion:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)terminatePhotoVision;
-(void)generateFaceIDModelShouldForce:(BOOL)arg1 progress:(id)arg2 extendTimeoutBlock:(/*^block*/id)arg3 ;
-(void)_readState;
-(id)_pvImageForAssetResourceFileURL:(id)arg1 forAsset:(id)arg2 error:(id*)arg3 ;
-(id)_pvImageForAssetResource:(id)arg1 asset:(id)arg2 error:(id*)arg3 ;
-(BOOL)_validateAsset:(id)arg1 error:(id*)arg2 ;
-(int)_performPersistedFaceAnalysisOfPVImage:(id)arg1 withAttributes:(id)arg2 forAsset:(id)arg3 error:(id*)arg4 ;
-(id)_analyzePVImage:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id*)arg4 ;
-(BOOL)_synchronouslyGenerateFaceTilesForFaces:(id)arg1 fromAsset:(id)arg2 assetImage:(id)arg3 error:(id*)arg4 ;
-(id)_photoVisionAllowingCreation:(BOOL)arg1 syncClusterCache:(BOOL)arg2 error:(id*)arg3 ;
-(void)_appendToSuggestionsLog:(id)arg1 ;
-(void)_closeSuggestionsLoggingSession;
-(void)_openSuggestionsLoggingSession;
-(void)_logFaceToSuggestionsLog:(id)arg1 ;
-(id)_suggestionsForPersonLocalIdentifier:(id)arg1 clusterSequenceNumbers:(id)arg2 excludePersonLocalIdentifiers:(id)arg3 operation:(id)arg4 context:(id)arg5 error:(id*)arg6 ;
-(void)_finalizeSuggestionsLog;
-(void)_performIntermediateVisionCleanup;
-(void)processDirtyFaceCrops;
-(BOOL)_generateAndAssociateFaceprintedFaceForFaceCrop:(id)arg1 createFaceTorsoprint:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)_updateFaceCropFace:(id)arg1 withFaceprintForFaceCrop:(id)arg2 createFaceTorsoprint:(BOOL)arg3 error:(id*)arg4 ;
-(void)setLastMinimumFaceGroupSizeForCreatingMergeCandidate:(unsigned long long)arg1 ;
-(BOOL)_setAllFaceGroupsNeedPersonBuilding;
-(void)setPersonBuilderMergeCandidatesEnabled:(BOOL)arg1 ;
-(void)_performFullVisionCleanup;
-(void)_resetAnalysisStatistics;
-(void)_logAnalysisStatistics;
-(void)_performFaceCropProcessingWhileKeepingAliveJob:(id)arg1 ;
-(BOOL)shouldRebuildFaceIDModel;
-(BOOL)_needToRunFaceCropProcessingJobForScenario:(unsigned long long)arg1 ;
-(BOOL)_needToRunPersonBuildingJobForScenario:(unsigned long long)arg1 ;
-(BOOL)_needToRunClusteringJobForScenario:(unsigned long long)arg1 ;
-(BOOL)hasStandaloneJobsForScenario:(unsigned long long)arg1 ;
-(BOOL)_needToRunFaceIDModelCreationForScenario:(unsigned long long)arg1 ;
-(BOOL)_needToRunPersonPromoterForScenario:(unsigned long long)arg1 ;
-(void)setIncrementalPersonProcessingStage:(unsigned long long)arg1 ;
-(id)workerStateFileURL;
-(id)_facesRequiringFaceCropGenerationForAsset:(id)arg1 error:(id*)arg2 ;
-(BOOL)_generateAndPersistFaceCropsOfFaces:(id)arg1 inImage:(id)arg2 forAsset:(id)arg3 error:(id*)arg4 ;
-(int)_faceWorkerTasksToPerformOnAsset:(id)arg1 accordingToAnalysisAttributes:(id)arg2 ;
-(BOOL)_generateAndPersistFaceCropsOfUserConfirmedFacesInImage:(id)arg1 forAsset:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)_analyzeAsset:(id)arg1 withAttributes:(id)arg2 usingPVImageProvidedByBlock:(/*^block*/id)arg3 error:(id*)arg4 ;
-(int)_performPersistedFaceAnalysisOfResource:(id)arg1 withAttributes:(id)arg2 forAsset:(id)arg3 error:(id*)arg4 ;
-(void)_willPerformFaceClustering;
-(void)_didPerformFaceClustering;
-(id)_suggestionsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 operation:(id)arg4 error:(id*)arg5 ;
-(BOOL)_renderFaceTilesForFaceLocalIdentifiers:(id)arg1 inAssetWithLocalIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)deletePersonModel;
-(BOOL)_deleteAllVerifiedPersonsWithError:(id*)arg1 ;
-(BOOL)_promotePersonsWithError:(id*)arg1 ;
-(BOOL)_clusterFacesWithPhotoVision:(id)arg1 incrementally:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)_buildPersonsIncrementally:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)faceIDModelLastGenerationDidExceedTimeInterval;
-(id)fetchPersonsForFaceIDModel;
-(id)personModelPath;
-(BOOL)persistPersonModel:(id)arg1 ;
-(void)markLastBackgroundFaceIDModelRebuildJobDate;
-(void)handlePVNotification:(id)arg1 ;
-(void)interruptPhotoVision;
-(id)_pvImageForAsset:(id)arg1 error:(id*)arg2 ;
-(void)_copyImageAtURLToSuggestionsLoggingSession:(id)arg1 ;
-(BOOL)_resetFaceClusteringStateWithContext:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)incrementalPersonProcessingStage;
-(BOOL)personBuilderMergeCandidatesEnabled;
-(unsigned long long)lastMinimumFaceGroupSizeForCreatingMergeCandidates;
-(void)setLastMinimumFaceGroupSizeForCreatingMergeCandidates:(unsigned long long)arg1 ;
-(void)shutdown;
-(void)_setStateValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isEnabled;
@end

