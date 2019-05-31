/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MNLocationManagerObserver.h>

@class GEORouteAttributes, GEORouteSet, MNActiveRouteInfo, NSMutableArray, NSArray, GEOComposedWaypoint, MNRoutePlanningDetails, MNActiveRouteDetails, GEORoutePreloader, NSString, GEOComposedRoute, GEOETARoute;

@interface MNRouteManager : NSObject <MNLocationManagerObserver> {

	GEORouteAttributes* _routeAttributes;
	GEORouteSet* _currentRouteSet;
	MNActiveRouteInfo* _currentRouteInfo;
	NSMutableArray* _alternateRoutes;
	NSArray* _allRoutes;
	GEOComposedWaypoint* _originalDestination;
	MNActiveRouteInfo* _originalRouteInfo;
	MNRoutePlanningDetails* _routePlanningDetails;
	MNActiveRouteDetails* _activeRouteDetails;
	GEORoutePreloader* _preloader;
	NSString* _tileLoaderClientIdentifier;
	GEOComposedRoute* _originalRoute;

}

@property (nonatomic,readonly) GEORouteAttributes * routeAttributes;                       //@synthesize routeAttributes=_routeAttributes - In the implementation block
@property (nonatomic,readonly) GEORouteSet * currentRouteSet;                              //@synthesize currentRouteSet=_currentRouteSet - In the implementation block
@property (nonatomic,readonly) GEOComposedRoute * currentRoute; 
@property (nonatomic,readonly) MNActiveRouteInfo * currentRouteInfo;                       //@synthesize currentRouteInfo=_currentRouteInfo - In the implementation block
@property (nonatomic,readonly) GEOETARoute * etaRoute; 
@property (nonatomic,readonly) NSArray * alternateRoutes;                                  //@synthesize alternateRoutes=_alternateRoutes - In the implementation block
@property (nonatomic,readonly) NSArray * allRoutes; 
@property (nonatomic,readonly) GEOComposedWaypoint * originalDestination;                  //@synthesize originalDestination=_originalDestination - In the implementation block
@property (nonatomic,readonly) GEOComposedRoute * originalRoute;                           //@synthesize originalRoute=_originalRoute - In the implementation block
@property (nonatomic,readonly) MNRoutePlanningDetails * routePlanningDetails;              //@synthesize routePlanningDetails=_routePlanningDetails - In the implementation block
@property (nonatomic,readonly) MNActiveRouteDetails * activeRouteDetails;                  //@synthesize activeRouteDetails=_activeRouteDetails - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(GEORouteAttributes *)routeAttributes;
-(GEOComposedRoute *)originalRoute;
-(void)updateForLocation:(id)arg1 ;
-(GEOComposedRoute *)currentRoute;
-(GEOETARoute *)etaRoute;
-(GEORouteSet *)currentRouteSet;
-(MNRoutePlanningDetails *)routePlanningDetails;
-(MNActiveRouteInfo *)currentRouteInfo;
-(NSArray *)allRoutes;
-(MNActiveRouteDetails *)activeRouteDetails;
-(GEOComposedWaypoint *)originalDestination;
-(void)_clearPreloader;
-(void)_updatePreloaderForNewRoute;
-(BOOL)updateForRoutePlanningDetails:(id)arg1 outError:(out id*)arg2 ;
-(void)updateForReroute:(id)arg1 rerouteReason:(unsigned long long)arg2 request:(id)arg3 response:(id)arg4 ;
-(void)updateWithAlternateRoutes:(id)arg1 ;
-(void)clearCurrentRoute;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(NSArray *)alternateRoutes;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(void)dealloc;
-(void)open;
-(void)close;
@end

