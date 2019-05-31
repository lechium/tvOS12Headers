/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NRRegistryClient.h>
#import <libobjc.A.dylib/NRPairedDeviceRegistryXPCFrameworkDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSMutableArray;

@interface NRPairedDeviceRegistry : NRRegistryClient <NRPairedDeviceRegistryXPCFrameworkDelegate> {

	BOOL _disconnected;
	unsigned short _lastCompatibilityState;
	NSMutableDictionary* _legacyDevices;
	NSObject*<OS_dispatch_queue> _legacyDevicesQueue;
	NSObject*<OS_dispatch_queue> _legacyDevicesQueueFirst;
	unsigned long long _lastStatus;
	NSMutableArray* _waitingToPairBlocks;

}

@property (nonatomic,retain) NSMutableDictionary * legacyDevices;                               //@synthesize legacyDevices=_legacyDevices - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> legacyDevicesQueue;                   //@synthesize legacyDevicesQueue=_legacyDevicesQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> legacyDevicesQueueFirst;              //@synthesize legacyDevicesQueueFirst=_legacyDevicesQueueFirst - In the implementation block
@property (assign,nonatomic) unsigned long long lastStatus;                                     //@synthesize lastStatus=_lastStatus - In the implementation block
@property (assign,nonatomic) unsigned short lastCompatibilityState;                             //@synthesize lastCompatibilityState=_lastCompatibilityState - In the implementation block
@property (nonatomic,retain) NSMutableArray * waitingToPairBlocks;                              //@synthesize waitingToPairBlocks=_waitingToPairBlocks - In the implementation block
@property (nonatomic,readonly) unsigned long long status; 
+(Class)proxyClass;
+(BOOL)shouldBoostProcess;
+(/*^block*/id)pairedDevicesSelectorBlock;
+(/*^block*/id)activePairedDeviceSelectorBlock;
+(/*^block*/id)activeDeviceSelectorBlock;
+(id)sharedInstance;
-(id)getDevices;
-(void)endDiscovery;
-(void)beginDiscovery;
-(unsigned long long)lastStatus;
-(void)setLastStatus:(unsigned long long)arg1 ;
-(id)getAllDevices;
-(void)xpcDeviceID:(id)arg1 needsPasscode:(id)arg2 ;
-(void)xpcHasNewOOBKey:(id)arg1 ;
-(BOOL)supportsWatch;
-(long long)maxPairingCompatibilityVersion;
-(long long)minPairingCompatibilityVersion;
-(long long)minQuickSwitchCompatibilityVersion;
-(long long)pairingCompatibilityVersion;
-(long long)maxPairedDeviceCount;
-(void)setActivePairedDevice:(id)arg1 isMagicSwitch:(BOOL)arg2 operationHasCompleted:(/*^block*/id)arg3 ;
-(id)initWithBoost:(BOOL)arg1 ;
-(id)initWithBoost:(BOOL)arg1 disconnected:(BOOL)arg2 ;
-(void)_fireChangeNotificationsForDiff:(id)arg1 collection:(id)arg2 secureProperties:(id)arg3 index:(unsigned long long)arg4 notify:(BOOL)arg5 ;
-(void)_fireWaitingToPairBlocks;
-(unsigned long long)_getStatusWithCollection:(id)arg1 ;
-(unsigned short)_getCompatibilityStateWithCollection:(id)arg1 ;
-(id)_legacyDevicesWithCollection:(id)arg1 secureProperties:(id)arg2 ;
-(void)sendDevicesUpdatedNotification;
-(void)_postNotification:(id)arg1 forDeviceID:(id)arg2 withUserInfo:(id)arg3 ;
-(void)_fireCompatibilityStateChangedNotificationWithCollection:(id)arg1 ;
-(void)_fireStatusChangedNotificationWithCollection:(id)arg1 ;
-(void)_fireCompatibilityStateStatusNotificationsWithCollection:(id)arg1 ;
-(void)threadIsBlockedWaitingOn_nanoregistryd_syncGrabLegacyRegistryWithBlock:(/*^block*/id)arg1 ;
-(id)getDevicesMatching:(/*^block*/id)arg1 ;
-(id)getAllDevicesWithArchivedDevicesMatching:(/*^block*/id)arg1 ;
-(void)getDevicesWithBlock:(/*^block*/id)arg1 ;
-(void)unpairWithDevice:(id)arg1 withOptions:(id)arg2 operationHasBegun:(/*^block*/id)arg3 ;
-(void)pairingStorePathPairingID:(/*^block*/id)arg1 ;
-(void)waitForPairingStorePathPairingID:(/*^block*/id)arg1 ;
-(void)abortPairingWithReason:(id)arg1 ;
-(id)deviceForBluetoothID:(id)arg1 ;
-(id)deviceIDForIDSDevice:(id)arg1 ;
-(id)deviceForBTDeviceID:(id)arg1 ;
-(id)deviceIDForNRDevice:(id)arg1 ;
-(id)_deviceIDAtSwitchIndex:(unsigned)arg1 date:(id*)arg2 ;
-(unsigned)switchIndex;
-(void)_getSwitchEventsFromIndex:(unsigned)arg1 toIndex:(unsigned)arg2 inlineCallback:(/*^block*/id)arg3 ;
-(void)setMigrationConsented:(BOOL)arg1 forDeviceID:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)migrationConsentRequestData;
-(id)devicesFromMigrationConsentRequestData:(id)arg1 ;
-(id)_getLocalDeviceCollection;
-(BOOL)pairedDeviceCountIsLessThanMaxPairedDevices;
-(BOOL)pairedDeviceSupportQuickSwitch;
-(void)setActivePairedDevice:(id)arg1 operationHasCompleted:(/*^block*/id)arg2 ;
-(void)setActivePairedDevice:(id)arg1 withActiveDeviceAssertionHandler:(/*^block*/id)arg2 ;
-(void)_invalidateActiveDeviceAssertionWithIdentifier:(id)arg1 ;
-(id)_getChangeHistory;
-(id)_getSecureProperties:(id)arg1 ;
-(id)_getClientInfo;
-(BOOL)isKeychainEnabled;
-(id)getAllDevicesWithArchivedDevices;
-(void)companionOOBDiscoverAndPairWithName:(id)arg1 withOutOfBandPairingKey:(id)arg2 withOptions:(id)arg3 operationHasBegun:(/*^block*/id)arg4 ;
-(void)companionPasscodePairWithDevice:(id)arg1 withOptions:(id)arg2 operationHasBegun:(/*^block*/id)arg3 ;
-(void)gizmoOOBAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(/*^block*/id)arg2 ;
-(void)gizmoPasscodeAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(/*^block*/id)arg2 ;
-(void)notifyActivationCompleted:(id)arg1 withSuccess:(BOOL)arg2 ;
-(void)notifyPasscode:(id)arg1 forDevice:(id)arg2 ;
-(void)notifyPairingShouldContinue;
-(void)unpairWithDevice:(id)arg1 shouldObliterate:(BOOL)arg2 operationHasBegun:(/*^block*/id)arg3 ;
-(void)pairWithSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)unpairWithSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)switchToSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)fakePairedSyncIsCompleteWithCompletion:(/*^block*/id)arg1 ;
-(void)enterCompatibilityState:(unsigned short)arg1 forDevice:(id)arg2 ;
-(id)waitForActivePairedDevice;
-(void)abortPairing;
-(void)suspendPairingClientCrashMonitoring;
-(void)resumePairingClientCrashMonitoring;
-(id)pairingStorePath;
-(id)blockAndQueryVersions;
-(void)userIsCheckingForUpdate;
-(void)retriggerUnpairInfoDialog;
-(void)overrideSignalStrengthLimit:(long long)arg1 ;
-(id)serverRequestReporterWithType:(id)arg1 ;
-(void)_submitServerRequestReportWithRequestType:(id)arg1 duration:(double)arg2 errorCode:(unsigned)arg3 ;
-(void)_submitAlbertPairingReport;
-(id)deviceForPairingID:(id)arg1 ;
-(id)deviceForIDSDevice:(id)arg1 ;
-(id)deviceForNRDevice:(id)arg1 fromIDSDevices:(id)arg2 ;
-(void)pairingClientDidEnterPhase:(id)arg1 ;
-(void)getSwitchEventsFromIndex:(unsigned)arg1 inlineCallback:(/*^block*/id)arg2 ;
-(void)_getActiveDeviceAssertionsWithInlineBlock:(/*^block*/id)arg1 ;
-(void)getMigrationPairingCharacteristicReadDataWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)putMigrationChallengeCharacteristicWriteData:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_pingActiveGizmoWithPriority:(long long)arg1 withMessageSize:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)startWatchSetupPush;
-(BOOL)isWatchSetupPushActive;
-(void)stopWatchSetupPush;
-(void)waitForWatchPairingExtendedMetadataForAdvertisedName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setMigrationConsented:(BOOL)arg1 forDevice:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)beginMigrationWithDevice:(id)arg1 passcode:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)beginMigrationWithDevice:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)lastMigrationRequestPhoneName;
-(void)keepPhoneUnlockedInternalTestSPI:(/*^block*/id)arg1 ;
-(void)checkIfFlaggedForRecoveryWithCompletion:(/*^block*/id)arg1 ;
-(void)clearRecoveryFlagWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)lastSyncSwitchIndex;
-(unsigned long long)migrationCountForPairingID:(id)arg1 ;
-(NSMutableDictionary *)legacyDevices;
-(void)setLegacyDevices:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)legacyDevicesQueue;
-(void)setLegacyDevicesQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)legacyDevicesQueueFirst;
-(void)setLegacyDevicesQueueFirst:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned short)lastCompatibilityState;
-(void)setLastCompatibilityState:(unsigned short)arg1 ;
-(NSMutableArray *)waitingToPairBlocks;
-(void)setWaitingToPairBlocks:(NSMutableArray *)arg1 ;
-(id)getActivePairedDevice;
-(id)getPairedDevices;
-(id)pairingID;
-(BOOL)isPaired;
-(BOOL)supportsPairedDevice;
-(unsigned short)compatibilityState;
-(id)init;
-(unsigned long long)status;
@end

