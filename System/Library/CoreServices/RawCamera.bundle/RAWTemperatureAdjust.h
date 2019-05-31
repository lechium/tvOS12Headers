/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:39 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, CIVector, NSNumber;

@interface RAWTemperatureAdjust : RAWFilter {

	CIImage* inputImage;
	CIVector* inputWhitePoint;
	NSNumber* inputExposure;
	NSNumber* inputVersion;
	CIVector* defaultWhitePoint;

}
+(id)customAttributes;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)setInputExposure:(id)arg1 ;
-(id)customAttributes;
-(id)outputMatrix;
-(void)setInputWhitePoint:(id)arg1 ;
-(id)outputImage;
@end

