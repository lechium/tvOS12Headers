/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:40 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/GKSPerformance.framework/GKSPerformance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AWDHistogram : NSObject {

	unsigned* histogram;
	unsigned* buckets;
	float* floatBuckets;
	unsigned size;

}
-(void)print;
-(void)addValue:(unsigned)arg1 withIncrements:(unsigned)arg2 ;
-(id)initWithBuckets:(unsigned*)arg1 size:(unsigned)arg2 ;
-(id)initWithFloatBuckets:(float*)arg1 size:(unsigned)arg2 ;
-(void)addFloatValue:(float)arg1 ;
-(void)reduceFrequencyByFactor:(unsigned)arg1 ;
-(id)newArray;
-(id)array;
-(void)dealloc;
-(void)reset;
-(void)addValue:(unsigned)arg1 ;
@end

