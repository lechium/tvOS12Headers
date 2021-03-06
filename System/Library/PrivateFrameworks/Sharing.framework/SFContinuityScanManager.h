/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFCompanionXPCManagerObserver.h>
#import <libobjc.A.dylib/SFContinuityScannerClient.h>

@protocol SFContinuityScannerProtocolNSXPCProxyCreating;
@class NSMutableSet, NSHashTable, NSString;

@interface SFContinuityScanManager : NSObject <SFCompanionXPCManagerObserver, SFContinuityScannerClient> {

	BOOL _xpcSetupInProgress;
	id<SFContinuityScannerProtocol><NSXPCProxyCreating> _connectionProxy;
	NSMutableSet* _foundDevices;
	NSHashTable* _observers;
	unsigned long long _scanTypes;

}

@property (assign) BOOL xpcSetupInProgress;                                                          //@synthesize xpcSetupInProgress=_xpcSetupInProgress - In the implementation block
@property (retain) id<SFContinuityScannerProtocol><NSXPCProxyCreating> connectionProxy;              //@synthesize connectionProxy=_connectionProxy - In the implementation block
@property (retain) NSMutableSet * foundDevices;                                                      //@synthesize foundDevices=_foundDevices - In the implementation block
@property (retain) NSHashTable * observers;                                                          //@synthesize observers=_observers - In the implementation block
@property (assign) unsigned long long scanTypes;                                                     //@synthesize scanTypes=_scanTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)setScanTypes:(unsigned long long)arg1 ;
-(unsigned long long)scanTypes;
-(id<SFContinuityScannerProtocol><NSXPCProxyCreating>)connectionProxy;
-(void)xpcManagerConnectionInterrupted;
-(void)xpcManagerDidResumeConnection:(id)arg1 ;
-(void)setConnectionProxy:(id<SFContinuityScannerProtocol><NSXPCProxyCreating>)arg1 ;
-(void)setupProxyIfNeeded;
-(BOOL)xpcSetupInProgress;
-(void)setXpcSetupInProgress:(BOOL)arg1 ;
-(void)pairedDevicesChanged:(id)arg1 ;
-(void)scanForTypes:(unsigned long long)arg1 ;
-(void)activityPayloadFromDeviceUniqueID:(id)arg1 forAdvertisementPayload:(id)arg2 command:(id)arg3 timeout:(long long)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(void)lostDeviceWithDevice:(id)arg1 ;
-(void)receivedAdvertisement:(id)arg1 ;
-(void)foundDeviceWithDevice:(id)arg1 ;
-(NSMutableSet *)foundDevices;
-(void)setFoundDevices:(NSMutableSet *)arg1 ;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)addObserver:(id)arg1 ;
@end

