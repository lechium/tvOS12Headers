/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:14 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSMapTable, HMFVersion, HMDHomeManager, HMDBackingStoreLocal, NSOperationQueue, NSString;

@interface HMDBackingStoreSingleton : HMFObject <HMFLogging> {

	NSMapTable* _objectLookup;
	NSMapTable* _classToNameTransform;
	NSMapTable* _nameToClassTransform;
	NSMapTable* _objectPropertyHashLookup;
	HMFVersion* _dataVersion;
	HMDHomeManager* _homeManager;
	HMDBackingStoreLocal* _local;
	NSOperationQueue* _queue;

}

@property (nonatomic,retain) HMFVersion * dataVersion;                             //@synthesize dataVersion=_dataVersion - In the implementation block
@property (nonatomic,retain) HMDBackingStoreLocal * local;                         //@synthesize local=_local - In the implementation block
@property (nonatomic,readonly) NSMapTable * objectLookup;                          //@synthesize objectLookup=_objectLookup - In the implementation block
@property (nonatomic,readonly) NSMapTable * classToNameTransform;                  //@synthesize classToNameTransform=_classToNameTransform - In the implementation block
@property (nonatomic,readonly) NSMapTable * nameToClassTransform;                  //@synthesize nameToClassTransform=_nameToClassTransform - In the implementation block
@property (nonatomic,readonly) NSMapTable * objectPropertyHashLookup;              //@synthesize objectPropertyHashLookup=_objectPropertyHashLookup - In the implementation block
@property (nonatomic,__weak,readonly) HMDHomeManager * homeManager;                //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * queue;                           //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(void)setClass:(Class)arg1 forClassName:(id)arg2 ;
+(void)resetClassMappings;
+(void)resetSchemaHash;
+(id)sharedInstance;
+(void)start;
-(void)setDataVersion:(HMFVersion *)arg1 ;
-(HMFVersion *)dataVersion;
-(HMDHomeManager *)homeManager;
-(id)logIdentifier;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(HMDBackingStoreLocal *)local;
-(id)schemaHashForObject:(id)arg1 ;
-(id)flushBackingStore;
-(void)setLocal:(HMDBackingStoreLocal *)arg1 ;
-(NSMapTable *)nameToClassTransform;
-(NSMapTable *)classToNameTransform;
-(NSMapTable *)objectLookup;
-(id)resetBackingStore;
-(NSMapTable *)objectPropertyHashLookup;
-(id)init;
-(NSOperationQueue *)queue;
@end

