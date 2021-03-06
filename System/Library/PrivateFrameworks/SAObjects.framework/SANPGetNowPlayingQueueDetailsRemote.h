/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, SANPGetNowPlayingQueueDetails;

@interface SANPGetNowPlayingQueueDetailsRemote : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (nonatomic,retain) SANPGetNowPlayingQueueDetails * queueDetails; 
@property (assign,nonatomic) double routeTimeout; 
+(id)getNowPlayingQueueDetailsRemote;
+(id)getNowPlayingQueueDetailsRemoteWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(double)routeTimeout;
-(void)setRouteTimeout:(double)arg1 ;
-(SANPGetNowPlayingQueueDetails *)queueDetails;
-(void)setQueueDetails:(SANPGetNowPlayingQueueDetails *)arg1 ;
@end

