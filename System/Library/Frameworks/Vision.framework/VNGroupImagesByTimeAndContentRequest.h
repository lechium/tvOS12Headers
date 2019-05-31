/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/VNRequest.h>

@class NSArray;

@interface VNGroupImagesByTimeAndContentRequest : VNRequest {

	NSArray* _inputImageprints;
	float _clusteringDistanceThreshold;

}

@property (nonatomic,copy) NSArray * inputImageprints;                       //@synthesize inputImageprints=_inputImageprints - In the implementation block
@property (assign,nonatomic) float clusteringDistanceThreshold;              //@synthesize clusteringDistanceThreshold=_clusteringDistanceThreshold - In the implementation block
+(BOOL)warmUpRequestPerformer:(id)arg1 error:(id*)arg2 ;
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(BOOL)warmUpRequestPerformer:(id)arg1 error:(id*)arg2 ;
-(BOOL)allowsCachingOfResults;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(BOOL)internalPerformInContext:(id)arg1 error:(id*)arg2 ;
-(id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(/*^block*/id)resultsSortingComparator;
-(id)initWithImageprintObservations:(id)arg1 clusteringDistanceThreshold:(float)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSArray *)inputImageprints;
-(float)clusteringDistanceThreshold;
-(id)initWithImageprintObservations:(id)arg1 clusteringDistanceThreshold:(float)arg2 ;
-(void)setInputImageprints:(NSArray *)arg1 ;
-(void)setClusteringDistanceThreshold:(float)arg1 ;
@end

