/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIColor;

@interface CIWhitePointAdjust : CIFilter {

	CIImage* inputImage;
	CIColor* inputColor;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIColor * inputColor; 
+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)_kernel;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIColor *)inputColor;
-(void)setInputColor:(CIColor *)arg1 ;
-(id)outputImage;
@end

