/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, PKPaymentRequest;

@interface PKPaymentAuthorizationRequest : NSObject {

	NSData* _credential;
	NSData* _nonceData;
	PKPaymentRequest* _paymentRequest;

}

@property (nonatomic,retain) NSData * credential;                              //@synthesize credential=_credential - In the implementation block
@property (nonatomic,retain) NSData * nonceData;                               //@synthesize nonceData=_nonceData - In the implementation block
@property (nonatomic,readonly) PKPaymentRequest * paymentRequest;              //@synthesize paymentRequest=_paymentRequest - In the implementation block
-(NSData *)credential;
-(PKPaymentRequest *)paymentRequest;
-(NSData *)nonceData;
-(id)initWithPaymentRequest:(id)arg1 ;
-(void)setNonceData:(NSData *)arg1 ;
-(void)setCredential:(NSData *)arg1 ;
@end

