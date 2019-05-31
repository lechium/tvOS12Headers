/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AirPlaySupport.framework/AirPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPlaySupport/AirPlaySupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface APSAWDAirPlayVideoSessionStartedOnClient : PBCodable <NSCopying> {

	unsigned long long _fileBytes;
	unsigned long long _timestamp;
	unsigned _audioOnly;
	unsigned _authMs;
	int _awdlCCA;
	int _awdlRSSI;
	unsigned _bitrate;
	unsigned _bonjourMs;
	unsigned _connectMs;
	unsigned _duration;
	unsigned _infoMs;
	int _infraCCA;
	int _infraRSSI;
	int _infraSNR;
	unsigned _postAuthMs;
	unsigned _secureConnectionMs;
	NSString* _serverModel;
	NSString* _serverVersion;
	NSString* _sessionUUID;
	int _status;
	unsigned _transportType;
	unsigned _type;
	BOOL _didFallbackToInfraToAvoidP2POverDFS;
	SCD_Struct_AP3 _has;

}

@property (nonatomic,readonly) BOOL hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                                   //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                               //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) BOOL hasServerModel; 
@property (nonatomic,retain) NSString * serverModel;                                   //@synthesize serverModel=_serverModel - In the implementation block
@property (nonatomic,readonly) BOOL hasServerVersion; 
@property (nonatomic,retain) NSString * serverVersion;                                 //@synthesize serverVersion=_serverVersion - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned type;                                            //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) unsigned transportType;                                   //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) BOOL hasFileBytes; 
@property (assign,nonatomic) unsigned long long fileBytes;                             //@synthesize fileBytes=_fileBytes - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                                        //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasBitrate; 
@property (assign,nonatomic) unsigned bitrate;                                         //@synthesize bitrate=_bitrate - In the implementation block
@property (assign,nonatomic) BOOL hasAudioOnly; 
@property (assign,nonatomic) unsigned audioOnly;                                       //@synthesize audioOnly=_audioOnly - In the implementation block
@property (assign,nonatomic) BOOL hasBonjourMs; 
@property (assign,nonatomic) unsigned bonjourMs;                                       //@synthesize bonjourMs=_bonjourMs - In the implementation block
@property (assign,nonatomic) BOOL hasConnectMs; 
@property (assign,nonatomic) unsigned connectMs;                                       //@synthesize connectMs=_connectMs - In the implementation block
@property (assign,nonatomic) BOOL hasInfoMs; 
@property (assign,nonatomic) unsigned infoMs;                                          //@synthesize infoMs=_infoMs - In the implementation block
@property (assign,nonatomic) BOOL hasSecureConnectionMs; 
@property (assign,nonatomic) unsigned secureConnectionMs;                              //@synthesize secureConnectionMs=_secureConnectionMs - In the implementation block
@property (assign,nonatomic) BOOL hasAuthMs; 
@property (assign,nonatomic) unsigned authMs;                                          //@synthesize authMs=_authMs - In the implementation block
@property (assign,nonatomic) BOOL hasPostAuthMs; 
@property (assign,nonatomic) unsigned postAuthMs;                                      //@synthesize postAuthMs=_postAuthMs - In the implementation block
@property (assign,nonatomic) BOOL hasDidFallbackToInfraToAvoidP2POverDFS; 
@property (assign,nonatomic) BOOL didFallbackToInfraToAvoidP2POverDFS;                 //@synthesize didFallbackToInfraToAvoidP2POverDFS=_didFallbackToInfraToAvoidP2POverDFS - In the implementation block
@property (assign,nonatomic) BOOL hasAwdlRSSI; 
@property (assign,nonatomic) int awdlRSSI;                                             //@synthesize awdlRSSI=_awdlRSSI - In the implementation block
@property (assign,nonatomic) BOOL hasInfraRSSI; 
@property (assign,nonatomic) int infraRSSI;                                            //@synthesize infraRSSI=_infraRSSI - In the implementation block
@property (assign,nonatomic) BOOL hasAwdlCCA; 
@property (assign,nonatomic) int awdlCCA;                                              //@synthesize awdlCCA=_awdlCCA - In the implementation block
@property (assign,nonatomic) BOOL hasInfraCCA; 
@property (assign,nonatomic) int infraCCA;                                             //@synthesize infraCCA=_infraCCA - In the implementation block
@property (assign,nonatomic) BOOL hasInfraSNR; 
@property (assign,nonatomic) int infraSNR;                                             //@synthesize infraSNR=_infraSNR - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(unsigned)transportType;
-(void)setTransportType:(unsigned)arg1 ;
-(void)setHasTransportType:(BOOL)arg1 ;
-(BOOL)hasTransportType;
-(BOOL)hasDuration;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setAudioOnly:(unsigned)arg1 ;
-(unsigned)audioOnly;
-(BOOL)hasSessionUUID;
-(void)setBonjourMs:(unsigned)arg1 ;
-(void)setHasBonjourMs:(BOOL)arg1 ;
-(BOOL)hasBonjourMs;
-(void)setConnectMs:(unsigned)arg1 ;
-(void)setHasConnectMs:(BOOL)arg1 ;
-(BOOL)hasConnectMs;
-(void)setAuthMs:(unsigned)arg1 ;
-(void)setHasAuthMs:(BOOL)arg1 ;
-(BOOL)hasAuthMs;
-(void)setDidFallbackToInfraToAvoidP2POverDFS:(BOOL)arg1 ;
-(void)setHasDidFallbackToInfraToAvoidP2POverDFS:(BOOL)arg1 ;
-(BOOL)hasDidFallbackToInfraToAvoidP2POverDFS;
-(void)setAwdlRSSI:(int)arg1 ;
-(void)setHasAwdlRSSI:(BOOL)arg1 ;
-(BOOL)hasAwdlRSSI;
-(void)setInfraRSSI:(int)arg1 ;
-(void)setHasInfraRSSI:(BOOL)arg1 ;
-(BOOL)hasInfraRSSI;
-(void)setAwdlCCA:(int)arg1 ;
-(void)setHasAwdlCCA:(BOOL)arg1 ;
-(BOOL)hasAwdlCCA;
-(void)setInfraCCA:(int)arg1 ;
-(void)setHasInfraCCA:(BOOL)arg1 ;
-(BOOL)hasInfraCCA;
-(void)setInfraSNR:(int)arg1 ;
-(void)setHasInfraSNR:(BOOL)arg1 ;
-(BOOL)hasInfraSNR;
-(unsigned)bonjourMs;
-(unsigned)connectMs;
-(unsigned)authMs;
-(BOOL)didFallbackToInfraToAvoidP2POverDFS;
-(int)awdlRSSI;
-(int)infraRSSI;
-(int)awdlCCA;
-(int)infraCCA;
-(int)infraSNR;
-(BOOL)hasServerModel;
-(BOOL)hasServerVersion;
-(void)setFileBytes:(unsigned long long)arg1 ;
-(void)setHasFileBytes:(BOOL)arg1 ;
-(BOOL)hasFileBytes;
-(void)setHasBitrate:(BOOL)arg1 ;
-(BOOL)hasBitrate;
-(void)setHasAudioOnly:(BOOL)arg1 ;
-(BOOL)hasAudioOnly;
-(void)setInfoMs:(unsigned)arg1 ;
-(void)setHasInfoMs:(BOOL)arg1 ;
-(BOOL)hasInfoMs;
-(void)setSecureConnectionMs:(unsigned)arg1 ;
-(void)setHasSecureConnectionMs:(BOOL)arg1 ;
-(BOOL)hasSecureConnectionMs;
-(void)setPostAuthMs:(unsigned)arg1 ;
-(void)setHasPostAuthMs:(BOOL)arg1 ;
-(BOOL)hasPostAuthMs;
-(NSString *)serverModel;
-(void)setServerModel:(NSString *)arg1 ;
-(unsigned long long)fileBytes;
-(unsigned)infoMs;
-(unsigned)secureConnectionMs;
-(unsigned)postAuthMs;
-(void)setBitrate:(unsigned)arg1 ;
-(unsigned)bitrate;
-(NSString *)sessionUUID;
-(void)setSessionUUID:(NSString *)arg1 ;
-(NSString *)serverVersion;
-(void)setServerVersion:(NSString *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)type;
-(void)setType:(unsigned)arg1 ;
-(void)setDuration:(unsigned)arg1 ;
-(unsigned long long)timestamp;
-(unsigned)duration;
-(int)status;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setStatus:(int)arg1 ;
@end

