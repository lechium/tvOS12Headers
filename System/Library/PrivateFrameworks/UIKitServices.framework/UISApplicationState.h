/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UISApplicationStateClient, NSDate;

@interface UISApplicationState : NSObject {

	NSString* _bundleIdentifier;
	UISApplicationStateClient* _client;

}

@property (assign,setter=_setUsesBackgroundNetwork:,nonatomic) BOOL _usesBackgroundNetwork; 
@property (assign,setter=_setNextWakeDate:,nonatomic) NSDate * _nextWakeDate; 
@property (nonatomic,copy) id badgeValue; 
-(id)init;
-(void)dealloc;
-(void)setBadgeValue:(id)arg1 ;
-(id)badgeValue;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)initForCurrentApplication;
-(void)_setUsesBackgroundNetwork:(BOOL)arg1 ;
-(BOOL)_usesBackgroundNetwork;
-(void)_setMinimumBackgroundFetchInterval:(double)arg1 ;
-(void)_setNextWakeDate:(id)arg1 ;
-(NSDate *)_nextWakeDate;
@end
