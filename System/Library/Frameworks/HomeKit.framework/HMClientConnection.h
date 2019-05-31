/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:17 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol OS_dispatch_queue;
@class NSObject, HMXPCClient, HMFMessageDispatcher, NSUUID, NSString;

@interface HMClientConnection : NSObject <HMFMessageReceiver> {

	NSObject*<OS_dispatch_queue> _clientQueue;
	HMXPCClient* _xpcClient;
	HMFMessageDispatcher* _msgDispatcher;
	NSUUID* _uuid;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                      //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,retain) HMXPCClient * xpcClient;                                         //@synthesize xpcClient=_xpcClient - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                            //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                   //@synthesize uuid=_uuid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)areHomesConfigured;
+(id)siriHomeIdentifier;
+(BOOL)areAnyAccessoriesConfigured;
+(BOOL)areAnySpeakersConfigured;
+(id)sharedInstance;
-(void)_registerToDaemon;
-(id)initWithNoValidation;
-(HMXPCClient *)xpcClient;
-(void)_reportResultsTohandler:(/*^block*/id)arg1 ;
-(void)sendSiriCommand:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestSiriSyncDataWithValidity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setXpcClient:(HMXPCClient *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id)init;
-(void)dealloc;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSUUID *)uuid;
-(void)_start;
@end

