/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface EntityMapCache : NSObject {

	NSMutableDictionary* _uuidMap;
	unsigned _capacityLimit;
	unsigned _pruneSize;
	double _hitRetainTime;
	double _missRetainTime;

}

@property (assign) double hitRetainTime;                //@synthesize hitRetainTime=_hitRetainTime - In the implementation block
@property (assign) double missRetainTime;               //@synthesize missRetainTime=_missRetainTime - In the implementation block
@property (assign) unsigned capacityLimit;              //@synthesize capacityLimit=_capacityLimit - In the implementation block
@property (assign) unsigned pruneSize;                  //@synthesize pruneSize=_pruneSize - In the implementation block
-(id)stateDictionary;
-(void)pruneCache;
-(id)entryForUUID:(id)arg1 ;
-(void)setEntry:(id)arg1 forUUID:(id)arg2 ;
-(double)hitRetainTime;
-(void)setHitRetainTime:(double)arg1 ;
-(double)missRetainTime;
-(void)setMissRetainTime:(double)arg1 ;
-(unsigned)capacityLimit;
-(void)setCapacityLimit:(unsigned)arg1 ;
-(unsigned)pruneSize;
-(void)setPruneSize:(unsigned)arg1 ;
-(id)init;
-(id)description;
@end
