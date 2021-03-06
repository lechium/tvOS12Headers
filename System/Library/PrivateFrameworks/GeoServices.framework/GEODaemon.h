/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_xpc_object;
@class NSMutableSet, NSObject, NSSet;

@interface GEODaemon : NSObject {

	NSMutableSet* _servers;
	NSMutableSet* _peers;
	NSObject*<OS_dispatch_source> _sigInfoSrc;
	NSObject*<OS_xpc_object> _listener;

}

@property (nonatomic,readonly) NSSet * peers;              //@synthesize peers=_peers - In the implementation block
-(void)_localeChanged:(id)arg1 ;
-(id)_createListenerWithQueue:(id)arg1 onPort:(const char*)arg2 ;
-(void)_handleNewConnection:(id)arg1 ;
-(id)_createPeerForConnection:(id)arg1 ;
-(void)peerDidConnect:(id)arg1 ;
-(void)handleIncomingMessage:(id)arg1 fromPeer:(id)arg2 ;
-(void)peerDidDisconnect:(id)arg1 ;
-(void)addServerInstance:(id)arg1 ;
-(void)addServerClass:(Class)arg1 ;
-(NSSet *)peers;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithPort:(const char*)arg1 ;
@end

