/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, NSMutableDictionary;

@interface HFUpdateLoggerDebuggingController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* __queue_runningLoggers;
	NSMutableDictionary* __queue_historyStringsKeyedByLogger;
	long long __queue_iteration;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSHashTable * _queue_runningLoggers;                                   //@synthesize _queue_runningLoggers=__queue_runningLoggers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _queue_historyStringsKeyedByLogger;              //@synthesize _queue_historyStringsKeyedByLogger=__queue_historyStringsKeyedByLogger - In the implementation block
@property (assign,nonatomic) long long _queue_iteration;                                            //@synthesize _queue_iteration=__queue_iteration - In the implementation block
+(id)_sharedInstance;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)set_queue_runningLoggers:(NSHashTable *)arg1 ;
-(void)set_queue_historyStringsKeyedByLogger:(NSMutableDictionary *)arg1 ;
-(void)set_queue_iteration:(long long)arg1 ;
-(id)_runningLoggerStrings;
-(long long)_queue_iteration;
-(NSHashTable *)_queue_runningLoggers;
-(NSMutableDictionary *)_queue_historyStringsKeyedByLogger;
-(void)_addRunningLogger:(id)arg1 ;
-(void)_removeRunningLogger:(id)arg1 ;
-(id)_runningLoggers;
-(id)_historyStrings;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
@end

