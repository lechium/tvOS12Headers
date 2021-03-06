/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKCalendarNotification.h>

@interface EKCalendarInviteReplyNotification : EKCalendarNotification {

	unsigned long long _status;
	unsigned long long _allowedEntityTypes;

}

@property (assign,nonatomic) unsigned long long status;                          //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) unsigned long long allowedEntityTypes;              //@synthesize allowedEntityTypes=_allowedEntityTypes - In the implementation block
-(unsigned long long)allowedEntityTypes;
-(void)setAllowedEntityTypes:(unsigned long long)arg1 ;
-(id)inviteReplyNotificationFromEventStore:(id)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1 ;
@end

