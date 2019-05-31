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

@interface AWDFaceTimeCallInterruptionEnded : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _guid;
	unsigned _interruptionDuration;
	unsigned _isAudioResumed;
	unsigned _isVideo;
	unsigned _isVideoResumed;
	int _linkQuality;
	unsigned _onLockScreen;
	SCD_Struct_AW15 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                            //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasInterruptionDuration; 
@property (assign,nonatomic) unsigned interruptionDuration;              //@synthesize interruptionDuration=_interruptionDuration - In the implementation block
@property (assign,nonatomic) BOOL hasIsVideoResumed; 
@property (assign,nonatomic) unsigned isVideoResumed;                    //@synthesize isVideoResumed=_isVideoResumed - In the implementation block
@property (assign,nonatomic) BOOL hasIsAudioResumed; 
@property (assign,nonatomic) unsigned isAudioResumed;                    //@synthesize isAudioResumed=_isAudioResumed - In the implementation block
@property (assign,nonatomic) BOOL hasLinkQuality; 
@property (assign,nonatomic) int linkQuality;                            //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign,nonatomic) BOOL hasIsVideo; 
@property (assign,nonatomic) unsigned isVideo;                           //@synthesize isVideo=_isVideo - In the implementation block
@property (assign,nonatomic) BOOL hasOnLockScreen; 
@property (assign,nonatomic) unsigned onLockScreen;                      //@synthesize onLockScreen=_onLockScreen - In the implementation block
-(void)setHasIsVideo:(BOOL)arg1 ;
-(BOOL)hasIsVideo;
-(void)setOnLockScreen:(unsigned)arg1 ;
-(void)setHasOnLockScreen:(BOOL)arg1 ;
-(BOOL)hasOnLockScreen;
-(unsigned)onLockScreen;
-(void)setLinkQuality:(int)arg1 ;
-(void)setHasLinkQuality:(BOOL)arg1 ;
-(BOOL)hasLinkQuality;
-(int)linkQuality;
-(void)setInterruptionDuration:(unsigned)arg1 ;
-(void)setHasInterruptionDuration:(BOOL)arg1 ;
-(BOOL)hasInterruptionDuration;
-(void)setIsVideoResumed:(unsigned)arg1 ;
-(void)setHasIsVideoResumed:(BOOL)arg1 ;
-(BOOL)hasIsVideoResumed;
-(void)setIsAudioResumed:(unsigned)arg1 ;
-(void)setHasIsAudioResumed:(BOOL)arg1 ;
-(BOOL)hasIsAudioResumed;
-(unsigned)interruptionDuration;
-(unsigned)isVideoResumed;
-(unsigned)isAudioResumed;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setGuid:(NSString *)arg1 ;
-(BOOL)hasGuid;
-(NSString *)guid;
-(void)setIsVideo:(unsigned)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned)isVideo;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end
