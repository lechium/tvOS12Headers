/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NETunnelProvider.h>
#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NEPacketTunnelFlow, NSString;

@interface NEPacketTunnelProvider : NETunnelProvider <NSExtensionRequestHandling> {

	NEPacketTunnelFlow* _packetFlow;

}

@property (retain) NEPacketTunnelFlow * packetFlow;                 //@synthesize packetFlow=_packetFlow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)requestSocket:(BOOL)arg1 interface:(id)arg2 local:(id)arg3 remote:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)initWithVirtualInterfaceType:(long long)arg1 ;
-(NEPacketTunnelFlow *)packetFlow;
-(id)getTunnelInterface;
-(id)createTCPConnectionThroughTunnelToEndpoint:(id)arg1 enableTLS:(BOOL)arg2 TLSParameters:(id)arg3 delegate:(id)arg4 ;
-(id)createUDPSessionThroughTunnelToEndpoint:(id)arg1 fromEndpoint:(id)arg2 ;
-(void)cancelTunnelWithError:(id)arg1 ;
-(void)startTunnelWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stopTunnelWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setPacketFlow:(NEPacketTunnelFlow *)arg1 ;
-(id)init;
@end
