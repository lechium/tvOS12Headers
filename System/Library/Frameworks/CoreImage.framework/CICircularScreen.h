/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:05 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CICircularScreen : CIFilter {

	CIImage* inputImage;
	CIVector* inputCenter;
	NSNumber* inputWidth;
	NSNumber* inputSharpness;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) NSNumber * inputWidth; 
@property (nonatomic,retain) NSNumber * inputSharpness; 
+(id)customAttributes;
-(CIVector *)inputCenter;
-(NSNumber *)inputWidth;
-(void)setInputCenter:(CIVector *)arg1 ;
-(NSNumber *)inputSharpness;
-(void)setInputWidth:(NSNumber *)arg1 ;
-(void)setInputSharpness:(NSNumber *)arg1 ;
-(id)_kernel;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
@end
