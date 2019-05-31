/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSNumber;

@interface SAMPLoadPredefinedQueue : SADomainCommand

@property (assign,nonatomic) BOOL dryRun; 
@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (assign,nonatomic) int mediaItemType; 
@property (assign,nonatomic) BOOL shouldShuffle; 
@property (nonatomic,copy) NSNumber * startPlaying; 
+(id)loadPredefinedQueue;
+(id)loadPredefinedQueueWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(NSNumber *)startPlaying;
-(void)setStartPlaying:(NSNumber *)arg1 ;
-(BOOL)dryRun;
-(void)setDryRun:(BOOL)arg1 ;
-(BOOL)shouldShuffle;
-(void)setShouldShuffle:(BOOL)arg1 ;
-(int)mediaItemType;
-(void)setMediaItemType:(int)arg1 ;
@end

