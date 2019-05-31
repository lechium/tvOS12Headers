/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:10 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MREffect.h>
#import <libobjc.A.dylib/MZEffectTiming.h>

@class NSMutableDictionary, MRCroppingSprite, MRImageProvider, NSMutableArray, NSString;

@interface MREffectPictureFrames : MREffect <MZEffectTiming> {

	NSMutableDictionary* mSprites;
	NSMutableDictionary* mFrameProviders;
	MRCroppingSprite* mFrameSprite;
	MRImageProvider* mWallProvider;
	MRImageProvider* mGradientProvider;
	NSMutableArray* mTableProviders;
	NSMutableArray* mWallSprites;
	NSMutableArray* mLayoutWidths;
	double mTotalWidth;
	double mXOffset;
	BOOL mIsLoaded;
	NSMutableArray* mLayouts;
	NSMutableArray* mFrames;
	NSMutableArray* mSlideOrder;
	NSMutableArray* mAspectRatios;
	NSString* mFirstFrame;
	NSString* mLastFrame;

}

@property (nonatomic,readonly) double phaseInDuration; 
@property (nonatomic,readonly) double mainDuration; 
@property (nonatomic,readonly) double phaseOutDuration; 
+(id)customTimingWithEffectID:(id)arg1 effectAttributes:(id)arg2 slideInformation:(id)arg3 textInformation:(id)arg4 inAspectRatio:(double)arg5 ;
+(BOOL)hasCustomTiming;
+(void)initialize;
-(id)initWithEffectID:(id)arg1 ;
-(void)setPhaseInDuration:(double)arg1 mainDuration:(double)arg2 phaseOutDuration:(double)arg3 ;
-(double)lowestDisplayTime;
-(double)showTimeForSlideAtIndex:(unsigned long long)arg1 ;
-(double)showDurationForSlideAtIndex:(unsigned long long)arg1 ;
-(double)displayTimeForSlideAtIndex:(unsigned long long)arg1 ;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(void)_unload;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)elementHitAtPoint:(CGPoint)arg1 withInverseMatrix:(float)arg2 localPoint:(CGPoint*)arg3 ;
-(BOOL)getVerticesCoordinates:(CGPoint*)arg1 withMatrix:(float)arg2 forElement:(id)arg3 ;
-(void)_applyTimingToSlideProviders;
-(double)displayTimeForTextAtIndex:(unsigned long long)arg1 ;
-(double)_durationForEffect:(BOOL)arg1 ;
-(double)_aspectRatioForSlideIndex:(long long)arg1 ;
-(void)_setupLayoutWithSlideInformation:(id)arg1 ;
-(void)_setSizeScripts:(double)arg1 ;
-(CGRect)_frameRectFromInfo:(id)arg1 onShelf:(BOOL)arg2 ;
-(CGRect)_rectForFrameID:(id)arg1 rect:(CGRect)arg2 onTable:(BOOL)arg3 aspectRatio:(double)arg4 slideAspectRatio:(double)arg5 ;
-(double)_startingOffset;
-(id)_randomFrameForAspectRatio:(id)arg1 forTable:(BOOL)arg2 allowMatte:(BOOL)arg3 onlyLoaded:(BOOL)arg4 ignoreFrames:(id)arg5 randomGenerator:(id)arg6 ;
-(double)_durationForEffect;
-(double)_startingWidth;
-(id)_populateFrames;
-(double)_nextSlideProviderAspectRatioToFitInAspectRatio:(id)arg1 providerKeys:(id)arg2 slideInformation:(id)arg3 index:(long long*)arg4 force:(BOOL)arg5 ;
-(double)_xForSlideAtIndex:(long long)arg1 layoutWidth:(double*)arg2 ;
-(id)_drawFrame:(id)arg1 provider:(id)arg2 index:(long long)arg3 rect:(CGRect)arg4 time:(double)arg5 onTable:(BOOL)arg6 inContext:(id)arg7 withArguments:(id)arg8 ;
-(void)_drawBreakFrameInRect:(CGRect)arg1 frameWidth:(double)arg2 time:(double)arg3 inContext:(id)arg4 withArguments:(id)arg5 ;
-(void)_drawBreakFrame:(id)arg1 provider:(id)arg2 index:(long long)arg3 rect:(CGRect)arg4 time:(double)arg5 inContext:(id)arg6 withArguments:(id)arg7 ;
-(id)layoutsWithSlidesInfo:(id)arg1 seed:(unsigned long long)arg2 hasShelf:(BOOL)arg3 ;
-(void)setPixelSize:(CGSize)arg1 ;
-(void)_cleanup;
@end

