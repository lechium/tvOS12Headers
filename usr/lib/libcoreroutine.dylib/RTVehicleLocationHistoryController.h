/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RTPurgable.h>

@protocol OS_dispatch_queue;
@class NSObject, NSManagedObjectContext, NSString;

@interface RTVehicleLocationHistoryController : NSObject <RTPurgable> {

	NSObject*<OS_dispatch_queue> _queue;
	NSManagedObjectContext* _managedObjectContext;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(void)purgeManager:(id)arg1 performPurgeOfType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)_getAllVehicleEventsFromHistory;
-(BOOL)_deleteVehicleEventsBeforeDate:(id)arg1 ;
-(id)initWithQueue:(id)arg1 managedObjectContext:(id)arg2 ;
-(BOOL)_evaluateUsualLocationWithVehicleEvent:(id)arg1 ;
-(BOOL)_persistVehicleEventToHistory:(id)arg1 ;
-(NSManagedObjectContext *)managedObjectContext;
-(NSObject*<OS_dispatch_queue>)queue;
@end
