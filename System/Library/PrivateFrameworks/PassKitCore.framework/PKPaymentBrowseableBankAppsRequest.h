/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentBrowseableBankAppsRequest : PKPaymentWebServiceRequest {

	NSString* _region;

}

@property (nonatomic,copy) NSString * region;              //@synthesize region=_region - In the implementation block
-(id)initWithRegion:(id)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(void)setRegion:(NSString *)arg1 ;
-(NSString *)region;
@end
