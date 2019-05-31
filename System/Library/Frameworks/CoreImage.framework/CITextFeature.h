/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFeature.h>

@class NSArray, NSString;

@interface CITextFeature : CIFeature {

	NSArray* subFeatures;
	NSString* messageString;
	CGPoint topLeft;
	CGPoint topRight;
	CGPoint bottomLeft;
	CGPoint bottomRight;
	CGRect bounds;

}

@property (readonly) NSString * messageString; 
@property (readonly) CGRect bounds; 
@property (readonly) CGPoint topLeft; 
@property (readonly) CGPoint topRight; 
@property (readonly) CGPoint bottomLeft; 
@property (readonly) CGPoint bottomRight; 
@property (readonly) NSArray * subFeatures; 
-(id)initWithBounds:(CGRect)arg1 topLeft:(CGPoint)arg2 topRight:(CGPoint)arg3 bottomLeft:(CGPoint)arg4 bottomRight:(CGPoint)arg5 subFeatures:(id)arg6 messageString:(id)arg7 ;
-(NSString *)messageString;
-(CGPoint)bottomLeft;
-(CGPoint)bottomRight;
-(CGPoint)topLeft;
-(CGPoint)topRight;
-(NSArray *)subFeatures;
-(void)dealloc;
-(CGRect)bounds;
-(id)type;
@end

