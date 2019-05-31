/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _SFCertificate, _SFPublicKey, _SFKeyPair, SFIdentityAttributes;

@interface _SFIdentity : NSObject {

	id _identityInternal;

}

@property (nonatomic,retain) _SFCertificate * certificate; 
@property (nonatomic,readonly) _SFPublicKey * publicKey; 
@property (nonatomic,retain) _SFKeyPair * keyPair; 
@property (nonatomic,readonly) SFIdentityAttributes * attributes; 
+(BOOL)supportsSecureCoding;
-(_SFKeyPair *)keyPair;
-(id)initWithPublicKey:(id)arg1 certificate:(id)arg2 ;
-(id)initWithKeyPair:(id)arg1 certificate:(id)arg2 ;
-(id)initWithPublicKey:(id)arg1 ;
-(id)initWithKeyPair:(id)arg1 ;
-(void)setKeyPair:(_SFKeyPair *)arg1 ;
-(void)setCertificate:(_SFCertificate *)arg1 ;
-(_SFCertificate *)certificate;
-(_SFPublicKey *)publicKey;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SFIdentityAttributes *)attributes;
@end

