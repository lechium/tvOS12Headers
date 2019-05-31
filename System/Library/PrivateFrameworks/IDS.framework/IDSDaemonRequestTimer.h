/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IDS/IDS-Structs.h>
@class NSMutableDictionary;

@interface IDSDaemonRequestTimer : NSObject {

	NSMutableDictionary* _requestContextMap;
	opaque_pthread_mutex_t _requestContextMapLock;

}
-(id)scheduleTimeoutWithResponseHandler:(id)arg1 timeoutInterval:(double)arg2 timeoutBlock:(/*^block*/id)arg3 ;
-(id)invalidateTimeoutAndReturnHandlerForRequestID:(id)arg1 ;
-(long long)inFlightRequestCount;
-(void)_accessRequestContextMapInCriticalSectionWithBlock:(/*^block*/id)arg1 ;
-(id)_criticalFindRequestContextWithResponseHandler:(id)arg1 ;
-(void)_handleSystemTimerFired:(id)arg1 ;
-(void)_criticalInvokeTimeoutBlockForRequestID:(id)arg1 ;
-(id)_criticalInvalidateTimeoutAndReturnHandlerForRequestID:(id)arg1 ;
-(id)invalidateTimeoutsAndReturnHandlersForAllRequests;
-(id)init;
-(void)dealloc;
@end

