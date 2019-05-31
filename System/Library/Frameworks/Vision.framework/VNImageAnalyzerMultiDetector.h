/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetector.h>

@interface VNImageAnalyzerMultiDetector : VNDetector {

	unsigned long long _model;
	shared_ptr<vision::mod::ImageClassifier_HierarchicalModel>* _defaultSceneClassificationHierarchicalModel;
	shared_ptr<vision::mod::ImageAnalyzer>* _imageAnalyzer;

}
+(id)configurationOptionKeysForDetectorKey;
+(unsigned long long)modelForRequestDetectionLevel:(unsigned long long)arg1 ;
+(Class)detectorClassForConfigurationOptions:(id)arg1 error:(id*)arg2 ;
+(shared_ptr<vision::mod::ImageClassifier_HierarchicalModel>*)createHierarchicalModelForMultiDetectorModel:(unsigned long long)arg1 requestRevision:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)completeInitializationAndReturnError:(id*)arg1 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(BOOL)supportsProcessingDevice:(id)arg1 ;
-(id)allSceneLabels;
-(void)_addClassificationObservationsForSceneRequestRevisionNumber:(unsigned long long)arg1 toArray:(id)arg2 fromSceneLabelsAndConfidences:(const vector<std::__1::pair<std::__1::basic_string<char>, float>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, float> > >*)arg3 ;
-(BOOL)_populateLeafSceneObservations:(id)arg1 hierarchySceneObservations:(id)arg2 forLastAnalysisWithOptions:(id)arg3 error:(id*)arg4 ;
-(unsigned)_analysisTypeForScene:(BOOL)arg1 sceneprint:(BOOL)arg2 includingLabelsAndConfidences:(BOOL)arg3 aesthetics:(BOOL)arg4 saliencyHeatMap:(BOOL)arg5 ;
-(BOOL)_performAnalysis:(unsigned)arg1 on32BGRAImageInPixelBufferProvidedByBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)_sceneprintObservationsForLastAnalysisIncludingLabelsAndConfidencesInSceneprint:(BOOL)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)_sceneObservationsForLastAnalysisWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)_aestheticsObservationsForLastAnalysisWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)_saliencyObservationsForLastAnalysisWithRegionOfInterest:(CGRect)arg1 originalImageSize:(CGSize)arg2 options:(id)arg3 error:(id*)arg4 ;
-(CVBufferRef)_createScaledImagePixelBufferFromCropRect:(CGRect)arg1 ofImageBuffer:(id)arg2 forNetworkInputImageSize:(Geometry2D_size2D_)arg3 imageCropAndScaleOption:(unsigned long long)arg4 options:(id)arg5 error:(id*)arg6 ;
-(CVBufferRef)_createScaledImagePixelBufferFromImageBuffer:(id)arg1 forNetworkInputImageSize:(Geometry2D_size2D_)arg2 imageCropAndScaleOption:(unsigned long long)arg3 options:(id)arg4 error:(id*)arg5 ;
-(id)_observationsForScene:(BOOL)arg1 sceneprint:(BOOL)arg2 includingLabelsAndConfidences:(BOOL)arg3 aesthetics:(BOOL)arg4 saliencyHeatMap:(BOOL)arg5 of32BGRAImageInPixelBufferProvidedByBlock:(/*^block*/id)arg6 withOptions:(id)arg7 originalImageSize:(CGSize)arg8 regionOfInterest:(CGRect)arg9 error:(id*)arg10 ;
-(BOOL)_getLeafSceneObservations:(id*)arg1 hierarchySceneObservations:(id*)arg2 of32BGRAImageInPixelBufferProvidedByBlock:(/*^block*/id)arg3 withOptions:(id)arg4 error:(id*)arg5 ;
-(void)_tileRect:(CGRect)arg1 horizontally:(BOOL)arg2 vertically:(BOOL)arg3 windowAspectRatio:(double)arg4 overlapPercentage:(double)arg5 usingBlock:(/*^block*/id)arg6 ;
@end

