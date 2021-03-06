/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:09 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MCObject.h>

@class MCAssetAudio, MCAudioPlaylist, MCSlide;

@interface MCSong : MCObject {

	BOOL mStartTimeIsDefined;
	BOOL mDurationIsDefined;
	float mVolume;
	MCAssetAudio* mAsset;
	double mFadeInDuration;
	double mFadeOutDuration;
	unsigned long long mIndex;
	double mStartTime;
	double mDuration;
	MCAudioPlaylist* mAudioPlaylistIfAudioPlaylistSong;
	MCSlide* mSlideIfSlideSong;

}

@property (assign) MCAudioPlaylist * audioPlaylistIfAudioPlaylistSong; 
@property (assign) MCSlide * slideIfSlideSong; 
@property (retain) MCAssetAudio * asset; 
@property (assign,nonatomic) float volume; 
@property (assign,nonatomic) double fadeInDuration; 
@property (assign,nonatomic) double fadeOutDuration; 
@property (assign,nonatomic) unsigned long long index; 
@property (nonatomic,readonly) BOOL startTimeIsDefined; 
@property (assign,nonatomic) double startTime; 
@property (nonatomic,readonly) BOOL durationIsDefined; 
@property (assign,nonatomic) double duration; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(void)setVolume:(float)arg1 ;
-(float)volume;
-(void)demolish;
-(void)undefineStartTime;
-(void)undefineDuration;
-(BOOL)startTimeIsDefined;
-(BOOL)durationIsDefined;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(void)setAudioPlaylistIfAudioPlaylistSong:(MCAudioPlaylist *)arg1 ;
-(void)setSlideIfSlideSong:(MCSlide *)arg1 ;
-(MCAudioPlaylist *)audioPlaylistIfAudioPlaylistSong;
-(MCSlide *)slideIfSlideSong;
-(id)init;
-(void)setDuration:(double)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(double)duration;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(void)setAsset:(MCAssetAudio *)arg1 ;
-(MCAssetAudio *)asset;
@end

