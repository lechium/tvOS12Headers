/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface ACDDatabaseBackupActivity : NSObject {

	BOOL _xpcActivityPending;
	NSObject*<OS_xpc_object> _activityExecutionCriteria;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedActivity;
-(void)_registerActivity;
-(void)registerActivityIfNeeded;
-(id)activityCriteria;
-(id)init;
@end
