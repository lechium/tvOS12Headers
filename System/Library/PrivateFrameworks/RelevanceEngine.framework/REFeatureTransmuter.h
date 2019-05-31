/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class REFeatureSet, NSArray, REFeatureMapGenerator, REFeatureMap, NSMutableOrderedSet, NSLock;

@interface REFeatureTransmuter : NSObject {

	REFeatureSet* _inputSet;
	REFeatureSet* _outputSet;
	NSArray* _orderedFeatures;
	REFeatureMapGenerator* _orderedFeatureMapGenerator;
	REFeatureMap* _scratchValues;
	REFeatureMapGenerator* _outputFeatureMapGenerator;
	NSMutableOrderedSet* _featureValuesCache;
	NSLock* _featureValuesCacheLock;

}
-(id)transformFeatureMaps:(id)arg1 ;
-(void)collectLoggableState:(/*^block*/id)arg1 ;
-(id)_buildGraph;
-(BOOL)_supportedFeature:(id)arg1 ;
-(id)initWithInputFeatures:(id)arg1 outputFeatures:(id)arg2 outputFeatureMapGenerator:(id)arg3 ;
@end
