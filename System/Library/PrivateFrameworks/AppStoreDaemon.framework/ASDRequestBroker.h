/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSXPCConnection;

@interface ASDRequestBroker : NSObject {

	NSMutableDictionary* _activeRequests;
	NSXPCConnection* _connection;

}

@property (readonly) NSMutableDictionary * activeRequests;              //@synthesize activeRequests=_activeRequests - In the implementation block
@property (retain) NSXPCConnection * connection;                        //@synthesize connection=_connection - In the implementation block
+(id)interface;
-(void)markRequestAsComplete:(id)arg1 ;
-(void)markRequestAsActive:(id)arg1 ;
-(void)cancelAllRequestsWithErrorHandler:(/*^block*/id)arg1 ;
-(void)submitRequest:(id)arg1 withReplyHandler:(/*^block*/id)arg2 ;
-(void)_startConnection;
-(NSMutableDictionary *)activeRequests;
-(id)init;
-(id)description;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end

