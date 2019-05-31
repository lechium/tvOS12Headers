/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CIAutoEnhanceFace : NSObject {

	int size;
	int centerX;
	int centerY;
	double I;
	double Q;

}

@property (readonly) int size; 
@property (readonly) int centerX; 
@property (readonly) int centerY; 
@property (readonly) double I; 
@property (readonly) double Q; 
-(id)initWithBounds:(CGRect)arg1 andImage:(id)arg2 usingContext:(id)arg3 ;
-(double)I;
-(double)Q;
-(CGRect)faceRect;
-(int)centerX;
-(int)centerY;
-(int)size;
-(id)description;
@end

