/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MRLayer.h>

@class MCContainerParallelizer, NSMutableArray, NSMutableDictionary, NSArray;

@interface MRLayerParallelizer : MRLayer {

	MCContainerParallelizer* mContainer;
	NSMutableArray* mSublayers;
	NSMutableDictionary* mSublayersForPlugs;
	float mBackgroundColor[4];
	BOOL mNeedsToUpdateSublayersOrdering;
	BOOL mNeedsToUpdateBackgroundColor;

}

@property (readonly) NSArray * sublayers; 
@property (readonly) const float* backgroundColor; 
-(id)_currentState;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)isAlphaFriendly;
-(BOOL)isInfinite;
-(void)beginMorphingToAspectRatio:(double)arg1 withDuration:(double)arg2 ;
-(void)endMorphing;
-(void)_unobservePlug;
-(void)depreactivate:(BOOL)arg1 ;
-(void)setNeedsUpdateForPluggerOfSublayer:(id)arg1 ;
-(id)initWithPlug:(id)arg1 andParameters:(id)arg2 inSuperlayer:(id)arg3 ;
-(void)_observePlugOnPreactivate;
-(void)_unobservePlugOnDepreactivate;
-(void)synchronizeTime;
-(void)_renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)hasSomethingToRender;
-(id)_retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)preactivate;
-(BOOL)hasAudio;
-(id)actionHitAtPoint:(CGPoint)arg1 layer:(id*)arg2 ;
-(id)actionForKey:(id)arg1 recursive:(BOOL)arg2 ;
-(id)_dumpLayerWithOptions:(unsigned long long)arg1 ;
-(void)_observePlug;
-(void)_setNeedsToRequestRebuildAudio:(BOOL)arg1 ;
-(void)_unobserveSublayer:(id)arg1 ;
-(void)_deleteSublayer:(id)arg1 ;
-(void)_executeLayerCommandQueue;
-(id)sublayerHitAtPoint:(CGPoint)arg1 onlyIfHitElement:(BOOL)arg2 localPoint:(CGPoint*)arg3 ;
-(id)sublayerForPlugObjectID:(id)arg1 recursive:(BOOL)arg2 ;
-(id)sublayerForID:(id)arg1 ;
-(id)_createSublayerForPlug:(id)arg1 ;
-(void)_observeSublayer:(id)arg1 ;
-(void)_unobserveSublayerOnDepreactivate:(id)arg1 ;
-(BOOL)_sublayersMakesOpaque;
-(void)_observeSublayerOnPreactivate:(id)arg1 ;
-(void)_updateSublayersOrdering;
-(double)phaseInSublayerForID:(id)arg1 ;
-(double)phaseOutSublayerForID:(id)arg1 ;
-(const float*)backgroundColor;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isOpaque;
-(void)setPixelSize:(CGSize)arg1 ;
-(void)cleanup;
-(void)deactivate;
-(NSArray *)sublayers;
@end

