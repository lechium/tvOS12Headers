/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOCompanionRouteContext : PBCodable <NSCopying> {

	int _origin;
	unsigned _timestamp;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasOrigin; 
@property (assign,nonatomic) int origin;                      //@synthesize origin=_origin - In the implementation block
+(int)defaultOrigin;
+(id)context;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasOrigin;
-(void)setHasOrigin:(BOOL)arg1 ;
-(id)originAsString:(int)arg1 ;
-(int)StringAsOrigin:(id)arg1 ;
-(BOOL)isForeignOrigin;
-(BOOL)isStaleComparedToContext:(id)arg1 ;
-(id)simpleDescription;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)timestamp;
-(int)origin;
-(long long)compare:(id)arg1 ;
-(void)setOrigin:(int)arg1 ;
-(void)setTimestamp:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

