/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:05 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface CIWrapMirror : CIFilter {

	CIImage* inputImage;

}

@property (nonatomic,retain) CIImage * inputImage; 
+(id)customAttributes;
-(id)_kernel;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
@end

