/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSArray, NSString;

@interface PKPeerPaymentQuoteCertificatesResponse : PKPeerPaymentWebServiceResponse {

	BOOL _devSigned;
	NSArray* _encryptionCertificates;
	NSString* _encryptionVersion;

}

@property (nonatomic,copy,readonly) NSArray * encryptionCertificates;              //@synthesize encryptionCertificates=_encryptionCertificates - In the implementation block
@property (nonatomic,copy,readonly) NSString * encryptionVersion;                  //@synthesize encryptionVersion=_encryptionVersion - In the implementation block
@property (assign,nonatomic) BOOL devSigned;                                       //@synthesize devSigned=_devSigned - In the implementation block
-(BOOL)devSigned;
-(void)setDevSigned:(BOOL)arg1 ;
-(NSString *)encryptionVersion;
-(NSArray *)encryptionCertificates;
-(id)initWithData:(id)arg1 ;
@end

