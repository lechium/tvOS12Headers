/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentSession.h>

@protocol PKNFCTagReaderSessionDelegate;
@interface PKNFCTagReaderSession : PKPaymentSession {

	id<PKNFCTagReaderSessionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKNFCTagReaderSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)startPolling;
-(void)stopPolling;
-(void)setDelegate:(id<PKNFCTagReaderSessionDelegate>)arg1 ;
-(id<PKNFCTagReaderSessionDelegate>)delegate;
-(void)endSession;
@end

