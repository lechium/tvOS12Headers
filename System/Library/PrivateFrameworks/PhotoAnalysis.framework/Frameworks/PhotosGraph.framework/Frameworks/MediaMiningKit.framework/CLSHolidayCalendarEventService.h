/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLSHolidayCalendarEventDateRuleDelegate.h>

@class NSArray, NSString;

@interface CLSHolidayCalendarEventService : NSObject <CLSHolidayCalendarEventDateRuleDelegate> {

	NSArray* _eventRules;

}

@property (nonatomic,retain) NSArray * eventRules;                  //@synthesize eventRules=_eventRules - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithLocale:(id)arg1 ;
-(id)dateForRuleWithUUID:(id)arg1 byEvaluatingForYear:(long long)arg2 ;
-(id)initWithLocale:(id)arg1 calendarSourcesURL:(id)arg2 ;
-(id)_ruleWithUUID:(id)arg1 ;
-(id)eventRuleForLocalDate:(id)arg1 ;
-(void)setEventRules:(NSArray *)arg1 ;
-(NSArray *)eventRules;
-(void)enumerateEventRulesBetweenLocalDate:(id)arg1 andLocalDate:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
@end

