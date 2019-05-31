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

@class NSMutableDictionary, NSMutableArray;

@interface MREffectShiftingTiles : MREffect <MZEffectTiming> {

	NSMutableDictionary* mSprites;
	NSMutableArray* mTiming;
	NSMutableArray* mFirstLayout;
	NSMutableArray* mLastLayout;
	long long mLastCol;
	long long mLastSlideIndex;
	long long mSlideStartIndex;
	BOOL mNeedsToBeRebuilt;
	BOOL mNeedsToRecalculateIterations;
	long long mIterationStartIndex;
	double mIterationStartTime;
	double mAspectRatio;
	NSMutableArray* mSlideAspectRatios;
	double mFirstLayoutDuration;

}

@property (nonatomic,readonly) double phaseInDuration; 
@property (nonatomic,readonly) double mainDuration; 
@property (nonatomic,readonly) double phaseOutDuration; 
+(id)customTimingWithEffectID:(id)arg1 effectAttributes:(id)arg2 slideInformation:(id)arg3 textInformation:(id)arg4 inAspectRatio:(double)arg5 ;
+(BOOL)hasCustomTiming;
+(BOOL)supportsDynamicExpansionForEffectID:(id)arg1 ;
+(unsigned long long)typicalSlideBatchSizeForEffectID:(id)arg1 ;
-(id)initWithEffectID:(id)arg1 ;
-(void)setPhaseInDuration:(double)arg1 mainDuration:(double)arg2 phaseOutDuration:(double)arg3 ;
-(void)appendSlideInformation:(id)arg1 andTextInformation:(id)arg2 ;
-(void)setMultiImageSlideRange:(NSRange)arg1 ;
-(double)lowestDisplayTime;
-(double)showTimeForSlideAtIndex:(unsigned long long)arg1 ;
-(double)showDurationForSlideAtIndex:(unsigned long long)arg1 ;
-(double)displayTimeForSlideAtIndex:(unsigned long long)arg1 ;
-(void)_unload;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)elementHitAtPoint:(CGPoint)arg1 withInverseMatrix:(float)arg2 localPoint:(CGPoint*)arg3 ;
-(BOOL)getVerticesCoordinates:(CGPoint*)arg1 withMatrix:(float)arg2 forElement:(id)arg3 ;
-(BOOL)supportsDynamicExpansion;
-(long long)typicalSlideBatchSize;
-(unsigned long long)firstSlideIndexStillNeededAtTime:(double)arg1 ;
-(void)_applyTimingToSlideProviders;
-(double)displayTimeForTextAtIndex:(unsigned long long)arg1 ;
-(double)_aspectRatioForSlideIndex:(long long)arg1 ;
-(void)_addSlideAspectRatios:(id)arg1 ;
-(void)_setupLayoutsWithSlideInfo:(id)arg1 append:(BOOL)arg2 aspectRatio:(double)arg3 ;
-(double)_calculateMainDuration;
-(long long)_iterationForTime:(double)arg1 startTime:(double*)arg2 duration:(double*)arg3 ;
-(id)_layoutForIteration:(long long)arg1 ;
-(id)_setupFirstLayout;
-(long long)_slideCountForLayout:(long long)arg1 ;
-(long long)_lowestDisplayIteration;
-(double)_timeForIteration:(long long)arg1 ;
-(long long)_widthForLayout:(long long)arg1 ;
-(double)_durationForAspectRatio:(double)arg1 inLayout:(long long)arg2 withScreenRatio:(double)arg3 ;
-(void)_updateSizeScripts;
-(id)_layoutForTime:(double)arg1 ;
-(id)_infoForTime:(double)arg1 ;
-(long long)_displaySlideCountForLayout:(long long)arg1 ;
-(long long)_displayWidthForLayout:(long long)arg1 ;
-(id)_slideProviderWithAspectRatio:(BOOL)arg1 nearest:(long long)arg2 actual:(long long*)arg3 ;
-(void)_cleanup;
@end

