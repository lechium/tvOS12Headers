/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSURL;

@interface SAWeatherLocationAddCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * error; 
@property (nonatomic,copy) NSURL * weatherLocationId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)locationAddCompleted;
+(id)locationAddCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)locationAddCompletedWithError:(id)arg1 ;
+(id)locationAddCompletedWithWeatherLocationId:(id)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id)initWithWeatherLocationId:(id)arg1 ;
-(void)setWeatherLocationId:(NSURL *)arg1 ;
-(NSURL *)weatherLocationId;
-(id)initWithError:(id)arg1 ;
-(NSString *)error;
-(void)setError:(NSString *)arg1 ;
@end

