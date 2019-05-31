/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REPredictor.h>

@class HKQuery, REUpNextTimer, NSDate;

@interface REActiveWorkoutPredictor : REPredictor {

	int _workoutStateNotifyToken;
	float _dailyAverageWorkouts;
	unsigned long long _numberOfWorkoutsPerformedToday;
	HKQuery* _workoutObservationQuery;
	REUpNextTimer* _workoutQueryCoalesceTimer;
	BOOL _hasActiveWorkout;
	NSDate* _lastCompletedWorkoutDate;

}

@property (assign) BOOL hasActiveWorkout;                                              //@synthesize hasActiveWorkout=_hasActiveWorkout - In the implementation block
@property (retain) NSDate * lastCompletedWorkoutDate;                                  //@synthesize lastCompletedWorkoutDate=_lastCompletedWorkoutDate - In the implementation block
@property (getter=isActiveWorkout,nonatomic,readonly) BOOL activeWorkout; 
@property (nonatomic,readonly) NSDate * lastWorkoutDate; 
+(id)supportedFeatures;
+(double)updateInterval;
-(void)collectLoggableState:(/*^block*/id)arg1 ;
-(BOOL)isActiveWorkout;
-(NSDate *)lastWorkoutDate;
-(id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4 ;
-(void)setHasActiveWorkout:(BOOL)arg1 ;
-(void)_cancelMonitoringWorkoutIfNeeded;
-(void)_updateWorkoutState;
-(void)_scheduleFetchWorkoutTimer;
-(BOOL)hasActiveWorkout;
-(NSDate *)lastCompletedWorkoutDate;
-(void)_queue_fetchWorkoutHistory;
-(void)_processWorkoutHistoryData:(id)arg1 ;
-(void)setLastCompletedWorkoutDate:(NSDate *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)update;
-(void)resume;
-(void)pause;
@end

