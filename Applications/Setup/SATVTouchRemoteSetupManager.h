//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SATVActivatorDelegate.h"
#import "TRDeviceSetupServerDelegate.h"
#import "TRNearbyDeviceAdvertiserDelegate.h"
#import "TVSWiFiNetworkConnectionOperationDelegate.h"

@class ACAccountStore, HMDeviceSetupOperationHandler, NSOperationQueue, NSString, SATVActivator, SATVNetworkReachability, SFDeviceSetupAppleTVService, TRDeviceSetupServer, TRNearbyDeviceAdvertiser, TRSession, TVSWiFiNetworkConnectionOperation, TVSiCloudAccountManager;

@interface SATVTouchRemoteSetupManager : NSObject <TRDeviceSetupServerDelegate, TVSWiFiNetworkConnectionOperationDelegate, SATVActivatorDelegate, TRNearbyDeviceAdvertiserDelegate>
{
    _Bool _running;	// 8 = 0x8
    _Bool _setupInfoTransactionInProgress;	// 9 = 0x9
    _Bool _hasICloudAccount;	// 10 = 0xa
    _Bool _hasStoreAccount;	// 11 = 0xb
    _Bool _hasGameCenterAccount;	// 12 = 0xc
    int _setupCompleted;	// 16 = 0x10
    id <SATVTouchRemoteSetupManagerDelegate> _userInterfaceDelegate;	// 24 = 0x18
    double _startTimeout;	// 32 = 0x20
    CDUnknownBlockType _connectionCompletionHandler;	// 40 = 0x28
    NSString *_recommendedNetworkSSID;	// 48 = 0x30
    NSString *_recommendedNetworkPassword;	// 56 = 0x38
    TVSWiFiNetworkConnectionOperation *_connectionOperation;	// 64 = 0x40
    NSOperationQueue *_connectionQueue;	// 72 = 0x48
    SATVNetworkReachability *_networkReachability;	// 80 = 0x50
    SATVActivator *_activator;	// 88 = 0x58
    TRDeviceSetupServer *_server;	// 96 = 0x60
    HMDeviceSetupOperationHandler *_homeKitSetupHandler;	// 104 = 0x68
    TRNearbyDeviceAdvertiser *_advertiser;	// 112 = 0x70
    TRSession *_activeSession;	// 120 = 0x78
    SFDeviceSetupAppleTVService *_setupService;	// 128 = 0x80
    ACAccountStore *_store;	// 136 = 0x88
    TVSiCloudAccountManager *_iCloudAccountManager;	// 144 = 0x90
}

