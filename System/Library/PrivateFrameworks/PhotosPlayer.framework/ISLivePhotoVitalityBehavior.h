/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:09 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <PhotosPlayer/ISBehavior.h>

@interface ISLivePhotoVitalityBehavior : ISBehavior {

	id _easeOutObserver;
	id _transitionToPhotoObserver;
	BOOL _pauseDuringTransition;
	BOOL _prepared;
	BOOL _playing;
	BOOL _playingBeyondPhoto;
	BOOL _preparing;
	BOOL __shouldPlayAfterPreparation;
	float _playRate;
	double _photoTransitionDuration;
	unsigned long long _assetOptions;
	SCD_Struct_IS4 _photoTime;
	SCD_Struct_IS4 _playDuration;

}

@property (assign,setter=_setPrepared:,getter=isPrepared,nonatomic) BOOL prepared;                                            //@synthesize prepared=_prepared - In the implementation block
@property (assign,setter=_setPreparing:,getter=_isPreparing,nonatomic) BOOL preparing;                                        //@synthesize preparing=_preparing - In the implementation block
@property (assign,setter=_setPlayingBeyondPhoto:,getter=isPlayingBeyondPhoto,nonatomic) BOOL playingBeyondPhoto;              //@synthesize playingBeyondPhoto=_playingBeyondPhoto - In the implementation block
@property (assign,setter=_setShouldPlayAfterPreparation:,nonatomic) BOOL _shouldPlayAfterPreparation;                         //@synthesize _shouldPlayAfterPreparation=__shouldPlayAfterPreparation - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IS4 photoTime;                                                                      //@synthesize photoTime=_photoTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IS4 playDuration;                                                                   //@synthesize playDuration=_playDuration - In the implementation block
@property (nonatomic,readonly) double photoTransitionDuration;                                                                //@synthesize photoTransitionDuration=_photoTransitionDuration - In the implementation block
@property (nonatomic,readonly) BOOL pauseDuringTransition;                                                                    //@synthesize pauseDuringTransition=_pauseDuringTransition - In the implementation block
@property (nonatomic,readonly) unsigned long long assetOptions;                                                               //@synthesize assetOptions=_assetOptions - In the implementation block
@property (nonatomic,readonly) float playRate;                                                                                //@synthesize playRate=_playRate - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) BOOL playing;                                                                 //@synthesize playing=_playing - In the implementation block
@property (assign,nonatomic,__weak) id<ISLivePhotoVitalityBehaviorDelegate> delegate; 
-(SCD_Struct_IS4)photoTime;
-(BOOL)isPlaying;
-(float)playRate;
-(void)activeDidChange;
-(void)_setPreparing:(BOOL)arg1 ;
-(BOOL)_isPreparing;
-(void)_handleDidFinishPreroll;
-(long long)behaviorType;
-(double)photoTransitionDuration;
-(void)_startObservingVideo;
-(void)_stopObservingVideo;
-(SCD_Struct_IS4)playDuration;
-(void)_handleDidSeekToStartTime;
-(void)_didReachTransitionTime;
-(void)_didReachTransitionToPhotoTime;
-(BOOL)_shouldPlayAfterPreparation;
-(void)playVitality;
-(void)_startVideoPlayback;
-(void)_setShouldPlayAfterPreparation:(BOOL)arg1 ;
-(void)prepareForVitality;
-(void)_setPlayingBeyondPhoto:(BOOL)arg1 ;
-(unsigned long long)assetOptions;
-(BOOL)pauseDuringTransition;
-(id)initWithInitialLayoutInfo:(id)arg1 photoTime:(SCD_Struct_IS4)arg2 playDuration:(SCD_Struct_IS4)arg3 playRate:(float)arg4 photoTransitionDuration:(double)arg5 pauseDuringTransition:(BOOL)arg6 assetOptions:(unsigned long long)arg7 ;
-(void)cancelSettleToPhoto;
-(BOOL)isPlayingBeyondPhoto;
-(void)dealloc;
-(BOOL)isPrepared;
-(void)_setPrepared:(BOOL)arg1 ;
@end

