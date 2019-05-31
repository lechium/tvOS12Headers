/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFClockItemStorageDelegate.h>
#import <libobjc.A.dylib/AFInvalidating.h>

@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, AFClockTimerSnapshot, AFClockItemStorage, NSMutableOrderedSet, NSUUID, NSString;

@interface AFClockTimerObserver : NSObject <AFClockItemStorageDelegate, AFInvalidating> {

	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _listeners;
	AFClockTimerSnapshot* _timerSnapshot;
	AFClockItemStorage* _timerStorage;
	NSMutableOrderedSet* _notifiedFiringTimerIDs;
	NSUUID* _timersChangedToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)clockItemStorageDidUpdate:(id)arg1 insertedItemIDs:(id)arg2 updatedItemIDs:(id)arg3 deletedItemIDs:(id)arg4 ;
-(void)_fetchTimersForReason:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_timerSnapshot;
-(void)_enumerateListenersUsingBlock:(/*^block*/id)arg1 ;
-(void)_handleFetchTimersForReason:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getTimerSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)getNotifiedFiringTimerIDsWithCompletion:(/*^block*/id)arg1 ;
-(void)timersAdded:(id)arg1 ;
-(void)timersUpdated:(id)arg1 ;
-(void)timersRemoved:(id)arg1 ;
-(void)firingTimerChanged:(id)arg1 ;
-(void)firingTimerDismissed:(id)arg1 ;
-(void)stateReset:(id)arg1 ;
-(void)timersChanged:(id)arg1 ;
-(void)_tearDown;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)timerFired:(id)arg1 ;
-(void)_setUp;
@end

