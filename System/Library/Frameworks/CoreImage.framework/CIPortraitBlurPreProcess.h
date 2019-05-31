/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIPortraitBlurPreProcess : CIFilter {

	CIImage* inputImage;
	CIImage* inputBlurmapImage;
	NSNumber* inputUseMetal;

}

@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputBlurmapImage; 
@property (nonatomic,copy) NSNumber * inputUseMetal; 
-(id)_kernelMetal;
-(NSNumber *)inputUseMetal;
-(void)setInputUseMetal:(NSNumber *)arg1 ;
-(CIImage *)inputBlurmapImage;
-(void)setInputBlurmapImage:(CIImage *)arg1 ;
-(id)_kernel;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
@end

