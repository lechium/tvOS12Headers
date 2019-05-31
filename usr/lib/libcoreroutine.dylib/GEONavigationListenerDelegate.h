/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEONavigationListenerDelegate <NSObject>
@optional
-(void)navigationListener:(id)arg1 didUpdateCurrentRoadName:(id)arg2;
-(void)navigationListener:(id)arg1 didUpdateRouteSummary:(id)arg2;
-(void)navigationListener:(id)arg1 didUpdateTransitSummary:(id)arg2;
-(void)navigationListener:(id)arg1 didUpdateGuidanceState:(id)arg2;
-(void)navigationListener:(id)arg1 didUpdateActiveRouteData:(id)arg2;
-(void)navigationListener:(id)arg1 didUpdateStepIndex:(unsigned long long)arg2;
-(void)navigationListener:(id)arg1 didUpdateStepNameInfo:(id)arg2;
-(void)navigationListener:(id)arg1 didUpdateRideSelections:(id)arg2;
-(void)navigationListener:(id)arg1 didUpdatePositionFromSign:(CLLocationCoordinate2D)arg2;
-(void)navigationListener:(id)arg1 didUpdatePositionFromManeuver:(CLLocationCoordinate2D)arg2;
-(void)navigationListener:(id)arg1 didUpdatePositionFromDestination:(CLLocationCoordinate2D)arg2;
-(void)navigationListener:(id)arg1 didUpdateTrafficIncidentAlertDetailsData:(id)arg2;
-(void)navigationListener:(id)arg1 didUpdateNavigationVoiceVolume:(int)arg2;

@end

