/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoAnalyzer.h>

@class NSMutableArray, NSMutableDictionary, VCPSceneTaxonomy, NSArray, NSDictionary;

@interface VCPVideoSceneClassifier : VCPVideoAnalyzer {

	SCD_Struct_VC6 _timeLastProcess;
	SCD_Struct_VC6 _start;
	NSMutableArray* _results;
	NSMutableDictionary* _existingScenes;
	VCPSceneTaxonomy* _sceneTaxomy;
	NSMutableDictionary* _internalFrameScenes;
	NSArray* _sceneResults;

}

@property (readonly) NSDictionary * frameScenes; 
@property (retain) NSArray * sceneResults;                    //@synthesize sceneResults=_sceneResults - In the implementation block
-(int)analyzeFrame:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 flags:(unsigned long long*)arg4 ;
-(int)finishAnalysisPass:(SCD_Struct_VC9)arg1 ;
-(void)addResult:(id)arg1 start:(SCD_Struct_VC6)arg2 duration:(SCD_Struct_VC6)arg3 keyIsName:(BOOL)arg4 ;
-(BOOL)compareObjectsOfInterest:(id)arg1 withScenes:(id)arg2 ;
-(void)addAggregatedScenes:(id)arg1 timerange:(SCD_Struct_VC9)arg2 ;
-(NSDictionary *)frameScenes;
-(NSArray *)sceneResults;
-(void)setSceneResults:(NSArray *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)results;
@end

