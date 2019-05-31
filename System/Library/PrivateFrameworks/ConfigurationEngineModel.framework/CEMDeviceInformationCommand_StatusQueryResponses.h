/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:17 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, CEMDeviceInformationCommand_StatusQueryResponsesOrganizationInfo, NSDate, NSNumber, NSArray, CEMDeviceInformationCommand_StatusQueryResponsesOSUpdateSettings;

@interface CEMDeviceInformationCommand_StatusQueryResponses : CEMPayloadBase {

	NSString* _statusUDID;
	CEMDeviceInformationCommand_StatusQueryResponsesOrganizationInfo* _statusOrganizationInfo;
	NSString* _statusMDMOptions;
	NSDate* _statusLastCloudBackupDate;
	NSNumber* _statusAwaitingConfiguration;
	NSNumber* _statusITunesStoreAccountIsActive;
	NSString* _statusITunesStoreAccountHash;
	NSString* _statusDeviceName;
	NSString* _statusOSVersion;
	NSString* _statusBuildVersion;
	NSString* _statusModelName;
	NSString* _statusModel;
	NSString* _statusProductName;
	NSString* _statusMarketingName;
	NSString* _statusSerialNumber;
	NSNumber* _statusDeviceCapacity;
	NSNumber* _statusAvailableDeviceCapacity;
	NSString* _statusIMEI;
	NSString* _statusMEID;
	NSString* _statusModemFirmwareVersion;
	NSNumber* _statusCellularTechnology;
	NSNumber* _statusBatteryLevel;
	NSNumber* _statusIsSupervised;
	NSNumber* _statusIsMultiUser;
	NSNumber* _statusIsDeviceLocatorServiceEnabled;
	NSNumber* _statusIsActivationLockEnabled;
	NSNumber* _statusIsDoNotDisturbInEffect;
	NSString* _statusDeviceID;
	NSString* _statusEASDeviceIdentifier;
	NSNumber* _statusIsCloudBackupEnabled;
	NSArray* _statusActiveManagedUsers;
	CEMDeviceInformationCommand_StatusQueryResponsesOSUpdateSettings* _statusOSUpdateSettings;
	NSArray* _statusAutoSetupAdminAccounts;
	NSNumber* _statusSystemIntegrityProtectionEnabled;
	NSNumber* _statusIsMDMLostModeEnabled;
	NSNumber* _statusMaximumResidentUsers;
	NSString* _statusPushToken;
	NSNumber* _statusDiagnosticSubmissionEnabled;
	NSNumber* _statusAppAnalyticsEnabled;
	NSString* _statusICCID;
	NSString* _statusBluetoothMAC;
	NSString* _statusWiFiMAC;
	NSArray* _statusEthernetMACs;
	NSString* _statusCurrentCarrierNetwork;
	NSString* _statusSIMCarrierNetwork;
	NSString* _statusSubscriberCarrierNetwork;
	NSString* _statusCarrierSettingsVersion;
	NSString* _statusPhoneNumber;
	NSNumber* _statusDataRoamingEnabled;
	NSNumber* _statusVoiceRoamingEnabled;
	NSNumber* _statusPersonalHotspotEnabled;
	NSNumber* _statusIsNetworkTethered;
	NSNumber* _statusIsRoaming;
	NSString* _statusSIMMCC;
	NSString* _statusSIMMNC;
	NSString* _statusSubscriberMCC;
	NSString* _statusSubscriberMNC;
	NSString* _statusCurrentMCC;
	NSString* _statusCurrentMNC;

}

