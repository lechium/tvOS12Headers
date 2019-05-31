/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:22 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <SecurityFoundation/_SFKey.h>

@class _SFPublicKey, NSString;

@interface _SFKeyPair : _SFKey {

	id _keyPairInternal;

}

@property (getter=_secKey,nonatomic,readonly) SecKeyRef secKey; 
@property (nonatomic,readonly) _SFPublicKey * publicKey; 
@property (nonatomic,copy,readonly) NSString * privateKeyDomain; 
+(Class)_attributesClass;
+(id)_secKeyCreationAttributesForSpecifier:(id)arg1 ;
-(id)keyData;
-(SecKeyRef)_secKey;
-(NSString *)privateKeyDomain;
-(id)initWithData:(id)arg1 specifier:(id)arg2 error:(id*)arg3 ;
-(id)initWithSecKey:(SecKeyRef)arg1 ;
-(id)initRandomKeyPairWithSpecifier:(id)arg1 privateKeyDomain:(NSString*)arg2 ;
-(id)initRandomKeyPairWithSpecifier:(id)arg1 ;
-(_SFPublicKey *)publicKey;
-(id)initWithAttributes:(id)arg1 ;
@end

