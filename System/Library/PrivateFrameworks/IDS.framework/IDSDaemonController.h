/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/IDSDaemonProtocol.h>

@protocol IDSDaemonProtocol, OS_dispatch_queue, OS_dispatch_group;
@class IMRemoteObject, IMLocalObject, IDSDaemonListener, NSProtocolChecker, NSString, NSObject, NSMutableDictionary, NSSet, NSMutableSet;

@interface IDSDaemonController : NSObject <IDSDaemonProtocol> {

	id _delegate;
	IMRemoteObject*<IDSDaemonProtocol> _remoteObject;
	IMLocalObject* _localObject;
	IDSDaemonListener* _daemonListener;
	NSProtocolChecker* _protocol;
	NSString* _listenerID;
	NSObject*<OS_dispatch_queue> _ivarQueue;
	NSObject*<OS_dispatch_group> _daemonConnectedGroup;
	NSObject*<OS_dispatch_queue> _remoteMessageQueue;
	unsigned long long _connectionID;
	NSMutableDictionary* _listenerServices;
	NSSet* _services;
	NSSet* _cachedServices;
	NSMutableDictionary* _listenerCommands;
	NSSet* _commands;
	NSSet* _cachedCommands;
	NSMutableDictionary* _listenerCapabilities;
	unsigned _cachedCapabilities;
	unsigned _lastUpdateCaps;
	BOOL _hasCheckedForDaemon;
	BOOL _preventReconnect;
	BOOL _acquiringDaemonConnection;
	BOOL _autoReconnect;
	BOOL _hasBeenSuspended;
	BOOL _fatalErrorOccured;
	int _curXPCMessagePriority;
	NSMutableSet* _notificationServices;

}

@property (setter=_setAutoReconnect:) BOOL _autoReconnect;                                    //@synthesize autoReconnect=_autoReconnect - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _remoteMessageQueue;              //@synthesize remoteMessageQueue=_remoteMessageQueue - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isConnecting; 
@property (nonatomic,readonly) NSString * listenerID;                                         //@synthesize listenerID=_listenerID - In the implementation block
@property (nonatomic,readonly) IDSDaemonListener * listener;                                  //@synthesize daemonListener=_daemonListener - In the implementation block
@property (assign,nonatomic) int curXPCMessagePriority;                                       //@synthesize curXPCMessagePriority=_curXPCMessagePriority - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_blockUntilSendQueueIsEmpty;
+(BOOL)_applicationWillTerminate;
+(void)_setApplicationWillTerminate;
+(id)sharedInstance;
-(BOOL)isConnected;
-(void)_performBlock:(/*^block*/id)arg1 wait:(BOOL)arg2 ;
-(void)setCurXPCMessagePriority:(int)arg1 ;
-(void)_setServices:(id)arg1 commands:(id)arg2 capabilities:(unsigned)arg3 ;
-(void)_connectToDaemonWithLaunch:(BOOL)arg1 services:(id)arg2 commands:(id)arg3 capabilities:(unsigned)arg4 ;
-(BOOL)_setServices:(id)arg1 ;
-(BOOL)_setCommands:(id)arg1 ;
-(BOOL)connectToDaemonWithLaunch:(BOOL)arg1 services:(id)arg2 commands:(id)arg3 capabilities:(unsigned)arg4 ;
-(BOOL)setServices:(id)arg1 forListenerID:(id)arg2 ;
-(BOOL)setCommands:(id)arg1 forListenerID:(id)arg2 ;
-(BOOL)addListenerID:(id)arg1 services:(id)arg2 commands:(id)arg3 ;
-(id)servicesForListenerID:(id)arg1 ;
-(id)commandsForListenerID:(id)arg1 ;
-(int)curXPCMessagePriority;
-(void)addedDelegateForService:(id)arg1 ;
-(BOOL)addListenerID:(id)arg1 services:(id)arg2 ;
-(BOOL)setCapabilities:(unsigned)arg1 forListenerID:(id)arg2 shouldLog:(BOOL)arg3 ;
-(void)sendXPCObject:(id)arg1 objectContext:(id)arg2 ;
-(id)commands;
-(NSString *)listenerID;
-(void)_performBlock:(/*^block*/id)arg1 ;
-(void)blockUntilConnected;
-(BOOL)connectToDaemonWithLaunch:(BOOL)arg1 ;
-(BOOL)_setCapabilities:(unsigned)arg1 ;
-(void)systemApplicationDidEnterBackground;
-(void)systemApplicationWillEnterForeground;
-(void)systemApplicationDidSuspend;
-(void)systemApplicationDidResume;
-(BOOL)isConnecting;
-(unsigned)capabilitiesForListenerID:(id)arg1 ;
-(void)_noteSetupComplete;
-(void)_noteDisconnected;
-(void)_setAutoReconnect:(BOOL)arg1 ;
-(void)_localObjectCleanup;
-(void)_remoteObjectCleanup;
-(void)_disconnectFromDaemonWithForce:(BOOL)arg1 ;
-(BOOL)remoteObjectExists;
-(void)remoteObjectDiedNotification:(id)arg1 ;
-(void)localObjectDiedNotification:(id)arg1 ;
-(void)_blockUntilSendQueueIsEmpty;
-(BOOL)localObjectExists;
-(BOOL)connectToDaemon;
-(BOOL)_autoReconnect;
-(BOOL)_makeConnectionWithLaunch:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)hasListenerForID:(id)arg1 ;
-(void)_listenerSetUpdated;
-(void)_agentDidLaunchNotification:(id)arg1 ;
-(void)_handleDaemonException:(id)arg1 ;
-(void)disconnectFromDaemon;
-(void)removeListenerID:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)_remoteMessageQueue;
-(id)services;
-(unsigned)capabilities;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)delegate;
-(void)forwardInvocation:(id)arg1 ;
-(id)localObject;
-(IDSDaemonListener *)listener;
@end

