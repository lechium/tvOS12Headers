/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMSkiTrackerInternal;

@interface CMSkiTracker : NSObject {

	CMSkiTrackerInternal* _internal;

}

@property (nonatomic,readonly) CMSkiTrackerInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(BOOL)isAvailable;
-(void)startUpdatesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)stopUpdates;
-(void)querySkiUpdatesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(CMSkiTrackerInternal *)_internal;
-(id)init;
-(void)dealloc;
@end

