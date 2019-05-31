/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:42 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, CalDAVCalendarServerScheduleChangesItem, CalDAVUpdateOwnerItem;


@protocol CalDAVCalendarItemProtocol
@property (nonatomic,retain) NSString * scheduleTag; 
@property (nonatomic,retain) CalDAVCalendarServerScheduleChangesItem * scheduleChanges; 
@property (nonatomic,retain) CalDAVUpdateOwnerItem * createdBy; 
@property (nonatomic,retain) CalDAVUpdateOwnerItem * updatedBy; 
@required
-(NSString *)scheduleTag;
-(void)setScheduleTag:(id)arg1;
-(void)setScheduleChanges:(id)arg1;
-(void)setUpdatedBy:(id)arg1;
-(CalDAVCalendarServerScheduleChangesItem *)scheduleChanges;
-(CalDAVUpdateOwnerItem *)updatedBy;
-(void)setCreatedBy:(id)arg1;
-(CalDAVUpdateOwnerItem *)createdBy;

@end
