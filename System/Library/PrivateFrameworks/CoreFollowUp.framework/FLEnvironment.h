/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FLEnvironment : NSObject

@property (nonatomic,readonly) BOOL followUpExtensionSupportEnabled; 
@property (nonatomic,readonly) BOOL followUpZeroActionsForTheWorld; 
+(id)currentEnvironment;
-(BOOL)followUpExtensionSupportEnabled;
-(BOOL)stressMode;
-(id)stressBundleIdentifiers;
-(BOOL)shouldHideAllFollowUps;
-(BOOL)followUpZeroActionsForTheWorld;
-(void)setFollowUpExtensionSupportEnabled:(BOOL)arg1 ;
-(id)supportedBundleIdentifiers;
-(BOOL)isUnlocked;
-(BOOL)isInternal;
@end

