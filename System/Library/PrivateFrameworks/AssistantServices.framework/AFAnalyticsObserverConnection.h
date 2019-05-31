/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFAnalyticsObserver.h>
#import <libobjc.A.dylib/AFInvalidating.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, NSXPCConnection, NSString;

@interface AFAnalyticsObserverConnection : NSObject <AFAnalyticsObserver, AFInvalidating> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	NSXPCConnection* _connection;
	/*^block*/id _observation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_connectionInterrupted;
-(void)_connectionInvalidated;
-(oneway void)didObserveEvents:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_cleanUpConnection;
-(void)flushWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithObservation:(/*^block*/id)arg1 ;
-(void)waitUntilInvalidated;
-(id)_connection;
-(void)dealloc;
-(void)invalidate;
@end

