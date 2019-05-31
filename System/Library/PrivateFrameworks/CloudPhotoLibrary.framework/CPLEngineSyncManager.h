/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CPLEngineSyncTaskDelegate.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>
#import <libobjc.A.dylib/CPLEngineComponent.h>
#import <libobjc.A.dylib/CPLEngineForceSyncTaskDelegate.h>

@protocol CPLEngineStoreUserIdentifier, CPLEngineTransportSetupTask, OS_dispatch_queue;
@class NSObject, NSError, CPLCleanupTask, CPLTransportUpdateTask, CPLPullScopesTask, CPLScopeUpdateTask, CPLPushToTransportTask, CPLPullFromTransportTask, CPLMinglePulledChangesTask, CPLBackgroundDownloadsTask, CPLEngineForceSyncTask, NSMutableArray, CPLPlatformObject, CPLEngineLibrary, NSString;

@interface CPLEngineSyncManager : NSObject <CPLEngineSyncTaskDelegate, CPLAbstractObject, CPLEngineComponent, CPLEngineForceSyncTaskDelegate> {

	id<CPLEngineStoreUserIdentifier> _transportUserIdentifier;
	BOOL _setupIsDone;
	BOOL _shouldUpdateDisabledFeatures;
	BOOL _closed;
	id<CPLEngineTransportSetupTask> _setupTask;
	/*^block*/id _closingCompletionHandler;
	NSObject*<OS_dispatch_queue> _lock;
	NSError* _lastError;
	CPLCleanupTask* _cleanupTask;
	CPLTransportUpdateTask* _transportUpdateTask;
	CPLPullScopesTask* _pullScopesTask;
	CPLScopeUpdateTask* _scopeUpdateTask;
	CPLPushToTransportTask* _pushHighPriorityTask;
	CPLPushToTransportTask* _pushTask;
	CPLPullFromTransportTask* _pullTask;
	CPLMinglePulledChangesTask* _mingleTask;
	CPLBackgroundDownloadsTask* _backgroundDownloadsTask;
	CPLEngineForceSyncTask* _currentForceSyncTask;
	CPLEngineForceSyncTask* _pendingForceSyncTask;
	unsigned long long _shouldRestartSessionFromState;
	NSMutableArray* _lastErrors;
	BOOL _foreground;
	BOOL _boostPriority;
	BOOL _hasOverridenBudgets;
	BOOL _disabledSchedulerForForceSyncTask;
	BOOL _hasTransactionForSyncSession;
	BOOL _shouldTryToMingleImmediately;
	CPLPlatformObject* _platformObject;
	CPLEngineLibrary* _engineLibrary;
	unsigned long long _state;

}

