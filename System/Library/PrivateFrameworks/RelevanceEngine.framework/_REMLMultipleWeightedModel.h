/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/_REMLWeightedModel.h>

@class REFeature, REFeatureSet, NSMutableDictionary;

@interface _REMLMultipleWeightedModel : _REMLWeightedModel {

	REFeature* _identificationFeature;
	REFeatureSet* _featureSet;
	NSMutableDictionary* _models;

}
-(id)predictWithFeatures:(id)arg1 ;
-(BOOL)saveModelToURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)loadModelFromURL:(id)arg1 error:(id*)arg2 ;
-(void)trainModelWithFeatureMap:(id)arg1 positiveEvent:(id)arg2 ;
-(void)enumerateModels:(/*^block*/id)arg1 ;
-(id)initWithFeature:(id)arg1 featureSet:(id)arg2 ;
-(id)_modelForKey:(id)arg1 ;
-(id)_modelForFeatureMap:(id)arg1 ;
@end

