/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSIdentityProvider, NSArray, NSOperationQueue;

@interface VSIdentityProviderSubscriptionOperation : VSAsyncOperation {

	VSIdentityProvider* _identityProvider;
	NSArray* _subscriptionsToAdd;
	NSArray* _subscriptionsToRemoveByBundleID;
	NSOperationQueue* _privateQueue;

}

@property (nonatomic,retain) NSOperationQueue * privateQueue;                      //@synthesize privateQueue=_privateQueue - In the implementation block
@property (nonatomic,retain) VSIdentityProvider * identityProvider;                //@synthesize identityProvider=_identityProvider - In the implementation block
@property (nonatomic,copy) NSArray * subscriptionsToAdd;                           //@synthesize subscriptionsToAdd=_subscriptionsToAdd - In the implementation block
@property (nonatomic,copy) NSArray * subscriptionsToRemoveByBundleID;              //@synthesize subscriptionsToRemoveByBundleID=_subscriptionsToRemoveByBundleID - In the implementation block
-(VSIdentityProvider *)identityProvider;
-(void)setIdentityProvider:(VSIdentityProvider *)arg1 ;
-(NSArray *)subscriptionsToAdd;
-(NSArray *)subscriptionsToRemoveByBundleID;
-(id)_authorizedBundleIdsFromAppDescriptions:(id)arg1 ;
-(void)_removeSubscriptionsForBundleIdentifiers:(id)arg1 withAuthorizedBundleIdentifiers:(id)arg2 ;
-(void)_registerSubscriptions:(id)arg1 withAuthorizedBundleIdentifiers:(id)arg2 ;
-(void)setSubscriptionsToAdd:(NSArray *)arg1 ;
-(void)setSubscriptionsToRemoveByBundleID:(NSArray *)arg1 ;
-(void)executionDidBegin;
-(NSOperationQueue *)privateQueue;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(id)init;
-(void)cancel;
@end

