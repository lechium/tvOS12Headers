/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class PKPaymentProvisioningMethodMetadata;

@interface PKPaymentProvisioningMethodMetadataResponse : PKPaymentWebServiceResponse {

	PKPaymentProvisioningMethodMetadata* _provisioningMethodMetadata;

}

@property (nonatomic,readonly) PKPaymentProvisioningMethodMetadata * provisioningMethodMetadata;              //@synthesize provisioningMethodMetadata=_provisioningMethodMetadata - In the implementation block
-(PKPaymentProvisioningMethodMetadata *)provisioningMethodMetadata;
-(id)initWithData:(id)arg1 ;
@end
