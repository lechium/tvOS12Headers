/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@class NSArray;

@interface CKDBatchGetUserPrivacySettingsOperation : CKDOperation {

	NSArray* _containerPrivacySettings;

}

@property (nonatomic,copy) NSArray * containerPrivacySettings;              //@synthesize containerPrivacySettings=_containerPrivacySettings - In the implementation block
+(id)appPermissionGroupsFromContainerPrivacySettings:(id)arg1 ;
-(NSArray *)containerPrivacySettings;
-(id)activityCreate;
-(BOOL)shouldCheckAppVersion;
-(void)setContainerPrivacySettings:(NSArray *)arg1 ;
-(void)main;
@end

