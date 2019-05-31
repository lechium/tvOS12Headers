/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSMTIEValue : NSObject {

	double _observationInterval;
	double _mtie;

}

@property (nonatomic,readonly) double observationInterval;              //@synthesize observationInterval=_observationInterval - In the implementation block
@property (nonatomic,readonly) double mtie;                             //@synthesize mtie=_mtie - In the implementation block
-(double)observationInterval;
-(id)initWithObservationInterval:(double)arg1 andMTIE:(double)arg2 ;
-(double)mtie;
-(id)description;
@end

