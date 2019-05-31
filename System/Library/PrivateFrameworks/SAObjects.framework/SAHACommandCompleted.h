/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString, NSURL;

@interface SAHACommandCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * actionResults; 
@property (nonatomic,copy) NSString * clientValidity; 
@property (nonatomic,copy) NSString * commandOutcome; 
@property (nonatomic,copy) NSURL * homeIdentifier; 
@property (nonatomic,copy) NSString * serverValidity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)commandCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)commandCompleted;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)actionResults;
-(NSString *)serverValidity;
-(NSString *)commandOutcome;
-(void)setCommandOutcome:(NSString *)arg1 ;
-(void)setActionResults:(NSArray *)arg1 ;
-(void)setHomeIdentifier:(NSURL *)arg1 ;
-(void)setServerValidity:(NSString *)arg1 ;
-(void)setClientValidity:(NSString *)arg1 ;
-(NSURL *)homeIdentifier;
-(NSString *)clientValidity;
@end

