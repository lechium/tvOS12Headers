/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:05 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSPersistentStoreCoordinator, NSObject, NSPersistentHistoryToken;

@interface PLPersistentHistoryChangeDistributor : NSObject {

	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	NSPersistentHistoryToken* _lastToken;
	int _notifyToken;

}
-(void)stopObservingRemoteNotifications;
-(id)initWithPersistentStoreCoordinator:(id)arg1 ;
-(void)startObservingRemoteNotifications;
-(void)_inq_startObservingRemoteNotifications;
-(void)distributeNewTransactionsSinceLastToken;
-(void)_inq_stopObservingRemoteNotifications;
-(id)fetchTransactionsSinceLastToken;
-(void)distributeTransactions:(id)arg1 ;
-(id)makeManagedObjectContext;
-(void)forceUserInterfaceReload;
-(id)localEventFromTransactions:(id)arg1 ;
-(void)dealloc;
@end
