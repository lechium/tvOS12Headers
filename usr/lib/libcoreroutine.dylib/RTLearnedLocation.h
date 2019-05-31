/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RTLocation;

@interface RTLearnedLocation : NSObject {

	RTLocation* _location;
	unsigned long long _dataPointCount;
	double _confidence;

}

@property (nonatomic,readonly) RTLocation * location;                          //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) unsigned long long dataPointCount;              //@synthesize dataPointCount=_dataPointCount - In the implementation block
@property (nonatomic,readonly) double confidence;                              //@synthesize confidence=_confidence - In the implementation block
-(unsigned long long)dataPointCount;
-(id)initWithLocation:(id)arg1 dataPointCount:(unsigned long long)arg2 confidence:(double)arg3 ;
-(id)initWithLocationOfInterest:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(RTLocation *)location;
-(double)confidence;
@end

