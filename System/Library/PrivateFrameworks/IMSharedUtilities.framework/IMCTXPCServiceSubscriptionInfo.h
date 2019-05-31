/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:10 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CTXPCServiceSubscriptionInfo, NSArray;

@interface IMCTXPCServiceSubscriptionInfo : NSObject {

	CTXPCServiceSubscriptionInfo* _subscriptionInfo;
	NSArray* _allPhoneNumbers;

}

@property (nonatomic,retain) CTXPCServiceSubscriptionInfo * subscriptionInfo;              //@synthesize subscriptionInfo=_subscriptionInfo - In the implementation block
@property (nonatomic,retain) NSArray * allPhoneNumbers;                                    //@synthesize allPhoneNumbers=_allPhoneNumbers - In the implementation block
-(void)setSubscriptionInfo:(CTXPCServiceSubscriptionInfo *)arg1 ;
-(CTXPCServiceSubscriptionInfo *)subscriptionInfo;
-(id)allSubscriptions;
-(void)_generatePhoneNumbersCache;
-(NSArray *)allPhoneNumbers;
-(id)__im_subscriptionContextForForSimID:(id)arg1 phoneNumber:(id)arg2 ;
-(id)__im_switchSubscriptionContextFromSubscriptionContext:(id)arg1 ;
-(id)__im_preferredSubscriptionContext;
-(id)__im_phoneNumberForSlotID:(long long)arg1 ;
-(id)preferredOrDefaultSubscriptionContext;
-(id)__im_subscriptionContextForForSlotID:(long long)arg1 ;
-(id)initWithSubscriptionInfo:(id)arg1 ;
-(id)__im_subscriptionsWithMMSSupport;
-(void)_invalidatePhoneNumbersCache;
-(BOOL)__im_containsPhoneNumber:(id)arg1 ;
-(BOOL)__im_onlyHasActiveSlots;
-(BOOL)__im_hasMultipleSubscriptions;
-(id)__im_phoneNumbersForAllSubscriptions;
-(id)__im_switchSubscriptionContextFromPhoneNumber:(id)arg1 simID:(id)arg2 ;
-(id)__im_phoneNumberForSlotIDOrDefault:(long long)arg1 ;
-(id)__im_labelForPhoneNumber:(id)arg1 simID:(id)arg2 ;
-(long long)__imSlotIDSForPhoneNumber:(id)arg1 ;
-(id)__imSIMIDForSubscriptionSlot:(long long)arg1 ;
-(id)__im_subscriptionContextOrDefaultForForSlotID:(long long)arg1 ;
-(id)__im_subscriptionContextForPhoneNumber:(id)arg1 ;
-(id)__im_subscriptionContextForForSimID:(id)arg1 ;
-(id)__im_subscriptionContextForPhoneNumberOrDefault:(id)arg1 ;
-(id)__im_subscriptionContextOrDefaultForForSimID:(id)arg1 phoneNumber:(id)arg2 ;
-(void)setAllPhoneNumbers:(NSArray *)arg1 ;
-(id)subscriptions;
-(id)description;
@end

