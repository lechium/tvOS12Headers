/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableSet, NSString;

@interface ATXPCConnection : NSObject {

	NSObject*<OS_xpc_object> _conn;
	NSObject*<OS_dispatch_queue> _eventQueue;
	/*^block*/id _lockdownHandler;
	/*^block*/id _messageHandler;
	/*^block*/id _disconnectHandler;
	NSMutableSet* _outstandingMessages;
	BOOL _assertionHeld;
	id _context;

}

@property (readonly) NSString * serviceName; 
@property (nonatomic,copy) id lockdownHandler;                //@synthesize lockdownHandler=_lockdownHandler - In the implementation block
@property (nonatomic,copy) id messageHandler;                 //@synthesize messageHandler=_messageHandler - In the implementation block
@property (nonatomic,copy) id disconnectHandler;              //@synthesize disconnectHandler=_disconnectHandler - In the implementation block
@property (assign,nonatomic) BOOL assertionHeld;              //@synthesize assertionHeld=_assertionHeld - In the implementation block
@property (nonatomic,retain) id context;                      //@synthesize context=_context - In the implementation block
-(id)initWithXPCConnection:(id)arg1 ;
-(void)sendMessage:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)_setEventHandlerOnConnection:(id)arg1 ;
-(void)_sendMessage:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_handleLockdownMessage:(void*)arg1 ;
-(void)_handleXPCMessage:(id)arg1 ;
-(void)_registerMessage:(id)arg1 ;
-(void)_removeMessage:(id)arg1 ;
-(unsigned long long)_outstandingMessages;
-(id)lockdownHandler;
-(void)setLockdownHandler:(id)arg1 ;
-(BOOL)assertionHeld;
-(void)setAssertionHeld:(BOOL)arg1 ;
-(void)_handleXPCError:(id)arg1 ;
-(void)setDisconnectHandler:(id)arg1 ;
-(id)disconnectHandler;
-(void)setMessageHandler:(id)arg1 ;
-(id)messageHandler;
-(void)sendMessage:(id)arg1 ;
-(void)shutdown;
-(id)initWithServiceName:(id)arg1 onQueue:(id)arg2 ;
-(void)dealloc;
-(void)setContext:(id)arg1 ;
-(id)context;
-(NSString *)serviceName;
-(id)eventQueue;
@end
