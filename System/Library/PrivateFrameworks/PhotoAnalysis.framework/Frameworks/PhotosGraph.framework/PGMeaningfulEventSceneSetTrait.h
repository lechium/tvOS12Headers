/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGMeaningfulEventSetTrait.h>

@interface PGMeaningfulEventSceneSetTrait : PGMeaningfulEventSetTrait {

	BOOL _accumulateHighConfidenceAssetCounts;
	unsigned long long _minimumNumberOfHighConfidenceAssets;
	unsigned long long _minimumNumberOfNegativeHighConfidenceAssets;

}

@property (assign,nonatomic) unsigned long long minimumNumberOfHighConfidenceAssets;                      //@synthesize minimumNumberOfHighConfidenceAssets=_minimumNumberOfHighConfidenceAssets - In the implementation block
@property (assign,nonatomic) unsigned long long minimumNumberOfNegativeHighConfidenceAssets;              //@synthesize minimumNumberOfNegativeHighConfidenceAssets=_minimumNumberOfNegativeHighConfidenceAssets - In the implementation block
@property (assign,nonatomic) BOOL accumulateHighConfidenceAssetCounts;                                    //@synthesize accumulateHighConfidenceAssetCounts=_accumulateHighConfidenceAssetCounts - In the implementation block
-(id)initWithNodes:(id)arg1 ;
-(id)initWithNodes:(id)arg1 negativeNodes:(id)arg2 ;
-(void)setMinimumNumberOfHighConfidenceAssets:(unsigned long long)arg1 ;
-(void)setAccumulateHighConfidenceAssetCounts:(BOOL)arg1 ;
-(void)setMinimumNumberOfNegativeHighConfidenceAssets:(unsigned long long)arg1 ;
-(BOOL)accumulateHighConfidenceAssetCounts;
-(unsigned long long)minimumNumberOfNegativeHighConfidenceAssets;
-(unsigned long long)minimumNumberOfHighConfidenceAssets;
-(id)debugDescriptionWithMomentNode:(id)arg1 ;
@end

