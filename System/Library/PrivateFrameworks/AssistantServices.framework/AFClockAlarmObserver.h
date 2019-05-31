/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFClockItemStorageDelegate.h>
#import <libobjc.A.dylib/AFInvalidating.h>

@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, AFClockAlarmSnapshot, AFClockItemStorage, NSMutableOrderedSet, NSUUID, NSString;

@interface AFClockAlarmObserver : NSObject <AFClockItemStorageDelegate, AFInvalidating> {

	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _listeners;
	AFClockAlarmSnapshot* _alarmSnapshot;
	AFClockItemStorage* _alarmStorage;
	NSMutableOrderedSet* _notifiedFiringAlarmIDs;
	NSUUID* _alarmsChangedToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)clockItemStorageDidUpdate:(id)arg1 insertedItemIDs:(id)arg2 updatedItemIDs:(id)arg3 deletedItemIDs:(id)arg4 ;
-(void)_enumerateListenersUsingBlock:(/*^block*/id)arg1 ;
-(void)stateReset:(id)arg1 ;
-(void)_fetchAlarmsForReason:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_alarmSnapshot;
-(void)_handleFetchAlarmsForReason:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getAlarmSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)getNotifiedFiringAlarmIDsWithCompletion:(/*^block*/id)arg1 ;
-(void)alarmsAdded:(id)arg1 ;
-(void)alarmsUpdated:(id)arg1 ;
-(void)alarmsRemoved:(id)arg1 ;
-(void)alarmFired:(id)arg1 ;
-(void)firingAlarmChanged:(id)arg1 ;
-(void)firingAlarmDismissed:(id)arg1 ;
-(void)alarmsChanged:(id)arg1 ;
-(void)_tearDown;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_setUp;
@end

