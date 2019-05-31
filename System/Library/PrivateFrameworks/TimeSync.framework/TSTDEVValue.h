/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSTDEVValue : NSObject {

	double _observationInterval;
	double _tdev;

}

@property (nonatomic,readonly) double observationInterval;              //@synthesize observationInterval=_observationInterval - In the implementation block
@property (nonatomic,readonly) double tdev;                             //@synthesize tdev=_tdev - In the implementation block
-(id)initWithObservationInterval:(double)arg1 andTDEV:(double)arg2 ;
-(double)tdev;
-(double)observationInterval;
-(id)description;
@end

