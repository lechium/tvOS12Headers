/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:15 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Security.framework/Security
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Security/Security-Structs.h>
#import <libobjc.A.dylib/OS_sec_identity.h>

@class NSString;

@interface SecConcrete_sec_identity : NSObject <OS_sec_identity> {

	SecIdentityRef identity;
	CFArrayRef certs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithIdentityAndCertificates:(SecIdentityRef)arg1 certificates:(CFArrayRef)arg2 ;
-(id)initWithIdentity:(SecIdentityRef)arg1 ;
-(void)dealloc;
@end

