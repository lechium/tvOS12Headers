/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:22 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SADeviceMyriadConfiguration : SABaseClientBoundCommand

@property (assign,nonatomic) double deviceAdjustment; 
@property (assign,nonatomic) double deviceClass; 
@property (assign,nonatomic) double deviceDelay; 
@property (assign,nonatomic) double deviceTrumpDelay; 
+(id)deviceMyriadConfiguration;
+(id)deviceMyriadConfigurationWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setDeviceClass:(double)arg1 ;
-(double)deviceClass;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(double)deviceAdjustment;
-(void)setDeviceAdjustment:(double)arg1 ;
-(double)deviceDelay;
-(void)setDeviceDelay:(double)arg1 ;
-(double)deviceTrumpDelay;
-(void)setDeviceTrumpDelay:(double)arg1 ;
@end

