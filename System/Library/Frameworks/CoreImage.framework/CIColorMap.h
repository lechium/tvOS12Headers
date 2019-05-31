/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface CIColorMap : CIFilter {

	CIImage* inputImage;
	CIImage* inputGradientImage;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputGradientImage; 
+(id)customAttributes;
-(CIImage *)inputGradientImage;
-(void)setInputGradientImage:(CIImage *)arg1 ;
-(id)_kernel;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
@end
