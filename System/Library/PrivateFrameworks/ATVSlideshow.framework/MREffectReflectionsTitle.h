/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MREffect.h>

@class NSMutableDictionary, MRTextRenderer, NSMutableArray, MRImageProvider;

@interface MREffectReflectionsTitle : MREffect {

	NSMutableDictionary* mSprites;
	BOOL mFlipped;
	BOOL mSpeedUpRight;
	double mImageMain;
	double mTextMain;
	MRTextRenderer* mTextRenderer;
	MRTextRenderer* mWordRenderer;
	NSMutableArray* mWordImages;
	NSMutableArray* mWordFrames;
	NSMutableArray* mCachedRenderedWords;
	double mTextYOffset;
	CGSize mTextSize;
	CGSize mTextImageSize;
	MRImageProvider* mMaskProvider;
	MRImageProvider* mGroundShadowCenterProvider;
	MRImageProvider* mGroundShadowLeftProvider;
	MRImageProvider* mGroundShadowRightProvider;
	NSMutableDictionary* mBreakInformation;
	BOOL mIsLoaded;

}
-(id)initWithEffectID:(id)arg1 ;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(void)_loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)_unload;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)elementHitAtPoint:(CGPoint)arg1 withInverseMatrix:(float)arg2 localPoint:(CGPoint*)arg3 ;
-(BOOL)getVerticesCoordinates:(CGPoint*)arg1 withMatrix:(float)arg2 forElement:(id)arg3 ;
-(CGSize)_maxSizeForTextElement:(id)arg1 ;
-(long long)_maxLinesForTextElement:(id)arg1 ;
-(void)_applySizeScripts:(double)arg1 ;
-(void)renderTextAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 scale:(double)arg4 ;
-(void)render1SlideAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 scale:(double)arg4 tilt:(long long)arg5 phaseOutType:(long long)arg6 direction:(long long)arg7 ;
-(void)renderKey:(id)arg1 size:(CGSize)arg2 position:(CGPoint)arg3 yRot:(double)arg4 tX:(double)arg5 time:(double)arg6 inContext:(id)arg7 withArguments:(id)arg8 light:(BOOL)arg9 shadow:(BOOL)arg10 ;
-(void)cacheRenderedWords;
-(void)setPixelSize:(CGSize)arg1 ;
-(void)setAttributes:(id)arg1 ;
-(void)_cleanup;
@end

