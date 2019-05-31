/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:43 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/UIPDFMarkupAnnotation.h>

@interface UIPDFHighlightAnnotation : UIPDFMarkupAnnotation {

	CGColorRef _highLightColor;

}
-(int)annotationType;
-(BOOL)recognizeGestures;
-(void)drawLayerUpright:(id)arg1 inContext:(CGContextRef)arg2 selection:(id)arg3 rectangles:(unsigned long long)arg4 ;
-(void)drawLayerRotated:(id)arg1 inContext:(CGContextRef)arg2 selection:(id)arg3 rectangles:(unsigned long long)arg4 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(Class)viewClass;
@end

