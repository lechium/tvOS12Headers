/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:41 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WFForecastDataParser : NSObject
+(unsigned long long)expectedDailyForecastCount;
+(/*^block*/id)ascendingTimeComparator;
+(unsigned long long)expectedHourlyForecastCount;
+(id)componentsForCurrentForecast;
+(id)componentsForHourlyForecasts;
+(id)componentsForDailyForecasts;
-(id)parseForecastData:(id)arg1 date:(id)arg2 error:(id*)arg3 ;
-(id)stringFromKeyPath:(id)arg1 ;
@end

