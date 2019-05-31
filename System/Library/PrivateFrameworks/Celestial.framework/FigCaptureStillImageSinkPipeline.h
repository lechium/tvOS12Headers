/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:30 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/FigCapturePipeline.h>
#import <libobjc.A.dylib/FigCaptureStillImageSinkPipeline.h>

@class BWFigVideoCaptureDevice, NSString, BWStillImageCoordinatorNode, BWStillImageSampleBufferSinkNode, BWStillImageBravoDisparityNode, BWDepthConverterNode, BWPortraitHDRStagingNode, BWSISNode, NSArray;

@interface FigCaptureStillImageSinkPipeline : FigCapturePipeline <FigCaptureStillImageSinkPipeline> {

	BWFigVideoCaptureDevice* _captureDevice;
	NSString* _sinkID;
	BWStillImageCoordinatorNode* _stillImageCoordinatorNode;
	BWStillImageSampleBufferSinkNode* _stillImageSinkNode;
	BWStillImageBravoDisparityNode* _stillImageDisparityNode;
	BWDepthConverterNode* _stillImageDepthConverterNode;
	BWPortraitHDRStagingNode* _portraitHDRStagingNode;
	BWSISNode* _legacySISNode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * nodes; 
@property (nonatomic,readonly) NSString * sinkID; 
@property (nonatomic,readonly) BWStillImageCoordinatorNode * stillImageCoordinatorNode; 
@property (nonatomic,readonly) BWStillImageSampleBufferSinkNode * stillImageSinkNode; 
@property (nonatomic,readonly) BWPortraitHDRStagingNode * portraitHDRStagingNode; 
+(void)initialize;
-(NSString *)sinkID;
-(void)enablePrepareTimeAllocationsForDeferredPrepare;
-(BWStillImageCoordinatorNode *)stillImageCoordinatorNode;
-(BWStillImageSampleBufferSinkNode *)stillImageSinkNode;
-(BWPortraitHDRStagingNode *)portraitHDRStagingNode;
-(id)initWithConfiguration:(id)arg1 captureDevice:(id)arg2 sourceStillImageOutput:(id)arg3 telephotoSourceStillImageOutput:(id)arg4 infraredOutput:(id)arg5 captureStatusDelegate:(id)arg6 inferenceScheduler:(id)arg7 graph:(id)arg8 clientIsCameraOrDerivative:(BOOL)arg9 ;
-(int)_buildStillImageSinkPipelineWithConfiguration:(id)arg1 sourceStillImageOutput:(id)arg2 telephotoSourceStillImageOutput:(id)arg3 infraredOutput:(id)arg4 captureStatusDelegate:(id)arg5 inferenceScheduler:(id)arg6 graph:(id)arg7 clientIsCameraOrDerivative:(BOOL)arg8 ;
-(void)dealloc;
@end

