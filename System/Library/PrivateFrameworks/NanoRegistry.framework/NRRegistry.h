/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <libobjc.A.dylib/NRMutableStateParentDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NRReadWriteConcurrentQueue, NRMutableDeviceCollection, NRSecureDevicePropertyStore, NSObject;

@interface NRRegistry : NSObject <NRMutableStateParentDelegate> {

	NSMutableDictionary* _registryDiffObservers;
	NSMutableDictionary* _registrySecurePropertyObservers;
	os_unfair_lock_s _collectionLock;
	NRReadWriteConcurrentQueue* _readerWriterDispatch;
	BOOL _queueRunning;
	BOOL _supportsWatch;
	NRMutableDeviceCollection* _collection;
	NRSecureDevicePropertyStore* _secureProperties;
	NSObject*<OS_dispatch_queue> _managementQueue;
	NRMutableDeviceCollection* _queueCollection;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> managementQueue;              //@synthesize managementQueue=_managementQueue - In the implementation block
@property (nonatomic,retain) NRMutableDeviceCollection * collection;                      //@synthesize collection=_collection - In the implementation block
@property (nonatomic,retain) NRMutableDeviceCollection * queueCollection;                 //@synthesize queueCollection=_queueCollection - In the implementation block
@property (nonatomic,retain) NRSecureDevicePropertyStore * secureProperties;              //@synthesize secureProperties=_secureProperties - In the implementation block
+(int)registerNotifyTokenWithName:(id)arg1 withQueue:(id)arg2 withBlock:(/*^block*/id)arg3 ;
+(id)getReferencedSecureProperties:(id)arg1 fromDiff:(id)arg2 ;
+(id)_nextToken;
+(BOOL)_supportsWatch;
+(id)getReferencedSecurePropertyIDsFromDiff:(id)arg1 ;
+(unsigned long long)readNotifyToken:(int)arg1 ;
-(void)grabRegistryWithReadBlockAsync:(/*^block*/id)arg1 ;
-(void)grabRegistryWithWriteBlockAsync:(/*^block*/id)arg1 ;
-(void)syncGrabRegistryWithReadBlock:(/*^block*/id)arg1 ;
-(void)syncGrabRegistryWithWriteBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)managementQueue;
-(BOOL)supportsWatch;
-(void)performUnderCollectionLock:(/*^block*/id)arg1 ;
-(void)grabRegistryWithReadBlock:(/*^block*/id)arg1 ;
-(NRSecureDevicePropertyStore *)secureProperties;
-(void)enqueueForRead:(/*^block*/id)arg1 ;
-(void)enqueueForWriteAsync:(/*^block*/id)arg1 ;
-(void)setSecureProperties:(NRSecureDevicePropertyStore *)arg1 ;
-(void)enqueueForWriteAsync:(/*^block*/id)arg1 bypassSuspend:(BOOL)arg2 ;
-(void)setQueueCollection:(NRMutableDeviceCollection *)arg1 ;
-(void)child:(id)arg1 didApplyDiff:(id)arg2 ;
-(void)_startQueue;
-(void)_notifyObserversSecurePropertiesAreAvailableWithCollection:(id)arg1 secureProperties:(id)arg2 ;
-(void)_notifyDiffObserversWithDiff:(id)arg1 deviceCollection:(id)arg2 secureProperties:(id)arg3 ;
-(void)enqueueForReadAsync:(/*^block*/id)arg1 ;
-(void)enqueueForRead:(/*^block*/id)arg1 bypassSuspend:(BOOL)arg2 ;
-(void)enqueueForReadAsync:(/*^block*/id)arg1 bypassSuspend:(BOOL)arg2 ;
-(id)addDiffObserverWithWriteBlock:(/*^block*/id)arg1 ;
-(void)removeDiffObserver:(id)arg1 ;
-(id)addSecurePropertiesObserverWithReadBlock:(/*^block*/id)arg1 ;
-(void)removeSecurePropertiesObserver:(id)arg1 ;
-(NRMutableDeviceCollection *)queueCollection;
-(NRMutableDeviceCollection *)collection;
-(void)setCollection:(NRMutableDeviceCollection *)arg1 ;
-(id)initWithParameters:(id)arg1 ;
-(id)init;
-(void)invalidate;
@end

