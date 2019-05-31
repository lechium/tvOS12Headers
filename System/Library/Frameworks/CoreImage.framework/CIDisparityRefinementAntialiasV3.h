/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary, NSNumber;

@interface CIDisparityRefinementAntialiasV3 : CIFilter {

	CIImage* inputImage;
	CIImage* inputPreprocImage;
	CIImage* inputDisparityWeightImage;
	NSDictionary* inputTuningParameters;
	NSNumber* inputScale;

}

@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputPreprocImage; 
@property (retain) CIImage * inputDisparityWeightImage; 
@property (retain) NSDictionary * inputTuningParameters; 
@property (retain) NSNumber * inputScale; 
-(NSDictionary *)inputTuningParameters;
-(void)setInputTuningParameters:(NSDictionary *)arg1 ;
-(CIImage *)inputPreprocImage;
-(void)setInputPreprocImage:(CIImage *)arg1 ;
-(id)antialiasKernel;
-(CIImage *)inputDisparityWeightImage;
-(void)setInputDisparityWeightImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(id)outputImage;
@end

