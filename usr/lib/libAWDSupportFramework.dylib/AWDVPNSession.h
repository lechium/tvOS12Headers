/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDVPNSession : PBCodable <NSCopying> {

	unsigned long long _inBytes;
	unsigned long long _outBytes;
	unsigned long long _timestamp;
	unsigned _disconnectReason;
	unsigned _duration;
	unsigned _ipv4Installed;
	unsigned _ipv6Installed;
	NSString* _protocol;
	unsigned _reassertCount;
	unsigned _systemAuthenMethod;
	unsigned _triggerTrafficClass;
	unsigned _triggerType;
	unsigned _userAuthenMethod;
	BOOL _appVpnUsed;
	BOOL _connectFailed;
	BOOL _proxyInstalled;
	SCD_Struct_AW20 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasProtocol; 
@property (nonatomic,retain) NSString * protocol;                       //@synthesize protocol=_protocol - In the implementation block
@property (assign,nonatomic) BOOL hasTriggerType; 
@property (assign,nonatomic) unsigned triggerType;                      //@synthesize triggerType=_triggerType - In the implementation block
@property (assign,nonatomic) BOOL hasTriggerTrafficClass; 
@property (assign,nonatomic) unsigned triggerTrafficClass;              //@synthesize triggerTrafficClass=_triggerTrafficClass - In the implementation block
@property (assign,nonatomic) BOOL hasIpv4Installed; 
@property (assign,nonatomic) unsigned ipv4Installed;                    //@synthesize ipv4Installed=_ipv4Installed - In the implementation block
@property (assign,nonatomic) BOOL hasIpv6Installed; 
@property (assign,nonatomic) unsigned ipv6Installed;                    //@synthesize ipv6Installed=_ipv6Installed - In the implementation block
@property (assign,nonatomic) BOOL hasProxyInstalled; 
@property (assign,nonatomic) BOOL proxyInstalled;                       //@synthesize proxyInstalled=_proxyInstalled - In the implementation block
@property (assign,nonatomic) BOOL hasAppVpnUsed; 
@property (assign,nonatomic) BOOL appVpnUsed;                           //@synthesize appVpnUsed=_appVpnUsed - In the implementation block
@property (assign,nonatomic) BOOL hasSystemAuthenMethod; 
@property (assign,nonatomic) unsigned systemAuthenMethod;               //@synthesize systemAuthenMethod=_systemAuthenMethod - In the implementation block
@property (assign,nonatomic) BOOL hasUserAuthenMethod; 
@property (assign,nonatomic) unsigned userAuthenMethod;                 //@synthesize userAuthenMethod=_userAuthenMethod - In the implementation block
@property (assign,nonatomic) BOOL hasDisconnectReason; 
@property (assign,nonatomic) unsigned disconnectReason;                 //@synthesize disconnectReason=_disconnectReason - In the implementation block
@property (assign,nonatomic) BOOL hasConnectFailed; 
@property (assign,nonatomic) BOOL connectFailed;                        //@synthesize connectFailed=_connectFailed - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                         //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasReassertCount; 
@property (assign,nonatomic) unsigned reassertCount;                    //@synthesize reassertCount=_reassertCount - In the implementation block
@property (assign,nonatomic) BOOL hasInBytes; 
@property (assign,nonatomic) unsigned long long inBytes;                //@synthesize inBytes=_inBytes - In the implementation block
@property (assign,nonatomic) BOOL hasOutBytes; 
@property (assign,nonatomic) unsigned long long outBytes;               //@synthesize outBytes=_outBytes - In the implementation block
-(BOOL)hasProtocol;
-(void)setHasTriggerType:(BOOL)arg1 ;
-(BOOL)hasTriggerType;
-(void)setTriggerTrafficClass:(unsigned)arg1 ;
-(void)setHasTriggerTrafficClass:(BOOL)arg1 ;
-(BOOL)hasTriggerTrafficClass;
-(void)setIpv4Installed:(unsigned)arg1 ;
-(void)setHasIpv4Installed:(BOOL)arg1 ;
-(BOOL)hasIpv4Installed;
-(void)setIpv6Installed:(unsigned)arg1 ;
-(void)setHasIpv6Installed:(BOOL)arg1 ;
-(BOOL)hasIpv6Installed;
-(void)setProxyInstalled:(BOOL)arg1 ;
-(void)setHasProxyInstalled:(BOOL)arg1 ;
-(BOOL)hasProxyInstalled;
-(void)setAppVpnUsed:(BOOL)arg1 ;
-(void)setHasAppVpnUsed:(BOOL)arg1 ;
-(BOOL)hasAppVpnUsed;
-(void)setSystemAuthenMethod:(unsigned)arg1 ;
-(void)setHasSystemAuthenMethod:(BOOL)arg1 ;
-(BOOL)hasSystemAuthenMethod;
-(void)setUserAuthenMethod:(unsigned)arg1 ;
-(void)setHasUserAuthenMethod:(BOOL)arg1 ;
-(BOOL)hasUserAuthenMethod;
-(void)setDisconnectReason:(unsigned)arg1 ;
-(void)setHasDisconnectReason:(BOOL)arg1 ;
-(BOOL)hasDisconnectReason;
-(void)setConnectFailed:(BOOL)arg1 ;
-(void)setHasConnectFailed:(BOOL)arg1 ;
-(BOOL)hasConnectFailed;
-(void)setReassertCount:(unsigned)arg1 ;
-(void)setHasReassertCount:(BOOL)arg1 ;
-(BOOL)hasReassertCount;
-(void)setInBytes:(unsigned long long)arg1 ;
-(void)setHasInBytes:(BOOL)arg1 ;
-(BOOL)hasInBytes;
-(void)setOutBytes:(unsigned long long)arg1 ;
-(void)setHasOutBytes:(BOOL)arg1 ;
-(BOOL)hasOutBytes;
-(unsigned)triggerTrafficClass;
-(unsigned)ipv4Installed;
-(unsigned)ipv6Installed;
-(BOOL)proxyInstalled;
-(BOOL)appVpnUsed;
-(unsigned)systemAuthenMethod;
-(unsigned)userAuthenMethod;
-(unsigned)disconnectReason;
-(BOOL)connectFailed;
-(unsigned)reassertCount;
-(unsigned long long)inBytes;
-(unsigned long long)outBytes;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setProtocol:(NSString *)arg1 ;
-(unsigned)triggerType;
-(void)setTriggerType:(unsigned)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDuration:(unsigned)arg1 ;
-(unsigned long long)timestamp;
-(unsigned)duration;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)protocol;
@end

