/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMediaStream/MSASModelBase.h>

@interface MSASDaemonModel : MSASModelBase
+(id)defaultModel;
-(id)earliestNextActivityDate;
-(id)nextActivityDateByPersonID;
-(void)setNextActivityDate:(id)arg1 forPersonID:(id)arg2 ;
-(void)clearAllNextActivityDates;
-(BOOL)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2 ;
-(id)init;
@end

