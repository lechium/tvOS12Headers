/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/WirelessDiagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PBCodable;

@interface AWDMetricContainer : NSObject {

	PBCodable* _metric;
	unsigned _metricId;

}

@property (nonatomic,retain) PBCodable * metric;               //@synthesize metric=_metric - In the implementation block
@property (nonatomic,readonly) unsigned metricId;              //@synthesize metricId=_metricId - In the implementation block
-(id)initWithMetricId:(unsigned)arg1 ;
-(PBCodable *)metric;
-(void)setMetric:(PBCodable *)arg1 ;
-(unsigned)metricId;
@end

