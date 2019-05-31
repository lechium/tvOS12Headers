/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDBulletinIdentifiers.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, NSString, HMDRoom, HMDAccessoryVersion, HMDApplicationData, NSUUID, HMAccessoryCategory, HMDHome, NSObject, HMFMessageDispatcher, NSNumber, HMDApplicationRegistry, HMDAccessoryTransaction, HMDVendorModelEntry, NSArray, NSSet;

@interface HMDAccessory : HMFObject <HMDBulletinIdentifiers, NSSecureCoding, HMDHomeMessageReceiver, HMDBackingStoreObjectProtocol, HMFDumpState, HMFLogging> {

	BOOL _primary;
	BOOL _reachable;
	BOOL _remotelyReachable;
	NSMutableSet* _accessoryProfiles;
	BOOL _blocked;
	BOOL _remoteAccessEnabled;
	BOOL _unblockPending;
	NSString* _identifier;
	HMDRoom* _room;
	NSString* _model;
	NSString* _manufacturer;
	HMDAccessoryVersion* _firmwareVersion;
	NSString* _serialNumber;
	HMDApplicationData* _appData;
	NSUUID* _uuid;
	HMAccessoryCategory* _category;
	HMDHome* _home;
	NSString* _providedName;
	NSString* _configurationAppIdentifier;
	NSString* _configuredName;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMFMessageDispatcher* _msgDispatcher;
	NSNumber* _categoryIdentifier;
	unsigned long long _configNumber;
	HMDApplicationRegistry* _appRegistry;
	HMDAccessoryTransaction* _transaction;
	unsigned long long _accessoryReprovisionState;

}

