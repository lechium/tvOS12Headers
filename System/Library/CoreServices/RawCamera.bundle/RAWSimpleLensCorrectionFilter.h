/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RawCamera-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface RAWSimpleLensCorrectionFilter : CIFilter {

	CIImage* inputImage;
	NSNumber* inputDistortionScaleHalfMinorRadius;
	NSNumber* inputDistortionScaleMinorRadius;
	NSNumber* inputDistortionScaleMajorRadius;
	NSNumber* inputDistortionScaleMaxRadius;
	NSNumber* inputDraftMode;
	id inputColorSpace;
	NSNumber* inputFocalLength;

}
+(id)customAttributes;
-(id)customAttributes;
-(CGPoint)mapPoint:(CGPoint)arg1 info:(id)arg2 ;
-(CGRect)distortionRegionOf:(int)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
-(id)outputImage;
@end
