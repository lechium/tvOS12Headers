/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSError, SKPaymentTransaction, SKPayment, NSDate, NSData;

@interface SKPaymentTransactionInternal : NSObject {

	NSString* _uuid;
	NSArray* _downloads;
	NSError* _error;
	SKPaymentTransaction* _originalTransaction;
	SKPayment* _payment;
	NSString* _temporaryIdentifier;
	NSDate* _transactionDate;
	NSString* _transactionIdentifier;
	NSData* _transactionReceipt;
	long long _transactionState;

}
-(id)init;
@end

