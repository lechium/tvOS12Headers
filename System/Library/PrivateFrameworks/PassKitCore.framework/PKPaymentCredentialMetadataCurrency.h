/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentCredentialMetadata.h>

@class NSString;

@interface PKPaymentCredentialMetadataCurrency : PKPaymentCredentialMetadata {

	NSString* _currencyCode;

}

@property (nonatomic,copy,readonly) NSString * currencyCode;              //@synthesize currencyCode=_currencyCode - In the implementation block
-(NSString *)currencyCode;
-(id)initWithConfiguration:(id)arg1 ;
-(id)displayString;
@end

