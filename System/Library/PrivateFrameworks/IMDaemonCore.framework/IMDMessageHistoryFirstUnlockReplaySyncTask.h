/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDaemonCore/IMDMessageHistoryIDSTransactionLogSyncTask.h>

@class IMDReplayController;

@interface IMDMessageHistoryFirstUnlockReplaySyncTask : IMDMessageHistoryIDSTransactionLogSyncTask {

	IMDReplayController* _replayController;

}
-(id)initWithReplayController:(id)arg1 accountController:(id)arg2 ;
-(void)_setupAndBeginSync;
-(unsigned long long)syncTaskType;
-(void)dealloc;
@end

