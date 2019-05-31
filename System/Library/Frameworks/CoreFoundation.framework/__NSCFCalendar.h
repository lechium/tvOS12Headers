/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSCalendar.h>

@interface __NSCFCalendar : NSCalendar
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)calendarWithIdentifier:(id)arg1 ;
-(BOOL)__checkIfEra:(long long)arg1 hasYear:(long long)arg2 resultDate:(id*)arg3 ;
-(BOOL)__checkIfEra:(long long)arg1 hasYearForWeekOfYear:(long long)arg2 resultDate:(id*)arg3 resultInterval:(double*)arg4 ;
-(BOOL)__findMatchingDate:(id*)arg1 afterStartDate:(id)arg2 matchingComponents:(id)arg3 goingBackwards:(BOOL)arg4 findLastMatch:(BOOL)arg5 options:(unsigned long long)arg6 ;
-(unsigned long long)__findHighestSetUnitInDateComponents:(id)arg1 ;
-(unsigned long long)__findLowestSetUnitInDateComponents:(id)arg1 ;
-(BOOL)__verifyNSDateComponentsValues:(id)arg1 ;
-(id)__ensureThoroughEnumerationByAdjustingComponents:(id)arg1 usingSearchDate:(id)arg2 goBackwards:(BOOL)arg3 ;
-(BOOL)__checkDate:(id)arg1 containsMatchingComponents:(id)arg2 mismatchedUnits:(unsigned long long*)arg3 ;
-(BOOL)__findMatchingDate:(id*)arg1 matchingComponents:(id)arg2 inNextHighestUnitRange:(unsigned long long)arg3 afterStartDate:(id)arg4 goBackwards:(BOOL)arg5 findLastMatch:(BOOL)arg6 options:(unsigned long long)arg7 ;
-(id)__bumpSearchingDate:(id)arg1 upToNextHigherUnitInComponents:(id)arg2 goBackwards:(BOOL)arg3 usingMatchDate:(id)arg4 ;
-(id)gregorianStartDate;
-(void)setGregorianStartDate:(id)arg1 ;
-(void)setFirstWeekday:(unsigned long long)arg1 ;
-(void)setMinimumDaysInFirstWeek:(unsigned long long)arg1 ;
-(NSRange)minimumRangeOfUnit:(unsigned long long)arg1 ;
-(BOOL)nextWeekendStartDate:(out id*)arg1 interval:(out double*)arg2 options:(unsigned long long)arg3 afterDate:(id)arg4 ;
-(BOOL)isDateInWeekend:(id)arg1 ;
-(void)enumerateDatesStartingAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(unsigned long long)ordinalityOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(oneway void)release;
-(id)retain;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(void)setLocale:(id)arg1 ;
-(id)timeZone;
-(void)setTimeZone:(id)arg1 ;
-(id)components:(unsigned long long)arg1 fromDate:(id)arg2 ;
-(id)dateFromComponents:(id)arg1 ;
-(id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4 ;
-(BOOL)rangeOfUnit:(unsigned long long)arg1 startDate:(id*)arg2 interval:(double*)arg3 forDate:(id)arg4 ;
-(id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3 ;
-(id)locale;
-(id)calendarIdentifier;
-(id)initWithCalendarIdentifier:(id)arg1 ;
-(NSRange)maximumRangeOfUnit:(unsigned long long)arg1 ;
-(NSRange)rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3 ;
-(unsigned long long)firstWeekday;
-(unsigned long long)minimumDaysInFirstWeek;
@end

