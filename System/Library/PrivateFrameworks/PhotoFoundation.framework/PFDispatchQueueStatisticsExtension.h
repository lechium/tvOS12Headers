/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PFDispatchQueueExtension.h>

@interface PFDispatchQueueStatisticsExtension : PFDispatchQueueExtension {

	AQ _enqueuedCount;
	AQ _maxEnqueuedCount;
	AQ _executingCount;
	AQ _completedCount;
	AQ _executionTime;
	AQ _maxExecutionTime;
	AQ _maxWaitTime;
	AQ _totalWaitTime;
	unsigned long long _maxEnqueuedCountTrigger;
	unsigned long long _maxExecutionTimeTrigger;
	unsigned long long _maxWaitTimeTrigger;
	unsigned long long _lastLogTime;

}
-(unsigned long long)executionTime;
-(void)installOnQueue:(id)arg1 ;
-(void)queue:(id)arg1 willEnqueueSync:(id)arg2 ;
-(void)queue:(id)arg1 willEnqueueAsync:(id)arg2 when:(/*^block*/id)arg3 ;
-(void)queue:(id)arg1 didDequeue:(id)arg2 skipExecution:(/*^block*/id)arg3 ;
-(void)queue:(id)arg1 willExecute:(id)arg2 ;
-(void)queue:(id)arg1 didExecute:(id)arg2 ;
-(void)queue:(id)arg1 skippedExecuting:(id)arg2 ;
-(id)newBlockInfo;
-(Class)blockInfoClass;
-(unsigned long long)maxEnqueuedCount;
-(BOOL)_shouldLog;
-(unsigned long long)maxWaitTime;
-(BOOL)_updateMaximum:(A*)arg1 value:(unsigned long long)arg2 :(unsigned long long)arg3 ;
-(void)maxEnqueuedCountIncreased:(id)arg1 ;
-(void)maxExecutionTimeIncreased:(id)arg1 ;
-(void)maxWaitTimeIncreased:(id)arg1 ;
-(unsigned long long)completedCount;
-(unsigned long long)totalWaitTime;
-(unsigned long long)enqueuedCount;
-(unsigned long long)executingCount;
-(unsigned long long)maxExecutionTime;
-(void)blockEnqueued:(id)arg1 ;
-(void)blockCompletedAfterWait:(unsigned long long)arg1 executionTime:(unsigned long long)arg2 queue:(id)arg3 ;
-(id)init;
-(id)description;
@end

