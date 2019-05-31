/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSBaseXPCClient.h>
#import <libobjc.A.dylib/FBSSceneUpdater.h>

@protocol OS_dispatch_queue, FBSWorkspaceClientDelegate;
@class BSBasicServerClient, NSMutableArray, NSMutableDictionary, NSObject, FBSProcessHandle, NSString;

@interface FBSWorkspaceClient : BSBaseXPCClient <FBSSceneUpdater> {

	BSBasicServerClient* _client;
	NSMutableArray* _queuedMessages;
	NSMutableDictionary* _sceneIDToSceneHandlerMap;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	FBSProcessHandle* _processHandle;
	BOOL _inTransaction;
	id<FBSWorkspaceClientDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<FBSWorkspaceClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callOutQueue;                   //@synthesize callOutQueue=_callOutQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_loggingProem;
-(id)initWithServiceName:(id)arg1 endpoint:(id)arg2 ;
-(void)queue_connectionWasInterrupted;
-(void)queue_handleMessage:(id)arg1 ;
-(void)sendCreateSceneRequestEvent:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)sendDestroySceneRequestEvent:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_debugLog:(id)arg1 ;
-(void)_sendMessage:(long long)arg1 withEvent:(id)arg2 ;
-(void)_queue_sendMessageReply:(id)arg1 withEvent:(id)arg2 ;
-(id)_queue_workspaceEventFromMessage:(id)arg1 ofType:(Class)arg2 ;
-(void)_queue_ensureTransaction;
-(void)_sendMessageReply:(id)arg1 withEvent:(id)arg2 ;
-(void)_queue_handleTransactionBookEnd;
-(void)_queue_handleCreateScene:(id)arg1 ;
-(void)_queue_handleSceneUpdate:(id)arg1 ;
-(void)_queue_handleDestroyScene:(id)arg1 ;
-(void)_queue_handleActions:(id)arg1 ;
-(void)_queue_handleSceneActions:(id)arg1 ;
-(void)_queue_handleSceneMessage:(id)arg1 ;
-(BOOL)queue_handleMessageWithType:(long long)arg1 message:(id)arg2 client:(id)arg3 ;
-(void)_queue_sendMessage:(long long)arg1 withEvent:(id)arg2 withResponseEvent:(/*^block*/id)arg3 ofType:(Class)arg4 ;
-(void)_queue_sendMessage:(long long)arg1 withEvent:(id)arg2 ;
-(void)registerDelegate:(id)arg1 forSceneID:(id)arg2 ;
-(void)unregisterDelegateForSceneID:(id)arg1 ;
-(id)hostProcess;
-(BOOL)willObserveLayersManually;
-(void)scene:(id)arg1 didAttachLayer:(id)arg2 ;
-(void)scene:(id)arg1 didUpdateLayer:(id)arg2 ;
-(void)scene:(id)arg1 didDetachLayer:(id)arg2 ;
-(void)scene:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 ;
-(void)scene:(id)arg1 sendMessage:(id)arg2 withResponse:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)callOutQueue;
-(id)_handlerForSceneID:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id<FBSWorkspaceClientDelegate>)delegate;
-(void)scene:(id)arg1 didReceiveActions:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
@end

