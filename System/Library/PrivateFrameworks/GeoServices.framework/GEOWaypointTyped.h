/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:00 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOWaypointID, GEOWaypointLocation, GEOWaypointPlace;

@interface GEOWaypointTyped : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOWaypointID* _waypointId;
	GEOWaypointLocation* _waypointLocation;
	GEOWaypointPlace* _waypointPlace;
	int _waypointType;
	BOOL _isCurrentLocation;
	BOOL _isLocationOfInterest;
	SCD_Struct_GE23 _has;

}

@property (assign,nonatomic) BOOL hasWaypointType; 
@property (assign,nonatomic) int waypointType;                                    //@synthesize waypointType=_waypointType - In the implementation block
@property (nonatomic,readonly) BOOL hasWaypointId; 
@property (nonatomic,retain) GEOWaypointID * waypointId;                          //@synthesize waypointId=_waypointId - In the implementation block
@property (nonatomic,readonly) BOOL hasWaypointPlace; 
@property (nonatomic,retain) GEOWaypointPlace * waypointPlace;                    //@synthesize waypointPlace=_waypointPlace - In the implementation block
@property (nonatomic,readonly) BOOL hasWaypointLocation; 
@property (nonatomic,retain) GEOWaypointLocation * waypointLocation;              //@synthesize waypointLocation=_waypointLocation - In the implementation block
@property (assign,nonatomic) BOOL hasIsCurrentLocation; 
@property (assign,nonatomic) BOOL isCurrentLocation;                              //@synthesize isCurrentLocation=_isCurrentLocation - In the implementation block
@property (assign,nonatomic) BOOL hasIsLocationOfInterest; 
@property (assign,nonatomic) BOOL isLocationOfInterest;                           //@synthesize isLocationOfInterest=_isLocationOfInterest - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setWaypointId:(GEOWaypointID *)arg1 ;
-(void)setWaypointPlace:(GEOWaypointPlace *)arg1 ;
-(void)setWaypointLocation:(GEOWaypointLocation *)arg1 ;
-(int)waypointType;
-(void)setWaypointType:(int)arg1 ;
-(void)setHasWaypointType:(BOOL)arg1 ;
-(BOOL)hasWaypointType;
-(id)waypointTypeAsString:(int)arg1 ;
-(int)StringAsWaypointType:(id)arg1 ;
-(BOOL)hasWaypointId;
-(BOOL)hasWaypointPlace;
-(BOOL)hasWaypointLocation;
-(void)setIsCurrentLocation:(BOOL)arg1 ;
-(void)setHasIsCurrentLocation:(BOOL)arg1 ;
-(BOOL)hasIsCurrentLocation;
-(void)setIsLocationOfInterest:(BOOL)arg1 ;
-(void)setHasIsLocationOfInterest:(BOOL)arg1 ;
-(BOOL)hasIsLocationOfInterest;
-(GEOWaypointID *)waypointId;
-(GEOWaypointPlace *)waypointPlace;
-(GEOWaypointLocation *)waypointLocation;
-(BOOL)isCurrentLocation;
-(BOOL)isLocationOfInterest;
-(id)locationForWaypoint;
-(void)clearLocations;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

