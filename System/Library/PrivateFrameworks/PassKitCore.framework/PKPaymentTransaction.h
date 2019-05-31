/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKCloudStoreCoding.h>

@class NSString, NSDecimalNumber, NSDate, PKMerchant, NSData, PKPaymentTransactionForeignExchangeInformation, PKPaymentTransactionFees, NSUUID, NSDictionary, PKCurrencyAmount, CLLocation;

@interface PKPaymentTransaction : NSObject <NSSecureCoding, PKCloudStoreCoding> {

	BOOL _enRoute;
	BOOL _shouldSuppressDate;
	BOOL _deviceScoreIdentifiersRequired;
	BOOL _deviceScoreIdentifiersSubmitted;
	BOOL _isCloudKitArchived;
	BOOL _processedForLocation;
	BOOL _processedForMerchantCleanup;
	BOOL _processedForStations;
	BOOL _hasAssociatedPaymentApplication;
	BOOL _hasNotificationServiceData;
	NSString* _identifier;
	NSString* _serviceIdentifier;
	NSString* _paymentHash;
	NSDecimalNumber* _amount;
	NSDecimalNumber* _subtotalAmount;
	NSString* _currencyCode;
	NSDate* _transactionDate;
	NSDate* _transactionStatusChangedDate;
	NSDate* _expirationDate;
	PKMerchant* _merchant;
	NSString* _locality;
	NSString* _administrativeArea;
	NSDate* _locationDate;
	double _locationLatitude;
	double _locationLongitude;
	double _locationAltitude;
	double _locationHorizontalAccuracy;
	double _locationVerticalAccuracy;
	long long _transitType;
	unsigned long long _transitModifiers;
	NSString* _stationCodeProvider;
	NSData* _startStationCode;
	NSString* _startStation;
	double _startStationLatitude;
	double _startStationLongitude;
	NSData* _endStationCode;
	NSString* _endStation;
	double _endStationLatitude;
	double _endStationLongitude;
	long long _adjustmentType;
	long long _peerPaymentType;
	NSString* _peerPaymentCounterpartHandle;
	NSString* _peerPaymentMemo;
	NSDate* _peerPaymentMessageReceivedDate;
	PKPaymentTransactionForeignExchangeInformation* _foreignExchangeInformation;
	PKPaymentTransactionFees* _fees;
	NSDecimalNumber* _primaryFundingSourceAmount;
	NSString* _primaryFundingSourceCurrencyCode;
	NSDecimalNumber* _secondaryFundingSourceAmount;
	NSString* _secondaryFundingSourceCurrencyCode;
	long long _secondaryFundingSourceNetwork;
	NSString* _secondaryFundingSourceDPANSuffix;
	NSString* _secondaryFundingSourceFPANIdentifier;
	NSString* _secondaryFundingSourceDescription;
	NSUUID* _requestDeviceScoreIdentifier;
	NSUUID* _sendDeviceScoreIdentifier;
	NSString* _merchantProvidedDescription;
	NSDictionary* _metadata;
	long long _transactionStatus;
	long long _transactionType;
	long long _technologyType;
	unsigned long long _transactionSource;
	long long _transactionDeclinedReason;
	unsigned long long _updateReasons;

}

