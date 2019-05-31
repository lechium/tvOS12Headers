/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, BBSettingsGateway, NSDictionary;

@interface PSNotificationSettingsController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	BBSettingsGateway* _gateway;
	NSDictionary* _sectionInfosByIdentifier;

}
+(id)sharedInstance;
-(id)allSectionInfoIdentifiers;
-(id)sectionInfoForIdentifier:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end
