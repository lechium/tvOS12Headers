/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject, CMOdometer;

@interface CMOdometerProxy : NSObject {

	NSObject*<OS_dispatch_queue> fInternalQueue;
	NSObject*<OS_dispatch_source> fWatchdogTimer;
	NSObject*<OS_dispatch_queue> fCallbackQueue;
	CLConnectionClient* fLocationdConnection;
	/*^block*/id fHandler;
	long long fGpsAvailability;
	CMOdometer* _odometer;
	double _totalDistance;
	double _averageSpeed;
	double _startDate;

}

@property (assign,nonatomic) CMOdometer * odometer;              //@synthesize odometer=_odometer - In the implementation block
@property (assign) double totalDistance;                         //@synthesize totalDistance=_totalDistance - In the implementation block
@property (assign) double averageSpeed;                          //@synthesize averageSpeed=_averageSpeed - In the implementation block
@property (assign) double startDate;                             //@synthesize startDate=_startDate - In the implementation block
-(void)_startWatchdogCheckins;
-(void)_stopWatchdogCheckins;
-(void)_stopOdometerUpdates;
-(CMOdometer *)odometer;
-(void)setAverageSpeed:(double)arg1 ;
-(double)averageSpeed;
-(id)initWithOdometer:(id)arg1 ;
-(void)_startDaemonConnection;
-(void)_startOdometerUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)setOdometer:(CMOdometer *)arg1 ;
-(double)startDate;
-(void)setStartDate:(double)arg1 ;
-(void)_teardown;
-(void)dealloc;
-(double)totalDistance;
-(void)setTotalDistance:(double)arg1 ;
@end

