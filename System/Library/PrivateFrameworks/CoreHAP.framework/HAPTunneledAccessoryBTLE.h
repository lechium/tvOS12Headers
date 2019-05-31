/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:14 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPAccessory.h>
#import <libobjc.A.dylib/HAPBTLEControlOutputStreamDelegate.h>
#import <libobjc.A.dylib/HAPSecuritySessionDelegate.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HAPAccessoryServerInternalDelegate.h>

@protocol OS_dispatch_queue, HAPKeyStore;
@class NSObject, NSNumber, HAPService, HAPCharacteristic, HAPSecuritySession, NSOperationQueue, HMFTimer, NSMutableArray, HMFExponentialBackoffTimer, NSString;

@interface HAPTunneledAccessoryBTLE : HAPAccessory <HAPBTLEControlOutputStreamDelegate, HAPSecuritySessionDelegate, HMFTimerDelegate, HAPAccessoryServerInternalDelegate> {

	BOOL _verified;
	BOOL _securitySessionOpen;
	BOOL _securitySessionOpening;
	BOOL _verifying;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	NSNumber* _stateNumber;
	id<HAPKeyStore> _keyStore;
	HAPService* _tunneledBTLEAccessoryService;
	HAPService* _pairingService;
	HAPCharacteristic* _pairVerifyCharacteristic;
	HAPCharacteristic* _pairingsCharacteristic;
	HAPCharacteristic* _advertisingCharacteristic;
	HAPSecuritySession* _securitySession;
	NSOperationQueue* _pairVerifyOperationQueue;
	NSNumber* _sessionLifetimeTimeout;
	HMFTimer* _connectionIdleTimer;
	NSOperationQueue* _clientOperationQueue;
	NSMutableArray* _pendingRequests;
	NSOperationQueue* _requestOperationQueue;
	NSMutableArray* _pendingResponses;
	HMFExponentialBackoffTimer* _verificationBackoffTimer;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                             //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,copy) NSNumber * stateNumber;                                                     //@synthesize stateNumber=_stateNumber - In the implementation block
@property (assign,nonatomic,__weak) id<HAPKeyStore> keyStore;                                          //@synthesize keyStore=_keyStore - In the implementation block
@property (assign,nonatomic,__weak) HAPService * tunneledBTLEAccessoryService;                         //@synthesize tunneledBTLEAccessoryService=_tunneledBTLEAccessoryService - In the implementation block
@property (assign,nonatomic,__weak) HAPService * pairingService;                                       //@synthesize pairingService=_pairingService - In the implementation block
@property (assign,nonatomic,__weak) HAPCharacteristic * pairVerifyCharacteristic;                      //@synthesize pairVerifyCharacteristic=_pairVerifyCharacteristic - In the implementation block
@property (assign,nonatomic,__weak) HAPCharacteristic * pairingsCharacteristic;                        //@synthesize pairingsCharacteristic=_pairingsCharacteristic - In the implementation block
@property (assign,nonatomic,__weak) HAPCharacteristic * advertisingCharacteristic;                     //@synthesize advertisingCharacteristic=_advertisingCharacteristic - In the implementation block
@property (nonatomic,retain) HAPSecuritySession * securitySession;                                     //@synthesize securitySession=_securitySession - In the implementation block
@property (assign,getter=isSecuritySessionOpen,nonatomic) BOOL securitySessionOpen;                    //@synthesize securitySessionOpen=_securitySessionOpen - In the implementation block
@property (assign,getter=isSecuritySessionOpening,nonatomic) BOOL securitySessionOpening;              //@synthesize securitySessionOpening=_securitySessionOpening - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * pairVerifyOperationQueue;                            //@synthesize pairVerifyOperationQueue=_pairVerifyOperationQueue - In the implementation block
@property (nonatomic,retain) NSNumber * sessionLifetimeTimeout;                                        //@synthesize sessionLifetimeTimeout=_sessionLifetimeTimeout - In the implementation block
@property (nonatomic,retain) HMFTimer * connectionIdleTimer;                                           //@synthesize connectionIdleTimer=_connectionIdleTimer - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * clientOperationQueue;                                //@synthesize clientOperationQueue=_clientOperationQueue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingRequests;                                       //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * requestOperationQueue;                               //@synthesize requestOperationQueue=_requestOperationQueue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingResponses;                                      //@synthesize pendingResponses=_pendingResponses - In the implementation block
@property (assign,getter=isVerifying,nonatomic) BOOL verifying;                                        //@synthesize verifying=_verifying - In the implementation block
@property (nonatomic,retain) HMFExponentialBackoffTimer * verificationBackoffTimer;                    //@synthesize verificationBackoffTimer=_verificationBackoffTimer - In the implementation block
@property (assign,getter=isVerified,nonatomic) BOOL verified;                                          //@synthesize verified=_verified - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldVerifyCharacteristic:(id)arg1 ;
-(BOOL)isVerified;
-(void)_enqueueRequest:(id)arg1 ;
-(void)setVerified:(BOOL)arg1 ;
-(id<HAPKeyStore>)keyStore;
-(void)setSecuritySessionOpen:(BOOL)arg1 ;
-(NSOperationQueue *)clientOperationQueue;
-(void)accessoryServer:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 ;
-(id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3 ;
-(id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3 keyStore:(id)arg4 ;
-(BOOL)_parseServices;
-(void)_sanitizeAllTunneledCharacteristics;
-(void)_registerForTunnelCharacteristicNotifications;
-(BOOL)__isAdvertising;
-(HAPCharacteristic *)advertisingCharacteristic;
-(void)_tearDownSessionWithError:(id)arg1 ;
-(void)_suspendConnectionIdleTimer;
-(BOOL)isVerifying;
-(HMFExponentialBackoffTimer *)verificationBackoffTimer;
-(void)setVerificationBackoffTimer:(HMFExponentialBackoffTimer *)arg1 ;
-(void)setVerifying:(BOOL)arg1 ;
-(void)_verifyServiceSignature:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_verifyCharacteristicSignature:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_sendRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_readValueForCharacteristic:(id)arg1 options:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_writeValue:(id)arg1 toCharacteristic:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_performTimedWriteValue:(id)arg1 toCharacteristic:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_performWriteValue:(id)arg1 toCharacteristic:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_markNotifyingCharacteristicUpdatedForCharacteristic:(id)arg1 ;
-(void)_performTimedWriteExecuteForCharacteristic:(id)arg1 value:(id)arg2 options:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_performTimedWritePrepareWithValue:(id)arg1 toCharacteristic:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_sendPairingRequestData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(HAPCharacteristic *)pairingsCharacteristic;
-(void)setSecuritySession:(HAPSecuritySession *)arg1 ;
-(void)setSecuritySessionOpening:(BOOL)arg1 ;
-(HAPCharacteristic *)pairVerifyCharacteristic;
-(HAPSecuritySession *)securitySession;
-(void)_cancelAllQueuedOperationsWithError:(id)arg1 ;
-(void)_resumeAllOperations;
-(void)_requestResponseForRequest:(id)arg1 ;
-(void)_reallySendRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_pendingResponseForRequest:(id)arg1 ;
-(unsigned long long)_outstandingRequests;
-(void)_resumeConnectionIdleTimer;
-(id)_encryptDataAndGenerateAuthTag:(id)arg1 error:(id*)arg2 ;
-(void)_kickConnectionIdleTimer;
-(id)_decryptData:(id)arg1 error:(id*)arg2 ;
-(NSOperationQueue *)pairVerifyOperationQueue;
-(BOOL)isSecuritySessionOpening;
-(void)_suspendAllOperations;
-(BOOL)_establishSecureSessionWithError:(id*)arg1 ;
-(HMFTimer *)connectionIdleTimer;
-(BOOL)_parseTunneledBTLEAccessoryService:(id)arg1 ;
-(BOOL)_parsePairingService:(id)arg1 ;
-(void)setAdvertisingCharacteristic:(HAPCharacteristic *)arg1 ;
-(void)setSessionLifetimeTimeout:(NSNumber *)arg1 ;
-(NSNumber *)sessionLifetimeTimeout;
-(void)setPairVerifyCharacteristic:(HAPCharacteristic *)arg1 ;
-(void)setPairingsCharacteristic:(HAPCharacteristic *)arg1 ;
-(void)_updateOnStateNumberChange;
-(void)_readUpdatedCharacteristics:(id)arg1 queue:(id)arg2 ;
-(void)_sendControlPacket:(id)arg1 forRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)getLocalPairingIdentityAndAllowCreation:(BOOL)arg1 error:(id*)arg2 ;
-(void)_handleSecuritySession:(id)arg1 setupExchangeData:(id)arg2 ;
-(void)_handleConnectionIdleTimeout;
-(void)controlOutputStream:(id)arg1 didReceiveRequestToSendControlPacket:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)controlOutputStreamDidOpen:(id)arg1 ;
-(void)controlOutputStream:(id)arg1 didCloseWithError:(id)arg2 ;
-(void)controlOutputStreamDidComplete:(id)arg1 ;
-(id)securitySession:(id)arg1 didReceiveLocalPairingIdentityRequestWithError:(id*)arg2 ;
-(id)securitySession:(id)arg1 didReceiveRequestForPeerPairingIdentityWithIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)securitySession:(id)arg1 didReceiveSetupExchangeData:(id)arg2 ;
-(void)securitySessionIsOpening:(id)arg1 ;
-(void)securitySessionDidOpen:(id)arg1 ;
-(void)securitySession:(id)arg1 didCloseWithError:(id)arg2 ;
-(id)_pendingRequestForCharacteristic:(id)arg1 ;
-(void)setKeyStore:(id<HAPKeyStore>)arg1 ;
-(HAPService *)tunneledBTLEAccessoryService;
-(void)setTunneledBTLEAccessoryService:(HAPService *)arg1 ;
-(HAPService *)pairingService;
-(void)setPairingService:(HAPService *)arg1 ;
-(void)setConnectionIdleTimer:(HMFTimer *)arg1 ;
-(NSNumber *)stateNumber;
-(void)timerDidFire:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(NSMutableArray *)pendingResponses;
-(void)setReachable:(BOOL)arg1 ;
-(void)removePairingForCurrentControllerWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isPaired;
-(void)setStateNumber:(NSNumber *)arg1 ;
-(void)verify;
-(NSMutableArray *)pendingRequests;
-(void)readValueForCharacteristic:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)isSecuritySessionOpen;
-(void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)writeCharacteristicValue:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)mergeObject:(id)arg1 ;
-(NSOperationQueue *)requestOperationQueue;
-(void)addPairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removePairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)invalidate;
-(id)shortDescription;
-(id)uniqueIdentifier;
@end

