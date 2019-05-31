/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <CoreFoundation/NSCalendar.h>

@class NSCalendar;

@interface _UIDatePickerChineseCalendar : NSCalendar {

	NSCalendar* realCalendar;

}

@property (assign) NSCalendar * realCalendar; 
+(id)cyclicalFromRelated:(id)arg1 ;
+(id)relatedFromCyclical:(id)arg1 ;
-(void)setTimeZone:(id)arg1 ;
-(id)components:(unsigned long long)arg1 fromDate:(id)arg2 ;
-(id)dateFromComponents:(id)arg1 ;
-(id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4 ;
-(id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3 ;
-(id)calendarIdentifier;
-(void)setRealCalendar:(NSCalendar *)arg1 ;
-(NSRange)maximumRangeOfUnit:(unsigned long long)arg1 ;
-(NSRange)rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3 ;
-(id)initWithCalendar:(id)arg1 ;
-(NSCalendar *)realCalendar;
@end
