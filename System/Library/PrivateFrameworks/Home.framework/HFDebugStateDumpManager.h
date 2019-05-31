/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface HFDebugStateDumpManager : NSObject {

	int _logStateDumpNotifyToken;
	NSObject*<OS_dispatch_queue> _stateHandlerQueue;
	NSMutableDictionary* _stateDumpHandlersByName;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> stateHandlerQueue;              //@synthesize stateHandlerQueue=_stateHandlerQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * stateDumpHandlersByName;               //@synthesize stateDumpHandlersByName=_stateDumpHandlersByName - In the implementation block
@property (nonatomic,readonly) int logStateDumpNotifyToken;                               //@synthesize logStateDumpNotifyToken=_logStateDumpNotifyToken - In the implementation block
+(id)sharedInstance;
-(id)registerStateDumpHandler:(/*^block*/id)arg1 withName:(id)arg2 ;
-(void)setStateHandlerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setStateDumpHandlersByName:(NSMutableDictionary *)arg1 ;
-(id)performStateDump:(BOOL)arg1 ;
-(int)logStateDumpNotifyToken;
-(NSMutableDictionary *)stateDumpHandlersByName;
-(NSObject*<OS_dispatch_queue>)stateHandlerQueue;
-(id)init;
-(void)dealloc;
@end