@property (assign,setter=_setState:,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL shouldTryToMingleImmediately;                       //@synthesize shouldTryToMingleImmediately=_shouldTryToMingleImmediately - In the implementation block
@property (nonatomic,__weak,readonly) CPLEngineLibrary * engineLibrary;               //@synthesize engineLibrary=_engineLibrary - In the implementation block
@property (nonatomic,readonly) NSError * lastError; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject;                    //@synthesize platformObject=_platformObject - In the implementation block
+(id)platformImplementationProtocol;
+(id)shortDescriptionForState:(unsigned long long)arg1 ;
+(id)descriptionForState:(unsigned long long)arg1 ;
+(unsigned)qualityOfServiceForSyncSessions;
+(unsigned)qualityOfServiceForForcedTasks;
-(NSError *)lastError;
-(CPLEngineLibrary *)engineLibrary;
-(CPLPlatformObject *)platformObject;
-(void)closeAndDeactivate:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getStatusDictionaryWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithEngineLibrary:(id)arg1 ;
-(void)cancelCurrentSyncSession;
-(void)startSyncSessionWithMinimalPhase:(unsigned long long)arg1 ;
-(void)kickOffSyncSession;
-(void)discardTransportUserIdentifier;
-(void)requestDisabledFeaturesUpdate;
-(void)setSyncSessionShouldBeForeground:(BOOL)arg1 ;
-(void)resetTransportUserIdentifierAndRestartSync:(BOOL)arg1 ;
-(void)setBoostPriority:(BOOL)arg1 ;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)task:(id)arg1 didProgress:(float)arg2 userInfo:(id)arg3 ;
-(void)forceSyncTaskHasBeenCancelled:(id)arg1 ;
-(id)_shortDescriptionForCurrentState;
-(void)_cancelAllTasksLockedDeferringPushTaskCancellationIfCurrentlyUploadingForeground:(BOOL)arg1 ;
-(id)_descriptionForLaunchedTasks;
-(void)_cancelAllTasksForSetup;
-(void)_cancelAllTasksForCleanup;
-(void)_cancelAllTasksForTransportUpdate;
-(void)_cancelAllTasksForPullScopes;
-(void)_cancelAllTasksForScopeUpdate;
-(void)_cancelAllTasksForPushHighPriority:(BOOL)arg1 ;
-(void)_cancelAllTasksForPush:(BOOL)arg1 ;
-(void)_cancelAllTasksForPull;
-(void)_cancelAllTasksForBackgroundDownloads;
-(id)_descriptionForSetupTasks;
-(id)_descriptionForCleanupTasks;
-(id)_descriptionForTransportUpdateTasks;
-(id)_descriptionForPullScopesTasks;
-(id)_descriptionForScopeUpdateTasks;
-(id)_descriptionForPushHighPriorityTasks;
-(id)_descriptionForPushTasks;
-(id)_descriptionForPullTasks;
-(id)_descriptionForBackgroundDownloadsTasks;
-(BOOL)_launchSetupTask;
-(BOOL)_launchNecessaryTasksForCleanup;
-(BOOL)_launchNecessaryTasksForTransportUpdate;
-(BOOL)_launchNecessaryTasksForPullScopes;
-(BOOL)_launchNecessaryTasksForScopeUpdate;
-(BOOL)_launchNecessaryTasksForPushHighPriority;
-(BOOL)_launchNecessaryTasksForPush;
-(BOOL)_launchNecessaryTasksForPull;
-(BOOL)_launchNecessaryTasksForBackgroundDownloads;
-(void)_overrideBudgetsIfNeeded;
-(void)_launchForceSyncTaskIfNecessary;
-(void)_advanceToNextStateLockedMinimalState:(unsigned long long)arg1 ;
-(void)_setErrorForSyncSession:(id)arg1 ;
-(BOOL)_launchNecessaryTasksForCurrentStateLocked;
-(void)_notifyEndOfSyncSession;
-(void)_cancelAllTasksLocked;
-(void)_resetErrorForSyncSession;
-(void)_advanceToNextStateLocked;
-(void)_restartSyncSessionFromStateLocked:(unsigned long long)arg1 cancelIfNecessary:(BOOL)arg2 ;
-(void)dispatchSyncBlock:(/*^block*/id)arg1 ;
-(void)_moveAllTasksToBackgroundLocked;
-(BOOL)_checkForegroundAtLaunchForForceSyncTask;
-(void)_disabledSchedulerForForceSyncTaskIfNecessary;
-(void)dispatchForcedTaskBlock:(/*^block*/id)arg1 ;
-(void)_reenableSchedulerForForceSyncTaskIfNecessary;
-(BOOL)_prepareAndLaunchSyncTask:(id*)arg1 ;
-(void)_retainPowerAssertionForMingleTaskIfNecessary;
-(void)_releasePowerAssertionForMingleTaskIfNecessary;
-(BOOL)_didFinishSetupTaskWithError:(id)arg1 shouldStop:(BOOL*)arg2 ;
-(BOOL)_didFinishCleanupTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3 ;
-(BOOL)_didFinishTransportUpdateTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3 ;
-(BOOL)_didFinishPullScopesTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3 ;
-(BOOL)_didFinishScopeUpdateTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3 ;
-(BOOL)_didFinishPushHighPriorityTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3 ;
-(BOOL)_didFinishPushTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3 ;
-(BOOL)_didFinishPullTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3 ;
-(BOOL)_didFinishBackgroundDownloadsTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3 ;
-(float)_progressForCleanupTask:(id)arg1 progress:(float)arg2 ;
-(float)_progressForTransportUpdateTask:(id)arg1 progress:(float)arg2 ;
-(float)_progressForPullScopesTask:(id)arg1 progress:(float)arg2 ;
-(float)_progressForScopeUpdateTask:(id)arg1 progress:(float)arg2 ;
-(float)_progressForPushHighPriorityTask:(id)arg1 progress:(float)arg2 ;
-(float)_progressForPushTask:(id)arg1 progress:(float)arg2 ;
-(float)_progressForPullTask:(id)arg1 progress:(float)arg2 ;
-(float)_progressForBackgroundDownloadsTask:(id)arg1 progress:(float)arg2 ;
-(void)beginClientWork:(id)arg1 ;
-(void)endClientWork:(id)arg1 ;
-(id)_descriptionForCurrentState;
-(void)launchForceSyncTaskWhenPossible:(id)arg1 ;
-(BOOL)shouldTryToMingleImmediately;
-(void)setShouldTryToMingleImmediately:(BOOL)arg1 ;
-(unsigned long long)state;
-(void)_setState:(unsigned long long)arg1 ;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)componentName;
@end

