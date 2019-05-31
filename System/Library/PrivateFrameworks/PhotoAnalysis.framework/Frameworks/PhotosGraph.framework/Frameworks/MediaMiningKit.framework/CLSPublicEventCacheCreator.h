/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLSPublicEventCache;

@interface CLSPublicEventCacheCreator : NSObject {

	BOOL _simulatesTimeout;
	CLSPublicEventCache* _cache;
	unsigned long long _maximumBatchSize;
	double _queryRadius;

}

@property (nonatomic,readonly) CLSPublicEventCache * cache;                      //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumBatchSize;              //@synthesize maximumBatchSize=_maximumBatchSize - In the implementation block
@property (nonatomic,readonly) double queryRadius;                               //@synthesize queryRadius=_queryRadius - In the implementation block
@property (assign,nonatomic) BOOL simulatesTimeout;                              //@synthesize simulatesTimeout=_simulatesTimeout - In the implementation block
-(unsigned long long)maximumBatchSize;
-(void)setSimulatesTimeout:(BOOL)arg1 ;
-(BOOL)simulatesTimeout;
-(id)_queryEventsForTimeLocationTuples:(id)arg1 invalidationTokens:(out id*)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)initWithCache:(id)arg1 queryRadius:(double)arg2 ;
-(id)createCacheForTimeLocationTuples:(id)arg1 invalidationTokens:(out id*)arg2 progressBlock:(/*^block*/id)arg3 ;
-(double)queryRadius;
-(CLSPublicEventCache *)cache;
@end
