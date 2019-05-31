/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/FBApplicationProcessDelegate.h>
#import <libobjc.A.dylib/FBUIProcessManagerInternal.h>

@protocol OS_dispatch_queue, FBApplicationInfoProvider;
@class NSObject, NSHashTable, NSMapTable, FBApplicationProcess, BKSProcessAssertion, NSMutableSet, FBApplicationProcessWatchdogPolicy, NSMutableDictionary, NSString;

@interface FBProcessManager : NSObject <FBApplicationProcessDelegate, FBUIProcessManagerInternal> {

	NSObject*<OS_dispatch_queue> _queue;
	id<FBApplicationInfoProvider> _appInfoProvider;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	NSHashTable* _observers;
	NSMapTable* _processesByPID;
	NSMapTable* _processesByBundleID;
	NSObject*<OS_dispatch_queue> _processesQueue;
	FBApplicationProcess* _systemAppProcess;
	BKSProcessAssertion* _systemAppProcessAssertion;
	NSMutableSet* _preventIdleSleepReasons;
	FBApplicationProcess* _foregroundAppProcess;
	FBApplicationProcess* _preferredForegroundAppProcess;
	FBApplicationProcessWatchdogPolicy* _noDirectAccess_defaultWatchdogPolicy;
	NSMutableDictionary* _workspacesByClientIdentity;

}

@property (nonatomic,readonly) FBApplicationProcess * systemApplicationProcess;              //@synthesize systemAppProcess=_systemAppProcess - In the implementation block
@property (retain) FBApplicationProcessWatchdogPolicy * defaultWatchdogPolicy;               //@synthesize noDirectAccess_defaultWatchdogPolicy=_noDirectAccess_defaultWatchdogPolicy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)ping;
-(id)applicationProcessForPID:(int)arg1 ;
-(id)registerProcessForHandle:(id)arg1 ;
-(id)applicationProcessesForBundleIdentifier:(id)arg1 ;
-(void)_setPreferredForegroundApplicationProcess:(id)arg1 ;
-(id)currentProcess;
-(FBApplicationProcess *)systemApplicationProcess;
-(id)processForPID:(int)arg1 ;
-(void)_setSystemIdleSleepDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(id)allApplicationProcesses;
-(void)noteProcess:(id)arg1 didUpdateState:(id)arg2 ;
-(void)noteProcessDidExit:(id)arg1 ;
-(id)processesForBundleIdentifier:(id)arg1 ;
-(id)watchdogPolicyForProcess:(id)arg1 eventContext:(id)arg2 ;
-(id)workspaceForSceneClientWithIdentity:(id)arg1 ;
-(id)registerProcessForAuditToken:(SCD_Struct_FB10)arg1 ;
-(id)_processesQueue_processesForBundleIdentifier:(id)arg1 ;
-(id)_processesQueue_processForPID:(int)arg1 ;
-(void)_queue_evaluateForegroundEventRouting;
-(id)createApplicationProcessForBundleID:(id)arg1 withExecutionContext:(id)arg2 ;
-(void)_queue_addProcess:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)allProcesses;
-(id)_queue_reallyRegisterProcessForProcessHandle:(id)arg1 ;
-(FBApplicationProcessWatchdogPolicy *)defaultWatchdogPolicy;
-(void)_queue_removeProcess:(id)arg1 withBundleID:(id)arg2 pid:(int)arg3 ;
-(void)_queue_notifyObserversUsingBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invalidateClientWorkspace:(id)arg1 ;
-(id)createApplicationProcessForBundleID:(id)arg1 ;
-(id)_serviceClientAddedWithProcessHandle:(id)arg1 ;
-(void)setDefaultWatchdogPolicy:(FBApplicationProcessWatchdogPolicy *)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
@end

