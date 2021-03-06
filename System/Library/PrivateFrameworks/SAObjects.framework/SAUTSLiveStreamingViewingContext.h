/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUTSViewingContext.h>

@class NSDate;

@interface SAUTSLiveStreamingViewingContext : SAUTSViewingContext

@property (nonatomic,copy) NSDate * eventStartTime; 
@property (assign,nonatomic) BOOL watchingLive; 
+(id)liveStreamingViewingContext;
+(id)liveStreamingViewingContextWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSDate *)eventStartTime;
-(void)setEventStartTime:(NSDate *)arg1 ;
-(BOOL)watchingLive;
-(void)setWatchingLive:(BOOL)arg1 ;
@end

