/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface RTLearnedPlaceTypeInferenceStats : NSObject {

	NSArray* _weeklyStats;
	double _weeklyAggregateDwellTimeBetweenDateRangeAverage;
	double _weeklyAggregateDwellTimeBetweenDateRangeStandardDeviation;
	double _weeklyTotalDailyVisitCountAverage;
	double _weeklyDaysWithNonZeroDwellTimeAverage;
	long long _totalDailyVisitCount;
	long long _weeksWithNonZeroDwellTime;
	double _topMedianDwellTime;

}

@property (nonatomic,readonly) NSArray * weeklyStats;                                                         //@synthesize weeklyStats=_weeklyStats - In the implementation block
@property (nonatomic,readonly) double weeklyAggregateDwellTimeBetweenDateRangeAverage;                        //@synthesize weeklyAggregateDwellTimeBetweenDateRangeAverage=_weeklyAggregateDwellTimeBetweenDateRangeAverage - In the implementation block
@property (nonatomic,readonly) double weeklyAggregateDwellTimeBetweenDateRangeStandardDeviation;              //@synthesize weeklyAggregateDwellTimeBetweenDateRangeStandardDeviation=_weeklyAggregateDwellTimeBetweenDateRangeStandardDeviation - In the implementation block
@property (nonatomic,readonly) double weeklyTotalDailyVisitCountAverage;                                      //@synthesize weeklyTotalDailyVisitCountAverage=_weeklyTotalDailyVisitCountAverage - In the implementation block
@property (nonatomic,readonly) double weeklyDaysWithNonZeroDwellTimeAverage;                                  //@synthesize weeklyDaysWithNonZeroDwellTimeAverage=_weeklyDaysWithNonZeroDwellTimeAverage - In the implementation block
@property (nonatomic,readonly) long long totalDailyVisitCount;                                                //@synthesize totalDailyVisitCount=_totalDailyVisitCount - In the implementation block
@property (nonatomic,readonly) long long weeksWithNonZeroDwellTime;                                           //@synthesize weeksWithNonZeroDwellTime=_weeksWithNonZeroDwellTime - In the implementation block
@property (nonatomic,readonly) double topMedianDwellTime;                                                     //@synthesize topMedianDwellTime=_topMedianDwellTime - In the implementation block
-(long long)totalDailyVisitCount;
-(NSArray *)weeklyStats;
-(long long)weeksWithNonZeroDwellTime;
-(double)weeklyAggregateDwellTimeBetweenDateRangeAverage;
-(double)weeklyAggregateDwellTimeBetweenDateRangeStandardDeviation;
-(double)weeklyTotalDailyVisitCountAverage;
-(double)weeklyDaysWithNonZeroDwellTimeAverage;
-(double)topMedianDwellTime;
-(id)initWithWeeklyStats:(id)arg1 topMedianDwellTime:(double)arg2 ;
-(id)description;
@end
