/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASettingSetFloat.h>

@class NSString;

@interface SASettingSetFloatPreference : SASettingSetFloat

@property (nonatomic,copy) NSString * settingKey; 
+(id)setFloatPreference;
+(id)setFloatPreferenceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSString *)settingKey;
-(void)setSettingKey:(NSString *)arg1 ;
@end
