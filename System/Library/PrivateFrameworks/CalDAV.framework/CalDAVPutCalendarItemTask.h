/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:42 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPutTask.h>

@class NSString;

@interface CalDAVPutCalendarItemTask : CoreDAVPutTask {

	NSString* _previousScheduleTag;

}

@property (assign,nonatomic) id<CalDAVPutCalendarItemTaskDelegate> delegate; 
@property (nonatomic,retain) NSString * previousScheduleTag;                              //@synthesize previousScheduleTag=_previousScheduleTag - In the implementation block
-(NSString *)previousScheduleTag;
-(void)setPreviousScheduleTag:(NSString *)arg1 ;
-(id)additionalHeaderValues;
-(id)description;
@end

