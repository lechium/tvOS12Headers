/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MPLayer.h>

@class NSArray, MCContainerParallelizer;

@interface MPLayerAnimatedSet : MPLayer {

	NSArray* _animatedSets;
	MCContainerParallelizer* _layerParallelizer;

}
-(void)finalize;
-(void)setAudioPlaylist:(id)arg1 ;
-(void)removeEffectContainersAtIndices:(id)arg1 ;
-(void)insertEffectContainers:(id)arg1 atIndex:(long long)arg2 ;
-(void)setAnimatedSets:(id)arg1 ;
-(void)moveEffectContainersFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(void)resetStartTimes;
-(id)animatedSets;
-(void)setLayerParallelizer:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)container;
-(void)cleanup;
@end
