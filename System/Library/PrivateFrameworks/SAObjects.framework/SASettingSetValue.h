/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:26 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASettingCommand.h>

@interface SASettingSetValue : SASettingCommand

@property (assign,nonatomic) BOOL dryRun; 
@property (assign,nonatomic) BOOL failOnSiriDisconnectWarnings; 
+(id)setValueWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)setValue;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)dryRun;
-(void)setDryRun:(BOOL)arg1 ;
-(BOOL)failOnSiriDisconnectWarnings;
-(void)setFailOnSiriDisconnectWarnings:(BOOL)arg1 ;
@end

