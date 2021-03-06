/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VSSubscriptionServiceProtocol.h>

@class VSRemoteNotifier, VSSubscriptionPersistentContainer, VSSubscriptionPredicateFactory, NSString;

@interface VSSubscriptionRegistry : NSObject <VSSubscriptionServiceProtocol> {

	VSRemoteNotifier* _remoteNotifier;
	VSSubscriptionPersistentContainer* _persistentContainer;
	VSSubscriptionPredicateFactory* _predicateFactory;

}

@property (nonatomic,retain) VSRemoteNotifier * remoteNotifier;                                    //@synthesize remoteNotifier=_remoteNotifier - In the implementation block
@property (nonatomic,retain) VSSubscriptionPersistentContainer * persistentContainer;              //@synthesize persistentContainer=_persistentContainer - In the implementation block
@property (nonatomic,retain) VSSubscriptionPredicateFactory * predicateFactory;                    //@synthesize predicateFactory=_predicateFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_performBlockAndWait:(/*^block*/id)arg1 ;
-(void)_sendRemoteNotification;
-(VSSubscriptionPersistentContainer *)persistentContainer;
-(void)setPersistentContainer:(VSSubscriptionPersistentContainer *)arg1 ;
-(VSSubscriptionPredicateFactory *)predicateFactory;
-(void)setPredicateFactory:(VSSubscriptionPredicateFactory *)arg1 ;
-(id)_fetchRequest;
-(void)_installedAppsDidChange:(id)arg1 ;
-(long long)_saveChangesToContext:(id)arg1 withDate:(id)arg2 ;
-(id)_securityTaskForCurrentConnection;
-(id)_subscriptionEntity;
-(id)_predicateForCurrentConnectionWithRequestKind:(long long)arg1 ;
-(BOOL)_saveChangesToContext:(id)arg1 ;
-(id)_predicateForPersistentAttributesOfSubscriptions:(id)arg1 withEntity:(id)arg2 forFiltering:(BOOL)arg3 ;
-(void)removeSubscriptions:(id)arg1 ;
-(void)fetchActiveSubscriptionsWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)registerSubscription:(id)arg1 ;
-(VSRemoteNotifier *)remoteNotifier;
-(void)setRemoteNotifier:(VSRemoteNotifier *)arg1 ;
-(id)init;
-(void)dealloc;
@end

