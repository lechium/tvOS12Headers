/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:10 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOWalkingOptions : PBCodable <NSCopying> {

	SCD_Struct_GE2* _avoidedModes;
	double _preferredSpeed;
	SCD_Struct_GE1 _has;

}

@property (assign,nonatomic) BOOL hasPreferredSpeed; 
@property (assign,nonatomic) double preferredSpeed;                               //@synthesize preferredSpeed=_preferredSpeed - In the implementation block
@property (nonatomic,readonly) unsigned long long avoidedModesCount; 
@property (nonatomic,readonly) int* avoidedModes; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)avoidedModesCount;
-(int)avoidedModeAtIndex:(unsigned long long)arg1 ;
-(id)avoidedModesAsString:(int)arg1 ;
-(void)clearAvoidedModes;
-(void)addAvoidedMode:(int)arg1 ;
-(int*)avoidedModes;
-(void)setAvoidedModes:(int*)arg1 count:(unsigned long long)arg2 ;
-(int)StringAsAvoidedModes:(id)arg1 ;
-(void)setPreferredSpeed:(double)arg1 ;
-(void)setHasPreferredSpeed:(BOOL)arg1 ;
-(BOOL)hasPreferredSpeed;
-(double)preferredSpeed;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

