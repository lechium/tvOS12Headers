/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:22 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppSupport/InvocationTrampoline.h>

@class NSOperationQueue;

@interface OperationQueueInvocationTrampoline : InvocationTrampoline {

	NSOperationQueue* _queue;
	long long _priority;

}
-(id)initWithTarget:(id)arg1 operationQueue:(id)arg2 priority:(long long)arg3 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
@end
