/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, EKObject, EKCalendar, EKCalendarItem, NSArray, NSDate, EKStructuredLocation;

@interface EKAlarm : EKObject <NSCopying> {

	long long _type;
	NSString* _emailAddress;
	NSString* _soundName;
	NSURL* _url;

}

@property (nonatomic,readonly) BOOL isAbsolute; 
@property (assign,nonatomic) BOOL isSnoozed; 
@property (assign,getter=isDefaultAlarm,nonatomic) BOOL defaultAlarm; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,readonly) NSString * externalID; 
@property (nonatomic,readonly) EKObject * owner; 
@property (nonatomic,readonly) EKCalendar * calendarOwner; 
@property (nonatomic,readonly) EKCalendarItem * calendarItemOwner; 
@property (nonatomic,retain) EKAlarm * originalAlarm; 
@property (nonatomic,copy) NSArray * snoozedAlarms; 
@property (assign,nonatomic) double relativeOffset; 
@property (nonatomic,copy) NSDate * absoluteDate; 
@property (nonatomic,copy) EKStructuredLocation * structuredLocation; 
@property (assign,nonatomic) long long proximity; 
@property (nonatomic,readonly) long long type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * emailAddress;                                //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,copy) NSString * soundName;                                   //@synthesize soundName=_soundName - In the implementation block
@property (nonatomic,copy) NSURL * url;                                            //@synthesize url=_url - In the implementation block
+(Class)frozenClass;
+(id)knownRelationshipSingleValueKeys;
+(id)knownRelationshipMultiValueKeys;
+(long long)maxPublicProximity;
+(id)alarmWithAbsoluteDate:(id)arg1 ;
+(id)alarmWithRelativeOffset:(double)arg1 ;
+(int)_currentAuthorizationStatus;
+(BOOL)areLocationsAllowedWithAuthorizationStatus:(int)arg1 ;
+(BOOL)areLocationsAvailable;
+(BOOL)areLocationsAllowed;
+(BOOL)areLocationsCurrentlyEnabled;
+(double)defaultGeofencedReminderRadius;
+(id)alarmWithAlarm:(id)arg1 ;
+(id)noneTriggerDate;
-(NSString *)externalID;
-(BOOL)isAbsolute;
-(long long)proximity;
-(void)setProximity:(long long)arg1 ;
-(BOOL)isSnoozed;
-(void)setIsSnoozed:(BOOL)arg1 ;
-(void)setStructuredLocation:(EKStructuredLocation *)arg1 ;
-(id)semanticIdentifier;
-(NSArray *)snoozedAlarms;
-(EKCalendarItem *)calendarItemOwner;
-(EKAlarm *)originalAlarm;
-(void)setAcknowledgedDate:(id)arg1 ;
-(void)setOriginalAlarm:(EKAlarm *)arg1 ;
-(id)acknowledgedDate;
-(NSDate *)absoluteDate;
-(void)setAbsoluteDate:(NSDate *)arg1 ;
-(long long)alarmType;
-(void)setAlarmType:(long long)arg1 ;
-(BOOL)isDefaultAlarm;
-(EKCalendar *)calendarOwner;
-(void)setDefaultAlarm:(BOOL)arg1 ;
-(void)setSnoozedAlarms:(NSArray *)arg1 ;
-(BOOL)validateWithOwner:(id)arg1 error:(id*)arg2 ;
-(id)initWithAbsoluteDate:(id)arg1 ;
-(id)initWithRelativeOffset:(double)arg1 ;
-(id)relativeOffsetRaw;
-(void)setRelativeOffsetRaw:(id)arg1 ;
-(void)addSnoozedAlarm:(id)arg1 ;
-(void)removeSnoozedAlarm:(id)arg1 ;
-(BOOL)isTopographicallyEqualToAlarm:(id)arg1 ;
-(BOOL)triggerIsNotRelativeToTravelTime;
-(void)setTriggerIsNotRelativeToTravelTime:(BOOL)arg1 ;
-(BOOL)isVehicleAlarm;
-(BOOL)isTimeToLeaveAlarm;
-(void)setIsTimeToLeaveAlarm:(BOOL)arg1 ;
-(BOOL)shouldIncludeInNormalAlarms;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setRelativeOffset:(double)arg1 ;
-(double)relativeOffset;
-(NSString *)emailAddress;
-(id)ownerUUID;
-(EKStructuredLocation *)structuredLocation;
-(id)init;
-(NSString *)UUID;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(long long)compare:(id)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setUUID:(NSString *)arg1 ;
-(EKObject *)owner;
-(void)setSoundName:(NSString *)arg1 ;
-(NSString *)soundName;
@end

