/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDPCSData.h>

@class CKEncryptedData;

@interface CKDChainPCSData : CKDPCSData {

	CKEncryptedData* _encryptedChainPCSPrivateKey;

}

@property (nonatomic,readonly) CKEncryptedData * encryptedChainPCSPrivateKey;              //@synthesize encryptedChainPCSPrivateKey=_encryptedChainPCSPrivateKey - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)CKPropertiesDescription;
-(CKEncryptedData *)encryptedChainPCSPrivateKey;
-(id)initWithPCSData:(id)arg1 encryptedPrivateKey:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