@property (nonatomic,copy,readonly) NSString * contextID; 
@property (nonatomic,copy,readonly) NSUUID * contextSPIUniqueIdentifier; 
@property (assign,getter=isPrimary,nonatomic) BOOL primary;                                      //@synthesize primary=_primary - In the implementation block
@property (assign,getter=isBlocked,nonatomic) BOOL blocked;                                      //@synthesize blocked=_blocked - In the implementation block
@property (nonatomic,retain) NSString * configuredName;                                          //@synthesize configuredName=_configuredName - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                      //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                           //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                       //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,readonly) long long reachableTransports; 
@property (assign,getter=isRemoteAccessEnabled,nonatomic) BOOL remoteAccessEnabled;              //@synthesize remoteAccessEnabled=_remoteAccessEnabled - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                               //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,retain) HMAccessoryCategory * category;                                     //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) NSNumber * categoryIdentifier;                                      //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (nonatomic,retain) HMDRoom * room;                                                     //@synthesize room=_room - In the implementation block
@property (assign,nonatomic) BOOL unblockPending;                                                //@synthesize unblockPending=_unblockPending - In the implementation block
@property (assign,nonatomic) unsigned long long configNumber;                                    //@synthesize configNumber=_configNumber - In the implementation block
@property (nonatomic,retain) HMDApplicationRegistry * appRegistry;                               //@synthesize appRegistry=_appRegistry - In the implementation block
@property (nonatomic,retain) HMDAccessoryTransaction * transaction;                              //@synthesize transaction=_transaction - In the implementation block
@property (assign,getter=isReachable,nonatomic) BOOL reachable;                                  //@synthesize reachable=_reachable - In the implementation block
@property (assign,nonatomic) unsigned long long accessoryReprovisionState;                       //@synthesize accessoryReprovisionState=_accessoryReprovisionState - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                              //@synthesize home=_home - In the implementation block
@property (getter=isCurrentAccessory,readonly) BOOL currentAccessory; 
@property (nonatomic,copy) NSString * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy) NSString * providedName;                                              //@synthesize providedName=_providedName - In the implementation block
@property (nonatomic,copy,readonly) NSString * model;                                            //@synthesize model=_model - In the implementation block
@property (nonatomic,copy,readonly) NSString * manufacturer;                                     //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,copy,readonly) HMDAccessoryVersion * firmwareVersion;                       //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * serialNumber;                                     //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,copy,readonly) HMDVendorModelEntry * vendorInfo; 
@property (assign,getter=isRemotelyReachable,nonatomic) BOOL remotelyReachable;                  //@synthesize remotelyReachable=_remotelyReachable - In the implementation block
@property (readonly) BOOL supportsUserManagement; 
@property (readonly) BOOL requiresHomeAppForManagement; 
@property (nonatomic,copy) NSString * configurationAppIdentifier;                                //@synthesize configurationAppIdentifier=_configurationAppIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL supportsTargetControl; 
@property (nonatomic,readonly) BOOL supportsTargetController; 
@property (copy,readonly) NSArray * accessoryProfiles; 
@property (nonatomic,retain) HMDApplicationData * appData;                                       //@synthesize appData=_appData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
+(id)logCategory;
+(BOOL)hasMessageReceiverChildren;
+(BOOL)supportsSecureCoding;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDAccessoryTransaction *)transaction;
-(void)setTransaction:(HMDAccessoryTransaction *)arg1 ;
-(void)setManufacturer:(NSString *)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(NSString *)manufacturer;
-(void)setHome:(HMDHome *)arg1 ;
-(HMDHome *)home;
-(void)setBlocked:(BOOL)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(id)dumpState;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(void)_registerForMessages;
-(BOOL)isReachable;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(NSSet *)messageReceiverChildren;
-(id)logIdentifier;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)backingStoreObjects:(long long)arg1 ;
-(NSUUID *)contextSPIUniqueIdentifier;
-(HMDRoom *)room;
-(HMDApplicationRegistry *)appRegistry;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(HMDApplicationData *)appData;
-(void)setAppData:(HMDApplicationData *)arg1 ;
-(void)setReachable:(BOOL)arg1 ;
-(void)updateMediaSession:(id)arg1 ;
-(void)configure:(id)arg1 msgDispatcher:(id)arg2 accessoryConfigureGroup:(id)arg3 ;
-(BOOL)isPrimary;
-(BOOL)isCurrentAccessory;
-(id)runtimeState;
-(void)setRemotelyReachable:(BOOL)arg1 ;
-(HMDVendorModelEntry *)vendorInfo;
-(HMDAccessoryVersion *)firmwareVersion;
-(void)setPrimary:(BOOL)arg1 ;
-(id)transactionWithObjectChangeType:(unsigned long long)arg1 ;
-(void)setProvidedName:(NSString *)arg1 ;
-(NSString *)providedName;
-(void)setConfigurationAppIdentifier:(NSString *)arg1 ;
-(void)setFirmwareVersion:(HMDAccessoryVersion *)arg1 ;
-(NSString *)serialNumber;
-(void)setSerialNumber:(NSString *)arg1 ;
-(BOOL)shouldEnableDaemonRelaunch;
-(void)unconfigure;
-(id)messageDestination;
-(void)_handleRename:(id)arg1 ;
-(void)_handleSetAppData:(id)arg1 ;
-(void)updateRoom:(id)arg1 ;
-(BOOL)supportsTargetController;
-(id)initWithTransaction:(id)arg1 home:(id)arg2 ;
-(void)remoteAccessEnabled:(BOOL)arg1 ;
-(void)addAdvertisement:(id)arg1 ;
-(BOOL)supportsTargetControl;
-(void)autoConfigureTargetControllers;
-(id)getConfiguredName;
-(BOOL)isBlocked;
-(BOOL)unblockPending;
-(void)setUnblockPending:(BOOL)arg1 ;
-(void)unblockWithMessageIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(unsigned long long)accessoryReprovisionState;
-(void)setAccessoryReprovisionState:(unsigned long long)arg1 ;
-(BOOL)supportsUserManagement;
-(void)logDuetRoomEvent;
-(void)_remoteAccessEnabled:(BOOL)arg1 ;
-(BOOL)supportsMinimumUserPrivilege;
-(void)removeAdvertisement:(id)arg1 ;
-(void)didEncounterError:(id)arg1 ;
-(void)updateCategory:(id)arg1 ;
-(void)updateProvidedName:(id)arg1 ;
-(void)blockWithError:(id)arg1 ;
-(void)takeOwnershipOfAppData:(id)arg1 ;
-(id)assistantObject;
-(void)setAppRegistry:(HMDApplicationRegistry *)arg1 ;
-(NSString *)configuredName;
-(NSString *)configurationAppIdentifier;
-(id)_updateCategory:(id)arg1 notifyClients:(BOOL)arg2 ;
-(void)setConfiguredName:(NSString *)arg1 ;
-(void)_handleUpdateRoom:(id)arg1 ;
-(void)_handleGetAccessoryAdvertisingParams:(id)arg1 ;
-(void)_handleListPairings:(id)arg1 ;
-(void)_handleIdentify:(id)arg1 ;
-(void)_handlePairingIdentityRequest:(id)arg1 ;
-(BOOL)isRemoteAccessEnabled;
-(void)_relayIdentifyAccessorytoResidentForMessage:(id)arg1 ;
-(void)setRoom:(HMDRoom *)arg1 ;
-(NSArray *)accessoryProfiles;
-(void)setAccessoryProfiles:(NSArray *)arg1 ;
-(void)handleUpdatedName:(id)arg1 ;
-(void)handleReachabilityChange:(BOOL)arg1 ;
-(BOOL)isRemotelyReachable;
-(void)_notifyConnectivityChangedWithReachabilityState:(BOOL)arg1 remoteAccessChanged:(BOOL)arg2 ;
-(void)handleRemoteReachabilityChange:(BOOL)arg1 ;
-(long long)reachableTransports;
-(void)setRemoteAccessEnabled:(BOOL)arg1 ;
-(BOOL)isReachableForXPCClients;
-(void)_sendBlockedNotification:(BOOL)arg1 withError:(id)arg2 withIdentifier:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)appDataUpdated:(id)arg1 message:(id)arg2 ;
-(void)appDataRemoved:(id)arg1 message:(id)arg2 ;
-(BOOL)providesHashRouteID;
-(void)populateModelObject:(id)arg1 version:(long long)arg2 ;
-(void)registerForMessagesWithNewUUID:(id)arg1 ;
-(void)updateRoom:(id)arg1 message:(id)arg2 ;
-(id)_updateRoom:(id)arg1 message:(id*)arg2 ;
-(void)updateManufacturer:(id)arg1 model:(id)arg2 firmwareVersion:(id)arg3 serialNumber:(id)arg4 ;
-(void)notifyAccessoryNameChanged:(BOOL)arg1 ;
-(BOOL)requiresHomeAppForManagement;
-(id)updateAppData:(id)arg1 ;
-(void)addAccessoryProfile:(id)arg1 ;
-(void)removeAccessoryProfile:(id)arg1 ;
-(id)dumpSimpleState;
-(id)hashRouteID;
-(unsigned long long)configNumber;
-(void)setConfigNumber:(unsigned long long)arg1 ;
-(void)_createCameraProfiles:(id)arg1 ;
-(id)assistantUniqueIdentifier;
-(id)init;
-(void)dealloc;
-(NSString *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(NSString *)description;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSUUID *)uuid;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)url;
-(NSString *)contextID;
-(NSString *)model;
-(void)setCategory:(HMAccessoryCategory *)arg1 ;
-(HMAccessoryCategory *)category;
-(void)setCategoryIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)categoryIdentifier;
@end

