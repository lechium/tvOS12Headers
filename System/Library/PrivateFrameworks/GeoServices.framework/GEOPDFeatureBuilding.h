/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDVenueBuilding, NSMutableArray, GEOPDVenueContainer;

@interface GEOPDFeatureBuilding : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDVenueBuilding* _building;
	NSMutableArray* _levels;
	GEOPDVenueContainer* _venueContainer;

}

@property (nonatomic,readonly) BOOL hasVenueContainer; 
@property (nonatomic,retain) GEOPDVenueContainer * venueContainer;              //@synthesize venueContainer=_venueContainer - In the implementation block
@property (nonatomic,readonly) BOOL hasBuilding; 
@property (nonatomic,retain) GEOPDVenueBuilding * building;                     //@synthesize building=_building - In the implementation block
@property (nonatomic,retain) NSMutableArray * levels;                           //@synthesize levels=_levels - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)levelType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)addLevel:(id)arg1 ;
-(void)setVenueContainer:(GEOPDVenueContainer *)arg1 ;
-(void)setBuilding:(GEOPDVenueBuilding *)arg1 ;
-(unsigned long long)levelsCount;
-(void)clearLevels;
-(id)levelAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasVenueContainer;
-(BOOL)hasBuilding;
-(GEOPDVenueContainer *)venueContainer;
-(GEOPDVenueBuilding *)building;
-(NSMutableArray *)levels;
-(void)setLevels:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

