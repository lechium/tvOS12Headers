/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:05 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIVariableBoxBlur : CIFilter {

	CIImage* inputImage;
	CIImage* inputRadiusImage;
	NSNumber* inputScale;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputRadiusImage; 
@property (nonatomic,retain) NSNumber * inputScale; 
+(id)customAttributes;
-(CIImage *)inputRadiusImage;
-(void)setInputRadiusImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(id)outputImage;
@end

