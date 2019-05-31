/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, AFNotifyStatePublisher, NSMapTable;

@interface AFSiriClientStateManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	AFNotifyStatePublisher* _publisher;
	NSMapTable* _statesByClient;
	long long _transactionDepth;

}
+(id)sharedManager;
-(void)beginListeningForClient:(void*)arg1 ;
-(void)endListeningForClient:(void*)arg1 ;
-(void)beginRequestWithUUID:(id)arg1 forClient:(void*)arg2 ;
-(void)endSessionForClient:(void*)arg1 ;
-(void)endRequestWithUUID:(id)arg1 forClient:(void*)arg2 ;
-(void)invalidateClient:(void*)arg1 ;
-(void)beginSessionForClient:(void*)arg1 ;
-(void)_removeStateForClient:(void*)arg1 ;
-(void)_beginSessionForClient:(void*)arg1 ;
-(void)_endSessionForClient:(void*)arg1 ;
-(void)_beginRequestWithUUID:(id)arg1 forClient:(void*)arg2 ;
-(void)_endRequestWithUUID:(id)arg1 forClient:(void*)arg2 ;
-(void)_beginListeningForClient:(void*)arg1 ;
-(void)_endListeningForClient:(void*)arg1 ;
-(void)_beginSpeakingForClient:(void*)arg1 ;
-(void)_endSpeakingForClient:(void*)arg1 ;
-(void)_aggregateStatesAndPublishIfNeeded;
-(id)_stateForClient:(void*)arg1 createIfAbsent:(BOOL)arg2 ;
-(void)beginSpeakingForClient:(id)arg1 ;
-(void)endSpeakingForClient:(id)arg1 ;
-(void)beginTransaction;
-(void)endTransaction;
-(id)init;
@end

