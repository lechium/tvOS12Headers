/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCKAsyncSerialQueue;

@interface SCKStartupQueue : NSObject {

	SCKAsyncSerialQueue* _startupTaskQueue;

}

@property (nonatomic,retain) SCKAsyncSerialQueue * startupTaskQueue;              //@synthesize startupTaskQueue=_startupTaskQueue - In the implementation block
-(id)initWithDeferredStartup:(BOOL)arg1 ;
-(void)executeAfterStartup:(/*^block*/id)arg1 ;
-(void)enqueueStartupBlock:(/*^block*/id)arg1 ;
-(SCKAsyncSerialQueue *)startupTaskQueue;
-(void)setStartupTaskQueue:(SCKAsyncSerialQueue *)arg1 ;
@end