@property (nonatomic,copy) NSString * statusUDID;                                                                                  //@synthesize statusUDID=_statusUDID - In the implementation block
@property (nonatomic,copy) CEMDeviceInformationCommand_StatusQueryResponsesOrganizationInfo * statusOrganizationInfo;              //@synthesize statusOrganizationInfo=_statusOrganizationInfo - In the implementation block
@property (nonatomic,copy) NSString * statusMDMOptions;                                                                            //@synthesize statusMDMOptions=_statusMDMOptions - In the implementation block
@property (nonatomic,copy) NSDate * statusLastCloudBackupDate;                                                                     //@synthesize statusLastCloudBackupDate=_statusLastCloudBackupDate - In the implementation block
@property (nonatomic,copy) NSNumber * statusAwaitingConfiguration;                                                                 //@synthesize statusAwaitingConfiguration=_statusAwaitingConfiguration - In the implementation block
@property (nonatomic,copy) NSNumber * statusITunesStoreAccountIsActive;                                                            //@synthesize statusITunesStoreAccountIsActive=_statusITunesStoreAccountIsActive - In the implementation block
@property (nonatomic,copy) NSString * statusITunesStoreAccountHash;                                                                //@synthesize statusITunesStoreAccountHash=_statusITunesStoreAccountHash - In the implementation block
@property (nonatomic,copy) NSString * statusDeviceName;                                                                            //@synthesize statusDeviceName=_statusDeviceName - In the implementation block
@property (nonatomic,copy) NSString * statusOSVersion;                                                                             //@synthesize statusOSVersion=_statusOSVersion - In the implementation block
@property (nonatomic,copy) NSString * statusBuildVersion;                                                                          //@synthesize statusBuildVersion=_statusBuildVersion - In the implementation block
@property (nonatomic,copy) NSString * statusModelName;                                                                             //@synthesize statusModelName=_statusModelName - In the implementation block
@property (nonatomic,copy) NSString * statusModel;                                                                                 //@synthesize statusModel=_statusModel - In the implementation block
@property (nonatomic,copy) NSString * statusProductName;                                                                           //@synthesize statusProductName=_statusProductName - In the implementation block
@property (nonatomic,copy) NSString * statusMarketingName;                                                                         //@synthesize statusMarketingName=_statusMarketingName - In the implementation block
@property (nonatomic,copy) NSString * statusSerialNumber;                                                                          //@synthesize statusSerialNumber=_statusSerialNumber - In the implementation block
@property (nonatomic,copy) NSNumber * statusDeviceCapacity;                                                                        //@synthesize statusDeviceCapacity=_statusDeviceCapacity - In the implementation block
@property (nonatomic,copy) NSNumber * statusAvailableDeviceCapacity;                                                               //@synthesize statusAvailableDeviceCapacity=_statusAvailableDeviceCapacity - In the implementation block
@property (nonatomic,copy) NSString * statusIMEI;                                                                                  //@synthesize statusIMEI=_statusIMEI - In the implementation block
@property (nonatomic,copy) NSString * statusMEID;                                                                                  //@synthesize statusMEID=_statusMEID - In the implementation block
@property (nonatomic,copy) NSString * statusModemFirmwareVersion;                                                                  //@synthesize statusModemFirmwareVersion=_statusModemFirmwareVersion - In the implementation block
@property (nonatomic,copy) NSNumber * statusCellularTechnology;                                                                    //@synthesize statusCellularTechnology=_statusCellularTechnology - In the implementation block
@property (nonatomic,copy) NSNumber * statusBatteryLevel;                                                                          //@synthesize statusBatteryLevel=_statusBatteryLevel - In the implementation block
@property (nonatomic,copy) NSNumber * statusIsSupervised;                                                                          //@synthesize statusIsSupervised=_statusIsSupervised - In the implementation block
@property (nonatomic,copy) NSNumber * statusIsMultiUser;                                                                           //@synthesize statusIsMultiUser=_statusIsMultiUser - In the implementation block
@property (nonatomic,copy) NSNumber * statusIsDeviceLocatorServiceEnabled;                                                         //@synthesize statusIsDeviceLocatorServiceEnabled=_statusIsDeviceLocatorServiceEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * statusIsActivationLockEnabled;                                                               //@synthesize statusIsActivationLockEnabled=_statusIsActivationLockEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * statusIsDoNotDisturbInEffect;                                                                //@synthesize statusIsDoNotDisturbInEffect=_statusIsDoNotDisturbInEffect - In the implementation block
@property (nonatomic,copy) NSString * statusDeviceID;                                                                              //@synthesize statusDeviceID=_statusDeviceID - In the implementation block
@property (nonatomic,copy) NSString * statusEASDeviceIdentifier;                                                                   //@synthesize statusEASDeviceIdentifier=_statusEASDeviceIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * statusIsCloudBackupEnabled;                                                                  //@synthesize statusIsCloudBackupEnabled=_statusIsCloudBackupEnabled - In the implementation block
@property (nonatomic,copy) NSArray * statusActiveManagedUsers;                                                                     //@synthesize statusActiveManagedUsers=_statusActiveManagedUsers - In the implementation block
@property (nonatomic,copy) CEMDeviceInformationCommand_StatusQueryResponsesOSUpdateSettings * statusOSUpdateSettings;              //@synthesize statusOSUpdateSettings=_statusOSUpdateSettings - In the implementation block
@property (nonatomic,copy) NSArray * statusAutoSetupAdminAccounts;                                                                 //@synthesize statusAutoSetupAdminAccounts=_statusAutoSetupAdminAccounts - In the implementation block
@property (nonatomic,copy) NSNumber * statusSystemIntegrityProtectionEnabled;                                                      //@synthesize statusSystemIntegrityProtectionEnabled=_statusSystemIntegrityProtectionEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * statusIsMDMLostModeEnabled;                                                                  //@synthesize statusIsMDMLostModeEnabled=_statusIsMDMLostModeEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * statusMaximumResidentUsers;                                                                  //@synthesize statusMaximumResidentUsers=_statusMaximumResidentUsers - In the implementation block
@property (nonatomic,copy) NSString * statusPushToken;                                                                             //@synthesize statusPushToken=_statusPushToken - In the implementation block
@property (nonatomic,copy) NSNumber * statusDiagnosticSubmissionEnabled;                                                           //@synthesize statusDiagnosticSubmissionEnabled=_statusDiagnosticSubmissionEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * statusAppAnalyticsEnabled;                                                                   //@synthesize statusAppAnalyticsEnabled=_statusAppAnalyticsEnabled - In the implementation block
@property (nonatomic,copy) NSString * statusICCID;                                                                                 //@synthesize statusICCID=_statusICCID - In the implementation block
@property (nonatomic,copy) NSString * statusBluetoothMAC;                                                                          //@synthesize statusBluetoothMAC=_statusBluetoothMAC - In the implementation block
@property (nonatomic,copy) NSString * statusWiFiMAC;                                                                               //@synthesize statusWiFiMAC=_statusWiFiMAC - In the implementation block
@property (nonatomic,copy) NSArray * statusEthernetMACs;                                                                           //@synthesize statusEthernetMACs=_statusEthernetMACs - In the implementation block
@property (nonatomic,copy) NSString * statusCurrentCarrierNetwork;                                                                 //@synthesize statusCurrentCarrierNetwork=_statusCurrentCarrierNetwork - In the implementation block
@property (nonatomic,copy) NSString * statusSIMCarrierNetwork;                                                                     //@synthesize statusSIMCarrierNetwork=_statusSIMCarrierNetwork - In the implementation block
@property (nonatomic,copy) NSString * statusSubscriberCarrierNetwork;                                                              //@synthesize statusSubscriberCarrierNetwork=_statusSubscriberCarrierNetwork - In the implementation block
@property (nonatomic,copy) NSString * statusCarrierSettingsVersion;                                                                //@synthesize statusCarrierSettingsVersion=_statusCarrierSettingsVersion - In the implementation block
@property (nonatomic,copy) NSString * statusPhoneNumber;                                                                           //@synthesize statusPhoneNumber=_statusPhoneNumber - In the implementation block
@property (nonatomic,copy) NSNumber * statusDataRoamingEnabled;                                                                    //@synthesize statusDataRoamingEnabled=_statusDataRoamingEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * statusVoiceRoamingEnabled;                                                                   //@synthesize statusVoiceRoamingEnabled=_statusVoiceRoamingEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * statusPersonalHotspotEnabled;                                                                //@synthesize statusPersonalHotspotEnabled=_statusPersonalHotspotEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * statusIsNetworkTethered;                                                                     //@synthesize statusIsNetworkTethered=_statusIsNetworkTethered - In the implementation block
@property (nonatomic,copy) NSNumber * statusIsRoaming;                                                                             //@synthesize statusIsRoaming=_statusIsRoaming - In the implementation block
@property (nonatomic,copy) NSString * statusSIMMCC;                                                                                //@synthesize statusSIMMCC=_statusSIMMCC - In the implementation block
@property (nonatomic,copy) NSString * statusSIMMNC;                                                                                //@synthesize statusSIMMNC=_statusSIMMNC - In the implementation block
@property (nonatomic,copy) NSString * statusSubscriberMCC;                                                                         //@synthesize statusSubscriberMCC=_statusSubscriberMCC - In the implementation block
@property (nonatomic,copy) NSString * statusSubscriberMNC;                                                                         //@synthesize statusSubscriberMNC=_statusSubscriberMNC - In the implementation block
@property (nonatomic,copy) NSString * statusCurrentMCC;                                                                            //@synthesize statusCurrentMCC=_statusCurrentMCC - In the implementation block
@property (nonatomic,copy) NSString * statusCurrentMNC;                                                                            //@synthesize statusCurrentMNC=_statusCurrentMNC - In the implementation block
+(id)allowedStatusKeys;
+(id)buildRequiredOnly;
+(id)buildWithUDID:(id)arg1 withOrganizationInfo:(id)arg2 withMDMOptions:(id)arg3 withLastCloudBackupDate:(id)arg4 withAwaitingConfiguration:(id)arg5 withITunesStoreAccountIsActive:(id)arg6 withITunesStoreAccountHash:(id)arg7 withDeviceName:(id)arg8 withOSVersion:(id)arg9 withBuildVersion:(id)arg10 withModelName:(id)arg11 withModel:(id)arg12 withProductName:(id)arg13 withMarketingName:(id)arg14 withSerialNumber:(id)arg15 withDeviceCapacity:(id)arg16 withAvailableDeviceCapacity:(id)arg17 withIMEI:(id)arg18 withMEID:(id)arg19 withModemFirmwareVersion:(id)arg20 withCellularTechnology:(id)arg21 withBatteryLevel:(id)arg22 withIsSupervised:(id)arg23 withIsMultiUser:(id)arg24 withIsDeviceLocatorServiceEnabled:(id)arg25 withIsActivationLockEnabled:(id)arg26 withIsDoNotDisturbInEffect:(id)arg27 withDeviceID:(id)arg28 withEASDeviceIdentifier:(id)arg29 withIsCloudBackupEnabled:(id)arg30 withActiveManagedUsers:(id)arg31 withOSUpdateSettings:(id)arg32 withAutoSetupAdminAccounts:(id)arg33 withSystemIntegrityProtectionEnabled:(id)arg34 withIsMDMLostModeEnabled:(id)arg35 withMaximumResidentUsers:(id)arg36 withPushToken:(id)arg37 withDiagnosticSubmissionEnabled:(id)arg38 withAppAnalyticsEnabled:(id)arg39 withICCID:(id)arg40 withBluetoothMAC:(id)arg41 withWiFiMAC:(id)arg42 withEthernetMACs:(id)arg43 withCurrentCarrierNetwork:(id)arg44 withSIMCarrierNetwork:(id)arg45 withSubscriberCarrierNetwork:(id)arg46 withCarrierSettingsVersion:(id)arg47 withPhoneNumber:(id)arg48 withDataRoamingEnabled:(id)arg49 withVoiceRoamingEnabled:(id)arg50 withPersonalHotspotEnabled:(id)arg51 withIsNetworkTethered:(id)arg52 withIsRoaming:(id)arg53 withSIMMCC:(id)arg54 withSIMMNC:(id)arg55 withSubscriberMCC:(id)arg56 withSubscriberMNC:(id)arg57 withCurrentMCC:(id)arg58 withCurrentMNC:(id)arg59 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusUDID:(NSString *)arg1 ;
-(void)setStatusOrganizationInfo:(CEMDeviceInformationCommand_StatusQueryResponsesOrganizationInfo *)arg1 ;
-(void)setStatusMDMOptions:(NSString *)arg1 ;
-(void)setStatusLastCloudBackupDate:(NSDate *)arg1 ;
-(void)setStatusAwaitingConfiguration:(NSNumber *)arg1 ;
-(void)setStatusITunesStoreAccountIsActive:(NSNumber *)arg1 ;
-(void)setStatusITunesStoreAccountHash:(NSString *)arg1 ;
-(void)setStatusDeviceName:(NSString *)arg1 ;
-(void)setStatusOSVersion:(NSString *)arg1 ;
-(void)setStatusBuildVersion:(NSString *)arg1 ;
-(void)setStatusModelName:(NSString *)arg1 ;
-(void)setStatusModel:(NSString *)arg1 ;
-(void)setStatusProductName:(NSString *)arg1 ;
-(void)setStatusMarketingName:(NSString *)arg1 ;
-(void)setStatusSerialNumber:(NSString *)arg1 ;
-(void)setStatusDeviceCapacity:(NSNumber *)arg1 ;
-(void)setStatusAvailableDeviceCapacity:(NSNumber *)arg1 ;
-(void)setStatusIMEI:(NSString *)arg1 ;
-(void)setStatusMEID:(NSString *)arg1 ;
-(void)setStatusModemFirmwareVersion:(NSString *)arg1 ;
-(void)setStatusCellularTechnology:(NSNumber *)arg1 ;
-(void)setStatusBatteryLevel:(NSNumber *)arg1 ;
-(void)setStatusIsSupervised:(NSNumber *)arg1 ;
-(void)setStatusIsMultiUser:(NSNumber *)arg1 ;
-(void)setStatusIsDeviceLocatorServiceEnabled:(NSNumber *)arg1 ;
-(void)setStatusIsActivationLockEnabled:(NSNumber *)arg1 ;
-(void)setStatusIsDoNotDisturbInEffect:(NSNumber *)arg1 ;
-(void)setStatusDeviceID:(NSString *)arg1 ;
-(void)setStatusEASDeviceIdentifier:(NSString *)arg1 ;
-(void)setStatusIsCloudBackupEnabled:(NSNumber *)arg1 ;
-(void)setStatusActiveManagedUsers:(NSArray *)arg1 ;
-(void)setStatusOSUpdateSettings:(CEMDeviceInformationCommand_StatusQueryResponsesOSUpdateSettings *)arg1 ;
-(void)setStatusAutoSetupAdminAccounts:(NSArray *)arg1 ;
-(void)setStatusSystemIntegrityProtectionEnabled:(NSNumber *)arg1 ;
-(void)setStatusIsMDMLostModeEnabled:(NSNumber *)arg1 ;
-(void)setStatusMaximumResidentUsers:(NSNumber *)arg1 ;
-(void)setStatusPushToken:(NSString *)arg1 ;
-(void)setStatusDiagnosticSubmissionEnabled:(NSNumber *)arg1 ;
-(void)setStatusAppAnalyticsEnabled:(NSNumber *)arg1 ;
-(void)setStatusICCID:(NSString *)arg1 ;
-(void)setStatusBluetoothMAC:(NSString *)arg1 ;
-(void)setStatusWiFiMAC:(NSString *)arg1 ;
-(void)setStatusEthernetMACs:(NSArray *)arg1 ;
-(void)setStatusCurrentCarrierNetwork:(NSString *)arg1 ;
-(void)setStatusSIMCarrierNetwork:(NSString *)arg1 ;
-(void)setStatusSubscriberCarrierNetwork:(NSString *)arg1 ;
-(void)setStatusCarrierSettingsVersion:(NSString *)arg1 ;
-(void)setStatusPhoneNumber:(NSString *)arg1 ;
-(void)setStatusDataRoamingEnabled:(NSNumber *)arg1 ;
-(void)setStatusVoiceRoamingEnabled:(NSNumber *)arg1 ;
-(void)setStatusPersonalHotspotEnabled:(NSNumber *)arg1 ;
-(void)setStatusIsNetworkTethered:(NSNumber *)arg1 ;
-(void)setStatusIsRoaming:(NSNumber *)arg1 ;
-(void)setStatusSIMMCC:(NSString *)arg1 ;
-(void)setStatusSIMMNC:(NSString *)arg1 ;
-(void)setStatusSubscriberMCC:(NSString *)arg1 ;
-(void)setStatusSubscriberMNC:(NSString *)arg1 ;
-(void)setStatusCurrentMCC:(NSString *)arg1 ;
-(void)setStatusCurrentMNC:(NSString *)arg1 ;
-(NSString *)statusUDID;
-(CEMDeviceInformationCommand_StatusQueryResponsesOrganizationInfo *)statusOrganizationInfo;
-(NSString *)statusMDMOptions;
-(NSDate *)statusLastCloudBackupDate;
-(NSNumber *)statusAwaitingConfiguration;
-(NSNumber *)statusITunesStoreAccountIsActive;
-(NSString *)statusITunesStoreAccountHash;
-(NSString *)statusDeviceName;
-(NSString *)statusOSVersion;
-(NSString *)statusBuildVersion;
-(NSString *)statusModelName;
-(NSString *)statusModel;
-(NSString *)statusProductName;
-(NSString *)statusMarketingName;
-(NSString *)statusSerialNumber;
-(NSNumber *)statusDeviceCapacity;
-(NSNumber *)statusAvailableDeviceCapacity;
-(NSString *)statusIMEI;
-(NSString *)statusMEID;
-(NSString *)statusModemFirmwareVersion;
-(NSNumber *)statusCellularTechnology;
-(NSNumber *)statusBatteryLevel;
-(NSNumber *)statusIsSupervised;
-(NSNumber *)statusIsMultiUser;
-(NSNumber *)statusIsDeviceLocatorServiceEnabled;
-(NSNumber *)statusIsActivationLockEnabled;
-(NSNumber *)statusIsDoNotDisturbInEffect;
-(NSString *)statusDeviceID;
-(NSString *)statusEASDeviceIdentifier;
-(NSNumber *)statusIsCloudBackupEnabled;
-(NSArray *)statusActiveManagedUsers;
-(CEMDeviceInformationCommand_StatusQueryResponsesOSUpdateSettings *)statusOSUpdateSettings;
-(NSArray *)statusAutoSetupAdminAccounts;
-(NSNumber *)statusSystemIntegrityProtectionEnabled;
-(NSNumber *)statusIsMDMLostModeEnabled;
-(NSNumber *)statusMaximumResidentUsers;
-(NSString *)statusPushToken;
-(NSNumber *)statusDiagnosticSubmissionEnabled;
-(NSNumber *)statusAppAnalyticsEnabled;
-(NSString *)statusICCID;
-(NSString *)statusBluetoothMAC;
-(NSString *)statusWiFiMAC;
-(NSArray *)statusEthernetMACs;
-(NSString *)statusCurrentCarrierNetwork;
-(NSString *)statusSIMCarrierNetwork;
-(NSString *)statusSubscriberCarrierNetwork;
-(NSString *)statusCarrierSettingsVersion;
-(NSString *)statusPhoneNumber;
-(NSNumber *)statusDataRoamingEnabled;
-(NSNumber *)statusVoiceRoamingEnabled;
-(NSNumber *)statusPersonalHotspotEnabled;
-(NSNumber *)statusIsNetworkTethered;
-(NSNumber *)statusIsRoaming;
-(NSString *)statusSIMMCC;
-(NSString *)statusSIMMNC;
-(NSString *)statusSubscriberMCC;
-(NSString *)statusSubscriberMNC;
-(NSString *)statusCurrentMCC;
-(NSString *)statusCurrentMNC;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

