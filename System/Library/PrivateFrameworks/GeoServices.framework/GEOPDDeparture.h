/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitDeparture.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString, PBUnknownFields;

@interface GEOPDDeparture : PBCodable <GEOTransitDeparture, NSCopying> {

	PBUnknownFields* _unknownFields;
	double _absDepartureTime;
	NSString* _vehicleNumber;
	SCD_Struct_GE1 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * departureDate; 
@property (nonatomic,readonly) NSString * vehicleIdentifier; 
@property (assign,nonatomic) BOOL hasAbsDepartureTime; 
@property (assign,nonatomic) double absDepartureTime;                        //@synthesize absDepartureTime=_absDepartureTime - In the implementation block
@property (nonatomic,readonly) BOOL hasVehicleNumber; 
@property (nonatomic,retain) NSString * vehicleNumber;                       //@synthesize vehicleNumber=_vehicleNumber - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(NSDate *)departureDate;
-(BOOL)hasAbsDepartureTime;
-(double)absDepartureTime;
-(NSString *)vehicleNumber;
-(NSString *)vehicleIdentifier;
-(void)setVehicleNumber:(NSString *)arg1 ;
-(BOOL)hasVehicleNumber;
-(void)setAbsDepartureTime:(double)arg1 ;
-(void)setHasAbsDepartureTime:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

