/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, NSMapTable;

@interface GEOETARequester : NSObject {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSHashTable* _pendingSimpleRequests;
	NSMapTable* _pendingRequests;

}
+(id)sharedRequester;
-(void)cancelRequest:(id)arg1 ;
-(void)startRequest:(id)arg1 connectionProperties:(id)arg2 auditToken:(id)arg3 requestMode:(int)arg4 willSendRequest:(/*^block*/id)arg5 finished:(/*^block*/id)arg6 networkActivity:(/*^block*/id)arg7 error:(/*^block*/id)arg8 ;
-(void)updateRequest:(id)arg1 finished:(/*^block*/id)arg2 networkActivity:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(void)startSimpleETARequest:(id)arg1 auditToken:(id)arg2 requestMode:(int)arg3 finished:(/*^block*/id)arg4 networkActivity:(/*^block*/id)arg5 error:(/*^block*/id)arg6 ;
-(void)cancelSimpleETARequest:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end
