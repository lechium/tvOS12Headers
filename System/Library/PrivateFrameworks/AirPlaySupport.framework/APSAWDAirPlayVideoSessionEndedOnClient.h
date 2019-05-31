/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AirPlaySupport.framework/AirPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPlaySupport/AirPlaySupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface APSAWDAirPlayVideoSessionEndedOnClient : PBCodable <NSCopying> {

	double _bandwidthMax;
	double _bandwidthMean;
	double _bandwidthStdDev;
	unsigned long long _timestamp;
	unsigned _duration;
	unsigned _localFairPlayCount;
	unsigned _localNonFairPlayCount;
	unsigned _readyToPlayMs;
	int _reason;
	unsigned _remoteFairPlayCount;
	unsigned _remoteNonFairPlayCount;
	NSString* _sessionUUID;
	unsigned _stallCount;
	SCD_Struct_AP10 _has;

}

@property (nonatomic,readonly) BOOL hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                       //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasReason; 
@property (assign,nonatomic) int reason;                                   //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                            //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasReadyToPlayMs; 
@property (assign,nonatomic) unsigned readyToPlayMs;                       //@synthesize readyToPlayMs=_readyToPlayMs - In the implementation block
@property (assign,nonatomic) BOOL hasStallCount; 
@property (assign,nonatomic) unsigned stallCount;                          //@synthesize stallCount=_stallCount - In the implementation block
@property (assign,nonatomic) BOOL hasBandwidthStdDev; 
@property (assign,nonatomic) double bandwidthStdDev;                       //@synthesize bandwidthStdDev=_bandwidthStdDev - In the implementation block
@property (assign,nonatomic) BOOL hasBandwidthMean; 
@property (assign,nonatomic) double bandwidthMean;                         //@synthesize bandwidthMean=_bandwidthMean - In the implementation block
@property (assign,nonatomic) BOOL hasBandwidthMax; 
@property (assign,nonatomic) double bandwidthMax;                          //@synthesize bandwidthMax=_bandwidthMax - In the implementation block
@property (assign,nonatomic) BOOL hasLocalFairPlayCount; 
@property (assign,nonatomic) unsigned localFairPlayCount;                  //@synthesize localFairPlayCount=_localFairPlayCount - In the implementation block
@property (assign,nonatomic) BOOL hasLocalNonFairPlayCount; 
@property (assign,nonatomic) unsigned localNonFairPlayCount;               //@synthesize localNonFairPlayCount=_localNonFairPlayCount - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteFairPlayCount; 
@property (assign,nonatomic) unsigned remoteFairPlayCount;                 //@synthesize remoteFairPlayCount=_remoteFairPlayCount - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteNonFairPlayCount; 
@property (assign,nonatomic) unsigned remoteNonFairPlayCount;              //@synthesize remoteNonFairPlayCount=_remoteNonFairPlayCount - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)hasReason;
-(void)setReason:(int)arg1 ;
-(BOOL)hasSessionUUID;
-(void)setReadyToPlayMs:(unsigned)arg1 ;
-(void)setHasReadyToPlayMs:(BOOL)arg1 ;
-(BOOL)hasReadyToPlayMs;
-(void)setStallCount:(unsigned)arg1 ;
-(void)setHasStallCount:(BOOL)arg1 ;
-(BOOL)hasStallCount;
-(void)setBandwidthStdDev:(double)arg1 ;
-(void)setHasBandwidthStdDev:(BOOL)arg1 ;
-(BOOL)hasBandwidthStdDev;
-(void)setBandwidthMean:(double)arg1 ;
-(void)setHasBandwidthMean:(BOOL)arg1 ;
-(BOOL)hasBandwidthMean;
-(void)setBandwidthMax:(double)arg1 ;
-(void)setHasBandwidthMax:(BOOL)arg1 ;
-(BOOL)hasBandwidthMax;
-(void)setLocalFairPlayCount:(unsigned)arg1 ;
-(void)setHasLocalFairPlayCount:(BOOL)arg1 ;
-(BOOL)hasLocalFairPlayCount;
-(void)setLocalNonFairPlayCount:(unsigned)arg1 ;
-(void)setHasLocalNonFairPlayCount:(BOOL)arg1 ;
-(BOOL)hasLocalNonFairPlayCount;
-(void)setRemoteFairPlayCount:(unsigned)arg1 ;
-(void)setHasRemoteFairPlayCount:(BOOL)arg1 ;
-(BOOL)hasRemoteFairPlayCount;
-(void)setRemoteNonFairPlayCount:(unsigned)arg1 ;
-(void)setHasRemoteNonFairPlayCount:(BOOL)arg1 ;
-(BOOL)hasRemoteNonFairPlayCount;
-(unsigned)readyToPlayMs;
-(unsigned)stallCount;
-(double)bandwidthStdDev;
-(double)bandwidthMean;
-(double)bandwidthMax;
-(unsigned)localFairPlayCount;
-(unsigned)localNonFairPlayCount;
-(unsigned)remoteFairPlayCount;
-(unsigned)remoteNonFairPlayCount;
-(NSString *)sessionUUID;
-(void)setSessionUUID:(NSString *)arg1 ;
-(void)setHasReason:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)reason;
-(void)setDuration:(unsigned)arg1 ;
-(unsigned long long)timestamp;
-(unsigned)duration;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

