/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface PKPaymentSession : NSObject {

	NSObject*<OS_dispatch_queue> _internalSessionSerialQueue;

}

@property (nonatomic,readonly) unsigned long long lifecycleState; 
+(id)startInAppSessionWithCompletion:(/*^block*/id)arg1 targetQueue:(id)arg2 ;
+(id)startContactlessInterfaceSessionWithCompletion:(/*^block*/id)arg1 targetQueue:(id)arg2 ;
+(id)startReaderSessionWithCompletion:(/*^block*/id)arg1 targetQueue:(id)arg2 ;
+(id)startPeerPaymentSessionWithCompletion:(/*^block*/id)arg1 targetQueue:(id)arg2 ;
+(id)startInAppSessionWithCompletion:(/*^block*/id)arg1 ;
+(id)startContactlessInterfaceSessionWithCompletion:(/*^block*/id)arg1 ;
+(id)startReaderSessionWithCompletion:(/*^block*/id)arg1 ;
+(id)startPeerPaymentSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)invalidateSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)invalidateSession;
-(unsigned long long)lifecycleState;
@end
