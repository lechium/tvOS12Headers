/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:30 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BKSProcessAssertion, NSString;

@interface _UIBackgroundTaskInfo : NSObject {

	unsigned long long _taskId;
	/*^block*/id _expireHandler;
	BKSProcessAssertion* _processAssertion;
	int _count;
	NSString* _taskName;

}
+(id)backgroundTaskAssertionQueue;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(id)initWithProcessAssertion:(id)arg1 taskName:(id)arg2 expirationHandler:(/*^block*/id)arg3 ;
-(void)fireExpirationHandler;
@end

