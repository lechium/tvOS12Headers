/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:00 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKPeerPaymentQuote, NSData, NSDictionary;

@interface PKAuthorizedPeerPaymentQuote : NSObject <NSSecureCoding> {

	PKPeerPaymentQuote* _peerPaymentQuote;
	NSData* _transactionData;
	NSDictionary* _certificates;

}

@property (nonatomic,readonly) PKPeerPaymentQuote * peerPaymentQuote;              //@synthesize peerPaymentQuote=_peerPaymentQuote - In the implementation block
@property (nonatomic,readonly) NSData * transactionData;                           //@synthesize transactionData=_transactionData - In the implementation block
@property (nonatomic,readonly) NSDictionary * certificates;                        //@synthesize certificates=_certificates - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)certificates;
-(id)initWithQuote:(id)arg1 transactionData:(id)arg2 certificates:(id)arg3 ;
-(PKPeerPaymentQuote *)peerPaymentQuote;
-(NSData *)transactionData;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

