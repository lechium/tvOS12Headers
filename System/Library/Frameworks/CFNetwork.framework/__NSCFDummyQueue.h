/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface __NSCFDummyQueue : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
-(id)initWithDispatchQueue:(id)arg1 ;
-(int)maxConcurrentOperationCount;
-(void)dealloc;
-(void)addOperationWithBlock:(/*^block*/id)arg1 ;
@end

