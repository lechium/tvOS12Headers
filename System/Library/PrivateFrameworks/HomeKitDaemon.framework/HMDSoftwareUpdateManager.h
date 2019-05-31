/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:15 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol OS_dispatch_queue;
@class HMDAppleMediaAccessory, HMDHomeManager, NSUUID, NSObject, NSHashTable, NSString;

@interface HMDSoftwareUpdateManager : HMFObject <HMFMessageReceiver> {

	HMDAppleMediaAccessory* _accessory;
	HMDHomeManager* _homeManager;
	NSUUID* _identifier;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSHashTable* _activeClients;

}

@property (__weak,readonly) HMDHomeManager * homeManager;                                     //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                      //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSHashTable * activeClients;                                   //@synthesize activeClients=_activeClients - In the implementation block
@property (__weak) HMDAppleMediaAccessory * accessory;                                        //@synthesize accessory=_accessory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)isSupported;
-(HMDHomeManager *)homeManager;
-(id)initWithHomeManager:(id)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(HMDAppleMediaAccessory *)accessory;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)registerForMessages;
-(id)messageDestination;
-(void)setAccessory:(HMDAppleMediaAccessory *)arg1 ;
-(void)fetchAvailableUpdateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startUpdate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateAvailableUpdate:(id)arg1 ;
-(void)_handleStart:(id)arg1 ;
-(void)_handleStop:(id)arg1 ;
-(void)_handleUpdateAvailableUpdate:(id)arg1 ;
-(BOOL)_shouldAcceptMessage:(id)arg1 ;
-(NSHashTable *)activeClients;
-(id)init;
-(NSUUID *)identifier;
@end

