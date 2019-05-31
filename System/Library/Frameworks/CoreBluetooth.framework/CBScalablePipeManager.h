/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBluetooth/CBManager.h>

@protocol CBScalablePipeManagerDelegate;
@class NSMutableSet, NSHashTable, NSSet;

@interface CBScalablePipeManager : CBManager {

	NSMutableSet* _identifiers;
	id<CBScalablePipeManagerDelegate> _delegate;
	NSHashTable* _pipes;

}

@property (nonatomic,retain,readonly) NSHashTable * pipes;                                   //@synthesize pipes=_pipes - In the implementation block
@property (assign,nonatomic,__weak) id<CBScalablePipeManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) NSSet * identifiers;                                   //@synthesize identifiers=_identifiers - In the implementation block
-(void)handleMsg:(unsigned short)arg1 args:(id)arg2 ;
-(BOOL)isMsgAllowedWhenOff:(unsigned short)arg1 ;
-(void)orphanPipes;
-(id)pipeForName:(id)arg1 identifier:(id)arg2 ;
-(void)handleEndpointAdded:(id)arg1 ;
-(void)handleEndpointRemoved:(id)arg1 ;
-(void)handlePipeConnected:(id)arg1 ;
-(void)handlePipeDisconnected:(id)arg1 ;
-(void)handleHostStateUpdated:(id)arg1 ;
-(void)registerEndpoint:(id)arg1 type:(long long)arg2 priority:(long long)arg3 ;
-(void)registerEndpoint:(id)arg1 type:(long long)arg2 priority:(long long)arg3 transport:(long long)arg4 ;
-(void)registerEndpoint:(id)arg1 type:(long long)arg2 priority:(long long)arg3 transport:(long long)arg4 requireEncryption:(BOOL)arg5 ;
-(void)unregisterAllEndpoints;
-(void)setLinkRequirementsForPeer:(id)arg1 packetsPerSecond:(unsigned)arg2 inputBytesPerSecond:(unsigned)arg3 outputBytesPerSecond:(unsigned)arg4 ;
-(void)setLinkRequirementsForPeer:(id)arg1 withClientName:(id)arg2 packetsPerSecond:(unsigned)arg3 inputBytesPerSecond:(unsigned)arg4 outputBytesPerSecond:(unsigned)arg5 ;
-(void)setLinkRequirementsForPeerWithLatency:(id)arg1 latencyInMs:(unsigned)arg2 inputBytesPerSecond:(unsigned)arg3 outputBytesPerSecond:(unsigned)arg4 ;
-(NSHashTable *)pipes;
-(NSSet *)identifiers;
-(id)sharedPairingAgent;
-(void)unregisterEndpoint:(id)arg1 ;
-(void)registerEndpoint:(id)arg1 type:(long long)arg2 priority:(long long)arg3 options:(id)arg4 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id<CBScalablePipeManagerDelegate>)arg1 ;
-(id<CBScalablePipeManagerDelegate>)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithDelegate:(id)arg1 ;
@end

