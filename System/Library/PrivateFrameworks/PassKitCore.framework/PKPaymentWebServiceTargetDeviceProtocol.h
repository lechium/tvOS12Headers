/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:00 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPaymentWebServiceTargetDeviceProtocol <NSObject>
@optional
-(void)paymentWebService:(id)arg1 registrationDataWithCompletionHandler:(/*^block*/id)arg2;
-(id)trustedDeviceEnrollmentInfoForWebService:(id)arg1;
-(id)appleAccountInformation;
-(void)renewAppleAccountWithCompletionHandler:(/*^block*/id)arg1;
-(void)noteForegroundVerificationObserverActive:(BOOL)arg1;
-(void)startBackgroundVerificationObserverForPass:(id)arg1 verificationMethod:(id)arg2;
-(unsigned long long)maximumPaymentCards;
-(void)setMaximumPaymentCards:(unsigned long long)arg1;
-(id)paymentWebService:(id)arg1 passesOfType:(unsigned long long)arg2;
-(void)paymentWebService:(id)arg1 handlePotentialExpressPass:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(BOOL)felicaSecureElementIsAvailable;
-(BOOL)secureElementIsAvailable;
-(BOOL)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1;
-(BOOL)supportsExpressModeForExpressPassType:(long long)arg1;
-(BOOL)supportsExpressMode:(id)arg1;
-(BOOL)supportsCredentialType:(long long)arg1;
-(void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandlerV2:(/*^block*/id)arg3;
-(void)paymentWebService:(id)arg1 removePass:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(BOOL)paymentWebServiceSupportsPeerPaymentRegistration:(id)arg1;

@required
-(id)deviceRegion;
-(id)deviceName;
-(void)noteProvisioningUserInterfaceDidAppear;
-(void)noteProvisioningUserInterfaceDidDisappear;
-(void)noteProvisioningDidBegin;
-(void)noteProvisioningDidEnd;
-(void)claimSecureElementForCurrentUserWithCompletion:(/*^block*/id)arg1;
-(id)secureElementIdentifiers;
-(void)paymentWebServiceDidUpdateConfiguration:(id)arg1;
-(void)paymentWebService:(id)arg1 queueConnectionToTrustedServiceManagerForPushTopic:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)paymentWebService:(id)arg1 configurationDataWithCompletionHandler:(/*^block*/id)arg2;
-(void)paymentWebService:(id)arg1 registrationDataWithAuthToken:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)paymentWebService:(id)arg1 signData:(id)arg2 signatureEntanglementMode:(unsigned long long)arg3 withCompletionHandler:(/*^block*/id)arg4;
-(void)paymentWebService:(id)arg1 provisioningDataWithCompletionHandler:(/*^block*/id)arg2;
-(void)paymentWebService:(id)arg1 deleteApplicationWithAID:(id)arg2;
-(void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2 primaryRegionTopic:(id)arg3;
-(id)paymentWebService:(id)arg1 filterVerificationChannels:(id)arg2;
-(int)paymentSupportedInCurrentRegionForWebService:(id)arg1;
-(id)deviceDescriptionForPaymentWebService:(id)arg1;
-(id)bridgedClientInfo;
-(BOOL)supportsAutomaticPassPresentation;
-(void)paymentWebService:(id)arg1 setNewAuthRandomIfNecessaryReturningPairingState:(/*^block*/id)arg2;
-(void)paymentWebService:(id)arg1 setNewAuthRandom:(/*^block*/id)arg2;
-(BOOL)paymentWebService:(id)arg1 hasPassesOfType:(unsigned long long)arg2;
-(BOOL)paymentWebService:(id)arg1 canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg2;
-(void)paymentWebService:(id)arg1 validateAddPreconditionsWithCompletion:(/*^block*/id)arg2;
-(void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)downloadAllPaymentPassesForPaymentWebService:(id)arg1;
-(void)paymentWebService:(id)arg1 validateTransferPreconditionsWithCompletion:(/*^block*/id)arg2;
-(BOOL)claimSecureElementForCurrentUser;
-(unsigned long long)secureElementOwnershipStateForCurrentUser;

@end

