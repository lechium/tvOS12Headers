/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSDictionary;

@interface SAPunchoutOutcome : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * originalCommandId; 
@property (nonatomic,copy) NSDictionary * outcomes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)punchoutOutcome;
+(id)punchoutOutcomeWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)originalCommandId;
-(void)setOriginalCommandId:(NSString *)arg1 ;
-(NSDictionary *)outcomes;
-(void)setOutcomes:(NSDictionary *)arg1 ;
@end

