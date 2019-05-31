/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNEspressoModelFileBasedDetector.h>

@interface VNFaceLandmarksSegmenter : VNEspressoModelFileBasedDetector
+(BOOL)getFaceLanmarksSegmenterInputImageSize:(CGSize*)arg1 forRequestRevision:(unsigned long long)arg2 error:(id*)arg3 ;
+(BOOL)getNumberOfSupportedFaceLandmarkSegments:(unsigned long long*)arg1 forRequestRevision:(unsigned long long)arg2 error:(id*)arg3 ;
+(float)_faceLanmarksSegmenterMaximumInputImageAspectRatio;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(BOOL)supportsProcessingDevice:(id)arg1 ;
-(id)espressoModelFileNameForConfigurationOptions:(id)arg1 ;
-(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1 ;
-(void)prepareNetworkInput:(SCD_Struct_VN33*)arg1 fromScaledFacePixelBuffer:(CVBufferRef)arg2 ;
@end

