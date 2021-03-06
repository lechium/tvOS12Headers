/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@interface WebMediaSessionHelper : NSObject {

	MediaSessionManageriOS* _callback;
	RetainPtr<AVRouteDetector>* _routeDetector;
	BOOL _monitoringAirPlayRoutes;
	BOOL _startMonitoringAirPlayRoutesPending;

}
-(id)initWithCallback:(MediaSessionManageriOS*)arg1 ;
-(void)clearCallback;
-(BOOL)hasWirelessTargetsAvailable;
-(void)startMonitoringAirPlayRoutes;
-(void)stopMonitoringAirPlayRoutes;
-(void)interruption:(id)arg1 ;
-(void)wirelessRoutesAvailableDidChange:(id)arg1 ;
-(void)dealloc;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
@end

