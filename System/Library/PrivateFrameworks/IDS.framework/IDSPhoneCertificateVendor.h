/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/IDSDaemonListenerProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, IDSDaemonRequestTimer, NSString;

@interface IDSPhoneCertificateVendor : NSObject <IDSDaemonListenerProtocol> {

	NSObject*<OS_dispatch_queue> _queue;
	IDSPhoneCertificateVendor* _strongSelfReference;
	IDSDaemonRequestTimer* _daemonRequestTimer;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) IDSPhoneCertificateVendor * strongSelfReference;              //@synthesize strongSelfReference=_strongSelfReference - In the implementation block
@property (nonatomic,readonly) IDSDaemonRequestTimer * daemonRequestTimer;                 //@synthesize daemonRequestTimer=_daemonRequestTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didAuthenticatePhoneWithAuthenticationCertificateData:(id)arg1 requestUUID:(id)arg2 error:(id)arg3 ;
-(void)didGeneratePhoneAuthenticationSignature:(id)arg1 nonce:(id)arg2 certificate:(id)arg3 inputData:(id)arg4 requestUUID:(id)arg5 error:(id)arg6 ;
-(void)didSetPhoneUserSubscriptionSource:(id)arg1 requestUUID:(id)arg2 error:(id)arg3 ;
-(void)didFetchPhoneUserSubscriptionSource:(id)arg1 requestUUID:(id)arg2 error:(id)arg3 ;
-(BOOL)_isPhoneCertificateVendorSupported;
-(id)_clientErrorForCode:(long long)arg1 underlyingError:(id)arg2 ;
-(id)_scheduleTimeoutForPhoneAuthenticationCertificateRequestCompletionBlock:(/*^block*/id)arg1 ;
-(id)_scheduleTimeoutForPhoneAuthenticationSignatureRequestCompletionBlock:(/*^block*/id)arg1 ;
-(id)_scheduleTimeoutForPhoneSubscriptionSourceCompletionBlock:(/*^block*/id)arg1 ;
-(long long)_subscriptionSourceForContext:(id)arg1 ;
-(IDSDaemonRequestTimer *)daemonRequestTimer;
-(void)setStrongSelfReference:(IDSPhoneCertificateVendor *)arg1 ;
-(id)_debugDescriptionForErrorCode:(long long)arg1 ;
-(void)_updateSelfRetentionBasedOnInFlightRequestCount;
-(long long)_subscriptionSourceFromIntegerValue:(long long)arg1 ;
-(void)authenticatePhoneWithCompletion:(/*^block*/id)arg1 ;
-(void)generatePhoneAuthenticationSignatureOverData:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setCurrentPhoneUserSubscriptionSource:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestCurrentPhoneUserSubscriptionSourceWithCompletion:(/*^block*/id)arg1 ;
-(long long)currentPhoneUserSubscriptionSourceWithError:(id*)arg1 ;
-(IDSPhoneCertificateVendor *)strongSelfReference;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
@end
