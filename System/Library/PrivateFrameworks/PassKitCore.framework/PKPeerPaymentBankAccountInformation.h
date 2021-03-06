/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:05 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKPeerPaymentBankAccountInformation : NSObject <NSSecureCoding> {

	NSString* _accountNumber;
	NSString* _routingNumber;
	NSString* _bankName;

}

@property (nonatomic,copy) NSString * accountNumber;              //@synthesize accountNumber=_accountNumber - In the implementation block
@property (nonatomic,copy) NSString * routingNumber;              //@synthesize routingNumber=_routingNumber - In the implementation block
@property (nonatomic,copy) NSString * bankName;                   //@synthesize bankName=_bankName - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)bankName;
-(NSString *)accountNumber;
-(void)setBankName:(NSString *)arg1 ;
-(void)setAccountNumber:(NSString *)arg1 ;
-(void)setRoutingNumber:(NSString *)arg1 ;
-(NSString *)routingNumber;
-(void)updateToLatestKeychainData;
-(void)_deleteBankAccountKeychainData;
-(id)_bankAccountInformationInKeychain;
-(void)_writeBankAccountInformationToKeychain;
-(id)_wrapperWithType:(unsigned long long)arg1 ;
-(void)deleteAllBankInformation;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isValid;
@end

