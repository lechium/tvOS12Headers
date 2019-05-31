/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphIngestProcessor.h>

@class NSDictionary;

@interface PGGraphIngestPersonAgeCategoryProcessor : PGGraphIngestProcessor {

	NSDictionary* _confidenceThresholdByChildSceneIdentifier;
	NSDictionary* _confidenceThresholdByAdultSceneIdentifier;

}

@property (nonatomic,readonly) NSDictionary * confidenceThresholdByChildSceneIdentifier;              //@synthesize confidenceThresholdByChildSceneIdentifier=_confidenceThresholdByChildSceneIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * confidenceThresholdByAdultSceneIdentifier;              //@synthesize confidenceThresholdByAdultSceneIdentifier=_confidenceThresholdByAdultSceneIdentifier - In the implementation block
-(BOOL)shouldRunWithGraphUpdate:(id)arg1 ;
-(void)runWithGraphUpdate:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)processPersonAgeCategoryForPersonNodes:(id)arg1 withProgressBlock:(/*^block*/id)arg2 ;
-(unsigned long long)_ageCategoryFromBirthdayDateForPersonNode:(id)arg1 ;
-(unsigned long long)_ageCategoryFromAssetSamplingForPersonNode:(id)arg1 ;
-(id)_sampledAssetsWithSingleFaceForPersonLocalIdentifier:(id)arg1 ;
-(NSDictionary *)confidenceThresholdByChildSceneIdentifier;
-(NSDictionary *)confidenceThresholdByAdultSceneIdentifier;
@end
