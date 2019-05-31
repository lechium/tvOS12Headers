/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:26 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAStartLocalRequest : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * clientBoundCommands; 
+(id)startLocalRequest;
+(id)startLocalRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)clientBoundCommands;
-(void)setClientBoundCommands:(NSArray *)arg1 ;
@end

