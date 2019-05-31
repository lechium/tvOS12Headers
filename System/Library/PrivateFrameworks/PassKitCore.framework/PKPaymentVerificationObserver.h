/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:05 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, PKPaymentVerificationObserverDelegate;
@class NSObject, NSString, PKPaymentPass, PKVerificationChannel;

@interface PKPaymentVerificationObserver : NSObject {

	BOOL _observing;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_source> _timer;
	NSString* _identifier;
	PKPaymentPass* _pass;
	PKVerificationChannel* _verificationChannel;
	id<PKPaymentVerificationObserverDelegate> _delegate;

}

@property (nonatomic,retain,readonly) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain,readonly) PKPaymentPass * pass;                                     //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain,readonly) PKVerificationChannel * verificationChannel;              //@synthesize verificationChannel=_verificationChannel - In the implementation block
@property (assign,nonatomic) id<PKPaymentVerificationObserverDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
-(PKPaymentPass *)pass;
-(id)initWithPaymentPass:(id)arg1 verificationChannel:(id)arg2 identifier:(id)arg3 ;
-(void)startObservingVerificationSourceWithTimeout:(double)arg1 ;
-(PKVerificationChannel *)verificationChannel;
-(void)dealloc;
-(NSString *)identifier;
-(void)setDelegate:(id<PKPaymentVerificationObserverDelegate>)arg1 ;
-(id<PKPaymentVerificationObserverDelegate>)delegate;
-(void)stop;
@end

