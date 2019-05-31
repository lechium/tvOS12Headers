/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:40 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSDeviceConnectionDurationEvent : PBCodable <NSCopying> {

	unsigned long long _clientInitToClientOpenSocketHandler;
	unsigned long long _clientInitToDaemonOpenSocket;
	unsigned long long _clientOpenSocketHandlerToIncomingFirstPacket;
	unsigned long long _connectionInitToIncomingFirstPacket;
	unsigned long long _daemonCompletionHandlerToClientOpenSocketCompletion;
	unsigned long long _daemonCompletionHandlerToIncomingFirstPacket;
	unsigned long long _daemonOpenSocketToDaemonCompletionHandler;
	unsigned long long _timestamp;
	NSString* _serviceName;
	BOOL _success;
	SCD_Struct_AW12 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                                        //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceName; 
@property (nonatomic,retain) NSString * serviceName;                                                              //@synthesize serviceName=_serviceName - In the implementation block
@property (assign,nonatomic) BOOL hasSuccess; 
@property (assign,nonatomic) BOOL success;                                                                        //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) BOOL hasClientInitToDaemonOpenSocket; 
@property (assign,nonatomic) unsigned long long clientInitToDaemonOpenSocket;                                     //@synthesize clientInitToDaemonOpenSocket=_clientInitToDaemonOpenSocket - In the implementation block
@property (assign,nonatomic) BOOL hasClientInitToClientOpenSocketHandler; 
@property (assign,nonatomic) unsigned long long clientInitToClientOpenSocketHandler;                              //@synthesize clientInitToClientOpenSocketHandler=_clientInitToClientOpenSocketHandler - In the implementation block
@property (assign,nonatomic) BOOL hasClientOpenSocketHandlerToIncomingFirstPacket; 
@property (assign,nonatomic) unsigned long long clientOpenSocketHandlerToIncomingFirstPacket;                     //@synthesize clientOpenSocketHandlerToIncomingFirstPacket=_clientOpenSocketHandlerToIncomingFirstPacket - In the implementation block
@property (assign,nonatomic) BOOL hasDaemonOpenSocketToDaemonCompletionHandler; 
@property (assign,nonatomic) unsigned long long daemonOpenSocketToDaemonCompletionHandler;                        //@synthesize daemonOpenSocketToDaemonCompletionHandler=_daemonOpenSocketToDaemonCompletionHandler - In the implementation block
@property (assign,nonatomic) BOOL hasDaemonCompletionHandlerToClientOpenSocketCompletion; 
@property (assign,nonatomic) unsigned long long daemonCompletionHandlerToClientOpenSocketCompletion;              //@synthesize daemonCompletionHandlerToClientOpenSocketCompletion=_daemonCompletionHandlerToClientOpenSocketCompletion - In the implementation block
@property (assign,nonatomic) BOOL hasDaemonCompletionHandlerToIncomingFirstPacket; 
@property (assign,nonatomic) unsigned long long daemonCompletionHandlerToIncomingFirstPacket;                     //@synthesize daemonCompletionHandlerToIncomingFirstPacket=_daemonCompletionHandlerToIncomingFirstPacket - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionInitToIncomingFirstPacket; 
@property (assign,nonatomic) unsigned long long connectionInitToIncomingFirstPacket;                              //@synthesize connectionInitToIncomingFirstPacket=_connectionInitToIncomingFirstPacket - In the implementation block
-(void)setSuccess:(BOOL)arg1 ;
-(void)setHasSuccess:(BOOL)arg1 ;
-(BOOL)hasSuccess;
-(BOOL)hasServiceName;
-(void)setClientInitToDaemonOpenSocket:(unsigned long long)arg1 ;
-(void)setHasClientInitToDaemonOpenSocket:(BOOL)arg1 ;
-(BOOL)hasClientInitToDaemonOpenSocket;
-(void)setClientInitToClientOpenSocketHandler:(unsigned long long)arg1 ;
-(void)setHasClientInitToClientOpenSocketHandler:(BOOL)arg1 ;
-(BOOL)hasClientInitToClientOpenSocketHandler;
-(void)setClientOpenSocketHandlerToIncomingFirstPacket:(unsigned long long)arg1 ;
-(void)setHasClientOpenSocketHandlerToIncomingFirstPacket:(BOOL)arg1 ;
-(BOOL)hasClientOpenSocketHandlerToIncomingFirstPacket;
-(void)setDaemonOpenSocketToDaemonCompletionHandler:(unsigned long long)arg1 ;
-(void)setHasDaemonOpenSocketToDaemonCompletionHandler:(BOOL)arg1 ;
-(BOOL)hasDaemonOpenSocketToDaemonCompletionHandler;
-(void)setDaemonCompletionHandlerToClientOpenSocketCompletion:(unsigned long long)arg1 ;
-(void)setHasDaemonCompletionHandlerToClientOpenSocketCompletion:(BOOL)arg1 ;
-(BOOL)hasDaemonCompletionHandlerToClientOpenSocketCompletion;
-(void)setDaemonCompletionHandlerToIncomingFirstPacket:(unsigned long long)arg1 ;
-(void)setHasDaemonCompletionHandlerToIncomingFirstPacket:(BOOL)arg1 ;
-(BOOL)hasDaemonCompletionHandlerToIncomingFirstPacket;
-(void)setConnectionInitToIncomingFirstPacket:(unsigned long long)arg1 ;
-(void)setHasConnectionInitToIncomingFirstPacket:(BOOL)arg1 ;
-(BOOL)hasConnectionInitToIncomingFirstPacket;
-(unsigned long long)clientInitToDaemonOpenSocket;
-(unsigned long long)clientInitToClientOpenSocketHandler;
-(unsigned long long)clientOpenSocketHandlerToIncomingFirstPacket;
-(unsigned long long)daemonOpenSocketToDaemonCompletionHandler;
-(unsigned long long)daemonCompletionHandlerToClientOpenSocketCompletion;
-(unsigned long long)daemonCompletionHandlerToIncomingFirstPacket;
-(unsigned long long)connectionInitToIncomingFirstPacket;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)success;
-(void)setServiceName:(NSString *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)serviceName;
-(id)dictionaryRepresentation;
@end
