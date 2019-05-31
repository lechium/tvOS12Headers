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

@class PBUnknownFields, NSString;

@interface GEOCountryRegionTuple : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _countryCode;
	NSString* _region;

}

@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                         //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) BOOL hasRegion; 
@property (nonatomic,retain) NSString * region;                              //@synthesize region=_region - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(BOOL)hasCountryCode;
-(BOOL)hasRegion;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRegion:(NSString *)arg1 ;
-(NSString *)region;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end
