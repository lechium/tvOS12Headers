/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REPredictor.h>

@class NSArray, NSLock, REUpNextTimer, REDuetKnowledgeStore, NSDateInterval;

@interface REPeriodOfDayPredictor : REPredictor {

	NSArray* _storedPeriods;
	NSLock* _storedPeriodsLock;
	REUpNextTimer* _periodOfDayUpdateTimer;
	REDuetKnowledgeStore* _knowledgeStore;

}

@property (nonatomic,readonly) unsigned long long currentPeriodOfDay; 
@property (nonatomic,readonly) NSDateInterval * intervalForCurrentPeriodOfDay; 
+(double)updateInterval;
-(void)collectLoggableState:(/*^block*/id)arg1 ;
-(unsigned long long)currentPeriodOfDay;
-(NSDateInterval *)intervalForCurrentPeriodOfDay;
-(id)dateIntervalForNextPeriodOfDay:(unsigned long long)arg1 ;
-(id)dateIntervalForPreviousPeriodOfDay:(unsigned long long)arg1 ;
-(id)dateIntervalForPreviousPeriodOfDay:(unsigned long long)arg1 beforeDate:(id)arg2 ;
-(id)dateIntervalForNextPeriodOfDay:(unsigned long long)arg1 afterDate:(id)arg2 ;
-(void)_handleSignificantTimeChange;
-(id)_defaultDayPeriodsOfDayForDate:(id)arg1 ;
-(void)_queue_updateNextDateUpdateTimer;
-(id)_periodsOfDayForSleepIntervals:(id)arg1 ;
-(void)_getAllSleepIntervalsWithCompletion:(/*^block*/id)arg1 ;
-(void)_getPredictedSleepIntervalsWithCompletion:(/*^block*/id)arg1 ;
-(void)_getHistoricSleepIntervalsWithCompletion:(/*^block*/id)arg1 ;
-(id)_nextDayPeriodUpdateDate;
-(id)init;
-(void)dealloc;
-(void)update;
@end

