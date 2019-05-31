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

@class GEOPDAddressObject, NSString, GEOAddress;

@interface GEORPAddress : PBCodable <NSCopying> {

	GEOPDAddressObject* _addressObject;
	NSString* _addressString;
	GEOAddress* _geoAddress;

}

@property (nonatomic,readonly) BOOL hasGeoAddress; 
@property (nonatomic,retain) GEOAddress * geoAddress;                         //@synthesize geoAddress=_geoAddress - In the implementation block
@property (nonatomic,readonly) BOOL hasAddressString; 
@property (nonatomic,retain) NSString * addressString;                        //@synthesize addressString=_addressString - In the implementation block
@property (nonatomic,readonly) BOOL hasAddressObject; 
@property (nonatomic,retain) GEOPDAddressObject * addressObject;              //@synthesize addressObject=_addressObject - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(GEOPDAddressObject *)addressObject;
-(GEOAddress *)geoAddress;
-(NSString *)addressString;
-(BOOL)hasAddressObject;
-(void)setAddressObject:(GEOPDAddressObject *)arg1 ;
-(void)setGeoAddress:(GEOAddress *)arg1 ;
-(void)setAddressString:(NSString *)arg1 ;
-(BOOL)hasGeoAddress;
-(BOOL)hasAddressString;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

