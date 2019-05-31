/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEORouteTrafficDetail, GEOShortTrafficSummary, NSMutableArray;

@interface GEOETAResultByType : PBCodable <NSCopying> {

	double _expectedTimeOfDeparture;
	unsigned _distance;
	unsigned _historicTravelTime;
	GEORouteTrafficDetail* _routeTrafficDetail;
	GEOShortTrafficSummary* _shortTrafficSummary;
	unsigned _staticTravelTime;
	int _status;
	NSMutableArray* _summaryForPredictedDestinations;
	int _transportType;
	unsigned _travelTimeAggressiveEstimate;
	unsigned _travelTimeBestEstimate;
	unsigned _travelTimeConservativeEstimate;
	SCD_Struct_LO19 _has;

}

@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType;                                             //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                                    //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasTravelTimeBestEstimate; 
@property (assign,nonatomic) unsigned travelTimeBestEstimate;                               //@synthesize travelTimeBestEstimate=_travelTimeBestEstimate - In the implementation block
@property (assign,nonatomic) BOOL hasHistoricTravelTime; 
@property (assign,nonatomic) unsigned historicTravelTime;                                   //@synthesize historicTravelTime=_historicTravelTime - In the implementation block
@property (assign,nonatomic) BOOL hasDistance; 
@property (assign,nonatomic) unsigned distance;                                             //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) BOOL hasExpectedTimeOfDeparture; 
@property (assign,nonatomic) double expectedTimeOfDeparture;                                //@synthesize expectedTimeOfDeparture=_expectedTimeOfDeparture - In the implementation block
@property (assign,nonatomic) BOOL hasTravelTimeConservativeEstimate; 
@property (assign,nonatomic) unsigned travelTimeConservativeEstimate;                       //@synthesize travelTimeConservativeEstimate=_travelTimeConservativeEstimate - In the implementation block
@property (assign,nonatomic) BOOL hasTravelTimeAggressiveEstimate; 
@property (assign,nonatomic) unsigned travelTimeAggressiveEstimate;                         //@synthesize travelTimeAggressiveEstimate=_travelTimeAggressiveEstimate - In the implementation block
@property (assign,nonatomic) BOOL hasStaticTravelTime; 
@property (assign,nonatomic) unsigned staticTravelTime;                                     //@synthesize staticTravelTime=_staticTravelTime - In the implementation block
@property (nonatomic,retain) NSMutableArray * summaryForPredictedDestinations;              //@synthesize summaryForPredictedDestinations=_summaryForPredictedDestinations - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteTrafficDetail; 
@property (nonatomic,retain) GEORouteTrafficDetail * routeTrafficDetail;                    //@synthesize routeTrafficDetail=_routeTrafficDetail - In the implementation block
@property (nonatomic,readonly) BOOL hasShortTrafficSummary; 
@property (nonatomic,retain) GEOShortTrafficSummary * shortTrafficSummary;                  //@synthesize shortTrafficSummary=_shortTrafficSummary - In the implementation block
+(Class)summaryForPredictedDestinationType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(void)setHasTransportType:(BOOL)arg1 ;
-(BOOL)hasTransportType;
-(id)transportTypeAsString:(int)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(void)setDistance:(unsigned)arg1 ;
-(void)setHasDistance:(BOOL)arg1 ;
-(BOOL)hasDistance;
-(void)setHistoricTravelTime:(unsigned)arg1 ;
-(void)setHasHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)hasHistoricTravelTime;
-(void)setTravelTimeAggressiveEstimate:(unsigned)arg1 ;
-(void)setHasTravelTimeAggressiveEstimate:(BOOL)arg1 ;
-(BOOL)hasTravelTimeAggressiveEstimate;
-(void)setTravelTimeConservativeEstimate:(unsigned)arg1 ;
-(void)setHasTravelTimeConservativeEstimate:(BOOL)arg1 ;
-(BOOL)hasTravelTimeConservativeEstimate;
-(void)setStaticTravelTime:(unsigned)arg1 ;
-(void)setHasStaticTravelTime:(BOOL)arg1 ;
-(BOOL)hasStaticTravelTime;
-(unsigned)distance;
-(unsigned)historicTravelTime;
-(unsigned)travelTimeAggressiveEstimate;
-(unsigned)travelTimeConservativeEstimate;
-(unsigned)staticTravelTime;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)addSummaryForPredictedDestination:(id)arg1 ;
-(unsigned long long)summaryForPredictedDestinationsCount;
-(void)clearSummaryForPredictedDestinations;
-(id)summaryForPredictedDestinationAtIndex:(unsigned long long)arg1 ;
-(void)setRouteTrafficDetail:(GEORouteTrafficDetail *)arg1 ;
-(void)setShortTrafficSummary:(GEOShortTrafficSummary *)arg1 ;
-(void)setTravelTimeBestEstimate:(unsigned)arg1 ;
-(void)setHasTravelTimeBestEstimate:(BOOL)arg1 ;
-(BOOL)hasTravelTimeBestEstimate;
-(void)setExpectedTimeOfDeparture:(double)arg1 ;
-(void)setHasExpectedTimeOfDeparture:(BOOL)arg1 ;
-(BOOL)hasExpectedTimeOfDeparture;
-(BOOL)hasRouteTrafficDetail;
-(BOOL)hasShortTrafficSummary;
-(unsigned)travelTimeBestEstimate;
-(double)expectedTimeOfDeparture;
-(NSMutableArray *)summaryForPredictedDestinations;
-(void)setSummaryForPredictedDestinations:(NSMutableArray *)arg1 ;
-(GEORouteTrafficDetail *)routeTrafficDetail;
-(GEOShortTrafficSummary *)shortTrafficSummary;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)status;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setStatus:(int)arg1 ;
@end

