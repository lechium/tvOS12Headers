/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue, CMPocketStateDelegate;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject, NSMutableArray;

@interface CMPocketStateManager : NSObject {

	NSObject*<OS_dispatch_source> fQueryTimer;
	NSObject*<OS_dispatch_queue> fPrivateQueue;
	int fCachedState;
	Dispatcher* fDispatcher;
	double fMaxMonitorTime;
	NSMutableArray* fQueryBlocks;
	id<CMPocketStateDelegate> _delegate;

}

@property (assign,nonatomic) id<CMPocketStateDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)isPocketStateAvailable;
-(void)onNotification:(id)arg1 ;
-(void)onPocketStateUpdated:(int)arg1 ;
-(void)queryStateOntoQueue:(id)arg1 andMonitorFor:(double)arg2 withTimeout:(double)arg3 andHandler:(/*^block*/id)arg4 ;
-(void)addToAggdScalarWithName:(id)arg1 andScalar:(unsigned long long)arg2 ;
-(long long)translateInternalState:(int)arg1 ;
-(id)externalStateToString:(long long)arg1 ;
-(void)_disableDispatcher;
-(void)queryStateOntoQueue:(id)arg1 withTimeout:(double)arg2 andHandler:(/*^block*/id)arg3 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<CMPocketStateDelegate>)arg1 ;
-(id<CMPocketStateDelegate>)delegate;
@end

