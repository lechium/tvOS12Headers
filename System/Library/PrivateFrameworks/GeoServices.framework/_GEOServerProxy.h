/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOServer;

@interface _GEOServerProxy : NSObject {

	Class _serverClass;
	GEOServer* _server;

}

@property (nonatomic,readonly) Class serverClass;               //@synthesize serverClass=_serverClass - In the implementation block
@property (nonatomic,readonly) GEOServer * server;              //@synthesize server=_server - In the implementation block
+(id)proxyForServer:(id)arg1 daemon:(id)arg2 ;
+(id)proxyForClass:(Class)arg1 ;
-(Class)serverClass;
-(GEOServer *)server;
-(void)startServerWithDaemon:(id)arg1 ;
-(BOOL)handleIncomingMessage:(id)arg1 fromPeer:(id)arg2 ;
-(void)_setServer:(id)arg1 daemon:(id)arg2 ;
-(BOOL)isEqualToServerProxy:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