+ (id)sharedInstance;	// IMP=0x0000000100061c9c
@property(retain, nonatomic) TVSiCloudAccountManager *iCloudAccountManager; // @synthesize iCloudAccountManager=_iCloudAccountManager;
@property(nonatomic) _Bool hasGameCenterAccount; // @synthesize hasGameCenterAccount=_hasGameCenterAccount;
@property(nonatomic) _Bool hasStoreAccount; // @synthesize hasStoreAccount=_hasStoreAccount;
@property(nonatomic) _Bool hasICloudAccount; // @synthesize hasICloudAccount=_hasICloudAccount;
@property(retain, nonatomic) ACAccountStore *store; // @synthesize store=_store;
@property(nonatomic) int setupCompleted; // @synthesize setupCompleted=_setupCompleted;
@property(retain, nonatomic) SFDeviceSetupAppleTVService *setupService; // @synthesize setupService=_setupService;
@property(retain, nonatomic) TRSession *activeSession; // @synthesize activeSession=_activeSession;
@property(retain, nonatomic) TRNearbyDeviceAdvertiser *advertiser; // @synthesize advertiser=_advertiser;
@property(retain, nonatomic) HMDeviceSetupOperationHandler *homeKitSetupHandler; // @synthesize homeKitSetupHandler=_homeKitSetupHandler;
@property(retain, nonatomic) TRDeviceSetupServer *server; // @synthesize server=_server;
@property(retain, nonatomic) SATVActivator *activator; // @synthesize activator=_activator;
@property(retain, nonatomic) SATVNetworkReachability *networkReachability; // @synthesize networkReachability=_networkReachability;
@property(retain, nonatomic) NSOperationQueue *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(retain, nonatomic) TVSWiFiNetworkConnectionOperation *connectionOperation; // @synthesize connectionOperation=_connectionOperation;
@property(copy, nonatomic) NSString *recommendedNetworkPassword; // @synthesize recommendedNetworkPassword=_recommendedNetworkPassword;
@property(copy, nonatomic) NSString *recommendedNetworkSSID; // @synthesize recommendedNetworkSSID=_recommendedNetworkSSID;
@property(copy, nonatomic) CDUnknownBlockType connectionCompletionHandler; // @synthesize connectionCompletionHandler=_connectionCompletionHandler;
@property(nonatomic, getter=isSetupInfoTransactionInProgress) _Bool setupInfoTransactionInProgress; // @synthesize setupInfoTransactionInProgress=_setupInfoTransactionInProgress;
@property(nonatomic) double startTimeout; // @synthesize startTimeout=_startTimeout;
@property(nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(nonatomic) __weak id <SATVTouchRemoteSetupManagerDelegate> userInterfaceDelegate; // @synthesize userInterfaceDelegate=_userInterfaceDelegate;
- (void).cxx_destruct;	// IMP=0x000000010006c808
- (void)_authenticateHomeSharingWithAuthenticationResults:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010006c1c0
- (void)_authenticateGameCenterWithAuthenticationResults:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010006be60
- (void)_authenticateiCloudWithAuthenticationResults:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010006bb3c
- (void)_authenticateStoreWithAuthenticationResults:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010006b22c
- (void)_authenticateWithAccountService:(unsigned long long)arg1 usingAuthenticationResults:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010006adec
- (void)_authenticateWithAccountServices:(id)arg1 usingAuthenticationResults:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010006a974
- (void)_authenticateAccount:(id)arg1 forServiceType:(long long)arg2 withPassword:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010006a7b4
- (void)_authenticateAccount:(id)arg1 forServiceType:(long long)arg2 withCompanionDevice:(id)arg3 anisetteDataProvider:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000010006a5b0
- (void)_saveRemoteVerifiedAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010006a1a8
- (long long)_serviceTypeForAccountService:(unsigned long long)arg1;	// IMP=0x000000010006a184
- (void)didFailSetupWithErrorCode:(long long)arg1;	// IMP=0x0000000100069f30
- (void)didCompleteSetup;	// IMP=0x0000000100069d9c
- (void)_completedProxyAuthenticationRequest:(id)arg1 unauthenticatedAccountServices:(id)arg2 withResponseHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100069cf4
- (void)_handleProxyAuthenticationRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100069610
- (void)_handleProxyDeviceRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010006954c
- (void)_completedCompanionAuthenticationRequest:(id)arg1 unauthenticatedAccountServices:(id)arg2 withResponseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000694a4
- (void)_handleCompanionAuthenticateWithRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100068db0
- (void)_handleSetupServiceStartSession:(id)arg1;	// IMP=0x0000000100068cc8
- (void)_handleSetupServiceProgressEvent:(unsigned int)arg1 info:(id)arg2;	// IMP=0x0000000100068968
- (void)_handleNetworkRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100068504
- (void)_presentActivationErrorController;	// IMP=0x0000000100067de4
- (void)_forgetCurrentWiFiNetworkIfNeeded;	// IMP=0x0000000100067d40
- (id)_localizedMacAddressDescription;	// IMP=0x0000000100067bbc
- (void)_handleActivationRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000679b0
- (void)_handleConfigurationRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000675dc
- (void)_handleCompletionRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000674a0
- (void)_setupSession:(id)arg1;	// IMP=0x0000000100066ba4
- (void)nearbyDeviceAdvertiser:(id)arg1 didReceiveConnectionRequestFromDevice:(id)arg2 requestHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000669c4
- (void)_checkTarget:(id)arg1 forSelector:(SEL)arg2 performBlockOnMainThread:(CDUnknownBlockType)arg3;	// IMP=0x0000000100066864
- (void)nearbyDeviceAdvertiserDidStartAdvertising:(id)arg1;	// IMP=0x0000000100066854
- (void)updateAdvertisingState:(_Bool)arg1;	// IMP=0x00000001000667a8
- (void)_authenticateGameCenterAccountWithInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000665e8
- (void)_authenticateHomeSharingAccountWithInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100066318
- (void)_authenticateiCloudAccountWithInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100065fac
- (void)_authenticateiTunesAccountWithInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100065c40
- (void)_authenticateAccount:(unsigned long long)arg1 withInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000658f4
- (void)_cancelConnectionOperation;	// IMP=0x0000000100065788
- (void)_resetSetupInfoTransaction;	// IMP=0x0000000100065670
- (void)_didFailSetupWithError:(id)arg1;	// IMP=0x0000000100065348
- (void)_didFinishNetworkConnectionAttemptWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x0000000100065144
- (void)activator:(id)arg1 didFailWithError:(id)arg2 reason:(unsigned long long)arg3;	// IMP=0x0000000100064f88
- (void)activator:(id)arg1 didSucceedWithType:(unsigned long long)arg2;	// IMP=0x0000000100064748
- (void)operation:(id)arg1 stateDidChange:(unsigned long long)arg2;	// IMP=0x0000000100064554
- (void)operation:(id)arg1 didFailToConnectToNetwork:(id)arg2 error:(id)arg3;	// IMP=0x0000000100064460
- (void)operation:(id)arg1 didConnectToNetwork:(id)arg2;	// IMP=0x0000000100064380
- (void)operation:(id)arg1 didRequestPasswordForNetwork:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100064260
- (void)operation:(id)arg1 didFailToFindNetworkWithName:(id)arg2 error:(id)arg3;	// IMP=0x00000001000640e0
- (void)deviceSetupServer:(id)arg1 didFailSetupWithError:(id)arg2;	// IMP=0x0000000100063f8c
- (void)deviceSetupServerDidFinishSetup:(id)arg1;	// IMP=0x0000000100063db8
- (void)deviceSetupServer:(id)arg1 didReceiveSetupInfo:(id)arg2;	// IMP=0x0000000100063bd8
- (void)deviceSetupServer:(id)arg1 authenticateAccount:(unsigned long long)arg2 withInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000636bc
- (void)deviceSetupServer:(id)arg1 willRequestAuthenticationForAccount:(unsigned long long)arg2;	// IMP=0x00000001000634e4
- (id)deviceSetupServer:(id)arg1 localizedAuthenticationMessageForAccount:(unsigned long long)arg2;	// IMP=0x00000001000632d0
- (id)accountsToAuthenticateForDeviceSetupServer:(id)arg1;	// IMP=0x00000001000631f4
- (void)_testReachabilityAndActivate;	// IMP=0x0000000100062e14
- (void)deviceSetupServer:(id)arg1 connectToNetworkWithRecommendedSSID:(id)arg2 password:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100062da8
- (void)deviceSetupServer:(id)arg1 didBeginSetupWithDeviceName:(id)arg2;	// IMP=0x0000000100062b74
- (void)deviceSetupServerDidPromptToBeginSetup:(id)arg1;	// IMP=0x00000001000629e8
- (void)_connectToNetworkWithRecommendedSSID:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010006253c
- (void)stop;	// IMP=0x0000000100062338
- (void)start;	// IMP=0x000000010006207c
- (void)dealloc;	// IMP=0x0000000100061f28
- (id)init;	// IMP=0x0000000100061d1c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

