/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASettingSetBool.h>

@class NSString;

@interface SASettingSetSiriAuthorizationForApp : SASettingSetBool

@property (nonatomic,copy) NSString * bundleId; 
+(id)setSiriAuthorizationForApp;
+(id)setSiriAuthorizationForAppWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
@end
