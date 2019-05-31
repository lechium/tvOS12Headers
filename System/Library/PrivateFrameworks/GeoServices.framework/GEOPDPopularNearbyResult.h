/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:09 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOPDPopularNearbyResult : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDLitePlaceResult* _litePlaceResults;
	unsigned long long _litePlaceResultsCount;
	unsigned long long _litePlaceResultsSpace;
	NSString* _sectionHeader;

}

@property (nonatomic,readonly) BOOL hasSectionHeader; 
@property (nonatomic,retain) NSString * sectionHeader;                                //@synthesize sectionHeader=_sectionHeader - In the implementation block
@property (nonatomic,readonly) unsigned long long litePlaceResultsCount; 
@property (nonatomic,readonly) GEOPDLitePlaceResult* litePlaceResults; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(unsigned long long)litePlaceResultsCount;
-(GEOPDLitePlaceResult)litePlaceResultAtIndex:(unsigned long long)arg1 ;
-(void)clearLitePlaceResults;
-(void)addLitePlaceResult:(GEOPDLitePlaceResult)arg1 ;
-(BOOL)hasSectionHeader;
-(GEOPDLitePlaceResult*)litePlaceResults;
-(void)setLitePlaceResults:(GEOPDLitePlaceResult*)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSectionHeader:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)sectionHeader;
@end

