/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CIColorPolynomial : CIFilter {

	CIImage* inputImage;
	CIVector* inputRedCoefficients;
	CIVector* inputGreenCoefficients;
	CIVector* inputBlueCoefficients;
	CIVector* inputAlphaCoefficients;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputRedCoefficients; 
@property (nonatomic,retain) CIVector * inputGreenCoefficients; 
@property (nonatomic,retain) CIVector * inputBlueCoefficients; 
@property (nonatomic,retain) CIVector * inputAlphaCoefficients; 
+(id)customAttributes;
-(CIVector *)inputRedCoefficients;
-(void)setInputRedCoefficients:(CIVector *)arg1 ;
-(CIVector *)inputGreenCoefficients;
-(void)setInputGreenCoefficients:(CIVector *)arg1 ;
-(CIVector *)inputBlueCoefficients;
-(void)setInputBlueCoefficients:(CIVector *)arg1 ;
-(CIVector *)inputAlphaCoefficients;
-(void)setInputAlphaCoefficients:(CIVector *)arg1 ;
-(BOOL)_isIdentity;
-(id)_kernel;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
@end

