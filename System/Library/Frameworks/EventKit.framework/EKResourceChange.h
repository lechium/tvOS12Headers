/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKObject.h>
#import <libobjc.A.dylib/EKIdentityProtocol.h>

@class EKCalendar, EKCalendarItem, NSString, NSURL, NSDate, NSNumber;

@interface EKResourceChange : EKObject <EKIdentityProtocol>

@property (nonatomic,retain,readonly) EKCalendar * calendar; 
@property (nonatomic,retain,readonly) EKCalendarItem * calendarItem; 
@property (nonatomic,copy,readonly) NSString * changedByDisplayName; 
@property (nonatomic,copy,readonly) NSURL * changedByAddress; 
@property (nonatomic,copy,readonly) NSString * changedByFirstName; 
@property (nonatomic,copy,readonly) NSString * changedByLastName; 
@property (nonatomic,readonly) unsigned changeType; 
@property (nonatomic,copy,readonly) NSDate * timestamp; 
@property (nonatomic,readonly) BOOL dateChanged; 
@property (nonatomic,readonly) BOOL timeChanged; 
@property (nonatomic,readonly) BOOL titleChanged; 
@property (nonatomic,readonly) BOOL locationChanged; 
@property (nonatomic,readonly) NSNumber * createCount; 
@property (nonatomic,readonly) NSNumber * updateCount; 
@property (nonatomic,readonly) NSNumber * deleteCount; 
@property (nonatomic,readonly) NSString * deletedTitle; 
@property (nonatomic,readonly) BOOL alerted; 
@property (nonatomic,readonly) unsigned publicStatus; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)frozenClass;
+(id)knownRelationshipSingleValueKeys;
-(NSNumber *)updateCount;
-(id)phoneNumber;
-(BOOL)alerted;
-(NSString *)deletedTitle;
-(NSString *)changedByDisplayName;
-(NSNumber *)createCount;
-(BOOL)dateChanged;
-(BOOL)timeChanged;
-(BOOL)locationChanged;
-(BOOL)titleChanged;
-(void)clearAlertedStatus;
-(NSURL *)changedByAddress;
-(NSString *)changedByFirstName;
-(NSString *)changedByLastName;
-(unsigned)changedProperties;
-(unsigned)publicStatus;
-(BOOL)_propertyWithFlagDidChange:(unsigned)arg1 ;
-(unsigned)changeType;
-(EKCalendarItem *)calendarItem;
-(id)emailAddress;
-(id)firstName;
-(id)lastName;
-(id)name;
-(NSDate *)timestamp;
-(id)URL;
-(NSNumber *)deleteCount;
-(EKCalendar *)calendar;
@end

