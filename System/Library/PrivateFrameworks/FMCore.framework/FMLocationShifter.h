/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, GEOLocationShifter;

@interface FMLocationShifter : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	GEOLocationShifter* _locationShifter;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
@property (nonatomic,retain) GEOLocationShifter * locationShifter;                    //@synthesize locationShifter=_locationShifter - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(GEOLocationShifter *)locationShifter;
-(void)setLocationShifter:(GEOLocationShifter *)arg1 ;
-(void)shiftLocation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 callbackQueue:(id)arg3 ;
-(BOOL)isLocationShiftRequiredForItem:(id)arg1 ;
-(BOOL)isLocationShiftRequiredForItems:(id)arg1 ;
-(void)shiftLocations:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 callbackQueue:(id)arg3 ;
-(id)shiftLocation:(id)arg1 timeout:(double)arg2 ;
-(id)shiftLocations:(id)arg1 timeout:(double)arg2 ;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(void)setSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
@end

