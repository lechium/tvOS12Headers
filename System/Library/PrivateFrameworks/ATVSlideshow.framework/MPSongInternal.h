/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MPSongInternal : NSObject {

	double duration;
	double startTime;
	double audioVolume;
	double fadeInDuration;
	double fadeOutDuration;
	BOOL assetLogging;

}

@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double audioVolume; 
@property (assign,nonatomic) double fadeInDuration; 
@property (assign,nonatomic) double fadeOutDuration; 
@property (assign,nonatomic) BOOL assetLogging; 
-(void)setAudioVolume:(double)arg1 ;
-(double)audioVolume;
-(BOOL)assetLogging;
-(void)setAssetLogging:(BOOL)arg1 ;
-(void)setDuration:(double)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(double)duration;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
@end

