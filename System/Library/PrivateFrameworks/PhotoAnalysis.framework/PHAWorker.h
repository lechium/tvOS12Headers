/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHAWorkerConfiguration.h>
#import <libobjc.A.dylib/PHAServiceOperationHandling.h>

@protocol PHAAssetResourceDataLoading;
@class PHAManager, PFSerialQueue, PHAServiceCancelableOperation, PHPhotoLibrary, NSURL, NSString;

@interface PHAWorker : NSObject <PHAWorkerConfiguration, PHAServiceOperationHandling> {

	PHAManager* _photoAnalysisManager;
	PFSerialQueue* _userInitiatedRequestQueue;
	BOOL _shutdownHasBeenCalled;
	BOOL _warmedUp;
	id<PHAAssetResourceDataLoading> _dataLoader;
	PHAServiceCancelableOperation* _currentOperation;

}

@property (assign,getter=isWarmedUp,nonatomic) BOOL warmedUp;                         //@synthesize warmedUp=_warmedUp - In the implementation block
@property (nonatomic,retain) id<PHAAssetResourceDataLoading> dataLoader;              //@synthesize dataLoader=_dataLoader - In the implementation block
@property (readonly) PHPhotoLibrary * photoLibrary; 
@property (readonly) PHAManager * photoAnalysisManager; 
@property (readonly) NSURL * persistentStorageDirectoryURL; 
@property (readonly) BOOL isEnabled; 
@property (getter=isQuiescent,readonly) BOOL quiescent; 
@property (retain) PHAServiceCancelableOperation * currentOperation;                  //@synthesize currentOperation=_currentOperation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(short)workerType;
+(BOOL)runsExclusively;
+(long long)applicationDataFolderIdentifier;
+(BOOL)persistsState;
+(void)configureXPCConnection:(id)arg1 ;
-(PHPhotoLibrary *)photoLibrary;
-(void)warmup;
-(void)handleOperation:(id)arg1 ;
-(void)setCurrentOperation:(PHAServiceCancelableOperation *)arg1 ;
-(PHAServiceCancelableOperation *)currentOperation;
-(BOOL)canRunWhenGraphIsLoaded;
-(BOOL)hasAdditionalJobsForScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2 ;
-(id)nextAdditionalJobWithScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2 ;
-(BOOL)isWarmedUp;
-(PHAManager *)photoAnalysisManager;
-(BOOL)startAcknowledgeDeletionsJob:(id)arg1 error:(id*)arg2 ;
-(BOOL)stopAcknowledgeDeletionsJob:(id)arg1 error:(id*)arg2 ;
-(id)statusAsDictionary;
-(void)operationDidFinish:(id)arg1 ;
-(id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2 ;
-(void)pingWorkerWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)cooldown;
-(BOOL)isQuiescent;
-(id<PHAAssetResourceDataLoading>)dataLoader;
-(void)startup;
-(BOOL)startAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(BOOL)stopAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(BOOL)dispatchSyncToUserInitiatedRequestQueue:(/*^block*/id)arg1 ;
-(id)libraryScopedWorkerPreferences;
-(void)setLibraryScopedWorkerPreferencesValue:(id)arg1 forKey:(id)arg2 ;
-(NSURL *)persistentStorageDirectoryURL;
-(BOOL)dispatchAsyncToUserInitiatedRequestQueue:(/*^block*/id)arg1 ;
-(void)assertUserInitiatedRequestQueue;
-(id)libraryScopedWorkerPreferencesURL;
-(void)updateLibraryScopedWorkerPreferencesWithEntriesFromDictionary:(id)arg1 keysToRemove:(id)arg2 ;
-(void)setWarmedUp:(BOOL)arg1 ;
-(void)setDataLoader:(id<PHAAssetResourceDataLoading>)arg1 ;
-(void)shutdown;
-(void)operationWillStart:(id)arg1 ;
-(id)init;
-(BOOL)isEnabled;
@end

