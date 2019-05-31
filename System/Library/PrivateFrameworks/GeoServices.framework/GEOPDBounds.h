/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOMapRegion;

@interface GEOPDBounds : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOMapRegion* _displayMapRegion;
	GEOMapRegion* _mapRegion;
	float _maxZoom;
	float _minZoom;
	SCD_Struct_GE22 _has;

}

@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion;                       //@synthesize mapRegion=_mapRegion - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayMapRegion; 
@property (nonatomic,retain) GEOMapRegion * displayMapRegion;                //@synthesize displayMapRegion=_displayMapRegion - In the implementation block
@property (assign,nonatomic) BOOL hasMinZoom; 
@property (assign,nonatomic) float minZoom;                                  //@synthesize minZoom=_minZoom - In the implementation block
@property (assign,nonatomic) BOOL hasMaxZoom; 
@property (assign,nonatomic) float maxZoom;                                  //@synthesize maxZoom=_maxZoom - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)boundsInfoForPlaceData:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(BOOL)hasMapRegion;
-(GEOMapRegion *)mapRegion;
-(void)setDisplayMapRegion:(GEOMapRegion *)arg1 ;
-(BOOL)hasDisplayMapRegion;
-(GEOMapRegion *)displayMapRegion;
-(void)setMinZoom:(float)arg1 ;
-(void)setHasMinZoom:(BOOL)arg1 ;
-(BOOL)hasMinZoom;
-(void)setMaxZoom:(float)arg1 ;
-(void)setHasMaxZoom:(BOOL)arg1 ;
-(BOOL)hasMaxZoom;
-(float)minZoom;
-(float)maxZoom;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

