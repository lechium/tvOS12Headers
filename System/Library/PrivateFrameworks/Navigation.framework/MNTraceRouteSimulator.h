/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOTraceRouteSimulator.h>
#import <libobjc.A.dylib/MNLocationProvider.h>
#import <libobjc.A.dylib/MNTimeProvider.h>

@protocol MNLocationProviderDelegate;
@class NSMutableArray, MNTraceEventRecorder, NSArray, NSString, NSBundle;

@interface MNTraceRouteSimulator : GEOTraceRouteSimulator <MNLocationProvider, MNTimeProvider> {

	double _time;
	NSMutableArray* _priorityQueue;
	MNTraceEventRecorder* _recorder;
	id<MNLocationProviderDelegate> _delegate;
	/*^block*/id _authorizationRequestBlock;
	NSArray* _traceEvents;

}

@property (nonatomic,readonly) NSArray * traceEvents;                                                                                      //@synthesize traceEvents=_traceEvents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNLocationProviderDelegate> delegate;                                                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSBundle * effectiveBundle; 
@property (nonatomic,copy) NSString * effectiveBundleIdentifier; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) BOOL locationServicesPreferencesDialogEnabled; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) BOOL matchInfoEnabled; 
@property (assign,nonatomic) int headingOrientation; 
@property (nonatomic,copy) id authorizationRequestBlock;                                                                                   //@synthesize authorizationRequestBlock=_authorizationRequestBlock - In the implementation block
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (nonatomic,readonly) int authorizationStatus; 
@property (assign,nonatomic) long long activityType; 
@property (nonatomic,readonly) BOOL usesCLMapCorrection; 
@property (nonatomic,readonly) BOOL isSimulation; 
@property (nonatomic,readonly) BOOL isTracePlayer; 
@property (nonatomic,readonly) double timeScale; 
@property (nonatomic,readonly) double currentTime; 
-(BOOL)isSimulation;
-(void)startUpdatingHeading;
-(void)stopUpdatingHeading;
-(void)setHeadingOrientation:(int)arg1 ;
-(void)insertVoiceEventAtTime:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)resetForActiveTileGroupChanged;
-(void)navigationSessionDidStart:(id)arg1 ;
-(void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2 ;
-(void)navigationSessionWillReroute:(id)arg1 ;
-(void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4 ;
-(void)navigationSession:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 ;
-(void)navigationSession:(id)arg1 didAnnounce:(id)arg2 stage:(unsigned long long)arg3 ;
-(void)navigationSession:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(BOOL)arg8 ;
-(void)navigationSession:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 ;
-(void)navigationSessionHideSecondaryStep:(id)arg1 ;
-(void)navigationSession:(id)arg1 didAnnounceArrival:(id)arg2 ;
-(void)navigationSession:(id)arg1 didEnableGuidancePrompts:(BOOL)arg2 ;
-(void)_generateEvents;
-(void)generateGuidance;
-(NSArray *)traceEvents;
-(void)startUpdatingVehicleSpeed;
-(void)stopUpdatingVehicleSpeed;
-(void)startUpdatingVehicleHeading;
-(void)stopUpdatingVehicleHeading;
-(void)requestWhenInUseAuthorizationWithPrompt;
-(void)setEffectiveBundle:(NSBundle *)arg1 ;
-(NSString *)effectiveBundleIdentifier;
-(void)setEffectiveBundleIdentifier:(NSString *)arg1 ;
-(double)desiredAccuracy;
-(BOOL)isLocationServicesPreferencesDialogEnabled;
-(void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1 ;
-(double)distanceFilter;
-(BOOL)matchInfoEnabled;
-(void)setMatchInfoEnabled:(BOOL)arg1 ;
-(int)headingOrientation;
-(id)authorizationRequestBlock;
-(void)setAuthorizationRequestBlock:(id)arg1 ;
-(double)expectedGpsUpdateInterval;
-(BOOL)usesCLMapCorrection;
-(BOOL)isTracePlayer;
-(double)timeScale;
-(void)_tearDown;
-(void)setDistanceFilter:(double)arg1 ;
-(void)setDesiredAccuracy:(double)arg1 ;
-(void)requestWhenInUseAuthorization;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(void)_setup;
-(void)setDelegate:(id<MNLocationProviderDelegate>)arg1 ;
-(id<MNLocationProviderDelegate>)delegate;
-(long long)activityType;
-(NSBundle *)effectiveBundle;
-(int)authorizationStatus;
-(void)setActivityType:(long long)arg1 ;
-(double)currentTime;
@end

