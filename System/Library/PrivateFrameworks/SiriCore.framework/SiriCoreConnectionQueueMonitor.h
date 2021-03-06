/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject;

@interface SiriCoreConnectionQueueMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _watcher;

}
-(void)_startWatcher;
-(void)_signalWatcher;
-(void)startWatcher;
-(void)signalWatcher;
-(id)init;
-(void)dealloc;
@end

