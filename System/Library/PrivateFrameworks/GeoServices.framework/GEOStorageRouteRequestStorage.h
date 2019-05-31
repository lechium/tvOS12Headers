/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOURLRouteHandle, NSMutableArray;

@interface GEOStorageRouteRequestStorage : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOURLRouteHandle* _routeHandle;
	int _transportType;
	NSMutableArray* _waypoints;
	SCD_Struct_GE1 _has;

}

@property (nonatomic,retain) NSMutableArray * waypoints;                     //@synthesize waypoints=_waypoints - In the implementation block
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType;                              //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteHandle; 
@property (nonatomic,retain) GEOURLRouteHandle * routeHandle;                //@synthesize routeHandle=_routeHandle - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)waypointsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setRouteHandle:(GEOURLRouteHandle *)arg1 ;
-(BOOL)hasRouteHandle;
-(GEOURLRouteHandle *)routeHandle;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(void)setHasTransportType:(BOOL)arg1 ;
-(BOOL)hasTransportType;
-(id)transportTypeAsString:(int)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(NSMutableArray *)waypoints;
-(void)addWaypoints:(id)arg1 ;
-(unsigned long long)waypointsCount;
-(void)clearWaypoints;
-(id)waypointsAtIndex:(unsigned long long)arg1 ;
-(void)setWaypoints:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end
