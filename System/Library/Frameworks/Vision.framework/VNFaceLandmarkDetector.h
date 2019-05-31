/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNEspressoModelFileBasedDetector.h>
#import <libobjc.A.dylib/VNDetectorKeyProviding.h>

@protocol VNModelFile;
@class NSString;

@interface VNFaceLandmarkDetector : VNEspressoModelFileBasedDetector <VNDetectorKeyProviding> {

	shared_ptr<vision::mod::LandmarkAttributes>* _faceAttributesPupilRefiner;
	id<VNModelFile> mLandmarkRefinerModelFileHandle;
	BOOL modelFilesWereMemmapped;

}

@property (readonly) void* faceAttributesPupilRefiner; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)detectorClassForConfigurationOptions:(id)arg1 error:(id*)arg2 ;
+(Geometry2D_point2D_)_computeCentroidUsingPoints:(const Geometry2D_point2D_*)arg1 indicies:(const int*)arg2 numberOfIndicies:(int)arg3 ;
-(BOOL)completeInitializationAndReturnError:(id*)arg1 ;
-(void*)faceAttributesPupilRefiner;
-(CVBufferRef)createLumaPixelBufferFrom:(id)arg1 scaleToSize:(CGSize)arg2 forFaceBBox:(Geometry2D_rect2D_)arg3 initializeVImage:(vImage_Buffer*)arg4 initializeRect2D:(Geometry2D_rect2D_*)arg5 initializeIgnoreCropAndScaleFlag:(BOOL*)arg6 initializeLumaScaleFromOriginal:(float*)arg7 options:(id)arg8 error:(id*)arg9 ;
-(id)computeLandmarksScoreOnImage:(const vImage_Buffer*)arg1 withFaceBoundingBox:(const Geometry2D_rect2D_*)arg2 andLandmarks:(const void*)arg3 error:(id*)arg4 ;
-(BOOL)detectBlinkOnFaceImage:(const vImage_Buffer*)arg1 faceObservation:(id)arg2 lumaRec2DInImageCoordinates:(Geometry2D_rect2D_*)arg3 landmarks:(const void*)arg4 options:(id)arg5 warningRecorder:(id)arg6 error:(id*)arg7 ;
-(void)dealloc;
@end
