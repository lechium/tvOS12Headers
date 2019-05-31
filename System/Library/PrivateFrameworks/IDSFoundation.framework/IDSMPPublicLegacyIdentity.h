/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/IDSMPIdentity.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface IDSMPPublicLegacyIdentity : IDSMPIdentity <NSSecureCoding>

@property (nonatomic,readonly) SecMPPublicIdentityRef publicIdentity; 
+(id)identityWithData:(id)arg1 error:(id*)arg2 ;
+(SecMPPublicIdentityRef)_createPublicIdentityFromData:(id)arg1 error:(id*)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(id)initWithPublicIdentity:(SecMPPublicIdentityRef)arg1 ;
-(SecMPPublicIdentityRef)publicIdentity;
-(id)signAndProtectData:(id)arg1 withSigner:(id)arg2 error:(id*)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

