/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:15 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPRelayStream.h>
#import <libobjc.A.dylib/HMDRelayManagerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/IDSServiceDelegateHomeKit.h>

@protocol OS_dispatch_queue;
@class HMDRelayManager, NSString, NSData, IDSService, NSObject, NSMutableArray;

@interface HMDRelayStream : HAPRelayStream <HMDRelayManagerDelegate, HMFLogging, IDSServiceDelegateHomeKit> {

	BOOL _opened;
	BOOL _suspended;
	HMDRelayManager* _relayManger;
	NSString* _accessoryIdentifier;
	NSData* _accessToken;
	NSString* _controllerIdentifier;
	IDSService* _idsService;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSMutableArray* _pendingSentMessageIdentifiers;

}

@property (nonatomic,copy,readonly) NSString * controllerIdentifier;                        //@synthesize controllerIdentifier=_controllerIdentifier - In the implementation block
@property (nonatomic,retain) IDSService * idsService;                                       //@synthesize idsService=_idsService - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;                      //@synthesize clientQueue=_clientQueue - In the implementation block
@property (assign,getter=isOpened,nonatomic) BOOL opened;                                   //@synthesize opened=_opened - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingSentMessageIdentifiers;              //@synthesize pendingSentMessageIdentifiers=_pendingSentMessageIdentifiers - In the implementation block
@property (assign,getter=isSuspended,nonatomic) BOOL suspended;                             //@synthesize suspended=_suspended - In the implementation block
@property (nonatomic,__weak,readonly) HMDRelayManager * relayManger;                        //@synthesize relayManger=_relayManger - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessoryIdentifier;                         //@synthesize accessoryIdentifier=_accessoryIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * accessToken;                                   //@synthesize accessToken=_accessToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)logIdentifier;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSData *)accessToken;
-(void)relayManager:(id)arg1 didUpdateControllerIdentifier:(id)arg2 ;
-(void)_closeWithError:(id)arg1 ;
-(unsigned long long)mtu;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(NSString *)accessoryIdentifier;
-(NSString *)controllerIdentifier;
-(IDSService *)idsService;
-(id)initWithRelayManager:(id)arg1 idsService:(id)arg2 accessoryIdentifier:(id)arg3 accessToken:(id)arg4 ;
-(void)service:(id)arg1 account:(id)arg2 incomingAccessoryData:(id)arg3 fromAccessoryID:(id)arg4 context:(id)arg5 ;
-(BOOL)isOpened;
-(void)setOpened:(BOOL)arg1 ;
-(NSMutableArray *)pendingSentMessageIdentifiers;
-(id)writeData:(id)arg1 error:(id*)arg2 ;
-(HMDRelayManager *)relayManger;
-(void)setIdsService:(IDSService *)arg1 ;
-(void)open;
-(void)close;
-(void)resume;
-(BOOL)isSuspended;
-(void)suspend;
-(void)setSuspended:(BOOL)arg1 ;
@end

