/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:09 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MRTransition.h>

@class MRImageProvider;

@interface MRTransitionShortMapZoom : MRTransition {

	MRImageProvider* mGradientProvider;
	MRImageProvider* mPinProvider;
	MRImageProvider* mYellowPinProvider;
	MRImageProvider* mRedPinProvider;
	MRImageProvider* mBoxShadowSmall;

}
-(void)unload;
-(id)initWithTransitionID:(id)arg1 ;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)drawSortedPins:(id)arg1 providers:(id)arg2 attributes:(id)arg3 offset:(CGPoint)arg4 outro:(BOOL)arg5 atTime:(double)arg6 inContext:(id)arg7 withArguments:(id)arg8 ;
-(void)setPixelSize:(CGSize)arg1 ;
-(void)setAttributes:(id)arg1 ;
-(void)_cleanup;
@end
