/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PSSettingsDetail.h>

@class NSString;

@interface PSGuidedAccessSettingsDetail : NSObject <PSSettingsDetail>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)preferencesURL;
+(BOOL)guidedAccessHasPasscode;
+(void)setGuidedAccessSwitchEnabled:(BOOL)arg1 ;
+(void)enterGuidedAccessMode;
+(unsigned long long)guidedAccessAvailability;
+(id)iconImage;
@end

