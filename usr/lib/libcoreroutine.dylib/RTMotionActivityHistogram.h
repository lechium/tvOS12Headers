/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface RTMotionActivityHistogram : NSObject {

	NSMutableDictionary* _bins;
	double _totalInterval;

}

@property (assign,nonatomic) double totalInterval;                      //@synthesize totalInterval=_totalInterval - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * bins;              //@synthesize bins=_bins - In the implementation block
-(NSMutableDictionary *)bins;
-(void)addInterval:(double)arg1 ofType:(unsigned long long)arg2 withConfidence:(unsigned long long)arg3 ;
-(double)totalInterval;
-(void)setTotalInterval:(double)arg1 ;
-(id)initWithActivites:(id)arg1 betweenDate:(id)arg2 andDate:(id)arg3 ;
-(id)binForType:(unsigned long long)arg1 ;
-(id)binsSortedByInterval;
-(id)init;
@end

