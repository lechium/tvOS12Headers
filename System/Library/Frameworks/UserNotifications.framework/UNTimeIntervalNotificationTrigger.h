/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotifications/UNNotificationTrigger.h>

@interface UNTimeIntervalNotificationTrigger : UNNotificationTrigger {

	double _timeInterval;

}

@property (nonatomic,readonly) double timeInterval;              //@synthesize timeInterval=_timeInterval - In the implementation block
+(id)triggerWithTimeInterval:(double)arg1 repeats:(BOOL)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)nextTriggerDateAfterDate:(id)arg1 withRequestedDate:(id)arg2 ;
-(id)nextTriggerDate;
-(id)_initWithTimeInterval:(double)arg1 repeats:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timeInterval;
@end

