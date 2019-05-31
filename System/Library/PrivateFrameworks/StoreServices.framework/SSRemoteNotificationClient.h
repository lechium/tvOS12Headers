/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface SSRemoteNotificationClient : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	int _notifyToken;

}
+(id)sharedClient;
-(id)popQueuedNotifications;
-(id)init;
-(void)dealloc;
-(void)registerForRemoteNotifications;
-(void)unregisterForRemoteNotifications;
@end

