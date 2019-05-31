/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMerging.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>
#import <libobjc.A.dylib/HMDBackingStoreModelBackedObjectProtocol.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue, HMDAccountManager;
@class NSUUID, NSObject, HMFUnfairLock, NSSet, NSMutableSet, HMDAccountIdentifier, NSArray, NSString, HMDAccountHandle, CNContact;

@interface HMDAccount : HMFObject <HMFLogging, HMFMerging, HMDBackingStoreObjectProtocol, HMDBackingStoreModelBackedObjectProtocol, NSFastEnumeration, NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _queue;
	HMFUnfairLock* _lock;
	NSSet* _handles;
	NSMutableSet* _devices;
	HMDAccountIdentifier* _identifier;
	id<HMDAccountManager> _manager;

}

@property (getter=isCurrentAccount,readonly) BOOL currentAccount; 
@property (copy,readonly) NSArray * identities; 
@property (__weak) id<HMDAccountManager> manager;                              //@synthesize manager=_manager - In the implementation block
@property (copy,readonly) NSString * destination; 
@property (copy,readonly) HMDAccountHandle * primaryHandle; 
@property (getter=isAuthenticated,readonly) BOOL authenticated; 
@property (readonly) BOOL shouldCache; 
@property (copy,readonly) HMDAccountIdentifier * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * name; 
@property (copy,readonly) CNContact * contact; 
@property (copy,readonly) NSArray * handles; 
@property (copy,readonly) NSArray * devices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * modelIdentifier; 
@property (nonatomic,readonly) NSUUID * modelParentIdentifier; 
+(id)logCategory;
+(id)accountWithHandle:(id)arg1 ;
+(id)accountWithDestination:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSArray *)devices;
-(CNContact *)contact;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(id)logIdentifier;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(BOOL)isCurrentAccount;
-(id)deviceForHandle:(id)arg1 ;
-(BOOL)isAuthenticated;
-(HMDAccountHandle *)primaryHandle;
-(id)attributeDescriptions;
-(id)deviceForIdentifier:(id)arg1 ;
-(void)addDevice:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 handles:(id)arg2 devices:(id)arg3 ;
-(BOOL)isEqualToAccount:(id)arg1 ;
-(BOOL)isRelatedToAccount:(id)arg1 ;
-(void)removeDevice:(id)arg1 ;
-(NSArray *)identities;
-(id)modelBackedObjects;
-(NSUUID *)modelIdentifier;
-(NSUUID *)modelParentIdentifier;
-(BOOL)mergeObject:(id)arg1 ;
-(void)setHandles:(NSArray *)arg1 ;
-(void)__notifyDelegateUpdatedDevice:(id)arg1 ;
-(id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(BOOL)shouldMergeObject:(id)arg1 ;
-(id)initWithObjectModel:(id)arg1 ;
-(void)addHandle:(id)arg1 ;
-(void)removeHandle:(id)arg1 ;
-(id)accountHandleWithModelIdentifier:(id)arg1 ;
-(id)deviceWithModelIdentifier:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_HM9*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(HMDAccountIdentifier *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)hash;
-(id)currentDevice;
-(NSString *)destination;
-(id)shortDescription;
-(BOOL)shouldCache;
-(id<HMDAccountManager>)manager;
-(void)setManager:(id<HMDAccountManager>)arg1 ;
-(NSArray *)handles;
@end

