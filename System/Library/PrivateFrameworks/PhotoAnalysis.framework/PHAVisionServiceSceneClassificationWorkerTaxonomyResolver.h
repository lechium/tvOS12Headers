/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLPhotoAnalysisServiceTaxonomyResolver.h>

@class PHAVisionServiceSceneClassificationWorker;

@interface PHAVisionServiceSceneClassificationWorkerTaxonomyResolver : NSObject <PLPhotoAnalysisServiceTaxonomyResolver> {

	PHAVisionServiceSceneClassificationWorker* _sceneClassificationWorker;

}

@property (__weak,readonly) PHAVisionServiceSceneClassificationWorker * sceneClassificationWorker;              //@synthesize sceneClassificationWorker=_sceneClassificationWorker - In the implementation block
-(id)sceneNodesForSceneIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)searchResultNodesForSceneClassifications:(id)arg1 error:(id*)arg2 ;
-(id)searchResultNodesForSceneIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)sceneTaxonomyHash;
-(id)initWithSceneClassificationWorker:(id)arg1 ;
-(PHAVisionServiceSceneClassificationWorker *)sceneClassificationWorker;
@end

