/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MREffect.h>

@class MRCroppingSprite, MRImageProvider;

@interface MREffectModern : MREffect {

	MRCroppingSprite* mSprite;
	MRImageProvider* mGradientProvider;

}
-(id)initWithEffectID:(id)arg1 ;
-(void)renderImage:(id)arg1 withMask:(id)arg2 inContext:(id)arg3 atPosition:(CGPoint)arg4 andSize:(CGSize)arg5 zRotation:(float)arg6 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)isNative3D;
-(BOOL)isAlphaFriendly;
-(id)elementHitAtPoint:(CGPoint)arg1 withInverseMatrix:(float)arg2 localPoint:(CGPoint*)arg3 ;
-(BOOL)getVerticesCoordinates:(CGPoint*)arg1 withMatrix:(float)arg2 forElement:(id)arg3 ;
-(BOOL)isOpaque;
-(void)setPixelSize:(CGSize)arg1 ;
-(void)_cleanup;
@end

