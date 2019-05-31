/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ROCKit.framework/ROCKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ROCKit/ROCKImpersonator.h>

@protocol OS_xpc_object;
@class ROCKConnection, NSObject;

@interface ROCKDispatchQueueProxy : ROCKImpersonator {

	BOOL _remoteQueue;
	ROCKConnection* _rockConnection;
	NSObject*<OS_xpc_object> _xpcDictionary;

}

@property (nonatomic,retain) ROCKConnection * rockConnection;                     //@synthesize rockConnection=_rockConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcDictionary;              //@synthesize xpcDictionary=_xpcDictionary - In the implementation block
@property (assign,nonatomic) BOOL remoteQueue;                                    //@synthesize remoteQueue=_remoteQueue - In the implementation block
@property (nonatomic,readonly) unsigned qosClass; 
@property (nonatomic,readonly) int relativePriority; 
+(id)dispatchQueueProxyWithUUID:(id)arg1 qosClass:(unsigned)arg2 relativePriority:(int)arg3 rockConnection:(id)arg4 remoteQueue:(BOOL)arg5 ;
-(unsigned)qosClass;
-(int)relativePriority;
-(NSObject*<OS_xpc_object>)xpcDictionary;
-(void)setXpcDictionary:(NSObject*<OS_xpc_object>)arg1 ;
-(ROCKConnection *)rockConnection;
-(id)makeQueue;
-(id)initWithUUID:(id)arg1 qosClass:(unsigned)arg2 relativePriority:(int)arg3 rockConnection:(id)arg4 remoteQueue:(BOOL)arg5 ;
-(void)setRockConnection:(ROCKConnection *)arg1 ;
-(void)setRemoteQueue:(BOOL)arg1 ;
-(BOOL)remoteQueue;
@end

