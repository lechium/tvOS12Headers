/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/Navigation-Structs.h>
#import <libobjc.A.dylib/MNGuidanceManager.h>

@protocol MNGuidanceManagerDelegate;
@class GEOComposedRoute, MNNavigationSession, GEOComposedWaypoint, NSString, NSData, GEOComposedRouteStep;

@interface MNClassicGuidanceManager : NSObject <MNGuidanceManager> {

	GEOComposedRoute* _route;
	int _guidanceState;
	unsigned long long _currentStepIndex;
	double _distanceWhenFirstAnnouncementAllowed;
	double _distanceWhenInitialAnnounced;
	double _distanceWhenPrepareAnnounced;
	double _distanceWhenExecuteAnnounced;
	double _baselineSpeed;
	double _baselineDistance;
	double _minExecutionDistance;
	double _timeLastAnnouncementStarted;
	double _timeLastAnnouncementEnded;
	double _timeUntilNextAnnouncement;
	double _estimateOfTimeToSpeakExecutionAnnouncement;
	BOOL _shouldAnnounceContinueStraight;
	BOOL _shouldSkipInitialAnnounce;
	BOOL _shouldSkipPrepareAnnounce;
	BOOL _shouldSkipExecuteAnnounce;
	BOOL _didAnnounceProceedToRoute;
	BOOL _didAnnounceManeuverContinue;
	BOOL _didAnnounceManeuverInitial;
	BOOL _didAnnounceManeuverPreparation;
	BOOL _didAnnounceManeuverExecution;
	BOOL _didAnnounceSecondaryManeuver;
	BOOL _didAnnounceArrival;
	BOOL _didShowPrimarySign;
	BOOL _didShowSecondarySign;
	id<MNGuidanceManagerDelegate> _delegate;
	MNNavigationSession* _navigationSession;
	GEOComposedWaypoint* _destination;
	unsigned long long _pointIndexForCurrentRoadInfo;
	NSString* _currentRoadName;
	long long _currentShieldType;
	NSString* _currentShieldText;
	SCD_Struct_MN17 _currentInstructionOptions;
	BOOL _didAnnounceStartOfRoute;
	unsigned long long _countLocationUpdates;

}

