/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:43 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject;

@interface CalNWideQueue : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _semaphore;

}
-(id)initWithSerialQueue:(id)arg1 andWidth:(unsigned long long)arg2 ;
-(void)executeBlock:(/*^block*/id)arg1 ;
@end
