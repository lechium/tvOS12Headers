/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:05 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDWifiFingerprint : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _confidence;
	int _labelType;
	int _status;
	SCD_Struct_GE23 _has;

}

@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                     //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasLabelType; 
@property (assign,nonatomic) int labelType;                                  //@synthesize labelType=_labelType - In the implementation block
@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) unsigned confidence;                            //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(int)labelType;
-(BOOL)hasLabelType;
-(void)setLabelType:(int)arg1 ;
-(void)setHasLabelType:(BOOL)arg1 ;
-(id)labelTypeAsString:(int)arg1 ;
-(int)StringAsLabelType:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)status;
-(void)copyTo:(id)arg1 ;
-(unsigned)confidence;
-(void)setConfidence:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(void)setStatus:(int)arg1 ;
@end
