/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PBCodable;

@interface OBStagedMetric : NSObject {

	unsigned _metricId;
	PBCodable* _metric;

}

@property (assign) unsigned metricId;               //@synthesize metricId=_metricId - In the implementation block
@property (retain) PBCodable * metric;              //@synthesize metric=_metric - In the implementation block
-(PBCodable *)metric;
-(void)setMetric:(PBCodable *)arg1 ;
-(unsigned)metricId;
-(void)setMetricId:(unsigned)arg1 ;
-(id)initWithMetricID:(unsigned)arg1 metric:(id)arg2 ;
-(void)commit;
@end

