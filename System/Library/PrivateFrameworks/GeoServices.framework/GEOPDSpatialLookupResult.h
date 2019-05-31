/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDBounds, GEOLatLng;

@interface GEOPDSpatialLookupResult : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE2* _mappedCategorys;
	GEOPDBounds* _bounds;
	GEOLatLng* _center;

}

@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center;                                     //@synthesize center=_center - In the implementation block
@property (nonatomic,readonly) BOOL hasBounds; 
@property (nonatomic,retain) GEOPDBounds * bounds;                                   //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) unsigned long long mappedCategorysCount; 
@property (nonatomic,readonly) int* mappedCategorys; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)spatialLookupResultForPlaceData:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasCenter;
-(BOOL)hasBounds;
-(unsigned long long)mappedCategorysCount;
-(void)clearMappedCategorys;
-(int)mappedCategoryAtIndex:(unsigned long long)arg1 ;
-(void)addMappedCategory:(int)arg1 ;
-(int*)mappedCategorys;
-(void)setMappedCategorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)mappedCategorysAsString:(int)arg1 ;
-(int)StringAsMappedCategorys:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(GEOPDBounds *)bounds;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBounds:(GEOPDBounds *)arg1 ;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(GEOLatLng *)center;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

