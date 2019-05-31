/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:00 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDBulletinIdentifiers.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>

@protocol OS_dispatch_queue;
@class NSString, NSUUID, NSSet, HMDHome, HMDUser, HMDDevice, NSMutableArray, NSMutableDictionary, NSObject, HMFMessageDispatcher, NSDate, NSDictionary, NSArray;

@interface HMDTrigger : HMFObject <HMDBulletinIdentifiers, HMDHomeMessageReceiver, NSSecureCoding, HMFDumpState, HMFLogging, HMDBackingStoreObjectProtocol> {

	BOOL _active;
	NSString* _name;
	NSUUID* _uuid;
	HMDHome* _home;
	HMDUser* _owner;
	HMDDevice* _owningDevice;
	NSMutableArray* _actionSetUUIDs;
	NSMutableDictionary* _actionSetMappings;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFMessageDispatcher* _msgDispatcher;
	unsigned long long _triggerType;
	NSDate* _mostRecentFireDate;

}

@property (nonatomic,readonly) NSDictionary * actionContext; 
@property (nonatomic,readonly) NSDictionary * bulletinContext; 
@property (nonatomic,copy,readonly) NSString * contextID; 
@property (nonatomic,copy,readonly) NSUUID * contextSPIUniqueIdentifier; 
@property (nonatomic,retain) NSMutableArray * actionSetUUIDs;                                  //@synthesize actionSetUUIDs=_actionSetUUIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * actionSetMappings;                          //@synthesize actionSetMappings=_actionSetMappings - In the implementation block
@property (nonatomic,readonly) NSArray * actionSets; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                           //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                             //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (assign,nonatomic) BOOL active;                                                      //@synthesize active=_active - In the implementation block
@property (getter=isConfigured,nonatomic,readonly) BOOL configured; 
@property (assign,nonatomic) unsigned long long triggerType;                                   //@synthesize triggerType=_triggerType - In the implementation block
@property (nonatomic,copy) NSDate * mostRecentFireDate;                                        //@synthesize mostRecentFireDate=_mostRecentFireDate - In the implementation block
@property (nonatomic,retain) NSString * name;                                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                    //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                            //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) HMDUser * owner;                                                  //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) HMDDevice * owningDevice;                                         //@synthesize owningDevice=_owningDevice - In the implementation block
@property (getter=isOwnedByThisDevice,nonatomic,readonly) BOOL ownedByThisDevice; 
@property (nonatomic,readonly) BOOL requiresDataVersion4; 
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
-(void)setHome:(HMDHome *)arg1 ;
-(HMDHome *)home;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSDictionary *)actionContext;
-(id)initWithName:(id)arg1 uuid:(id)arg2 ;
-(NSDate *)mostRecentFireDate;
-(HMDDevice *)owningDevice;
-(void)_actionSetsUpdated:(id)arg1 message:(id)arg2 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(BOOL)shouldActivateOnLocalDevice;
-(NSArray *)actionSets;
-(id)dumpState;
-(NSMutableDictionary *)actionSetMappings;
-(id)emptyModelObject;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateActionSetRequest:(id)arg1 postUpdate:(BOOL)arg2 ;
-(void)checkForNoActions;
-(void)setMostRecentFireDate:(NSDate *)arg1 ;
-(void)sendTriggerFiredNotification:(id)arg1 ;
-(BOOL)_isTriggerFiredNotificationEntitled;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(void)_registerForMessages;
-(void)removeActionSet:(id)arg1 postUpdate:(BOOL)arg2 ;
-(NSMutableArray *)actionSetUUIDs;
-(BOOL)isConfigured;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)markChangedForMessage:(id)arg1 triggerModel:(id)arg2 ;
-(BOOL)modelContainsTriggerFired:(id)arg1 ;
-(id)updateEventTriggerMessage:(int)arg1 message:(id)arg2 relay:(BOOL)arg3 ;
-(void)_renameRequest:(id)arg1 ;
-(void)_handleAddTriggerOwnedActionSetRequest:(id)arg1 ;
-(void)_handleRemoveTriggerOwnedActionSetRequest:(id)arg1 postUpdate:(BOOL)arg2 ;
-(void)_handleAddActionSetRequest:(id)arg1 ;
-(void)_handleRemoveActionSetRequest:(id)arg1 postUpdate:(BOOL)arg2 ;
-(void)_activateTriggerRequest:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 message:(id)arg2 ;
-(void)_executeActionSets:(id)arg1 captureCurrentState:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_handleRenameRequest:(id)arg1 ;
-(void)_handleUpdateActionSetRequest:(id)arg1 postUpdate:(BOOL)arg2 ;
-(void)_handleActivateTriggerRequest:(id)arg1 ;
-(void)setOwningDevice:(HMDDevice *)arg1 ;
-(void)_recentFireDateUpdated:(id)arg1 ;
-(void)setActionSetUUIDs:(NSMutableArray *)arg1 ;
-(BOOL)shouldEncodeLastFireDate:(id)arg1 ;
-(void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)_transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(id)arg2 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(NSSet *)messageReceiverChildren;
-(id)logIdentifier;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)initWithModel:(id)arg1 home:(id)arg2 message:(id)arg3 ;
-(unsigned long long)triggerType;
-(BOOL)requiresDataVersion4;
-(BOOL)compatible:(id)arg1 user:(id)arg2 ;
-(void)removeAccessory:(id)arg1 ;
-(void)removeService:(id)arg1 ;
-(void)removeCharacteristic:(id)arg1 ;
-(void)fixupForReplacementAccessory:(id)arg1 ;
-(void)reEvaluate;
-(void)triggerFired;
-(void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3 ;
-(BOOL)isOwnedByThisDevice;
-(void)activateAfterResidentChangeWithCompletion:(/*^block*/id)arg1 ;
-(void)markChangedForMessage:(id)arg1 ;
-(void)_activate:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_executeActionSetsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)userDidConfirmExecute:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_fillBaseObjectChangeModel:(id)arg1 ;
-(void)_handleTriggerUpdate:(id)arg1 message:(id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)backingStoreObjects:(long long)arg1 ;
-(void)setActionSetMappings:(NSMutableDictionary *)arg1 ;
-(void)setTriggerType:(unsigned long long)arg1 ;
-(NSUUID *)contextSPIUniqueIdentifier;
-(NSDictionary *)bulletinContext;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)description;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSUUID *)uuid;
-(void)setActive:(BOOL)arg1 ;
-(void)invalidate;
-(BOOL)active;
-(NSString *)contextID;
-(void)timerFired:(id)arg1 ;
-(HMDUser *)owner;
-(void)setOwner:(HMDUser *)arg1 ;
@end

