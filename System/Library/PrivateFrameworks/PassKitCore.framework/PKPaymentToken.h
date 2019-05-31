/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKPaymentMethod, NSString, NSData, NSURL;

@interface PKPaymentToken : NSObject <NSSecureCoding> {

	PKPaymentMethod* _paymentMethod;
	NSString* _paymentInstrumentName;
	NSString* _paymentNetwork;
	NSString* _transactionIdentifier;
	NSData* _paymentData;
	NSURL* _redeemURL;
	NSString* _retryNonce;

}

@property (nonatomic,retain) PKPaymentMethod * paymentMethod;              //@synthesize paymentMethod=_paymentMethod - In the implementation block
@property (nonatomic,copy) NSString * paymentInstrumentName;               //@synthesize paymentInstrumentName=_paymentInstrumentName - In the implementation block
@property (nonatomic,copy) NSString * paymentNetwork;                      //@synthesize paymentNetwork=_paymentNetwork - In the implementation block
@property (nonatomic,copy) NSString * transactionIdentifier;               //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,copy) NSData * paymentData;                           //@synthesize paymentData=_paymentData - In the implementation block
@property (nonatomic,retain) NSURL * redeemURL;                            //@synthesize redeemURL=_redeemURL - In the implementation block
@property (nonatomic,copy) NSString * retryNonce;                          //@synthesize retryNonce=_retryNonce - In the implementation block
+(id)simulatedTokenForNetwork:(id)arg1 ;
+(id)paymentTokenWithProtobuf:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(long long)version;
-(void)setPaymentNetwork:(NSString *)arg1 ;
-(NSString *)paymentNetwork;
-(PKPaymentMethod *)paymentMethod;
-(NSString *)retryNonce;
-(void)setRetryNonce:(NSString *)arg1 ;
-(id)protobuf;
-(void)setPaymentInstrumentName:(NSString *)arg1 ;
-(NSData *)paymentData;
-(void)setPaymentData:(NSData *)arg1 ;
-(void)setPaymentMethod:(PKPaymentMethod *)arg1 ;
-(NSURL *)redeemURL;
-(void)setRedeemURL:(NSURL *)arg1 ;
-(NSString *)paymentInstrumentName;
-(NSString *)transactionIdentifier;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end

