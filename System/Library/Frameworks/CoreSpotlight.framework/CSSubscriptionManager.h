/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PSSSSubscriptionManager;

@interface CSSubscriptionManager : NSObject {

	PSSSSubscriptionManager* _internal;

}
+(id)sharedManager;
-(void)registerSubscriptionWithInfo:(id)arg1 expirationDate:(id)arg2 ;
-(void)unregisterSubscriptionWithInfo:(id)arg1 ;
-(void)unregisterAllSubscriptions;
-(id)init;
@end
