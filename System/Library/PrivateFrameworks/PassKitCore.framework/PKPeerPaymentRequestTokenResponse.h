/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class PKPeerPaymentRequestToken;

@interface PKPeerPaymentRequestTokenResponse : PKPeerPaymentWebServiceResponse {

	BOOL _success;
	PKPeerPaymentRequestToken* _requestToken;

}

@property (nonatomic,readonly) BOOL success;                                          //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) PKPeerPaymentRequestToken * requestToken;              //@synthesize requestToken=_requestToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(PKPeerPaymentRequestToken *)requestToken;
-(id)initWithData:(id)arg1 deviceScoreIdentifier:(id)arg2 ;
-(BOOL)success;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
@end

