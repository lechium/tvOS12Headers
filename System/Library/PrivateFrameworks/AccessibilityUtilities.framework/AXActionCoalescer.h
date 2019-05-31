/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface AXActionCoalescer : NSObject {

	NSObject*<OS_dispatch_queue> _targetQueue;
	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _consistencyQueue;
	BOOL _coalescing;

}
+(id)mainQueueCoalescerWithBlock:(/*^block*/id)arg1 ;
-(void)performCoalescedAsynchronously;
-(id)initWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
@end

