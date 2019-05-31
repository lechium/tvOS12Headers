/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class PKXPCService, PKPeerPaymentAccount, NSObject, PKPeerPaymentWebServiceContext;

@interface PKPeerPaymentService : NSObject {

	PKXPCService* _remoteService;
	PKPeerPaymentAccount* _account;
	NSObject*<OS_dispatch_queue> _accountQueue;
	long long _accountChangedNotificationSuspensionCount;

}

@property (nonatomic,retain) PKPeerPaymentWebServiceContext * sharedPeerPaymentWebServiceContext; 
@property (nonatomic,readonly) PKPeerPaymentAccount * account; 
+(id)sharedInstance;
-(void)accountWithCompletion:(/*^block*/id)arg1 ;
-(void)updateAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)registerDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)unregisterDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)registrationStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)presentRegistrationFlowWithAccount:(id)arg1 amount:(id)arg2 state:(unsigned long long)arg3 senderAddress:(id)arg4 orientation:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)balanceForPass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)downloadPassIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)updateMockAccountBalanceByAddingAmount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cloudStoreStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)initalizeCloudStoreIfNecessaryWithHandler:(/*^block*/id)arg1 ;
-(void)checkTLKsMissingWithCompletion:(/*^block*/id)arg1 ;
-(void)resetApplePayManateeViewWithCompletion:(/*^block*/id)arg1 ;
-(void)initalizeCloudStoreIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(id)_remoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(id)lastUsedAlternateFundingSourcePassUniqueIdentifier;
-(void)noteAccountDeleted;
-(void)setSharedPeerPaymentWebServiceContext:(PKPeerPaymentWebServiceContext *)arg1 ;
-(PKPeerPaymentWebServiceContext *)sharedPeerPaymentWebServiceContext;
-(void)sharedPeerPaymentWebServiceContextWithCompletion:(/*^block*/id)arg1 ;
-(void)setLastUsedAlternateFundingSourcePassUniqueIdentifier:(id)arg1 ;
-(void)presentIdentityVerificationFlowWithResponse:(id)arg1 orientation:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)presentPeerPaymentTermsAndConditionsWithAccount:(id)arg1 orientation:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_accountChanged:(id)arg1 ;
-(id)_synchronousRemoteObjectProxyForSelector:(SEL)arg1 ;
-(void)suspendAccountChangedNotifications;
-(void)resumeAccountChangedNotifications;
-(void)presentRegistrationFlowWithAccount:(id)arg1 orientation:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)receivedPeerPaymentMessageData:(id)arg1 ;
-(void)updateMessageReceivedDate:(id)arg1 forTransactionWithIdentifier:(id)arg2 ;
-(void)_sharedPeerPaymentWebServiceContextWithCompletion:(/*^block*/id)arg1 ;
-(PKPeerPaymentAccount *)account;
-(id)init;
-(void)dealloc;
@end

