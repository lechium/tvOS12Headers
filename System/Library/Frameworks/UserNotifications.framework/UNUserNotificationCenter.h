/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:26 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UNUserNotificationServiceConnectionObserver.h>
#import <libobjc.A.dylib/UNUserNotificationCenterDelegateConnectionListenerDelegate.h>

@protocol UNUserNotificationCenterDelegate;
@class NSString;

@interface UNUserNotificationCenter : NSObject <UNUserNotificationServiceConnectionObserver, UNUserNotificationCenterDelegateConnectionListenerDelegate> {

	id<UNUserNotificationCenterDelegate> _delegate;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                                         //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<UNUserNotificationCenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL supportsContentExtensions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsContentExtensions;
+(id)currentNotificationCenter;
-(void)didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)supportsContentExtensions;
-(void)addNotificationRequest:(id)arg1 ;
-(void)getBadgeNumberWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeAllDeliveredNotifications;
-(void)removePendingNotificationRequestsWithIdentifiers:(id)arg1 ;
-(void)removeDeliveredNotificationsWithIdentifiers:(id)arg1 ;
-(void)replaceContentForRequestWithIdentifier:(id)arg1 replacementContent:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getDeliveredNotificationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getPendingNotificationRequestsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setWantsNotificationResponsesDelivered;
-(id)init;
-(NSString *)bundleIdentifier;
-(void)setDelegate:(id<UNUserNotificationCenterDelegate>)arg1 ;
-(id<UNUserNotificationCenterDelegate>)delegate;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)setBadgeString:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)badgeNumber;
-(void)setBadgeNumber:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setNotificationCategories:(id)arg1 ;
-(void)getNotificationCategoriesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getNotificationSettingsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)requestAuthorizationWithOptions:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)notificationSettings;
-(id)notificationCategories;
-(void)addNotificationRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)removeSimilarNotificationRequests:(id)arg1 ;
-(void)removeAllPendingNotificationRequests;
-(void)setNotificationRequests:(id)arg1 ;
-(id)pendingNotificationRequests;
-(id)initWithBundleProxy:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end

