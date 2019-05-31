/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOEnrouteNotice, GEOComposedRoute, NSArray, NSString, GEOComposedTrafficCamera, GEOLatLng;

@interface GEOComposedEnrouteNotice : NSObject {

	GEOEnrouteNotice* _enrouteNotice;
	GEOComposedRoute* _route;
	NSArray* _guidanceEvents;
	SCD_Struct_GE82 _routeCoordinate;

}

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) GEOComposedTrafficCamera * trafficCamera; 
@property (nonatomic,readonly) BOOL hasHighlightDistance; 
@property (nonatomic,readonly) unsigned highlightDistance; 
@property (nonatomic,readonly) BOOL hasGroupIdentifier; 
@property (nonatomic,readonly) unsigned groupIdentifier; 
@property (nonatomic,readonly) NSArray * guidanceEvents;                              //@synthesize guidanceEvents=_guidanceEvents - In the implementation block
@property (nonatomic,readonly) GEOLatLng * position; 
@property (nonatomic,readonly) SCD_Struct_GE82 routeCoordinate; 
-(NSArray *)guidanceEvents;
-(BOOL)hasHighlightDistance;
-(unsigned)highlightDistance;
-(id)initWithEnrouteNotice:(id)arg1 onRoute:(id)arg2 ;
-(GEOComposedTrafficCamera *)trafficCamera;
-(SCD_Struct_GE82)routeCoordinate;
-(id)titleFormatForLocation:(id)arg1 ;
-(id)detailFormatForLocation:(id)arg1 ;
-(BOOL)hasGroupIdentifier;
-(unsigned)groupIdentifier;
-(NSString *)identifier;
-(id)description;
@end

