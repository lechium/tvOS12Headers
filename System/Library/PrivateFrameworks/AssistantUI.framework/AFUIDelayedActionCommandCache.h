/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface AFUIDelayedActionCommandCache : NSObject {

	NSMutableDictionary* _delayedActionTimersByIdentifier;
	NSMutableDictionary* _dismissalDelayedActionCommandsByIdentifier;

}
-(void)invalidatePendingCommands;
-(void)_performDelayedActionCommandTimerAction:(id)arg1 ;
-(void)_invalidateDelayedActionTimer:(id)arg1 withKey:(id)arg2 ;
-(void)_performCommandsWithDelayedActionCommand:(id)arg1 ;
-(id)_commandHandler;
-(void)enqueueDelayedActionCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelDelayedActionWithDelayedActionCancelCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performDismissalCommands;
-(id)init;
-(void)dealloc;
@end
