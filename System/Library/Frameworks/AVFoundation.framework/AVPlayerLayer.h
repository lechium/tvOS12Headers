/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <QuartzCore/CALayer.h>
#import <AVFoundation/AVKeyPathDependencyHost.h>
#import <AVFoundation/AVWeakObservable.h>

@class AVPlayerLayerInternal, AVPlayer, NSString, NSDictionary;

@interface AVPlayerLayer : CALayer <AVKeyPathDependencyHost, AVWeakObservable> {

	AVPlayerLayerInternal* _playerLayer;

}

@property (nonatomic,retain) AVPlayer * player; 
@property (copy) NSString * videoGravity; 
@property (getter=isReadyForDisplay,nonatomic,readonly) BOOL readyForDisplay; 
@property (nonatomic,readonly) CGRect videoRect; 
@property (nonatomic,copy) NSDictionary * pixelBufferAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)makeClosedCaptionLayer;
+(id)playerLayerWithPlayer:(id)arg1 ;
+(id)keyPathsForValuesAffectingVideoRect;
-(NSDictionary *)pixelBufferAttributes;
-(void)finalize;
-(void)_setSubtitleGravity:(id)arg1 ;
-(void)_getMaskLayer:(id*)arg1 videoLayer:(id*)arg2 subtitleLayer:(id*)arg3 closedCaptionLayer:(id*)arg4 ;
-(CGSize)_playerCurrentItemPresentationSize;
-(BOOL)isLanczosFilterDownscalingEnabled;
-(id)_videoLayer;
-(void)_notifyPlayerOfDisplaySize;
-(id)_maskLayer;
-(void)_addBoundsAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3 ;
-(void)_addPositionAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3 ;
-(id)_closedCaptionLayer;
-(void)_addSublayerTransformAnimationToLayer:(id)arg1 fromTransform:(CATransform3D)arg2 usingAnimation:(id)arg3 gravity:(id)arg4 presentationSize:(CGSize)arg5 forKey:(id)arg6 ;
-(void)_forBoundsAnimations:(id)arg1 applyBlock:(/*^block*/id)arg2 ;
-(void)_addAnimationsForMaskLayer:(id)arg1 forKey:(id)arg2 ;
-(void)_addAnimationsForVideoLayer:(id)arg1 size:(CGSize)arg2 gravity:(id)arg3 forKey:(id)arg4 ;
-(void)_addAnimationsForClosedCaptionLayer:(id)arg1 gravity:(id)arg2 forKey:(id)arg3 ;
-(id)_subtitleLayer;
-(void)_applyCurrentItemPresentationSizeChangeAndForceUpdate:(BOOL)arg1 ;
-(void)_stopObservingPlayer:(id)arg1 ;
-(void)_startObservingPlayer:(id)arg1 ;
-(void)_syncToPlayer:(id)arg1 ;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(BOOL)isOverscanSubtitleSupportEnabled;
-(void)setOverscanSubtitleSupportEnabled:(BOOL)arg1 ;
-(void)declareKeyPathDependenciesWithRegistry:(id)arg1 ;
-(void)addCallbackToCancelDuringDeallocation:(id)arg1 ;
-(CGSize)_displaySize;
-(id)_subtitleGravity;
-(void)setLanczosFilterDownscalingEnabled:(BOOL)arg1 ;
-(long long)lanczosFilterDownscaleFactor;
-(void)setLanczosFilterDownscaleFactor:(long long)arg1 ;
-(CGRect)_videoRectForBounds:(CGRect)arg1 ;
-(CGRect)videoRect;
-(NSString *)videoGravity;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(AVPlayer *)player;
-(void)setVideoGravity:(NSString *)arg1 ;
-(BOOL)isReadyForDisplay;
-(void)setPixelBufferAttributes:(NSDictionary *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)removeAnimationForKey:(id)arg1 ;
-(void)setContentsScale:(double)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)removeAllAnimations;
-(id)initWithLayer:(id)arg1 ;
-(void)layoutSublayers;
@end

