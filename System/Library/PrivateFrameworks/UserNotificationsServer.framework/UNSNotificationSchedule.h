/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface UNSNotificationSchedule : NSObject {

	NSDate* _previousTriggerDate;

}

@property (nonatomic,retain) NSDate * previousTriggerDate;              //@synthesize previousTriggerDate=_previousTriggerDate - In the implementation block
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)setPreviousTriggerDate:(NSDate *)arg1 ;
-(NSDate *)previousTriggerDate;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(id)_dateFormatter;
@end

