/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:39 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMFoundation/IMInvocationTrampoline.h>

@class NSThread;

@interface IMThreadedInvocationTrampoline : IMInvocationTrampoline {

	NSThread* _thread;
	BOOL _immediateForMatchingThread;

}
-(id)initWithTarget:(id)arg1 thread:(id)arg2 immediateForMatchingThread:(BOOL)arg3 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
@end

