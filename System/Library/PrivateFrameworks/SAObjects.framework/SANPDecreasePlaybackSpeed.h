/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray;

@interface SANPDecreasePlaybackSpeed : SADomainCommand

@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
+(id)decreasePlaybackSpeed;
+(id)decreasePlaybackSpeedWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
@end

