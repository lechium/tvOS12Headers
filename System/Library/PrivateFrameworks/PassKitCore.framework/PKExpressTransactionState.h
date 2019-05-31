/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:00 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKExpressTransactionState : NSObject <NSSecureCoding> {

	BOOL _processing;
	long long _technologyType;
	NSString* _paymentApplicationIdentifier;
	NSString* _passUniqueIdentifier;
	unsigned long long _receivedEvents;

}

@property (assign,nonatomic) long long technologyType;                           //@synthesize technologyType=_technologyType - In the implementation block
@property (nonatomic,copy) NSString * paymentApplicationIdentifier;              //@synthesize paymentApplicationIdentifier=_paymentApplicationIdentifier - In the implementation block
@property (nonatomic,retain) NSString * passUniqueIdentifier;                    //@synthesize passUniqueIdentifier=_passUniqueIdentifier - In the implementation block
@property (assign,getter=isProcessing,nonatomic) BOOL processing;                //@synthesize processing=_processing - In the implementation block
@property (assign,nonatomic) unsigned long long receivedEvents;                  //@synthesize receivedEvents=_receivedEvents - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)technologyType;
-(void)setTechnologyType:(long long)arg1 ;
-(NSString *)paymentApplicationIdentifier;
-(void)setPaymentApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)passUniqueIdentifier;
-(void)setPassUniqueIdentifier:(NSString *)arg1 ;
-(BOOL)isProcessing;
-(void)setProcessing:(BOOL)arg1 ;
-(unsigned long long)receivedEvents;
-(void)setReceivedEvents:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
