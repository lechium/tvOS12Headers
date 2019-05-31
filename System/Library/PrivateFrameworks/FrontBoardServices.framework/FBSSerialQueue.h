/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
#import <FrontBoardServices/FrontBoardServices-Structs.h>
@class NSObject, NSMutableArray, NSArray;

@interface FBSSerialQueue : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _blocks;
	unsigned long long _enqueueID;
	unsigned long long _dequeueID;
	NSObject*<OS_dispatch_queue> _targetQueue;
	NSArray* _mainRunLoopModes;
	CFRunLoopSourceRef _runLoopSource;
	BOOL _runLoopSourceHandlingBlock;
	NSObject*<OS_dispatch_semaphore> _synchronizingEnqueueSemaphore;
	unsigned long long _lastSynchronizingWorkspaceName;

}
+(id)queueWithDispatchQueue:(id)arg1 ;
+(id)queueWithMainRunLoopModes:(id)arg1 ;
-(void)_setSynchronizingEnqueueSemaphore:(id)arg1 forWorkspaceWithName:(unsigned long long)arg2 ;
-(BOOL)_hasNext;
-(BOOL)_performNext;
-(id)_initWithDispatchQueue:(id)arg1 mainRunLoopModes:(id)arg2 ;
-(void)_queue_performAsync:(/*^block*/id)arg1 ;
-(void)_performNextFromRunLoopSource;
-(void)performAfter:(double)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)assertOnQueue;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)performAsync:(/*^block*/id)arg1 ;
@end

