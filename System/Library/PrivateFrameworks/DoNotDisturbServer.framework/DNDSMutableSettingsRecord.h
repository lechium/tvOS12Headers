/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <DoNotDisturbServer/DNDSSettingsRecord.h>

@class DNDSBehaviorSettingsRecord, DNDSBypassSettingsRecord, DNDSScheduleSettingsRecord;

@interface DNDSMutableSettingsRecord : DNDSSettingsRecord

@property (nonatomic,copy) DNDSBehaviorSettingsRecord * behaviorSettings; 
@property (nonatomic,copy) DNDSBypassSettingsRecord * phoneCallBypassSettings; 
@property (nonatomic,copy) DNDSScheduleSettingsRecord * scheduleSettings; 
-(void)setBehaviorSettings:(DNDSBehaviorSettingsRecord *)arg1 ;
-(void)setPhoneCallBypassSettings:(DNDSBypassSettingsRecord *)arg1 ;
-(void)setScheduleSettings:(DNDSScheduleSettingsRecord *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

