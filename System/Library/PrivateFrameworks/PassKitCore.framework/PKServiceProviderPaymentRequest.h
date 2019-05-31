/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKServiceProviderOrder;

@interface PKServiceProviderPaymentRequest : PKPaymentRequest <NSSecureCoding> {

	PKServiceProviderOrder* _serviceProviderOrder;

}

@property (nonatomic,readonly) PKServiceProviderOrder * serviceProviderOrder;              //@synthesize serviceProviderOrder=_serviceProviderOrder - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)merchantIdentifier;
-(PKServiceProviderOrder *)serviceProviderOrder;
-(id)initWithServiceProviderOrder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

