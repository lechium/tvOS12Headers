/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UISApplicationStateServerDelegate <NSObject>
@required
-(double)client:(id)arg1 getNextWakeIntervalSinceReferenceDateForApplication:(id)arg2;
-(void)client:(id)arg1 setNextWakeIntervalSinceReferenceDate:(double)arg2 forApplication:(id)arg3;
-(void)client:(id)arg1 setMinimumBackgroundFetchInterval:(double)arg2 forApplication:(id)arg3;
-(BOOL)client:(id)arg1 getUsesBackgroundNetworkForApplication:(id)arg2;
-(void)client:(id)arg1 setUsesBackgroundNetwork:(BOOL)arg2 forApplication:(id)arg3;
-(id)client:(id)arg1 getBadgeValueForApplication:(id)arg2;
-(void)client:(id)arg1 setBadgeValue:(id)arg2 forApplication:(id)arg3;

@end
