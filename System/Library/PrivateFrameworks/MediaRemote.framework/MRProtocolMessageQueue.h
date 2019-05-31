/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, MRProtocolMessageQueueDataSource, MRProtocolMessageQueueDelegate;
@class NSObject, MRPendingMessageQueue, NSMutableDictionary;

@interface MRProtocolMessageQueue : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	id<MRProtocolMessageQueueDataSource> _datasource;
	id<MRProtocolMessageQueueDelegate> _delegate;
	MRPendingMessageQueue* _pendingMessageQueue;
	NSMutableDictionary* _pendingReplyQueue;

}

@property (assign,nonatomic,__weak) id<MRProtocolMessageQueueDataSource> datasource; 
@property (assign,nonatomic,__weak) id<MRProtocolMessageQueueDelegate> delegate; 
-(id)initWithMaxLowPriorityMessagesAllowed:(unsigned long long)arg1 ;
-(void)enqueueMessage:(id)arg1 reply:(/*^block*/id)arg2 queue:(id)arg3 ;
-(BOOL)reply:(id)arg1 ;
-(void)setDatasource:(id<MRProtocolMessageQueueDataSource>)arg1 ;
-(id<MRProtocolMessageQueueDataSource>)datasource;
-(id)_dataForMessage:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MRProtocolMessageQueueDelegate>)arg1 ;
-(id<MRProtocolMessageQueueDelegate>)delegate;
-(void)flush;
@end

