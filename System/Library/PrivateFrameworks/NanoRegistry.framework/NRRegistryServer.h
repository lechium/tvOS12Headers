/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NRRegistryHistoryStore.h>
#import <libobjc.A.dylib/NRXPCServerDelegate.h>
#import <libobjc.A.dylib/NRXPCRegistryDelegate.h>

@class NRXPCServer, NSString;

@interface NRRegistryServer : NRRegistryHistoryStore <NRXPCServerDelegate, NRXPCRegistryDelegate> {

	BOOL _sentLaunchUpdate;
	int _devicesUpdateCounterNotifyToken;
	unsigned long long _tokenValue;
	NRXPCServer* _registryServer;

}

@property (nonatomic,retain) NRXPCServer * registryServer;                     //@synthesize registryServer=_registryServer - In the implementation block
@property (assign,nonatomic) int devicesUpdateCounterNotifyToken;              //@synthesize devicesUpdateCounterNotifyToken=_devicesUpdateCounterNotifyToken - In the implementation block
@property (assign,nonatomic) unsigned long long tokenValue;                    //@synthesize tokenValue=_tokenValue - In the implementation block
@property (assign,nonatomic) BOOL sentLaunchUpdate;                            //@synthesize sentLaunchUpdate=_sentLaunchUpdate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)proxyClass;
+(Class)xpcListenerClass;
-(void)xpcGetDeviceCollectionWithBlock:(/*^block*/id)arg1 ;
-(void)xpcGetDiffSinceTokenValue:(unsigned long long)arg1 getSecureProperties:(BOOL)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)xpcRetrieveSecureProperties:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)xpcGetChangeHistoryWithBlock:(/*^block*/id)arg1 ;
-(void)xpcSwitchIndex:(/*^block*/id)arg1 ;
-(void)xpcDeviceIDAtSwitchIndex:(unsigned)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)xpcClientInfo:(/*^block*/id)arg1 ;
-(void)xpcApplyDiff:(id)arg1 withSecureProperties:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)xpcSetMigrationConsented:(BOOL)arg1 forDeviceID:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(unsigned long long)tokenValue;
-(void)setTokenValue:(unsigned long long)arg1 ;
-(unsigned long long)_tokenValue;
-(BOOL)sentLaunchUpdate;
-(void)setSentLaunchUpdate:(BOOL)arg1 ;
-(id)_dumpSecureProperties:(id)arg1 propertyIDList:(id)arg2 ;
-(NRXPCServer *)registryServer;
-(void)setRegistryServer:(NRXPCServer *)arg1 ;
-(int)devicesUpdateCounterNotifyToken;
-(void)setDevicesUpdateCounterNotifyToken:(int)arg1 ;
-(void)_notifyClients;
-(id)initWithParameters:(id)arg1 ;
-(void)invalidate;
@end

