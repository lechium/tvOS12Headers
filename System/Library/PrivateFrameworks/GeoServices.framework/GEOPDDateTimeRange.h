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

@class PBUnknownFields;

@interface GEOPDDateTimeRange : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _endDate;
	unsigned long long _startDate;
	GEOPDLocalTimeRange* _timeRanges;
	unsigned long long _timeRangesCount;
	unsigned long long _timeRangesSpace;
	SCD_Struct_GE22 _has;

}

@property (nonatomic,readonly) BOOL hasValidStartAndEndDates; 
@property (assign,nonatomic) BOOL hasStartDate; 
@property (assign,nonatomic) unsigned long long startDate;                      //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL hasEndDate; 
@property (assign,nonatomic) unsigned long long endDate;                        //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) unsigned long long timeRangesCount; 
@property (nonatomic,readonly) GEOPDLocalTimeRange* timeRanges; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(unsigned long long)startDate;
-(unsigned long long)endDate;
-(GEOPDLocalTimeRange*)timeRanges;
-(unsigned long long)timeRangesCount;
-(void)addTimeRange:(GEOPDLocalTimeRange)arg1 ;
-(void)clearTimeRanges;
-(GEOPDLocalTimeRange)timeRangeAtIndex:(unsigned long long)arg1 ;
-(void)setTimeRanges:(GEOPDLocalTimeRange*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasStartDate;
-(BOOL)hasEndDate;
-(BOOL)hasValidStartAndEndDates;
-(void)setStartDate:(unsigned long long)arg1 ;
-(void)setHasStartDate:(BOOL)arg1 ;
-(void)setEndDate:(unsigned long long)arg1 ;
-(void)setHasEndDate:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

