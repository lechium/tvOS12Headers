/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface PKPaymentSessionHandle : NSObject {

	NSObject*<OS_dispatch_queue> _internalSessionSerialQueue;

}
-(void)invalidateSessionWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isFirstInQueue;
-(void)invalidateSession;
@end
