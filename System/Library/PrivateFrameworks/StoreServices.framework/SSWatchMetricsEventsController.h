/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSWatchMetricsEventTable, NSObject;

@interface SSWatchMetricsEventsController : NSObject {

	SSWatchMetricsEventTable* _table;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,readonly) SSWatchMetricsEventTable * table; 
@property (readonly) NSObject*<OS_dispatch_queue> serialQueue; 
+(id)_numberFormatter;
-(BOOL)insertWatchMetricEvent:(id)arg1 error:(id*)arg2 ;
-(id)unreportedEventsSinceTimestamp:(long long)arg1 ;
-(void)discardUnreportableEvents;
-(void)markAsCompleted:(id)arg1 ;
-(void)markAsFailed:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(SSWatchMetricsEventTable *)table;
@end

