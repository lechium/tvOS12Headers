/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperationQueue.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface TROperationQueue : NSOperationQueue {

	BOOL _cancelled;
	NSObject*<OS_dispatch_queue> _cancellationQ;

}

@property (getter=isCancelled) BOOL cancelled;                                        //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cancellationQ;              //@synthesize cancellationQ=_cancellationQ - In the implementation block
-(void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2 ;
-(NSObject*<OS_dispatch_queue>)cancellationQ;
-(void)setCancellationQ:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(void)invalidate;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(void)addOperationWithBlock:(/*^block*/id)arg1 ;
-(void)addOperation:(id)arg1 ;
@end

