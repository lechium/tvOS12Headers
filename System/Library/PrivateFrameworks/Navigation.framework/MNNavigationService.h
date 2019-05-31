/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MNNavigationServiceClientInterface.h>
#import <libobjc.A.dylib/MNNavigationServiceRemoteProxyDelegate.h>

@protocol MNNavigationServiceProxy;
@class MNObserverHashTable, MNNavigationServiceRemoteProxy, MNNavigationDetails, MNSettings, MNAudioOutputSetting, NSArray, NSString, GEOComposedRoute, GEODirectionsRequest, GEODirectionsResponse, MNLocation, GEOComposedWaypoint, MNCommuteDestination;

@interface MNNavigationService : NSObject <MNNavigationServiceClientInterface, MNNavigationServiceRemoteProxyDelegate> {

	MNObserverHashTable* _navigationObservers;
	id<MNNavigationServiceProxy> _proxy;
	MNNavigationServiceRemoteProxy* _remoteProxy;
	MNNavigationDetails* _details;
	MNSettings* _cachedSettings;
	MNAudioOutputSetting* _currentAudioOutputSetting;
	unsigned long long _routeSelection;
	NSArray* _audioSettings;
	MNAudioOutputSetting* _currentSettingForVoicePrompt;

}

@property (nonatomic,readonly) MNAudioOutputSetting * currentAudioOutputSetting;                 //@synthesize currentAudioOutputSetting=_currentAudioOutputSetting - In the implementation block
@property (nonatomic,readonly) unsigned long long routeSelection;                                //@synthesize routeSelection=_routeSelection - In the implementation block
@property (nonatomic,readonly) NSArray * audioSettings;                                          //@synthesize audioSettings=_audioSettings - In the implementation block
@property (nonatomic,readonly) MNAudioOutputSetting * currentSettingForVoicePrompt;              //@synthesize currentSettingForVoicePrompt=_currentSettingForVoicePrompt - In the implementation block
@property (assign,nonatomic) int headingOrientation; 
@property (assign,nonatomic) BOOL guidancePromptsEnabled; 
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) int navigationType; 
@property (nonatomic,readonly) BOOL speechMuted; 
@property (nonatomic,readonly) int navigationState; 
@property (nonatomic,readonly) int navigationTransportType; 
@property (nonatomic,readonly) BOOL isTrackingCurrentLocation; 
@property (nonatomic,readonly) NSString * currentVoiceLanguage; 
@property (nonatomic,readonly) int desiredNavigationType; 
@property (nonatomic,readonly) int desiredTransportType; 
@property (nonatomic,readonly) GEOComposedRoute * route; 
@property (nonatomic,readonly) GEODirectionsRequest * currentRequest; 
@property (nonatomic,readonly) GEODirectionsResponse * currentResponse; 
@property (nonatomic,readonly) unsigned long long routeIndex; 
@property (nonatomic,readonly) unsigned long long reconnectionRouteIndex; 
@property (nonatomic,readonly) NSArray * alternateRoutes; 
@property (nonatomic,readonly) unsigned long long stepIndex; 
@property (nonatomic,readonly) MNLocation * lastLocation; 
@property (nonatomic,readonly) double remainingTime; 
@property (nonatomic,readonly) double distanceUntilSign; 
@property (nonatomic,readonly) double timeUntilSign; 
@property (nonatomic,readonly) double distanceUntilManeuver; 
@property (nonatomic,readonly) double timeUntilManeuver; 
@property (nonatomic,readonly) GEOComposedWaypoint * origin; 
@property (nonatomic,readonly) GEOComposedWaypoint * originalOrigin; 
@property (nonatomic,readonly) GEOComposedWaypoint * destination; 
@property (nonatomic,readonly) NSString * destinationName; 
@property (nonatomic,readonly) GEOComposedWaypoint * originalDestination; 
@property (nonatomic,readonly) NSString * originalDestinationName; 
@property (nonatomic,readonly) BOOL isDetour; 
@property (nonatomic,readonly) BOOL isPredictingDestination; 
@property (nonatomic,readonly) NSArray * possibleCommuteDestinations; 
@property (nonatomic,readonly) MNCommuteDestination * predictedCommuteDestination; 
@property (nonatomic,readonly) BOOL isInVehicle; 
@property (nonatomic,readonly) NSString * traceFileName; 
@property (nonatomic,readonly) NSString * tracePath; 
@property (nonatomic,readonly) double traceDuration; 
@property (nonatomic,readonly) NSArray * traceBookmarks; 
@property (assign,nonatomic) BOOL traceIsPlaying; 
@property (assign,nonatomic) double tracePosition; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)clientInterfaceHash;
+(unsigned long long)daemonInterfaceHash;
+(unsigned long long)_hashForProtocol:(id)arg1 ;
+(id)sharedService;
-(NSArray *)audioSettings;
-(void)openForClient:(id)arg1 ;
-(void)closeForClient:(id)arg1 ;
-(unsigned long long)routeIndex;
-(GEOComposedRoute *)route;
-(unsigned long long)stepIndex;
-(void)setGuidancePromptsEnabled:(BOOL)arg1 ;
-(void)setIsConnectedToCarplay:(BOOL)arg1 ;
-(int)navigationState;
-(void)setDisplayedStepIndex:(unsigned long long)arg1 ;
-(NSString *)destinationName;
-(GEODirectionsRequest *)currentRequest;
-(MNLocation *)lastLocation;
-(double)remainingTime;
-(BOOL)guidancePromptsEnabled;
-(void)setHeadingOrientation:(int)arg1 ;
-(id)initPrivate;
-(BOOL)vibrateForPrompt:(unsigned long long)arg1 ;
-(void)_resetDetails;
-(void)stopNavigation;
-(void)prepareNavigationWithRouteDetails:(id)arg1 ;
-(void)stopPredictingDestinations;
-(void)updateDestination:(id)arg1 ;
-(void)resumeOriginalDestination;
-(void)setFullGuidanceMode:(BOOL)arg1 ;
-(void)changeSettings:(id)arg1 ;
-(void)stopCurrentGuidancePrompt;
-(void)setHFPPreference:(BOOL)arg1 forSetting:(id)arg2 ;
-(void)setCurrentAudioOutputSetting:(MNAudioOutputSetting *)arg1 ;
-(void)setRideIndex:(unsigned long long)arg1 forLegIndex:(unsigned long long)arg2 ;
-(void)setTraceIsPlaying:(BOOL)arg1 ;
-(void)setTracePlaybackSpeed:(double)arg1 ;
-(void)setTracePosition:(double)arg1 ;
-(void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(void)navigationServiceProxy:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(void)navigationServiceProxy:(id)arg1 didUpdateActiveRouteDetails:(id)arg2 ;
-(void)navigationServiceProxy:(id)arg1 didUpdateNavigationDetails:(id)arg2 ;
-(void)navigationServiceProxyWillPauseNavigation:(id)arg1 ;
-(void)navigationServiceProxyWillResumeFromPauseNavigation:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg1 didFailWithError:(id)arg2 ;
-(void)navigationServiceProxy:(id)arg1 didChangeNavigationState:(int)arg2 ;
-(void)navigationServiceProxy:(id)arg1 didUpdateMatchedLocation:(id)arg2 ;
-(void)navigationServiceProxy:(id)arg1 didUpdateStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3 ;
-(void)navigationServiceProxy:(id)arg1 didUpdateProceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4 ;
-(void)navigationServiceProxy:(id)arg1 didUpdateDistanceUntilSign:(double)arg2 timeUntilSign:(double)arg3 forStepIndex:(unsigned long long)arg4 ;
-(void)navigationServiceProxy:(id)arg1 didUpdateDistanceUntilManeuver:(double)arg2 timeUntilManeuver:(double)arg3 forStepIndex:(unsigned long long)arg4 ;
-(void)navigationServiceProxy:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3 ;
-(void)navigationServiceProxy:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(BOOL)arg8 ;
-(void)navigationServiceProxy:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2 ;
-(void)navigationServiceProxy:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 ;
-(void)navigationServiceProxyHideSecondaryStep:(id)arg1 ;
-(void)navigationServiceProxyBeginGuidanceUpdate:(id)arg1 ;
-(void)navigationServiceProxyEndGuidanceUpdate:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg1 updateSignsWithInfo:(id)arg2 ;
-(void)navigationServiceProxy:(id)arg1 usePersistentDisplay:(BOOL)arg2 ;
-(void)navigationServiceProxy:(id)arg1 showLaneDirections:(id)arg2 ;
-(void)navigationServiceProxy:(id)arg1 hideLaneDirectionsForId:(id)arg2 ;
-(void)navigationServiceProxyDidArrive:(id)arg1 ;
-(void)navigationServiceProxyPredictingDidArrive:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg1 didEnableGuidancePrompts:(BOOL)arg2 ;
-(void)navigationServiceProxy:(id)arg1 newGuidanceEventFeedback:(id)arg2 ;
-(void)navigationServiceProxy:(id)arg1 updatedGuidanceEventFeedback:(id)arg2 ;
-(void)navigationServiceProxy:(id)arg1 didUpdateDisplayETA:(id)arg2 displayRemainingMinutes:(unsigned long long)arg3 forRoute:(id)arg4 ;
-(void)navigationServiceProxy:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3 ;
-(void)navigationServiceProxy:(id)arg1 didUpdateETAResponseForRoute:(id)arg2 ;
-(void)navigationServiceProxy:(id)arg1 didUpdateTrafficForETARoute:(id)arg2 from:(unsigned)arg3 to:(unsigned)arg4 forRoute:(id)arg5 ;
-(void)navigationServiceProxy:(id)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3 ;
-(void)navigationServiceProxyWillReroute:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg1 didRerouteWithDetails:(id)arg2 withLocationDetails:(id)arg3 withAlternateRoutes:(id)arg4 ;
-(void)navigationServiceProxyDidCancelReroute:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 ;
-(void)navigationServiceProxy:(id)arg1 failedRerouteWithErrorCode:(long long)arg2 ;
-(void)navigationServiceProxy:(id)arg1 didUpdateAlternateRoutes:(id)arg2 ;
-(void)navigationServiceProxy:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2 ;
-(void)navigationServiceProxy:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2 ;
-(void)navigationServiceProxy:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2 ;
-(void)navigationServiceProxy:(id)arg1 didUpdateIsInVehicle:(BOOL)arg2 ;
-(void)navigationServiceProxy:(id)arg1 didUpdatePossibleCommuteDestinations:(id)arg2 ;
-(void)navigationServiceProxy:(id)arg1 didUpdateTracePlaybackDetails:(id)arg2 ;
-(void)navigationServiceProxy:(id)arg1 didSignalAlightForStepAtIndex:(unsigned long long)arg2 ;
-(void)navigationServiceProxy:(id)arg1 didUpdateFeedback:(id)arg2 forAlightingStepAtIndex:(unsigned long long)arg3 ;
-(void)navigationServiceProxy:(id)arg1 didActivateAudioSession:(BOOL)arg2 ;
-(void)navigationServiceProxy:(id)arg1 didStartSpeakingPrompt:(id)arg2 ;
-(void)navigationServiceProxy:(id)arg1 didStartUsingVoiceLanguage:(id)arg2 ;
-(void)navigationServiceProxy:(id)arg1 didUpdateAudioOutputSettings:(id)arg2 ;
-(void)navigationServiceProxy:(id)arg1 didUpdateAudioOutputCurrentSetting:(id)arg2 ;
-(void)navigationServiceProxy:(id)arg1 didUpdateAudioOutputCurrentSettingForVoicePrompt:(id)arg2 ;
-(void)navigationServiceProxy:(id)arg1 didUpdateAudioOutputRouteSelection:(unsigned long long)arg2 ;
-(NSString *)traceFileName;
-(NSString *)currentVoiceLanguage;
-(MNAudioOutputSetting *)currentSettingForVoicePrompt;
-(unsigned long long)routeSelection;
-(BOOL)isOpenForClient:(id)arg1 ;
-(void)startNavigationForRouteDetails:(id)arg1 ;
-(unsigned long long)reconnectionRouteIndex;
-(double)distanceUntilSign;
-(double)timeUntilSign;
-(double)distanceUntilManeuver;
-(double)timeUntilManeuver;
-(GEOComposedWaypoint *)originalDestination;
-(BOOL)isDetour;
-(NSArray *)possibleCommuteDestinations;
-(MNCommuteDestination *)predictedCommuteDestination;
-(BOOL)isInVehicle;
-(NSString *)tracePath;
-(double)traceDuration;
-(NSArray *)traceBookmarks;
-(BOOL)traceIsPlaying;
-(double)tracePosition;
-(void)remoteProxyDidFinishReconnecting:(id)arg1 ;
-(void)startNavigationWithRoute:(id)arg1 withFullGuidance:(BOOL)arg2 ;
-(void)startPredictingDestinations;
-(void)switchToRoute:(id)arg1 ;
-(BOOL)repeatCurrentGuidance;
-(BOOL)repeatCurrentTrafficAlert;
-(BOOL)speechMuted;
-(int)navigationTransportType;
-(BOOL)isTrackingCurrentLocation;
-(int)desiredNavigationType;
-(int)desiredTransportType;
-(GEODirectionsResponse *)currentResponse;
-(id)displayETAForRoute:(id)arg1 ;
-(unsigned long long)displayRemainingMinutesForRoute:(id)arg1 ;
-(unsigned long long)alternateRouteIndexForRoute:(id)arg1 ;
-(id)routeIncidentsForRoute:(id)arg1 ;
-(id)etaRouteForRoute:(id)arg1 ;
-(GEOComposedWaypoint *)originalOrigin;
-(NSString *)originalDestinationName;
-(BOOL)isPredictingDestination;
-(id)predictedDestinationName;
-(id)predictedDestination;
-(id)predictedRoute;
-(id)predictedETARoute;
-(MNAudioOutputSetting *)currentAudioOutputSetting;
-(int)headingOrientation;
-(NSArray *)alternateRoutes;
-(int)navigationType;
-(void)removeObserver:(id)arg1 ;
-(unsigned long long)state;
-(void)addObserver:(id)arg1 ;
-(GEOComposedWaypoint *)destination;
-(GEOComposedWaypoint *)origin;
-(id)settings;
@end

