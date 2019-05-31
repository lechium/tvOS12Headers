/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSSet, PKContact, NSData, NSURL, AKAppleIDAuthenticationContext, PKPaymentMerchantSession;

@interface PKPaymentRequest : NSObject <NSSecureCoding> {

	BOOL _expectsMerchantSession;
	BOOL _suppressTotal;
	BOOL _shippingEditable;
	BOOL _requiresAddressPrecision;
	NSString* _merchantIdentifier;
	NSString* _countryCode;
	NSArray* _supportedNetworks;
	unsigned long long _merchantCapabilities;
	NSArray* _paymentSummaryItems;
	NSString* _currencyCode;
	NSSet* _requiredBillingContactFields;
	PKContact* _billingContact;
	NSSet* _requiredShippingContactFields;
	PKContact* _shippingContact;
	NSArray* _shippingMethods;
	unsigned long long _shippingType;
	NSData* _applicationData;
	NSSet* _supportedCountries;
	NSArray* _thumbnailURLs;
	NSURL* _originatingURL;
	NSString* _sourceApplicationBundleIdentifier;
	NSString* _sourceApplicationSecondaryIdentifier;
	NSString* _CTDataConnectionServiceType;
	unsigned long long _APIType;
	unsigned long long _requestType;
	unsigned long long _requestor;
	NSArray* _paymentContentItems;
	NSString* _localizedSummaryItemsTitle;
	NSData* _externalizedContext;
	SecAccessControlRef _accesssControlRef;
	AKAppleIDAuthenticationContext* _appleIDAuthenticationContext;
	NSString* _localizedNavigationTitle;
	unsigned long long _confirmationStyle;
	NSString* _localizedConfirmationTitle;
	NSString* _localizedBiometricConfirmationTitle;
	NSString* _localizedPasswordButtonTitle;
	NSString* _shippingEditableMessage;
	PKPaymentMerchantSession* _merchantSession;
	double _clientCallbackTimeout;

}

