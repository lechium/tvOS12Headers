/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CLSilo.h>

@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue;

@interface CLDispatchSilo : CLSilo {

	NSObject*<OS_dispatch_queue> _queue;
	NSOperationQueue* _operationQueue;

}
-(void)assertInside;
-(void)sync:(/*^block*/id)arg1 ;
-(void)assertOutside;
-(id)newTimer;
-(void)afterInterval:(double)arg1 async:(/*^block*/id)arg2 ;
-(id)initWithUnderlyingQueue:(id)arg1 ;
-(id)initMain;
-(id)debugDescription;
-(id)initWithIdentifier:(id)arg1 ;
-(id)operationQueue;
-(id)queue;
-(void)async:(/*^block*/id)arg1 ;
@end

