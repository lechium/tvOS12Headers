/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMSedentaryTimer_Internal : NSObject {

	NSObject*<OS_dispatch_queue> fClientQueue;
	NSObject*<OS_dispatch_source> fWatchdogTimer;
	NSObject*<OS_dispatch_queue> fDaemonQueue;
	CLConnectionClient* fLocationdConnection;
	BOOL _timerArmed;

}

@property (assign,getter=isTimerArmed,nonatomic) BOOL timerArmed;              //@synthesize timerArmed=_timerArmed - In the implementation block
-(void)_startWatchdogCheckins;
-(void)_stopWatchdogCheckins;
-(void)setTimerArmed:(BOOL)arg1 ;
-(BOOL)isTimerArmed;
-(void)_handleAlarmDataResponse:(shared_ptr<CLConnectionMessage>*)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_handleStartStopTimerResponse:(shared_ptr<CLConnectionMessage>*)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_registerForAlarmsWithHandler:(/*^block*/id)arg1 ;
-(void)_teardown;
-(id)init;
-(void)dealloc;
-(BOOL)_isActive;
@end

