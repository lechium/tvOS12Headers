/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIColor;

@interface CUIOuterBevelEmbossFilter : CIFilter {

	CIImage* inputImage;
	NSNumber* inputSize;
	NSNumber* inputSoften;
	NSNumber* inputAngle;
	CIColor* inputHighlightColor;
	CIColor* inputShadowColor;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputSize; 
@property (nonatomic,retain) NSNumber * inputSoften; 
@property (nonatomic,retain) NSNumber * inputAngle; 
@property (nonatomic,retain) CIColor * inputHighlightColor; 
@property (nonatomic,retain) CIColor * inputShadowColor; 
+(id)customAttributes;
-(NSNumber *)inputAngle;
-(void)setInputAngle:(NSNumber *)arg1 ;
-(id)_kernelC;
-(NSNumber *)inputSoften;
-(void)setInputSoften:(NSNumber *)arg1 ;
-(CIColor *)inputHighlightColor;
-(void)setInputHighlightColor:(CIColor *)arg1 ;
-(CIColor *)inputShadowColor;
-(void)setInputShadowColor:(CIColor *)arg1 ;
-(void)setInputSize:(NSNumber *)arg1 ;
-(id)_kernel;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputSize;
-(id)outputImage;
@end
