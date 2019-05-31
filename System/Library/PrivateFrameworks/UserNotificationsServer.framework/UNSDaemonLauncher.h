/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UNUserNotificationCenterDelegateServiceProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString;

@interface UNSDaemonLauncher : NSObject <UNUserNotificationCenterDelegateServiceProtocol> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	NSMutableDictionary* _connectionByBundleIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_queue_ensureConnectionForBundleIdentifier:(id)arg1 ;
-(void)didReceiveNotificationResponse:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_queue_interruptedConnectionForBundleIdentifier:(id)arg1 ;
-(void)_queue_invalidatedConnectionForBundleIdentifier:(id)arg1 ;
-(id)init;
@end

