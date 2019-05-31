/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UNUserNotificationServiceConnectionObserver.h>

@protocol UNRemoteNotificationRegistrarDelegate;
@class NSString;

@interface UNRemoteNotificationRegistrar : NSObject <UNUserNotificationServiceConnectionObserver> {

	NSString* _bundleIdentifier;
	id<UNRemoteNotificationRegistrarDelegate> _delegate;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                                              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<UNRemoteNotificationRegistrarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentRegistrar;
-(void)getAllowsRemoteNotificationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(void)setDelegate:(id<UNRemoteNotificationRegistrarDelegate>)arg1 ;
-(id<UNRemoteNotificationRegistrarDelegate>)delegate;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)requestTokenForRemoteNotificationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)allowsRemoteNotifications;
-(void)invalidateTokenForRemoteNotifications;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end
