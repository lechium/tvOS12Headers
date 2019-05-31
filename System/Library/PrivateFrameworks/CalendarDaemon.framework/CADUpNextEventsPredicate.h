/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/EKPredicate.h>

@interface CADUpNextEventsPredicate : EKPredicate {

	double _startDateRestrictionThreshold;

}

@property (assign,nonatomic) double startDateRestrictionThreshold;              //@synthesize startDateRestrictionThreshold=_startDateRestrictionThreshold - In the implementation block
+(id)_descriptionForOccurrence:(CalEventOccurrenceRef)arg1 ofEvent:(void*)arg2 ;
+(BOOL)_occurrencePassesFilter:(CalEventOccurrenceRef)arg1 event:(void*)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
-(double)startDateRestrictionThreshold;
-(id)defaultPropertiesToLoad;
-(id)initWithCalendarIDs:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(void)setStartDateRestrictionThreshold:(double)arg1 ;
-(id)predicateFormat;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

