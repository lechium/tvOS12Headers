/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:05 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol OS_dispatch_queue;
@class NSObject, HMDAppleAccountManager, HMDRemoteAccountManager, NSArray, NSString;

@interface HMDAccountRegistry : HMFObject <HMFLogging, NSFastEnumeration> {

	NSObject*<OS_dispatch_queue> _clientQueue;
	HMDAppleAccountManager* _appleAccountManager;
	HMDRemoteAccountManager* _remoteAccountManager;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (readonly) HMDAppleAccountManager * appleAccountManager;                    //@synthesize appleAccountManager=_appleAccountManager - In the implementation block
@property (readonly) HMDRemoteAccountManager * remoteAccountManager;                  //@synthesize remoteAccountManager=_remoteAccountManager - In the implementation block
@property (nonatomic,readonly) NSArray * accounts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)sharedRegistry;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id)accountForHandle:(id)arg1 ;
-(id)deviceForHandle:(id)arg1 ;
-(void)_resolveAccountForHandle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)attributeDescriptions;
-(NSArray *)accounts;
-(id)deviceForIdentifier:(id)arg1 ;
-(id)deviceForDevice:(id)arg1 ;
-(id)deviceForDevice:(id)arg1 exists:(BOOL*)arg2 ;
-(id)initWithAppleAccountManager:(id)arg1 remoteAccountManager:(id)arg2 ;
-(void)__handleAppleAccountUpdate:(id)arg1 ;
-(void)__handleAddedRemoteAccount:(id)arg1 ;
-(void)__handleRemovedRemoteAccount:(id)arg1 ;
-(HMDAppleAccountManager *)appleAccountManager;
-(HMDRemoteAccountManager *)remoteAccountManager;
-(id)accountForHandle:(id)arg1 exists:(BOOL*)arg2 ;
-(id)deviceForHandle:(id)arg1 exists:(BOOL*)arg2 ;
-(BOOL)accountExistsForHandle:(id)arg1 ;
-(BOOL)deviceExistsForHandle:(id)arg1 ;
-(BOOL)deviceExistsForDevice:(id)arg1 ;
-(void)__handleAppleAccountHandlesUpdated:(id)arg1 ;
-(void)__handleAppleAccountDeviceAdded:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_HM9*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(void)stop;
-(void)start;
@end

