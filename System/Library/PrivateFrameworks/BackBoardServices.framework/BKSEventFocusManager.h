/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BKSEventFocusIPCInterface, OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary, NSXPCConnection, NSMapTable, NSSet, NSString;

@interface BKSEventFocusManager : NSObject {

	id<BKSEventFocusIPCInterface> _ipcInterface;
	NSObject*<OS_dispatch_queue> _focusClientQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	unsigned long long _propertyUpdateGeneration;
	BOOL _needsFlush;
	BOOL _systemAppControlsFocusOnMainDisplay;
	int _pid;
	NSMutableSet* _currentState;
	NSMutableDictionary* _pendingStatesByPriority;
	NSXPCConnection* _connection;
	NSMapTable* _infoPerFocusChangeObserver;
	NSSet* _cachedFocusedDeferralProperties;
	NSString* _clientIdentifier;

}

@property (nonatomic,readonly) NSMutableSet * currentState;                                //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * pendingStatesByPriority;              //@synthesize pendingStatesByPriority=_pendingStatesByPriority - In the implementation block
@property (assign,nonatomic) BOOL needsFlush;                                              //@synthesize needsFlush=_needsFlush - In the implementation block
@property (assign,nonatomic) BOOL systemAppControlsFocusOnMainDisplay;                     //@synthesize systemAppControlsFocusOnMainDisplay=_systemAppControlsFocusOnMainDisplay - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                 //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMapTable * infoPerFocusChangeObserver;                      //@synthesize infoPerFocusChangeObserver=_infoPerFocusChangeObserver - In the implementation block
@property (nonatomic,retain) NSSet * cachedFocusedDeferralProperties;                      //@synthesize cachedFocusedDeferralProperties=_cachedFocusedDeferralProperties - In the implementation block
@property (assign,nonatomic) int pid;                                                      //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy) NSString * clientIdentifier;                                    //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
+(id)sharedInstance;
-(BOOL)needsFlush;
-(void)setNeedsFlush:(BOOL)arg1 ;
-(void)focusedDeferralPropertiesUpdatedWithProperties:(id)arg1 ;
-(void)touchUpOccuredForIdentifier:(unsigned)arg1 detached:(BOOL)arg2 context:(unsigned)arg3 pid:(int)arg4 ;
-(void)touchDetachedForIdentifier:(unsigned)arg1 context:(unsigned)arg2 pid:(int)arg3 ;
-(id)initWithIPCInterface:(id)arg1 ;
-(void)_connectToEventFocusService;
-(void)deferEventsForClientWithProperties:(id)arg1 toClientWithProperties:(id)arg2 withPriority:(int)arg3 ;
-(void)_pruneSet:(id)arg1 ofDeferralsPassingTest:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)pendingStatesByPriority;
-(void)reallyFlushWithSet:(id)arg1 ;
-(void)_rebuildPendingStatesByPriority;
-(void)setSystemAppControlsFocusOnMainDisplay:(BOOL)arg1 ;
-(void)_syncObserverState;
-(BOOL)systemAppControlsFocusOnMainDisplay;
-(NSMapTable *)infoPerFocusChangeObserver;
-(void)setInfoPerFocusChangeObserver:(NSMapTable *)arg1 ;
-(NSSet *)cachedFocusedDeferralProperties;
-(void)setCachedFocusedDeferralProperties:(NSSet *)arg1 ;
-(void)setPid:(int)arg1 ;
-(NSString *)clientIdentifier;
-(void)setForegroundApplicationOnMainDisplay:(id)arg1 pid:(int)arg2 ;
-(int)pid;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(NSMutableSet *)currentState;
-(void)flush;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(void)deferEventsForClientWithProperties:(id)arg1 toClientWithProperties:(id)arg2 ;
@end

