/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol _DASActivityScheduler, OS_dispatch_queue, UNSRemoteNotificationServerObserver;
@class UNSNotificationRepository, UNSNotificationSettingsService, UNSAttachmentsService, UNSPushRegistrationRepository, UNSNotificationServiceExtensionManager, NSObject, NSMutableSet, NSSet, NSMutableDictionary, NSString;

@interface UNSRemoteNotificationServer : NSObject <APSConnectionDelegate> {

	UNSNotificationRepository* _notificationRepository;
	UNSNotificationSettingsService* _notificationSettingsService;
	UNSAttachmentsService* _attachmentsService;
	UNSPushRegistrationRepository* _pushRegistrationRepository;
	id<_DASActivityScheduler> _duetActivityScheduler;
	UNSNotificationServiceExtensionManager* _serviceExtensionManager;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _extensionQueue;
	NSObject*<OS_dispatch_queue> _apsQueue;
	NSMutableSet* _foregroundBundleIdentifiers;
	NSMutableSet* _runningBundleIdentifiers;
	NSMutableSet* _userNotificationEnabledBundleIdentifiers;
	NSSet* _backgroundAppRefreshBlackList;
	NSMutableDictionary* _bundleIdentifiersToRegistration;
	NSMutableDictionary* _bundleIdentifiersToDescriptions;
	NSMutableDictionary* _environmentsToConnections;
	NSMutableSet* _bundleIdentifiersNeedingToken;
	id<UNSRemoteNotificationServerObserver> _observer;

}

@property (assign,nonatomic) id<UNSRemoteNotificationServerObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_newPushServiceConnectionWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 queue:(id)arg3 ;
-(void)performMigration;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)notificationSourcesDidUninstall:(id)arg1 ;
-(id)_initWithSettingsService:(id)arg1 notificationRepository:(id)arg2 attachmentsService:(id)arg3 pushRegistrationRepository:(id)arg4 queue:(id)arg5 extensionQueue:(id)arg6 apsQueue:(id)arg7 duetActivityScheduler:(id)arg8 serviceExtensionManager:(id)arg9 ;
-(void)_queue_reloadRegistrations;
-(void)_queue_reloadBackgroundAppRefreshBlackList;
-(void)_queue_applicationsDidAuthorizeNotificationSettings:(id)arg1 ;
-(void)_queue_applicationsDidDenyNotificationSettings:(id)arg1 ;
-(void)_queue_didChangeApplicationState:(unsigned)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_didCompleteInitialization;
-(void)_queue_performMigration;
-(void)_queue_connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(void)_queue_connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(id)_queue_sourceDescriptionForBundleIdentifier:(id)arg1 ;
-(void)_queue_didReceiveIncomingMessage:(id)arg1 ;
-(BOOL)_queue_canDeliverMessageToBundle:(id)arg1 ;
-(void)_queue_tryToModifyNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3 ;
-(void)_queue_deliverNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3 ;
-(BOOL)_queue_isPushedEnabledForApplication:(id)arg1 ;
-(BOOL)_queue_isContentAvailableRemoteNotificationSupportedForBundleIdentifier:(id)arg1 ;
-(BOOL)_queue_isBackgroundAppRefreshAllowedForBundleIdentifier:(id)arg1 ;
-(BOOL)_queue_isUserNotificationEnabledForApplication:(id)arg1 ;
-(void)_extensionQueue_modifyNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3 extension:(id)arg4 ;
-(void)_scheduleContentAvailablePushActivityForMessage:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)_queue_addNotificationSourceDescriptions:(id)arg1 ;
-(void)_queue_calculateTopics;
-(void)_queue_invalidateTokenForBundleIdentifier:(id)arg1 ;
-(void)_queue_removeClientForBundleIdentifier:(id)arg1 ;
-(void)_queue_removeNotificationSourceDescriptionForBundleIdentifier:(id)arg1 ;
-(id)_queue_allTopicsForApplication:(id)arg1 ;
-(BOOL)_queue_isApplicationForeground:(id)arg1 ;
-(void)_queue_applicationDidBecomeForeground:(id)arg1 ;
-(void)_queue_applicationDidBecomeBackground:(id)arg1 ;
-(BOOL)_queue_isApplicationRunning:(id)arg1 ;
-(void)_queue_applicationDidLaunch:(id)arg1 ;
-(void)_queue_applicationDidTerminate:(id)arg1 ;
-(void)_queue_moveTopicsForApplication:(id)arg1 fromList:(unsigned long long)arg2 toList:(unsigned long long)arg3 ;
-(id)_portNameForEnvironmentName:(id)arg1 ;
-(void)_queue_registerApplicationWithBundleIdentifier:(id)arg1 forEnvironment:(id)arg2 ;
-(void)_queue_backgroundRefreshApplicationsDidChange;
-(id)initWithSettingsService:(id)arg1 notificationRepository:(id)arg2 attachmentsService:(id)arg3 pushRegistrationRepository:(id)arg4 ;
-(void)applicationsDidAuthorizeNotificationSettings:(id)arg1 ;
-(void)applicationsDidDenyNotificationSettings:(id)arg1 ;
-(void)didChangeApplicationState:(unsigned)arg1 forBundleIdentifier:(id)arg2 ;
-(void)didCompleteInitialization;
-(void)notificationSourcesDidInstall:(id)arg1 ;
-(BOOL)_queue_isUserNotificationEnabled:(id)arg1 ;
-(void)requestRemoteNotificationTokenWithEnvironment:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)arg1 ;
-(void)backgroundRefreshApplicationsDidChange;
-(BOOL)allowsRemoteNotificationsForBundleIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)setObserver:(id<UNSRemoteNotificationServerObserver>)arg1 ;
-(id<UNSRemoteNotificationServerObserver>)observer;
@end

