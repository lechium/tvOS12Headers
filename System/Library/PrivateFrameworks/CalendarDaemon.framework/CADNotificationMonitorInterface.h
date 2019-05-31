/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CADNotificationMonitorInterface
@required
-(void)CADDatabaseGetSharedCalendarInvitationsWithReply:(/*^block*/id)arg1;
-(void)CADCalendarSetClearedFromNotificationCenter:(id)arg1 error:(/*^block*/id)arg2;
-(void)CADDatabaseGetResourceChanges:(/*^block*/id)arg1;
-(void)CADDatabaseGetInviteReplyNotifications:(/*^block*/id)arg1;
-(void)CADDatabaseGetEventNotificationItems:(/*^block*/id)arg1;
-(void)CADDatabaseGetReminderNotificationItems:(/*^block*/id)arg1;
-(void)CADDatabaseGetInboxRepliedSectionItems:(/*^block*/id)arg1;
-(void)CADEvent:(id)arg1 setAlertedWithError:(/*^block*/id)arg2;
-(void)CADCalendar:(id)arg1 setAlertedWithError:(/*^block*/id)arg2;
-(void)CADResourceChange:(id)arg1 setAlertedWithError:(/*^block*/id)arg2;
-(void)CADInviteReplyNotification:(id)arg1 setAlertedWithError:(/*^block*/id)arg2;
-(void)CADEventSetInvitationStatus:(int)arg1 forEvent:(id)arg2 error:(/*^block*/id)arg3;

@end
