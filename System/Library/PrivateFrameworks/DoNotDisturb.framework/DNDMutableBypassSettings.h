/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <DoNotDisturb/DNDBypassSettings.h>

@class NSString;

@interface DNDMutableBypassSettings : DNDBypassSettings

@property (assign,nonatomic) unsigned long long immediateBypassEventSourceType; 
@property (nonatomic,copy) NSString * immediateBypassCNGroupIdentifier; 
@property (assign,nonatomic) unsigned long long repeatEventSourceBehaviorEnabledSetting; 
-(void)setImmediateBypassEventSourceType:(unsigned long long)arg1 ;
-(void)setImmediateBypassCNGroupIdentifier:(NSString *)arg1 ;
-(void)setRepeatEventSourceBehaviorEnabledSetting:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

