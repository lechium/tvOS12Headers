/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIMattingSolverInternal : CIFilter {

	CIImage* inputImage;
	CIImage* inputMainImage;
	CIImage* inputPredicateImage;
	NSNumber* inputRadius;
	NSNumber* inputSubsampling;
	NSNumber* inputEPS;
	NSNumber* inputNumIterations;
	NSNumber* inputErosionKernelSize;
	NSNumber* inputUseDepthFilter;
	NSNumber* inputFGThresholdValue;
	NSNumber* inputBGThresholdValue;

}
+(id)customAttributes;
-(id)outputImage;
@end

