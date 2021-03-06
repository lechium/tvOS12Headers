/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKit/StoreKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSDictionary;

@interface SKPaymentInternal : NSObject <NSCopying> {

	NSString* _applicationUsername;
	NSString* _partnerIdentifier;
	NSString* _partnerTransactionIdentifier;
	NSString* _productIdentifier;
	long long _quantity;
	NSData* _requestData;
	NSDictionary* _requestParameters;
	BOOL _simulatesAskToBuyInSandbox;
	BOOL _isStoreOriginated;

}
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