@property (nonatomic,retain) NSString * currentRoadName;                                 //@synthesize currentRoadName=_currentRoadName - In the implementation block
@property (nonatomic,retain) NSString * currentShieldText;                               //@synthesize currentShieldText=_currentShieldText - In the implementation block
@property (assign,nonatomic) SCD_Struct_MN17 currentInstructionOptions;                  //@synthesize currentInstructionOptions=_currentInstructionOptions - In the implementation block
@property (assign,nonatomic,__weak) id<MNGuidanceManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSData * remainingRouteZilchData; 
@property (nonatomic,readonly) int guidanceState;                                        //@synthesize guidanceState=_guidanceState - In the implementation block
@property (nonatomic,readonly) BOOL proceedingToRoute; 
@property (nonatomic,readonly) GEOComposedRouteStep * maneuverStep; 
@property (nonatomic,readonly) unsigned long long maneuverStepIndex; 
@property (nonatomic,readonly) int transportType; 
@property (nonatomic,readonly) GEOComposedRoute * route;                                 //@synthesize route=_route - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)transportType;
-(GEOComposedRoute *)route;
-(void)setCurrentRoadName:(NSString *)arg1 ;
-(NSString *)currentRoadName;
-(GEOComposedRouteStep *)maneuverStep;
-(void)updateDestination:(id)arg1 ;
-(void)updateForReroute:(id)arg1 ;
-(double)timeSinceLastAnnouncement;
-(double)timeUntilNextAnnouncement;
-(void)_resetStepState;
-(void)_clearCurrentRoadName;
-(unsigned long long)maneuverStepIndex;
-(id)_getStepAtIndex:(unsigned long long)arg1 ;
-(void)setCurrentShieldText:(NSString *)arg1 ;
-(id)_nameInfoForContinueSign;
-(id)_nameInfoForCurrentRoad;
-(id)_getStepAtIndex:(unsigned long long)arg1 clampIndexToRange:(BOOL)arg2 ;
-(int)guidanceState;
-(unsigned long long)_maneuverStepIndex;
-(id)_announcementForArrival;
-(id)_announcementForStart;
-(id)_updateValidateRouteMatchForLocation:(id)arg1 ;
-(BOOL)_startingWrongWayForLocation:(id)arg1 navigatorState:(int)arg2 routeMatch:(id)arg3 ;
-(void)_notifyAnnounceManeuverForStep:(id)arg1 withDistance:(double)arg2 withCombinedGuidance:(int)arg3 playShortPrompt:(BOOL)arg4 isRepeat:(BOOL)arg5 stage:(unsigned long long)arg6 timeLimit:(double)arg7 ;
-(void)_notifyDisplayManeuverForStep:(id)arg1 withDistance:(double)arg2 allowCombinedGuidance:(BOOL)arg3 ;
-(BOOL)_updateCheckIfNextStep:(id)arg1 navigatorState:(int)arg2 routeMatch:(id)arg3 ;
-(BOOL)_updateGuidanceStateWithLocation:(id)arg1 withMatch:(id)arg2 withNavigatorState:(int)arg3 stepChanged:(BOOL*)arg4 ;
-(unsigned long long)_currentAnnouncementStage;
-(BOOL)proceedingToRoute;
-(void)updateGuidanceForProceedToRouteAtLocation:(SCD_Struct_MN9)arg1 routeMatch:(id)arg2 remainingTime:(double)arg3 distanceUntilDestination:(double)arg4 ;
-(void)_updatePrepareForNextStep;
-(BOOL)_updateConsiderContinueAnnouncement:(id)arg1 location:(id)arg2 ;
-(BOOL)_updateConsiderInitialAnnouncement:(id)arg1 passedManeuverStart:(BOOL)arg2 ;
-(BOOL)_updateConsiderExecuteAnnouncement:(id)arg1 location:(id)arg2 ;
-(BOOL)_updateConsiderPrepareAnnouncement:(id)arg1 withMatch:(id)arg2 ;
-(double)_timeUntilNextAnnouncement:(id)arg1 location:(id)arg2 upcomingStage:(out unsigned long long*)arg3 ;
-(double)_distanceForSign;
-(id)_getClosestStepWithNameForProceedToRoute:(SCD_Struct_MN9)arg1 routeMatch:(id)arg2 ;
-(id)_combinedGuidanceForStep:(id)arg1 withType:(int)arg2 ;
-(void)_notifyAnnounceProceedToRoute:(id)arg1 withClosestStep:(id)arg2 withNamedStep:(id)arg3 andSecondaryStep:(id)arg4 isRepeat:(BOOL)arg5 ;
-(void)_notifyDisplayManeuverForSecondaryStep:(id)arg1 ;
-(double)_durationOfLastAnnouncement;
-(double)_adjustedVehicleSpeed:(id)arg1 ;
-(double)_speedFactor:(id)arg1 ;
-(double)_calculateExecutionDistance:(id)arg1 withLogging:(BOOL)arg2 ;
-(double)_estimateTimeToSpeakExecutionAnnouncement;
-(void)_notifyAnnounceContinueAsRepeat:(BOOL)arg1 ;
-(void)updateGuidanceForLocation:(id)arg1 navigatorState:(int)arg2 ;
-(BOOL)repeatLastGuidanceAnnouncement:(id)arg1 ;
-(void)updateForReturnToRoute;
-(id)initWithNavigationSession:(id)arg1 proceedToRoute:(BOOL)arg2 allowMidRouteStart:(BOOL)arg3 ;
-(BOOL)_hasSubsteps;
-(BOOL)_hasCurrentRoadNameChangedForLocation:(id)arg1 ;
-(SCD_Struct_MN9)maneuverStepCoordinate;
-(BOOL)_announcementInProgress;
-(NSData *)remainingRouteZilchData;
-(NSString *)currentShieldText;
-(SCD_Struct_MN17)currentInstructionOptions;
-(void)setCurrentInstructionOptions:(SCD_Struct_MN17)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MNGuidanceManagerDelegate>)arg1 ;
-(id<MNGuidanceManagerDelegate>)delegate;
-(void)stop;
@end