@property (nonatomic,retain) NSArray * thumbnailURLs;                                                    //@synthesize thumbnailURLs=_thumbnailURLs - In the implementation block
@property (nonatomic,retain) NSURL * originatingURL;                                                     //@synthesize originatingURL=_originatingURL - In the implementation block
@property (assign,nonatomic) BOOL expectsMerchantSession;                                                //@synthesize expectsMerchantSession=_expectsMerchantSession - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationBundleIdentifier;                               //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationSecondaryIdentifier;                            //@synthesize sourceApplicationSecondaryIdentifier=_sourceApplicationSecondaryIdentifier - In the implementation block
@property (nonatomic,retain) NSString * CTDataConnectionServiceType;                                     //@synthesize CTDataConnectionServiceType=_CTDataConnectionServiceType - In the implementation block
@property (assign,nonatomic) unsigned long long APIType;                                                 //@synthesize APIType=_APIType - In the implementation block
@property (assign,nonatomic) unsigned long long requestType;                                             //@synthesize requestType=_requestType - In the implementation block
@property (assign,nonatomic) unsigned long long requestor;                                               //@synthesize requestor=_requestor - In the implementation block
@property (nonatomic,copy) NSArray * paymentContentItems;                                                //@synthesize paymentContentItems=_paymentContentItems - In the implementation block
@property (assign,nonatomic) BOOL suppressTotal;                                                         //@synthesize suppressTotal=_suppressTotal - In the implementation block
@property (nonatomic,copy) NSString * localizedSummaryItemsTitle;                                        //@synthesize localizedSummaryItemsTitle=_localizedSummaryItemsTitle - In the implementation block
@property (nonatomic,copy) NSData * externalizedContext;                                                 //@synthesize externalizedContext=_externalizedContext - In the implementation block
@property (assign,nonatomic) SecAccessControlRef accesssControlRef;                                      //@synthesize accesssControlRef=_accesssControlRef - In the implementation block
@property (nonatomic,retain) AKAppleIDAuthenticationContext * appleIDAuthenticationContext;              //@synthesize appleIDAuthenticationContext=_appleIDAuthenticationContext - In the implementation block
@property (nonatomic,copy) NSString * localizedNavigationTitle;                                          //@synthesize localizedNavigationTitle=_localizedNavigationTitle - In the implementation block
@property (assign,nonatomic) unsigned long long confirmationStyle;                                       //@synthesize confirmationStyle=_confirmationStyle - In the implementation block
@property (nonatomic,copy) NSString * localizedConfirmationTitle;                                        //@synthesize localizedConfirmationTitle=_localizedConfirmationTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedBiometricConfirmationTitle;                               //@synthesize localizedBiometricConfirmationTitle=_localizedBiometricConfirmationTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedPasswordButtonTitle;                                      //@synthesize localizedPasswordButtonTitle=_localizedPasswordButtonTitle - In the implementation block
@property (assign,getter=isShippingEditable,nonatomic) BOOL shippingEditable;                            //@synthesize shippingEditable=_shippingEditable - In the implementation block
@property (nonatomic,copy) NSString * shippingEditableMessage;                                           //@synthesize shippingEditableMessage=_shippingEditableMessage - In the implementation block
@property (assign,nonatomic) BOOL requiresAddressPrecision;                                              //@synthesize requiresAddressPrecision=_requiresAddressPrecision - In the implementation block
@property (nonatomic,retain) PKPaymentMerchantSession * merchantSession;                                 //@synthesize merchantSession=_merchantSession - In the implementation block
@property (assign,nonatomic) double clientCallbackTimeout;                                               //@synthesize clientCallbackTimeout=_clientCallbackTimeout - In the implementation block
@property (nonatomic,copy) NSString * merchantIdentifier;                                                //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                                                       //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy) NSArray * supportedNetworks;                                                  //@synthesize supportedNetworks=_supportedNetworks - In the implementation block
@property (assign,nonatomic) unsigned long long merchantCapabilities;                                    //@synthesize merchantCapabilities=_merchantCapabilities - In the implementation block
@property (nonatomic,copy) NSArray * paymentSummaryItems;                                                //@synthesize paymentSummaryItems=_paymentSummaryItems - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                                                      //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,retain) NSSet * requiredBillingContactFields;                                       //@synthesize requiredBillingContactFields=_requiredBillingContactFields - In the implementation block
@property (assign,nonatomic) unsigned long long requiredBillingAddressFields; 
@property (nonatomic,retain) PKContact * billingContact;                                                 //@synthesize billingContact=_billingContact - In the implementation block
@property (nonatomic,retain) NSSet * requiredShippingContactFields;                                      //@synthesize requiredShippingContactFields=_requiredShippingContactFields - In the implementation block
@property (assign,nonatomic) unsigned long long requiredShippingAddressFields; 
@property (nonatomic,retain) PKContact * shippingContact;                                                //@synthesize shippingContact=_shippingContact - In the implementation block
@property (nonatomic,copy) NSArray * shippingMethods;                                                    //@synthesize shippingMethods=_shippingMethods - In the implementation block
@property (assign,nonatomic) unsigned long long shippingType;                                            //@synthesize shippingType=_shippingType - In the implementation block
@property (nonatomic,copy) NSData * applicationData;                                                     //@synthesize applicationData=_applicationData - In the implementation block
@property (nonatomic,copy) NSSet * supportedCountries;                                                   //@synthesize supportedCountries=_supportedCountries - In the implementation block
+(id)paymentContactInvalidErrorWithContactField:(id)arg1 localizedDescription:(id)arg2 ;
+(id)requestWithProtobuf:(id)arg1 ;
+(id)paymentShippingAddressInvalidErrorWithKey:(id)arg1 localizedDescription:(id)arg2 ;
+(id)paymentBillingAddressInvalidErrorWithKey:(id)arg1 localizedDescription:(id)arg2 ;
+(id)paymentShippingAddressUnserviceableErrorWithLocalizedDescription:(id)arg1 ;
+(id)availableNetworks;
+(id)errorFromDictionary:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(long long)version;
-(unsigned long long)requestType;
-(void)setRequestType:(unsigned long long)arg1 ;
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(NSString *)currencyCode;
-(PKContact *)shippingContact;
-(void)setBillingContact:(PKContact *)arg1 ;
-(void)setShippingContact:(PKContact *)arg1 ;
-(PKContact *)billingContact;
-(NSArray *)supportedNetworks;
-(unsigned long long)merchantCapabilities;
-(NSSet *)supportedCountries;
-(BOOL)isPeerPaymentRequest;
-(NSSet *)requiredShippingContactFields;
-(NSSet *)requiredBillingContactFields;
-(NSArray *)paymentSummaryItems;
-(void)setPaymentSummaryItems:(NSArray *)arg1 ;
-(NSURL *)originatingURL;
-(NSArray *)paymentContentItems;
-(void)setPaymentContentItems:(NSArray *)arg1 ;
-(NSArray *)shippingMethods;
-(unsigned long long)shippingType;
-(void)setShippingType:(unsigned long long)arg1 ;
-(BOOL)isShippingEditable;
-(void)setShippingEditable:(BOOL)arg1 ;
-(NSString *)shippingEditableMessage;
-(void)setShippingEditableMessage:(NSString *)arg1 ;
-(id)peerPaymentRequest;
-(NSString *)merchantIdentifier;
-(NSString *)sourceApplicationBundleIdentifier;
-(NSString *)sourceApplicationSecondaryIdentifier;
-(NSString *)CTDataConnectionServiceType;
-(NSArray *)thumbnailURLs;
-(PKPaymentMerchantSession *)merchantSession;
-(BOOL)expectsMerchantSession;
-(unsigned long long)APIType;
-(void)setMerchantSession:(PKPaymentMerchantSession *)arg1 ;
-(void)setShippingMethods:(NSArray *)arg1 ;
-(double)clientCallbackTimeout;
-(BOOL)requiresAddressPrecision;
-(BOOL)isServiceProviderPaymentRequest;
-(id)serviceProviderPaymentRequest;
-(id)protobuf;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
-(void)setSupportedNetworks:(NSArray *)arg1 ;
-(void)setMerchantCapabilities:(unsigned long long)arg1 ;
-(unsigned long long)requiredBillingAddressFields;
-(void)setRequiredBillingAddressFields:(unsigned long long)arg1 ;
-(unsigned long long)requiredShippingAddressFields;
-(void)setRequiredShippingAddressFields:(unsigned long long)arg1 ;
-(void)setRequiredShippingContactFields:(NSSet *)arg1 ;
-(void)setRequiredBillingContactFields:(NSSet *)arg1 ;
-(void)setOriginatingURL:(NSURL *)arg1 ;
-(void)setExpectsMerchantSession:(BOOL)arg1 ;
-(void)setSupportedCountries:(NSSet *)arg1 ;
-(void)setThumbnailURLs:(NSArray *)arg1 ;
-(NSData *)externalizedContext;
-(AKAppleIDAuthenticationContext *)appleIDAuthenticationContext;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(id)_transactionAmount;
-(void)setConfirmationStyle:(unsigned long long)arg1 ;
-(void)setClientCallbackTimeout:(double)arg1 ;
-(BOOL)isEqualToPaymentRequest:(id)arg1 ;
-(id)_addressFieldsToContactFields:(unsigned long long)arg1 ;
-(unsigned long long)_contactFieldsToAddressFields:(id)arg1 ;
-(void)setSourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(void)setCTDataConnectionServiceType:(NSString *)arg1 ;
-(void)setAPIType:(unsigned long long)arg1 ;
-(unsigned long long)requestor;
-(void)setRequestor:(unsigned long long)arg1 ;
-(BOOL)suppressTotal;
-(void)setSuppressTotal:(BOOL)arg1 ;
-(NSString *)localizedSummaryItemsTitle;
-(void)setLocalizedSummaryItemsTitle:(NSString *)arg1 ;
-(void)setExternalizedContext:(NSData *)arg1 ;
-(SecAccessControlRef)accesssControlRef;
-(void)setAccesssControlRef:(SecAccessControlRef)arg1 ;
-(void)setAppleIDAuthenticationContext:(AKAppleIDAuthenticationContext *)arg1 ;
-(NSString *)localizedNavigationTitle;
-(void)setLocalizedNavigationTitle:(NSString *)arg1 ;
-(unsigned long long)confirmationStyle;
-(NSString *)localizedConfirmationTitle;
-(void)setLocalizedConfirmationTitle:(NSString *)arg1 ;
-(NSString *)localizedBiometricConfirmationTitle;
-(void)setLocalizedBiometricConfirmationTitle:(NSString *)arg1 ;
-(NSString *)localizedPasswordButtonTitle;
-(void)setLocalizedPasswordButtonTitle:(NSString *)arg1 ;
-(void)setRequiresAddressPrecision:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(NSData *)applicationData;
-(void)setApplicationData:(NSData *)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

