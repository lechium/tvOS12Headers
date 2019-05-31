/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults;

@interface WLKPushNotificationSettings : NSObject {

	NSUserDefaults* _defaults;

}

@property (nonatomic,retain) NSUserDefaults * defaults;                     //@synthesize defaults=_defaults - In the implementation block
@property (assign,nonatomic) BOOL allowExplicitNotifications; 
@property (assign,nonatomic) BOOL allowImplicitNotifications; 
@property (assign,nonatomic) BOOL allowMarketingNotifications; 
+(id)defaultSettings;
-(NSUserDefaults *)defaults;
-(void)setDefaults:(NSUserDefaults *)arg1 ;
-(BOOL)allowExplicitNotifications;
-(void)setAllowExplicitNotifications:(BOOL)arg1 ;
-(BOOL)allowImplicitNotifications;
-(void)setAllowImplicitNotifications:(BOOL)arg1 ;
-(BOOL)allowMarketingNotifications;
-(void)setAllowMarketingNotifications:(BOOL)arg1 ;
-(id)init;
@end

