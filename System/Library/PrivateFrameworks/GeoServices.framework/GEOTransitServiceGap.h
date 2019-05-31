/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOServiceGap.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, GEOFormattedString, NSString;

@interface GEOTransitServiceGap : PBCodable <GEOServiceGap, NSCopying> {

	unsigned _absEndTime;
	unsigned _absStartTime;
	unsigned _appearsBeforeSuggestedRouteIndex;
	GEOFormattedString* _displayMessage;
	SCD_Struct_GE23 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) unsigned long long routeListInsertBeforeIndex; 
@property (nonatomic,readonly) id<GEOServerFormattedString> displayMessagFormatString; 
@property (assign,nonatomic) BOOL hasAppearsBeforeSuggestedRouteIndex; 
@property (assign,nonatomic) unsigned appearsBeforeSuggestedRouteIndex;                             //@synthesize appearsBeforeSuggestedRouteIndex=_appearsBeforeSuggestedRouteIndex - In the implementation block
@property (assign,nonatomic) BOOL hasAbsStartTime; 
@property (assign,nonatomic) unsigned absStartTime;                                                 //@synthesize absStartTime=_absStartTime - In the implementation block
@property (assign,nonatomic) BOOL hasAbsEndTime; 
@property (assign,nonatomic) unsigned absEndTime;                                                   //@synthesize absEndTime=_absEndTime - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayMessage; 
@property (nonatomic,retain) GEOFormattedString * displayMessage;                                   //@synthesize displayMessage=_displayMessage - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(BOOL)hasAbsStartTime;
-(unsigned)absStartTime;
-(unsigned)absEndTime;
-(void)setDisplayMessage:(GEOFormattedString *)arg1 ;
-(void)setAppearsBeforeSuggestedRouteIndex:(unsigned)arg1 ;
-(void)setHasAppearsBeforeSuggestedRouteIndex:(BOOL)arg1 ;
-(BOOL)hasAppearsBeforeSuggestedRouteIndex;
-(void)setAbsStartTime:(unsigned)arg1 ;
-(void)setHasAbsStartTime:(BOOL)arg1 ;
-(void)setAbsEndTime:(unsigned)arg1 ;
-(void)setHasAbsEndTime:(BOOL)arg1 ;
-(BOOL)hasAbsEndTime;
-(BOOL)hasDisplayMessage;
-(unsigned)appearsBeforeSuggestedRouteIndex;
-(GEOFormattedString *)displayMessage;
-(unsigned long long)routeListInsertBeforeIndex;
-(id<GEOServerFormattedString>)displayMessagFormatString;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

