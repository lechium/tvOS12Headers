/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, BSXPCConnectionListenerHandler, OS_dispatch_queue;
@class NSObject, NSString;

@interface BSXPCConnectionListener : NSObject {

	NSObject*<OS_xpc_object> _connection;
	id<BSXPCConnectionListenerHandler> _handler;
	NSString* _service;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) id<BSXPCConnectionListenerHandler> handler;              //@synthesize handler=_handler - In the implementation block
@property (copy,readonly) NSString * service;                                 //@synthesize service=_service - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
-(id)initWithConnection:(id)arg1 forService:(id)arg2 withHandler:(id)arg3 onQueue:(id)arg4 ;
-(NSString *)service;
-(void)dealloc;
-(id)description;
-(id<BSXPCConnectionListenerHandler>)handler;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
@end
