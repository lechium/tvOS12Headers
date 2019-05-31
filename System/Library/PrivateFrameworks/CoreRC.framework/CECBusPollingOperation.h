/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:22 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, CECBusPollingOperationDelegate;
@class CECInterface, NSObject;

@interface CECBusPollingOperation : NSObject {

	CECInterface* _interface;
	unsigned char _initiatorAddress;
	unsigned char _pollingAddress;
	NSObject*<OS_dispatch_queue> _queue;
	id<CECBusPollingOperationDelegate> _delegate;

}

@property (assign,nonatomic) id<CECBusPollingOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)startPolling;
-(void)stopPolling;
-(id)initWithInterface:(id)arg1 initiator:(unsigned char)arg2 queue:(id)arg3 ;
-(void)continuePolling;
-(void)poll;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<CECBusPollingOperationDelegate>)arg1 ;
-(id<CECBusPollingOperationDelegate>)delegate;
@end

