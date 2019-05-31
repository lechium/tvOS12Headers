/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureSourceFormat.h>

@interface FigCaptureSourceDepthDataFormat : FigCaptureSourceFormat

@property (readonly) SCD_Struct_BW13 dimensions; 
@property (readonly) float minSupportedFrameRate; 
@property (readonly) float maxSupportedFrameRate; 
@property (readonly) float fieldOfView; 
@property (readonly) SCD_Struct_BW13 highResStillImageDimensions; 
@property (getter=isStillImageOnlyDepthData,readonly) BOOL stillImageOnlyDepthData; 
@property (readonly) float portraitEffectsMatteMainImageDownscalingFactor; 
@property (readonly) BOOL RGBIRStereoFusionSupported; 
-(opaqueCMFormatDescriptionRef)formatDescription;
-(float)portraitEffectsMatteMainImageDownscalingFactor;
-(float)maxSupportedFrameRate;
-(BOOL)RGBIRStereoFusionSupported;
-(SCD_Struct_BW13)highResStillImageDimensions;
-(float)minSupportedFrameRate;
-(SCD_Struct_BW13)depthEngineOutputDimensions;
-(id)copyWithNewPixelFormat:(unsigned)arg1 ;
-(BOOL)isStillImageOnlyDepthData;
-(float)fieldOfView;
-(unsigned)mediaType;
-(SCD_Struct_BW13)dimensions;
@end
