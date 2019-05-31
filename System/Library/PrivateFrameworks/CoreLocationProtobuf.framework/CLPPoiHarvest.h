/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:42 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CLPPoiTriggerEvent;

@interface CLPPoiHarvest : PBCodable <NSCopying> {

	NSMutableArray* _accessPoints;
	NSMutableArray* _locations;
	CLPPoiTriggerEvent* _triggerEvent;

}

@property (nonatomic,retain) CLPPoiTriggerEvent * triggerEvent;              //@synthesize triggerEvent=_triggerEvent - In the implementation block
@property (nonatomic,retain) NSMutableArray * locations;                     //@synthesize locations=_locations - In the implementation block
@property (nonatomic,retain) NSMutableArray * accessPoints;                  //@synthesize accessPoints=_accessPoints - In the implementation block
+(Class)locationsType;
+(Class)accessPointsType;
-(id)locationsAtIndex:(unsigned long long)arg1 ;
-(id)accessPointsAtIndex:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)accessPointsCount;
-(NSMutableArray *)locations;
-(NSMutableArray *)accessPoints;
-(unsigned long long)locationsCount;
-(void)clearLocations;
-(void)clearAccessPoints;
-(void)setAccessPoints:(NSMutableArray *)arg1 ;
-(void)setTriggerEvent:(CLPPoiTriggerEvent *)arg1 ;
-(void)addAccessPoints:(id)arg1 ;
-(void)addLocations:(id)arg1 ;
-(CLPPoiTriggerEvent *)triggerEvent;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setLocations:(NSMutableArray *)arg1 ;
@end

