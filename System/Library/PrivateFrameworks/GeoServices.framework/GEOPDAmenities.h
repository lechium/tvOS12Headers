/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDAmenities : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDAmenityValue* _amenitys;
	unsigned long long _amenitysCount;
	unsigned long long _amenitysSpace;

}

@property (nonatomic,readonly) unsigned long long amenitysCount; 
@property (nonatomic,readonly) GEOPDAmenityValue* amenitys; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)amentiesForPlaceData:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(unsigned long long)amenitysCount;
-(GEOPDAmenityValue*)amenitys;
-(BOOL)hasAmenityType:(int)arg1 ;
-(BOOL)valueForAmenityType:(int)arg1 ;
-(void)clearAmenitys;
-(GEOPDAmenityValue)amenityAtIndex:(unsigned long long)arg1 ;
-(void)addAmenity:(GEOPDAmenityValue)arg1 ;
-(void)setAmenitys:(GEOPDAmenityValue*)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

