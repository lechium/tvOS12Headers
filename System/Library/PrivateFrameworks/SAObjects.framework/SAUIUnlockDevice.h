/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAUIUnlockDevice : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * cancellationCommands; 
@property (nonatomic,copy) NSArray * failureCommands; 
@property (nonatomic,copy) NSArray * successCommands; 
+(id)unlockDevice;
+(id)unlockDeviceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)cancellationCommands;
-(void)setCancellationCommands:(NSArray *)arg1 ;
-(NSArray *)failureCommands;
-(void)setFailureCommands:(NSArray *)arg1 ;
-(NSArray *)successCommands;
-(void)setSuccessCommands:(NSArray *)arg1 ;
@end

