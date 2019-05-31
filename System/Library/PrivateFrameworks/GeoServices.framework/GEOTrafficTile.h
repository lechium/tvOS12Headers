/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData;

@interface GEOTrafficTile : PBCodable <NSCopying> {

	NSMutableArray* _trafficIncidents;
	NSMutableArray* _trafficSegments;
	NSData* _vertices;

}

@property (nonatomic,readonly) BOOL hasVertices; 
@property (nonatomic,retain) NSData * vertices;                              //@synthesize vertices=_vertices - In the implementation block
@property (nonatomic,retain) NSMutableArray * trafficSegments;               //@synthesize trafficSegments=_trafficSegments - In the implementation block
@property (nonatomic,retain) NSMutableArray * trafficIncidents;              //@synthesize trafficIncidents=_trafficIncidents - In the implementation block
+(Class)trafficSegmentType;
+(Class)trafficIncidentType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)trafficIncidents;
-(void)setTrafficIncidents:(NSMutableArray *)arg1 ;
-(void)addTrafficSegment:(id)arg1 ;
-(void)addTrafficIncident:(id)arg1 ;
-(void)setVertices:(NSData *)arg1 ;
-(unsigned long long)trafficSegmentsCount;
-(void)clearTrafficSegments;
-(id)trafficSegmentAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)trafficIncidentsCount;
-(void)clearTrafficIncidents;
-(id)trafficIncidentAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasVertices;
-(NSData *)vertices;
-(NSMutableArray *)trafficSegments;
-(void)setTrafficSegments:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

