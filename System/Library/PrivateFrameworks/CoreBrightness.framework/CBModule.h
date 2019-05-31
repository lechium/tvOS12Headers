/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log, OS_dispatch_queue;
@class NSObject;

@interface CBModule : NSObject {

	/*^block*/id _notificationBlock;
	NSObject*<OS_os_log> _logHandle;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(void)unregisterNotificationBlock;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
@end

