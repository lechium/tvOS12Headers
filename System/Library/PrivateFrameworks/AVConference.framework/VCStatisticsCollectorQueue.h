/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VCStatisticsCollectorQueue : NSObject {

	OpaqueFigThreadRef _thread;
	BOOL _isThreadRunning;
	BOOL _shouldBlockWhenFull;
	SCD_Struct_VC105 _messageQueue[100];
	int _firstMessageIndex;
	int _lastMessageIndex;
	int _maxQueueSize;
	/*^block*/id _messageHandler;
	opaque_pthread_mutex_t _queueMutex;
	opaque_pthread_cond_t _queueNotFullCondition;
	opaque_pthread_cond_t _queueNotEmptyCondition;

}

@property (readonly) BOOL isThreadRunning;              //@synthesize isThreadRunning=_isThreadRunning - In the implementation block
@property (copy) id messageHandler;                     //@synthesize messageHandler=_messageHandler - In the implementation block
-(id)initWithQueueSize:(int)arg1 shouldBlockWhenFull:(BOOL)arg2 ;
-(void)setMessageHandler:(id)arg1 ;
-(BOOL)addStatisticsMessage:(SCD_Struct_VC106)arg1 ;
-(BOOL)enqueue:(SCD_Struct_VC106)arg1 ;
-(BOOL)isQueueFull;
-(void)emptyMessageQueue;
-(BOOL)dequeue:(SCD_Struct_VC106*)arg1 ;
-(void)processMessage:(SCD_Struct_VC106)arg1 ;
-(BOOL)isThreadRunning;
-(id)messageHandler;
-(void)dealloc;
-(void)stop;
-(void)start;
@end

