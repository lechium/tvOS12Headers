/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:12 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSError, NSString, NSMutableArray, NSObject, NSConditionLock;

@interface AMSObservable : NSObject {

	unsigned long long _behavior;
	NSError* _failureError;
	NSString* _logKey;
	NSMutableArray* _observers;
	NSMutableArray* _queuedResults;
	NSObject*<OS_dispatch_queue> _sendMessageQueue;
	NSConditionLock* _stateLock;

}

@property (nonatomic,readonly) unsigned long long behavior;                              //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,retain) NSError * failureError;                                     //@synthesize failureError=_failureError - In the implementation block
@property (nonatomic,retain) NSString * logKey;                                          //@synthesize logKey=_logKey - In the implementation block
@property (nonatomic,retain) NSMutableArray * observers;                                 //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSMutableArray * queuedResults;                             //@synthesize queuedResults=_queuedResults - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> sendMessageQueue;              //@synthesize sendMessageQueue=_sendMessageQueue - In the implementation block
@property (nonatomic,retain) NSConditionLock * stateLock;                                //@synthesize stateLock=_stateLock - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
-(NSConditionLock *)stateLock;
-(void)setStateLock:(NSConditionLock *)arg1 ;
-(void)subscribe:(id)arg1 ;
-(BOOL)_isComplete;
-(BOOL)sendFailure:(id)arg1 ;
-(NSString *)logKey;
-(NSObject*<OS_dispatch_queue>)sendMessageQueue;
-(void)setFailureError:(NSError *)arg1 ;
-(NSMutableArray *)queuedResults;
-(BOOL)sendCompletion;
-(BOOL)sendResult:(id)arg1 ;
-(void)setLogKey:(NSString *)arg1 ;
-(void)setQueuedResults:(NSMutableArray *)arg1 ;
-(void)setSendMessageQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithObserver:(id)arg1 ;
-(NSError *)failureError;
-(void)unsubscribe:(id)arg1 ;
-(id)initWithObserver:(id)arg1 behavior:(unsigned long long)arg2 ;
-(id)initWithObservers:(id)arg1 behavior:(unsigned long long)arg2 ;
-(id)initWithObservers:(id)arg1 ;
-(void)unsubscribeAll;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 ;
-(id)initWithNotification:(id)arg1 object:(id)arg2 ;
-(id)init;
-(void)setObservers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)observers;
-(BOOL)cancel;
-(BOOL)isCancelled;
-(BOOL)isComplete;
-(unsigned long long)behavior;
@end

