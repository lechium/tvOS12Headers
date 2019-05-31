/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOLatLng;

@interface GEORoadAccessPoint : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _drivingDirection;
	GEOLatLng* _location;
	unsigned _significance;
	int _walkingDirection;
	BOOL _isApproximate;
	SCD_Struct_GE70 _has;

}

@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLatLng * location;                           //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasIsApproximate; 
@property (assign,nonatomic) BOOL isApproximate;                             //@synthesize isApproximate=_isApproximate - In the implementation block
@property (assign,nonatomic) BOOL hasWalkingDirection; 
@property (assign,nonatomic) int walkingDirection;                           //@synthesize walkingDirection=_walkingDirection - In the implementation block
@property (assign,nonatomic) BOOL hasDrivingDirection; 
@property (assign,nonatomic) int drivingDirection;                           //@synthesize drivingDirection=_drivingDirection - In the implementation block
@property (assign,nonatomic) BOOL hasSignificance; 
@property (assign,nonatomic) unsigned significance;                          //@synthesize significance=_significance - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasLocation;
-(int)drivingDirection;
-(void)setDrivingDirection:(int)arg1 ;
-(void)setWalkingDirection:(int)arg1 ;
-(unsigned)significance;
-(void)setSignificance:(unsigned)arg1 ;
-(void)setHasSignificance:(BOOL)arg1 ;
-(BOOL)hasSignificance;
-(void)setIsApproximate:(BOOL)arg1 ;
-(void)setHasIsApproximate:(BOOL)arg1 ;
-(BOOL)hasIsApproximate;
-(int)walkingDirection;
-(void)setHasWalkingDirection:(BOOL)arg1 ;
-(BOOL)hasWalkingDirection;
-(id)walkingDirectionAsString:(int)arg1 ;
-(int)StringAsWalkingDirection:(id)arg1 ;
-(void)setHasDrivingDirection:(BOOL)arg1 ;
-(BOOL)hasDrivingDirection;
-(id)drivingDirectionAsString:(int)arg1 ;
-(int)StringAsDrivingDirection:(id)arg1 ;
-(BOOL)isApproximate;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOLatLng *)location;
-(void)copyTo:(id)arg1 ;
-(void)setLocation:(GEOLatLng *)arg1 ;
-(id)dictionaryRepresentation;
@end

