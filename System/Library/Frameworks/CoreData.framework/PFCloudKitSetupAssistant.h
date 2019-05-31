/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSCloudKitMirroringDelegateOptions, CKRecordZone, CKRecordZoneSubscription, CKContainer, CKDatabase, NSURL, NSPersistentStore, NSPersistentStoreCoordinator, NSObject, NSCloudKitMirroringDelegateMetadata;

@interface PFCloudKitSetupAssistant : NSObject {

	NSCloudKitMirroringDelegateOptions* _mirroringOptions;
	CKRecordZone* _zone;
	CKRecordZoneSubscription* _zoneSubscription;
	CKContainer* _container;
	CKDatabase* _database;
	NSURL* _largeBlobDirectoryURL;
	NSPersistentStore* _observedStore;
	NSPersistentStoreCoordinator* _observedCoordinator;
	NSObject*<OS_dispatch_semaphore> _cloudKitSemaphore;
	NSCloudKitMirroringDelegateMetadata* _metadata;

}

@property (nonatomic,readonly) NSCloudKitMirroringDelegateOptions * mirroringOptions;              //@synthesize mirroringOptions=_mirroringOptions - In the implementation block
@property (nonatomic,readonly) CKRecordZone * zone;                                                //@synthesize zone=_zone - In the implementation block
@property (nonatomic,readonly) CKRecordZoneSubscription * zoneSubscription;                        //@synthesize zoneSubscription=_zoneSubscription - In the implementation block
@property (nonatomic,readonly) CKContainer * container;                                            //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) CKDatabase * database;                                              //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) NSURL * largeBlobDirectoryURL;                                      //@synthesize largeBlobDirectoryURL=_largeBlobDirectoryURL - In the implementation block
@property (nonatomic,__weak,readonly) NSPersistentStore * observedStore;                           //@synthesize observedStore=_observedStore - In the implementation block
@property (nonatomic,readonly) NSPersistentStoreCoordinator * observedCoordinator;                 //@synthesize observedCoordinator=_observedCoordinator - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> cloudKitSemaphore;                 //@synthesize cloudKitSemaphore=_cloudKitSemaphore - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringDelegateMetadata * metadata;                     //@synthesize metadata=_metadata - In the implementation block
+(id)containerWithIdentifier:(id)arg1 andOptions:(id)arg2 ;
-(void)_setContainer:(id)arg1 ;
-(NSCloudKitMirroringDelegateOptions *)mirroringOptions;
-(id)initWithMirroringOptions:(id)arg1 observedStore:(id)arg2 zone:(id)arg3 zoneSubscription:(id)arg4 ;
-(BOOL)_initializeCloudKitForObservedStore:(id*)arg1 ;
-(void)_setDatabase:(id)arg1 ;
-(CKRecordZoneSubscription *)zoneSubscription;
-(NSPersistentStore *)observedStore;
-(NSPersistentStoreCoordinator *)observedCoordinator;
-(BOOL)_checkAndInitializeUserDefaults:(id*)arg1 ;
-(BOOL)_checkAccountStatus:(id*)arg1 ;
-(BOOL)_checkUserIdentity:(id*)arg1 ;
-(BOOL)_createZoneIfNecessary:(id*)arg1 ;
-(BOOL)_setupZoneSubscriptionIfNecessary:(id*)arg1 ;
-(BOOL)_createSchemaIfNecessary:(id*)arg1 ;
-(BOOL)_initializeAssetStorageURLError:(id*)arg1 ;
-(BOOL)_saveUserDefaults:(id*)arg1 ;
-(BOOL)_saveZone:(id)arg1 error:(id*)arg2 ;
-(BOOL)_shouldAttemptRecoveryForZone:(id)arg1 byDeletingExistingZone:(BOOL*)arg2 afterError:(id)arg3 ;
-(BOOL)_deleteZone:(id)arg1 error:(id*)arg2 ;
-(BOOL)_createSchema:(id*)arg1 ;
-(NSURL *)largeBlobDirectoryURL;
-(NSObject*<OS_dispatch_semaphore>)cloudKitSemaphore;
-(NSCloudKitMirroringDelegateMetadata *)metadata;
-(CKDatabase *)database;
-(id)init;
-(void)dealloc;
-(CKRecordZone *)zone;
-(CKContainer *)container;
@end

