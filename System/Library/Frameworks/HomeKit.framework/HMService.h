/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:17 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/HMMutableApplicationData.h>

@class HMFUnfairLock, NSUUID, HMAccessory, NSString, HMApplicationData, HMBulletinBoardNotification, NSURL, _HMContext, NSNumber, NSArray, HMMutableArray;

@interface HMService : NSObject <HMFLogging, NSSecureCoding, HMObjectMerge, HMMutableApplicationData> {

	HMFUnfairLock* _lock;
	BOOL _userInteractive;
	BOOL _primaryService;
	NSUUID* _uniqueIdentifier;
	HMAccessory* _accessory;
	NSString* _serviceType;
	NSString* _name;
	NSString* _configuredName;
	NSString* _defaultName;
	NSString* _associatedServiceType;
	NSString* _serviceSubtype;
	long long _configurationState;
	HMApplicationData* _applicationData;
	HMBulletinBoardNotification* _bulletinBoardNotificationInternal;
	NSURL* _homeObjectURLInternal;
	_HMContext* _context;
	NSNumber* _instanceID;
	NSArray* _linkedServiceInstanceIDs;
	HMMutableArray* _currentCharacteristics;
	NSUUID* _uuid;

}

@property (nonatomic,retain) _HMContext * context;                                                           //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSNumber * instanceID;                                                        //@synthesize instanceID=_instanceID - In the implementation block
@property (assign,nonatomic,__weak) HMAccessory * accessory;                                                 //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                                           //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) NSString * name;                                                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * configuredName;                                                      //@synthesize configuredName=_configuredName - In the implementation block
@property (nonatomic,retain) NSString * defaultName;                                                         //@synthesize defaultName=_defaultName - In the implementation block
@property (nonatomic,copy) NSString * associatedServiceType;                                                 //@synthesize associatedServiceType=_associatedServiceType - In the implementation block
@property (nonatomic,copy) NSString * serviceSubtype;                                                        //@synthesize serviceSubtype=_serviceSubtype - In the implementation block
@property (assign,nonatomic) long long configurationState;                                                   //@synthesize configurationState=_configurationState - In the implementation block
@property (nonatomic,copy,readonly) NSArray * linkedServiceInstanceIDs;                                      //@synthesize linkedServiceInstanceIDs=_linkedServiceInstanceIDs - In the implementation block
@property (nonatomic,readonly) HMBulletinBoardNotification * bulletinBoardNotificationInternal;              //@synthesize bulletinBoardNotificationInternal=_bulletinBoardNotificationInternal - In the implementation block
@property (nonatomic,readonly) NSURL * homeObjectURLInternal;                                                //@synthesize homeObjectURLInternal=_homeObjectURLInternal - In the implementation block
@property (nonatomic,copy) HMMutableArray * currentCharacteristics;                                          //@synthesize currentCharacteristics=_currentCharacteristics - In the implementation block
@property (nonatomic,copy) NSUUID * uuid;                                                                    //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDescription; 
@property (nonatomic,copy,readonly) NSArray * characteristics; 
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                               //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (getter=isUserInteractive,nonatomic,readonly) BOOL userInteractive;                                //@synthesize userInteractive=_userInteractive - In the implementation block
@property (getter=isPrimaryService,nonatomic,readonly) BOOL primaryService;                                  //@synthesize primaryService=_primaryService - In the implementation block
@property (nonatomic,copy,readonly) NSArray * linkedServices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) HMApplicationData * applicationData; 
+(long long)_mapToServiceConfigurationStateFromIsConfiguredValue:(id)arg1 ;
+(id)_serviceTypeAsString:(id)arg1 ;
+(id)_mapToIsConfiguredValueFromServiceConfigurationState:(long long)arg1 ;
+(id)__localizedDescriptionForServiceType:(id)arg1 ;
+(id)localizedDescriptionForServiceType:(id)arg1 ;
+(id)logCategory;
+(BOOL)supportsSecureCoding;
-(NSString *)serviceType;
-(NSArray *)characteristics;
-(void)setServiceType:(NSString *)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_findCharacteristic:(id)arg1 ;
-(void)__configureWithContext:(id)arg1 accessory:(id)arg2 ;
-(void)_addCharacteristic:(id)arg1 ;
-(void)_handleMarkServiceInteractive:(id)arg1 ;
-(void)_handleUpdateName:(id)arg1 ;
-(void)_handleUpdateConfiguredName:(id)arg1 ;
-(void)_handleUpdateDefaultName:(id)arg1 ;
-(void)_handleUpdateServiceSubtype:(id)arg1 ;
-(void)_handleUpdateConfigurationState:(long long)arg1 ;
-(id)homeObjectURL;
-(HMBulletinBoardNotification *)bulletinBoardNotificationInternal;
-(HMMutableArray *)currentCharacteristics;
-(NSURL *)homeObjectURLInternal;
-(void)_updateAssociatedServiceType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateConfigurationState:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDefaultName:(NSString *)arg1 ;
-(BOOL)isUserInteractive;
-(BOOL)_hasCharacteristic:(id)arg1 ;
-(id)_serviceTypeDescription;
-(BOOL)_hasCharacteristicOfType:(id)arg1 ;
-(BOOL)isPrimaryService;
-(NSArray *)linkedServiceInstanceIDs;
-(void)setCurrentCharacteristics:(HMMutableArray *)arg1 ;
-(void)updateApplicationData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateAssociatedServiceType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateConfigurationState:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)logIdentifier;
-(HMAccessory *)accessory;
-(NSNumber *)instanceID;
-(id)bulletinBoardNotification;
-(long long)configurationState;
-(void)_removeCharacteristic:(id)arg1 ;
-(NSArray *)linkedServices;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(void)setConfigurationState:(long long)arg1 ;
-(NSString *)serviceSubtype;
-(void)setServiceSubtype:(NSString *)arg1 ;
-(NSString *)configuredName;
-(void)setConfiguredName:(NSString *)arg1 ;
-(void)_handleUpdateAssociatedServiceType:(id)arg1 ;
-(void)setAssociatedServiceType:(NSString *)arg1 ;
-(HMApplicationData *)applicationData;
-(void)setApplicationData:(HMApplicationData *)arg1 ;
-(NSString *)associatedServiceType;
-(NSString *)defaultName;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSUUID *)uuid;
-(void)setContext:(_HMContext *)arg1 ;
-(_HMContext *)context;
-(NSString *)localizedDescription;
-(NSUUID *)uniqueIdentifier;
@end

