/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NRRegistryProxy.h>
#import <libobjc.A.dylib/NRPairedDeviceRegistryXPCDaemonDelegate.h>

@interface NRPairingProxy : NRRegistryProxy <NRPairedDeviceRegistryXPCDaemonDelegate>
+(id)serverExportedInterface;
+(id)serverRemoteObjectInterface;
+(id)clientExportedInterface;
+(id)clientRemoteObjectInterface;
+(id)machServiceName;
-(id)pairingDelegate;
-(void)xpcBeginDiscoveryWithBlock:(/*^block*/id)arg1 ;
-(void)xpcEndDiscoveryWithBlock:(/*^block*/id)arg1 ;
-(void)xpcCompanionOOBDiscoverAndPairWithName:(id)arg1 withOutOfBandPairingKey:(id)arg2 withOptions:(id)arg3 operationHasBegun:(/*^block*/id)arg4 ;
-(void)xpcCompanionPasscodePairWithDeviceID:(id)arg1 withOptions:(id)arg2 operationHasBegun:(/*^block*/id)arg3 ;
-(void)xpcGizmoOOBAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(/*^block*/id)arg2 ;
-(void)xpcGizmoPasscodeAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(/*^block*/id)arg2 ;
-(void)xpcAbortPairingReason:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)xpcEnterCompatibilityState:(unsigned short)arg1 withDeviceID:(id)arg2 ;
-(void)xpcNotifyActivationCompleted:(id)arg1 withSuccess:(BOOL)arg2 ;
-(void)xpcNotifyPasscode:(id)arg1 withDeviceID:(id)arg2 ;
-(void)xpcUnpairWithDeviceID:(id)arg1 withOptions:(id)arg2 operationHasBegun:(/*^block*/id)arg3 ;
-(void)xpcPairingShouldContinue;
-(void)xpcSuspendPairingClientCrashMonitoring:(/*^block*/id)arg1 ;
-(void)xpcResumePairingClientCrashMonitoring:(/*^block*/id)arg1 ;
-(void)xpcRetriggerUnpairInfoDialogWithBlock:(/*^block*/id)arg1 ;
-(void)xpcTriggerVersion4Workaround;
-(void)xpcSubmitAlbertPairingReport:(/*^block*/id)arg1 ;
-(void)xpcPairingClientDidEnterPhase:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)xpcSwitchActiveDeviceWithDeviceID:(id)arg1 isMagicSwitch:(BOOL)arg2 operationHasCompleted:(/*^block*/id)arg3 ;
-(void)xpcSwitchActiveDeviceWithDeviceID:(id)arg1 withAssertionHandler:(/*^block*/id)arg2 ;
-(void)xpcInvalidateSwitchAssertionWithIdentifier:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)xpcActiveDeviceAssertions:(/*^block*/id)arg1 ;
-(void)xpcBeginMigrationWithDeviceID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)xpcBeginMigrationWithCompletion:(/*^block*/id)arg1 ;
-(void)xpcPairWithSimulator:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)xpcUnpairWithSimulator:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)xpcSwitchToSimulator:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)xpcGetMigrationPairingCharacteristicReadDataWithCompletion:(/*^block*/id)arg1 ;
-(void)xpcPutMigrationChallengeCharacteristicWriteData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)xpcSubmitServerRequestReportWithRequestType:(id)arg1 duration:(double)arg2 errorCode:(unsigned)arg3 block:(/*^block*/id)arg4 ;
-(void)xpcPingActiveGizmoWithPriority:(int)arg1 withMessageSize:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)xpcStartWatchSetupPushWithBlock:(/*^block*/id)arg1 ;
-(void)xpcStopWatchSetupPushWithBlock:(/*^block*/id)arg1 ;
-(void)xpcScanForMigratableWatchesWithBlock:(/*^block*/id)arg1 ;
-(void)xpcBeginMigrationWithDeviceID:(id)arg1 passcode:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)xpcGetLastMigrationRequestPhoneNameWithCompletion:(/*^block*/id)arg1 ;
-(void)xpcKeepPhoneUnlockedInternalTestSPI:(/*^block*/id)arg1 ;
-(void)xpcWaitForWatchPairingExtendedMetadataForAdvertisedName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)xpcCheckIfFlaggedForRecoveryWithCompletion:(/*^block*/id)arg1 ;
-(void)xpcClearRecoveryFlagWithCompletion:(/*^block*/id)arg1 ;
-(void)xpcFakePairedSyncIsCompleteWithCompletion:(/*^block*/id)arg1 ;
-(void)xpcGetLastSwitchIndex:(/*^block*/id)arg1 ;
-(void)xpcGetMigrationCountForPairingID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)pairingServicesDelegate;
-(id)pairingQueue;
@end

