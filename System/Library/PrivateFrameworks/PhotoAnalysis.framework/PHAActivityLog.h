/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface PHAActivityLog : NSObject {

	double _absoluteStartTime;
	double _absoluteEndTime;
	unsigned long long _status;
	unsigned long long _graphRequestInterruptionCount;
	NSDate* _startDate;
	double _duration;

}

@property (nonatomic,readonly) NSDate * startDate;                     //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) double duration;                        //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) unsigned long long status;              //@synthesize status=_status - In the implementation block
-(NSDate *)startDate;
-(void)markProcessingStopped:(unsigned long long)arg1 ;
-(id)init;
-(id)description;
-(double)duration;
-(unsigned long long)status;
@end