@property (nonatomic,copy) NSString * identifier;                                                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * serviceIdentifier;                                                               //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * paymentHash;                                                                     //@synthesize paymentHash=_paymentHash - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * amount;                                                                   //@synthesize amount=_amount - In the implementation block
@property (nonatomic,readonly) PKCurrencyAmount * currencyAmount; 
@property (nonatomic,copy) NSDecimalNumber * subtotalAmount;                                                           //@synthesize subtotalAmount=_subtotalAmount - In the implementation block
@property (nonatomic,readonly) PKCurrencyAmount * subtotalCurrencyAmount; 
@property (nonatomic,copy) NSString * currencyCode;                                                                    //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,readonly) NSString * formattedBalanceAdjustmentAmount; 
@property (nonatomic,readonly) NSString * formattedBalanceAdjustmentSubtotalAmount; 
@property (nonatomic,copy) NSDate * transactionDate;                                                                   //@synthesize transactionDate=_transactionDate - In the implementation block
@property (nonatomic,copy) NSDate * transactionStatusChangedDate;                                                      //@synthesize transactionStatusChangedDate=_transactionStatusChangedDate - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                                                                    //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) PKMerchant * merchant;                                                                    //@synthesize merchant=_merchant - In the implementation block
@property (nonatomic,retain) NSString * locality;                                                                      //@synthesize locality=_locality - In the implementation block
@property (nonatomic,retain) NSString * administrativeArea;                                                            //@synthesize administrativeArea=_administrativeArea - In the implementation block
@property (nonatomic,__weak,readonly) NSString * displayLocation; 
@property (nonatomic,retain) CLLocation * location; 
@property (nonatomic,retain) NSDate * locationDate;                                                                    //@synthesize locationDate=_locationDate - In the implementation block
@property (assign,nonatomic) double locationLatitude;                                                                  //@synthesize locationLatitude=_locationLatitude - In the implementation block
@property (assign,nonatomic) double locationLongitude;                                                                 //@synthesize locationLongitude=_locationLongitude - In the implementation block
@property (assign,nonatomic) double locationAltitude;                                                                  //@synthesize locationAltitude=_locationAltitude - In the implementation block
@property (assign,nonatomic) double locationHorizontalAccuracy;                                                        //@synthesize locationHorizontalAccuracy=_locationHorizontalAccuracy - In the implementation block
@property (assign,nonatomic) double locationVerticalAccuracy;                                                          //@synthesize locationVerticalAccuracy=_locationVerticalAccuracy - In the implementation block
@property (assign,nonatomic) long long transitType;                                                                    //@synthesize transitType=_transitType - In the implementation block
@property (assign,nonatomic) unsigned long long transitModifiers;                                                      //@synthesize transitModifiers=_transitModifiers - In the implementation block
@property (assign,nonatomic) BOOL enRoute;                                                                             //@synthesize enRoute=_enRoute - In the implementation block
@property (nonatomic,copy) NSString * stationCodeProvider;                                                             //@synthesize stationCodeProvider=_stationCodeProvider - In the implementation block
@property (nonatomic,copy) NSData * startStationCode;                                                                  //@synthesize startStationCode=_startStationCode - In the implementation block
@property (nonatomic,copy) NSString * startStation;                                                                    //@synthesize startStation=_startStation - In the implementation block
@property (nonatomic,retain) CLLocation * startStationLocation; 
@property (assign,nonatomic) double startStationLatitude;                                                              //@synthesize startStationLatitude=_startStationLatitude - In the implementation block
@property (assign,nonatomic) double startStationLongitude;                                                             //@synthesize startStationLongitude=_startStationLongitude - In the implementation block
@property (nonatomic,copy) NSData * endStationCode;                                                                    //@synthesize endStationCode=_endStationCode - In the implementation block
@property (nonatomic,copy) NSString * endStation;                                                                      //@synthesize endStation=_endStation - In the implementation block
@property (nonatomic,retain) CLLocation * endStationLocation; 
@property (assign,nonatomic) double endStationLatitude;                                                                //@synthesize endStationLatitude=_endStationLatitude - In the implementation block
@property (assign,nonatomic) double endStationLongitude;                                                               //@synthesize endStationLongitude=_endStationLongitude - In the implementation block
@property (assign,nonatomic) BOOL shouldSuppressDate;                                                                  //@synthesize shouldSuppressDate=_shouldSuppressDate - In the implementation block
@property (assign,nonatomic) long long adjustmentType;                                                                 //@synthesize adjustmentType=_adjustmentType - In the implementation block
@property (assign,nonatomic) long long peerPaymentType;                                                                //@synthesize peerPaymentType=_peerPaymentType - In the implementation block
@property (assign,nonatomic) long long peerPaymentStatus; 
@property (nonatomic,copy) NSString * peerPaymentCounterpartHandle;                                                    //@synthesize peerPaymentCounterpartHandle=_peerPaymentCounterpartHandle - In the implementation block
@property (nonatomic,copy) NSString * peerPaymentMemo;                                                                 //@synthesize peerPaymentMemo=_peerPaymentMemo - In the implementation block
@property (nonatomic,copy) NSDate * peerPaymentMessageReceivedDate;                                                    //@synthesize peerPaymentMessageReceivedDate=_peerPaymentMessageReceivedDate - In the implementation block
@property (nonatomic,retain) PKPaymentTransactionForeignExchangeInformation * foreignExchangeInformation;              //@synthesize foreignExchangeInformation=_foreignExchangeInformation - In the implementation block
@property (nonatomic,retain) PKPaymentTransactionFees * fees;                                                          //@synthesize fees=_fees - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * primaryFundingSourceAmount;                                               //@synthesize primaryFundingSourceAmount=_primaryFundingSourceAmount - In the implementation block
@property (nonatomic,copy) NSString * primaryFundingSourceCurrencyCode;                                                //@synthesize primaryFundingSourceCurrencyCode=_primaryFundingSourceCurrencyCode - In the implementation block
@property (nonatomic,readonly) PKCurrencyAmount * primaryFundingSourceCurrencyAmount; 
@property (nonatomic,copy) NSDecimalNumber * secondaryFundingSourceAmount;                                             //@synthesize secondaryFundingSourceAmount=_secondaryFundingSourceAmount - In the implementation block
@property (nonatomic,copy) NSString * secondaryFundingSourceCurrencyCode;                                              //@synthesize secondaryFundingSourceCurrencyCode=_secondaryFundingSourceCurrencyCode - In the implementation block
@property (nonatomic,readonly) PKCurrencyAmount * secondaryFundingSourceCurrencyAmount; 
@property (assign,nonatomic) long long secondaryFundingSourceNetwork;                                                  //@synthesize secondaryFundingSourceNetwork=_secondaryFundingSourceNetwork - In the implementation block
@property (nonatomic,copy) NSString * secondaryFundingSourceDPANSuffix;                                                //@synthesize secondaryFundingSourceDPANSuffix=_secondaryFundingSourceDPANSuffix - In the implementation block
@property (nonatomic,copy) NSString * secondaryFundingSourceFPANIdentifier;                                            //@synthesize secondaryFundingSourceFPANIdentifier=_secondaryFundingSourceFPANIdentifier - In the implementation block
@property (nonatomic,copy) NSString * secondaryFundingSourceDescription;                                               //@synthesize secondaryFundingSourceDescription=_secondaryFundingSourceDescription - In the implementation block
@property (nonatomic,copy) NSUUID * requestDeviceScoreIdentifier;                                                      //@synthesize requestDeviceScoreIdentifier=_requestDeviceScoreIdentifier - In the implementation block
@property (nonatomic,copy) NSUUID * sendDeviceScoreIdentifier;                                                         //@synthesize sendDeviceScoreIdentifier=_sendDeviceScoreIdentifier - In the implementation block
@property (assign,nonatomic) BOOL deviceScoreIdentifiersRequired;                                                      //@synthesize deviceScoreIdentifiersRequired=_deviceScoreIdentifiersRequired - In the implementation block
@property (assign,nonatomic) BOOL deviceScoreIdentifiersSubmitted;                                                     //@synthesize deviceScoreIdentifiersSubmitted=_deviceScoreIdentifiersSubmitted - In the implementation block
@property (nonatomic,copy) NSString * merchantProvidedDescription;                                                     //@synthesize merchantProvidedDescription=_merchantProvidedDescription - In the implementation block
@property (nonatomic,copy) NSDictionary * metadata;                                                                    //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) BOOL isCloudKitArchived;                                                                  //@synthesize isCloudKitArchived=_isCloudKitArchived - In the implementation block
@property (assign,nonatomic) BOOL processedForLocation;                                                                //@synthesize processedForLocation=_processedForLocation - In the implementation block
@property (assign,nonatomic) BOOL processedForMerchantCleanup;                                                         //@synthesize processedForMerchantCleanup=_processedForMerchantCleanup - In the implementation block
@property (assign,nonatomic) BOOL processedForStations;                                                                //@synthesize processedForStations=_processedForStations - In the implementation block
@property (assign,nonatomic) BOOL hasAssociatedPaymentApplication;                                                     //@synthesize hasAssociatedPaymentApplication=_hasAssociatedPaymentApplication - In the implementation block
@property (assign,nonatomic) BOOL hasNotificationServiceData;                                                          //@synthesize hasNotificationServiceData=_hasNotificationServiceData - In the implementation block
@property (nonatomic,readonly) BOOL hasTransactionSource; 
@property (nonatomic,readonly) BOOL hasBackingData; 
@property (assign,nonatomic) long long transactionStatus;                                                              //@synthesize transactionStatus=_transactionStatus - In the implementation block
@property (assign,nonatomic) long long transactionType;                                                                //@synthesize transactionType=_transactionType - In the implementation block
@property (assign,nonatomic) long long technologyType;                                                                 //@synthesize technologyType=_technologyType - In the implementation block
@property (assign,nonatomic) unsigned long long transactionSource;                                                     //@synthesize transactionSource=_transactionSource - In the implementation block
@property (assign,nonatomic) long long transactionDeclinedReason;                                                      //@synthesize transactionDeclinedReason=_transactionDeclinedReason - In the implementation block
@property (nonatomic,readonly) unsigned long long updateReasons;                                                       //@synthesize updateReasons=_updateReasons - In the implementation block
+(id)paymentTransactionWithSource:(unsigned long long)arg1 ;
+(id)cloudStoreTransactionDeviceDataRecordTypeRecordNamePrefix;
+(id)paymentTransactionWithSource:(unsigned long long)arg1 dictionary:(id)arg2 hasNotificationServiceData:(BOOL)arg3 ;
+(id)paymentTransactionFromSource:(unsigned long long)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(unsigned long long)itemType;
-(void)setAdministrativeArea:(NSString *)arg1 ;
-(void)setLocality:(NSString *)arg1 ;
-(NSString *)administrativeArea;
-(NSString *)locality;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(NSString *)currencyCode;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(void)setTransitType:(long long)arg1 ;
-(long long)transitType;
-(long long)adjustmentType;
-(void)setAdjustmentType:(long long)arg1 ;
-(NSDate *)transactionDate;
-(void)setTransactionDate:(NSDate *)arg1 ;
-(long long)technologyType;
-(void)setTechnologyType:(long long)arg1 ;
-(PKMerchant *)merchant;
-(void)setEnRoute:(BOOL)arg1 ;
-(NSString *)endStation;
-(NSString *)startStation;
-(void)setTransitModifiers:(unsigned long long)arg1 ;
-(void)setPaymentHash:(NSString *)arg1 ;
-(void)setStartStationCode:(NSData *)arg1 ;
-(void)setEndStationCode:(NSData *)arg1 ;
-(void)encodeWithCloudStoreCoder:(id)arg1 ;
-(id)initWithCloudStoreCoder:(id)arg1 ;
-(id)recordTypesAndNames;
-(void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1 ;
-(void)setRequestDeviceScoreIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)requestDeviceScoreIdentifier;
-(void)setPeerPaymentType:(long long)arg1 ;
-(void)setPeerPaymentCounterpartHandle:(NSString *)arg1 ;
-(void)setPrimaryFundingSourceAmount:(NSDecimalNumber *)arg1 ;
-(void)setPrimaryFundingSourceCurrencyCode:(NSString *)arg1 ;
-(void)setSecondaryFundingSourceAmount:(NSDecimalNumber *)arg1 ;
-(void)setSecondaryFundingSourceCurrencyCode:(NSString *)arg1 ;
-(void)setSecondaryFundingSourceNetwork:(long long)arg1 ;
-(void)setSecondaryFundingSourceDPANSuffix:(NSString *)arg1 ;
-(void)setSecondaryFundingSourceDescription:(NSString *)arg1 ;
-(void)setTransactionSource:(unsigned long long)arg1 ;
-(void)setHasNotificationServiceData:(BOOL)arg1 ;
-(void)setProcessedForLocation:(BOOL)arg1 ;
-(void)setProcessedForMerchantCleanup:(BOOL)arg1 ;
-(void)setPeerPaymentStatus:(long long)arg1 ;
-(void)setMerchant:(PKMerchant *)arg1 ;
-(void)setStartStation:(NSString *)arg1 ;
-(void)setEndStation:(NSString *)arg1 ;
-(void)addUpdateReasons:(unsigned long long)arg1 ;
-(void)setSecondaryFundingSourceFPANIdentifier:(NSString *)arg1 ;
-(NSUUID *)sendDeviceScoreIdentifier;
-(void)setSendDeviceScoreIdentifier:(NSUUID *)arg1 ;
-(BOOL)hasAssociatedPaymentApplication;
-(void)setHasAssociatedPaymentApplication:(BOOL)arg1 ;
-(PKPaymentTransactionFees *)fees;
-(NSString *)stationCodeProvider;
-(BOOL)hasBackingData;
-(void)setIsCloudKitArchived:(BOOL)arg1 ;
-(long long)transactionStatus;
-(BOOL)isCloudKitArchived;
-(unsigned long long)updateReasons;
-(BOOL)processedForLocation;
-(BOOL)processedForStations;
-(BOOL)processedForMerchantCleanup;
-(void)setProcessedForStations:(BOOL)arg1 ;
-(unsigned long long)transactionSource;
-(BOOL)hasTransactionSource;
-(double)locationLongitude;
-(double)locationLatitude;
-(double)locationAltitude;
-(NSData *)startStationCode;
-(NSData *)endStationCode;
-(void)setStartStationLocation:(CLLocation *)arg1 ;
-(void)setEndStationLocation:(CLLocation *)arg1 ;
-(BOOL)hasNotificationServiceData;
-(PKCurrencyAmount *)currencyAmount;
-(void)setFees:(PKPaymentTransactionFees *)arg1 ;
-(void)setTransactionStatusChangedDate:(NSDate *)arg1 ;
-(void)setTransactionStatus:(long long)arg1 ;
-(id)_transactionSourceString;
-(BOOL)isEqualToPaymentTransaction:(id)arg1 ;
-(BOOL)isCloudArchivableDeviceDataEqual:(id)arg1 ;
-(BOOL)hasCloudArchivableDeviceData;
-(double)locationHorizontalAccuracy;
-(double)locationVerticalAccuracy;
-(NSDate *)locationDate;
-(void)setLocationLatitude:(double)arg1 ;
-(void)setLocationLongitude:(double)arg1 ;
-(void)setLocationAltitude:(double)arg1 ;
-(void)setLocationHorizontalAccuracy:(double)arg1 ;
-(void)setLocationVerticalAccuracy:(double)arg1 ;
-(void)setLocationDate:(NSDate *)arg1 ;
-(id)_transactionTypeString;
-(id)_transitSubtypeString;
-(id)_formatBalanceAdjustmentAmount:(id)arg1 ;
-(PKCurrencyAmount *)subtotalCurrencyAmount;
-(BOOL)enRoute;
-(long long)peerPaymentStatus;
-(id)updateReasonsDescription;
-(PKCurrencyAmount *)primaryFundingSourceCurrencyAmount;
-(PKCurrencyAmount *)secondaryFundingSourceCurrencyAmount;
-(NSString *)formattedBalanceAdjustmentAmount;
-(NSString *)formattedBalanceAdjustmentSubtotalAmount;
-(CLLocation *)startStationLocation;
-(CLLocation *)endStationLocation;
-(id)formattedTransitTransactionMessage:(BOOL)arg1 ;
-(NSString *)paymentHash;
-(NSDecimalNumber *)subtotalAmount;
-(void)setSubtotalAmount:(NSDecimalNumber *)arg1 ;
-(NSDate *)transactionStatusChangedDate;
-(unsigned long long)transitModifiers;
-(void)setStationCodeProvider:(NSString *)arg1 ;
-(double)startStationLatitude;
-(void)setStartStationLatitude:(double)arg1 ;
-(double)startStationLongitude;
-(void)setStartStationLongitude:(double)arg1 ;
-(double)endStationLatitude;
-(void)setEndStationLatitude:(double)arg1 ;
-(double)endStationLongitude;
-(void)setEndStationLongitude:(double)arg1 ;
-(BOOL)shouldSuppressDate;
-(void)setShouldSuppressDate:(BOOL)arg1 ;
-(long long)peerPaymentType;
-(NSString *)peerPaymentCounterpartHandle;
-(NSString *)peerPaymentMemo;
-(void)setPeerPaymentMemo:(NSString *)arg1 ;
-(NSDate *)peerPaymentMessageReceivedDate;
-(void)setPeerPaymentMessageReceivedDate:(NSDate *)arg1 ;
-(PKPaymentTransactionForeignExchangeInformation *)foreignExchangeInformation;
-(void)setForeignExchangeInformation:(PKPaymentTransactionForeignExchangeInformation *)arg1 ;
-(NSDecimalNumber *)primaryFundingSourceAmount;
-(NSString *)primaryFundingSourceCurrencyCode;
-(NSDecimalNumber *)secondaryFundingSourceAmount;
-(NSString *)secondaryFundingSourceCurrencyCode;
-(long long)secondaryFundingSourceNetwork;
-(NSString *)secondaryFundingSourceDPANSuffix;
-(NSString *)secondaryFundingSourceFPANIdentifier;
-(NSString *)secondaryFundingSourceDescription;
-(BOOL)deviceScoreIdentifiersRequired;
-(void)setDeviceScoreIdentifiersRequired:(BOOL)arg1 ;
-(BOOL)deviceScoreIdentifiersSubmitted;
-(void)setDeviceScoreIdentifiersSubmitted:(BOOL)arg1 ;
-(NSString *)merchantProvidedDescription;
-(void)setMerchantProvidedDescription:(NSString *)arg1 ;
-(long long)transactionDeclinedReason;
-(void)setTransactionDeclinedReason:(long long)arg1 ;
-(NSString *)serviceIdentifier;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(long long)transactionType;
-(void)setTransactionType:(long long)arg1 ;
-(id)init;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setIdentifier:(NSString *)arg1 ;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)amount;
-(NSString *)displayLocation;
@end

