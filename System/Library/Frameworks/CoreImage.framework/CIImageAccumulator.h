/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CIImageAccumulator : NSObject {

	void* _state;

}

@property (readonly) CGRect extent; 
@property (readonly) int format; 
+(id)imageAccumulatorWithExtent:(CGRect)arg1 format:(int)arg2 options:(id)arg3 ;
+(id)imageAccumulatorWithExtent:(CGRect)arg1 format:(int)arg2 ;
+(id)imageAccumulatorWithExtent:(CGRect)arg1 format:(int)arg2 colorSpace:(CGColorSpaceRef)arg3 ;
-(id)initWithExtent:(CGRect)arg1 format:(int)arg2 options:(id)arg3 ;
-(id)initWithExtent:(CGRect)arg1 format:(int)arg2 ;
-(id)initWithExtent:(CGRect)arg1 format:(int)arg2 colorSpace:(CGColorSpaceRef)arg3 ;
-(void)setImage:(id)arg1 dirtyRect:(CGRect)arg2 ;
-(void)commitUpdates:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setImage:(id)arg1 ;
-(id)image;
-(void)clear;
-(CGColorSpaceRef)colorSpace;
-(int)format;
-(CGRect)extent;
@end

