/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber;

@interface SASetClientData : SABaseClientBoundCommand

@property (nonatomic,copy) NSNumber * holdToTalkThresholdInMilliseconds; 
+(id)setClientData;
+(id)setClientDataWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSNumber *)holdToTalkThresholdInMilliseconds;
-(void)setHoldToTalkThresholdInMilliseconds:(NSNumber *)arg1 ;
@end

