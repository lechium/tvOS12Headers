/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DNDRemoteServiceConnectionEventListener.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSHashTable, NSMutableSet;

@interface DNDModeAssertionService : NSObject <DNDRemoteServiceConnectionEventListener> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSString* _clientIdentifier;
	NSHashTable* _assertionUpdateListeners;
	NSMutableSet* _activeAssertions;
	BOOL _registeredForUpdates;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
+(id)serviceForClientIdentifier:(id)arg1 ;
+(void)initialize;
-(NSString *)clientIdentifier;
-(id)_initWithClientIdentifier:(id)arg1 ;
-(void)didReceiveConnectionInterruptedEventForRemoteService:(id)arg1 ;
-(void)didReceiveConnectionInvalidatedEventForRemoteService:(id)arg1 ;
-(void)remoteService:(id)arg1 didReceiveModeAssertionInvalidation:(id)arg2 ;
-(void)_handleModeAssertionInvalidation:(id)arg1 ;
-(BOOL)_queue_registerForAssertionUpdatesIfRequired;
-(void)_handleLostXPCConnectionWithRetry:(BOOL)arg1 ;
-(void)_invalidateAllAssertionsWithReason:(unsigned long long)arg1 ;
-(id)takeModeAssertionWithDetails:(id)arg1 error:(id*)arg2 ;
-(id)invalidateActiveModeAssertionWithError:(id*)arg1 ;
-(id)activeModeAssertionWithError:(id*)arg1 ;
-(BOOL)invalidateAllActiveModeAssertionsWithError:(id*)arg1 ;
-(void)addAssertionUpdateListener:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)removeAssertionUpdateListener:(id)arg1 ;
-(BOOL)addAssertionUpdateListener:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeAssertionUpdateListener:(id)arg1 error:(id*)arg2 ;
@end

