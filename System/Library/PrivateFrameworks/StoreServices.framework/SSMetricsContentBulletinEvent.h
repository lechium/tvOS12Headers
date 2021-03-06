/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSMetricsBaseEvent.h>

@interface SSMetricsContentBulletinEvent : SSMetricsBaseEvent {

	BOOL _explicitEnabled;
	BOOL _notificationsEnabled;

}

@property (assign,nonatomic) BOOL explicitEnabled;                   //@synthesize explicitEnabled=_explicitEnabled - In the implementation block
@property (assign,nonatomic) BOOL notificationsEnabled;              //@synthesize notificationsEnabled=_notificationsEnabled - In the implementation block
-(id)_displayCriteria;
-(id)initWithBulletinMetricsDictionary:(id)arg1 ;
-(BOOL)clientExplicitEnabled;
-(BOOL)clientNotificationsEnabled;
-(void)setExplicitEnabled:(BOOL)arg1 ;
-(void)setNotificationsEnabled:(BOOL)arg1 ;
-(BOOL)explicitEnabled;
-(BOOL)notificationsEnabled;
@end

