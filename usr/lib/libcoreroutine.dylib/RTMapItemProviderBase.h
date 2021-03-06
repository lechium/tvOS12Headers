/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RTDistanceCalculator;

@interface RTMapItemProviderBase : NSObject {

	RTDistanceCalculator* _distanceCalculator;

}

@property (nonatomic,readonly) RTDistanceCalculator * distanceCalculator;              //@synthesize distanceCalculator=_distanceCalculator - In the implementation block
-(id)initWithDistanceCalculator:(id)arg1 ;
-(id)filter:(id)arg1 byDistance:(double)arg2 fromLocation:(id)arg3 andAppendSource:(unsigned long long)arg4 error:(id*)arg5 ;
-(RTDistanceCalculator *)distanceCalculator;
-(id)filter:(id)arg1 byDistance:(double)arg2 fromLocation:(id)arg3 error:(id*)arg4 ;
-(id)init;
@end

