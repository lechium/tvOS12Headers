/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:05 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class CNContact, PKPaymentMethod, PKShippingMethod, PKPayment, PKServiceProviderPurchase, PKAuthorizedPeerPaymentQuote;

@interface PKPaymentAuthorizationClientCallbackStateParam : PKPaymentAuthorizationStateParam {

	long long _kind;
	id _object;

}

@property (nonatomic,retain) id object;                                                                //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) long long kind;                                                           //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) CNContact * shippingContact; 
@property (nonatomic,readonly) PKPaymentMethod * paymentMethod; 
@property (nonatomic,readonly) PKShippingMethod * shippingMethod; 
@property (nonatomic,readonly) PKPayment * payment; 
@property (nonatomic,readonly) PKServiceProviderPurchase * purchase; 
@property (nonatomic,readonly) PKAuthorizedPeerPaymentQuote * authorizedPeerPaymentQuote; 
+(id)paramWithCallbackKind:(long long)arg1 object:(id)arg2 ;
-(void)setKind:(long long)arg1 ;
-(PKServiceProviderPurchase *)purchase;
-(CNContact *)shippingContact;
-(PKShippingMethod *)shippingMethod;
-(PKPaymentMethod *)paymentMethod;
-(PKPayment *)payment;
-(PKAuthorizedPeerPaymentQuote *)authorizedPeerPaymentQuote;
-(id)description;
-(id)object;
-(void)setObject:(id)arg1 ;
-(long long)kind;
@end

