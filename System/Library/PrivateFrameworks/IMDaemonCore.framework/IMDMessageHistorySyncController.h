/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMDMessageHistorySyncTask, IMDMessageHistorySyncTaskFactory;
@interface IMDMessageHistorySyncController : NSObject {

	BOOL _replayControllerNeedsSync;
	BOOL _ckChatSyncControllerNeedsSync;
	BOOL _idsTransportLogNeedsSync;
	id<IMDMessageHistorySyncTask> _currentlyExecutingSyncTask;
	id<IMDMessageHistorySyncTaskFactory> _syncTaskFactory;

}

@property (assign,nonatomic) BOOL replayControllerNeedsSync;                                        //@synthesize replayControllerNeedsSync=_replayControllerNeedsSync - In the implementation block
@property (assign,nonatomic) BOOL ckChatSyncControllerNeedsSync;                                    //@synthesize ckChatSyncControllerNeedsSync=_ckChatSyncControllerNeedsSync - In the implementation block
@property (assign,nonatomic) BOOL idsTransportLogNeedsSync;                                         //@synthesize idsTransportLogNeedsSync=_idsTransportLogNeedsSync - In the implementation block
@property (nonatomic,retain) id<IMDMessageHistorySyncTask> currentlyExecutingSyncTask;              //@synthesize currentlyExecutingSyncTask=_currentlyExecutingSyncTask - In the implementation block
@property (nonatomic,retain) id<IMDMessageHistorySyncTaskFactory> syncTaskFactory;                  //@synthesize syncTaskFactory=_syncTaskFactory - In the implementation block
-(id)initWithMessageHistorySyncTaskFactory:(id)arg1 ;
-(void)ckChatSyncControllerWantsToSync;
-(void)replayControllerWantsToSync;
-(void)IDSTransportLogWantsToSync;
-(BOOL)replayControllerNeedsSync;
-(void)setReplayControllerNeedsSync:(BOOL)arg1 ;
-(void)_evaluateStateAndActIfNeeded;
-(BOOL)idsTransportLogNeedsSync;
-(void)setIdsTransportLogNeedsSync:(BOOL)arg1 ;
-(BOOL)ckChatSyncControllerNeedsSync;
-(void)setCkChatSyncControllerNeedsSync:(BOOL)arg1 ;
-(void)_scheduleNextEvaluation;
-(id<IMDMessageHistorySyncTask>)currentlyExecutingSyncTask;
-(void)setCurrentlyExecutingSyncTask:(id<IMDMessageHistorySyncTask>)arg1 ;
-(id<IMDMessageHistorySyncTaskFactory>)syncTaskFactory;
-(void)setSyncTaskFactory:(id<IMDMessageHistorySyncTaskFactory>)arg1 ;
-(void)dealloc;
@end
