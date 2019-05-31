/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:09 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <PhotosPlayer/ISBehavior.h>

@interface ISLivePhotoPlaybackBehavior : ISBehavior {

	struct {
		BOOL respondsToDidFinish;
		BOOL respondsToDidBeginPlaying;
	}  _delegateFlags;
	BOOL _immediatelyShowsPhotoWhenPlaybackEnds;
	BOOL __videoReadyToPlay;
	BOOL __preparing;
	double _photoTransitionDuration;
	long long __currentPlaybackID;
	long long __readyToPlayPlaybackID;
	SCD_Struct_IS4 _keyTime;
	SCD_Struct_IS5 _playbackTimeRange;

}

@property (assign,setter=_setCurrentPlaybackID:,nonatomic) long long _currentPlaybackID;                                  //@synthesize _currentPlaybackID=__currentPlaybackID - In the implementation block
@property (assign,setter=_setReadyToPlayPlaybackID:,nonatomic) long long _readyToPlayPlaybackID;                          //@synthesize _readyToPlayPlaybackID=__readyToPlayPlaybackID - In the implementation block
@property (assign,setter=_setVideoReadyToPlay:,getter=_isVideoReadyToPlay,nonatomic) BOOL _videoReadyToPlay;              //@synthesize _videoReadyToPlay=__videoReadyToPlay - In the implementation block
@property (assign,setter=_setPreparing:,getter=_isPreparing,nonatomic) BOOL _preparing;                                   //@synthesize _preparing=__preparing - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IS4 keyTime;                                                                    //@synthesize keyTime=_keyTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IS5 playbackTimeRange;                                                          //@synthesize playbackTimeRange=_playbackTimeRange - In the implementation block
@property (nonatomic,readonly) double photoTransitionDuration;                                                            //@synthesize photoTransitionDuration=_photoTransitionDuration - In the implementation block
@property (nonatomic,readonly) BOOL immediatelyShowsPhotoWhenPlaybackEnds;                                                //@synthesize immediatelyShowsPhotoWhenPlaybackEnds=_immediatelyShowsPhotoWhenPlaybackEnds - In the implementation block
@property (assign,nonatomic,__weak) id<ISLivePhotoPlaybackBehaviorDelegate> delegate; 
-(void)startPlayback;
-(BOOL)immediatelyShowsPhotoWhenPlaybackEnds;
-(void)videoDidPlayToEnd;
-(void)activeDidChange;
-(void)_prepareVideoForPlaybackIfNeeded;
-(void)_setPreparing:(BOOL)arg1 ;
-(void)_setVideoReadyToPlay:(BOOL)arg1 ;
-(long long)_currentPlaybackID;
-(void)_setCurrentPlaybackID:(long long)arg1 ;
-(BOOL)_isVideoReadyToPlay;
-(void)_startPlaybackWithPlaybackID:(long long)arg1 ;
-(void)_setReadyToPlayPlaybackID:(long long)arg1 ;
-(BOOL)_isPreparing;
-(SCD_Struct_IS5)playbackTimeRange;
-(void)_handleDidSeekToBeginning;
-(void)_handleDidFinishPreroll;
-(void)_prerollWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_didFinishPreparing;
-(long long)_readyToPlayPlaybackID;
-(void)_transitionToVideoWithPlaybackID:(long long)arg1 ;
-(void)_showVideoWithPlaybackID:(long long)arg1 ;
-(id)initWithInitialLayoutInfo:(id)arg1 keyTime:(SCD_Struct_IS4)arg2 playbackTimeRange:(SCD_Struct_IS5)arg3 photoTransitionDuration:(double)arg4 immediatelyShowsPhotoWhenPlaybackEnds:(BOOL)arg5 ;
-(long long)behaviorType;
-(void)videoWillPlayToEnd;
-(SCD_Struct_IS4)keyTime;
-(double)photoTransitionDuration;
-(void)setDelegate:(id<ISLivePhotoPlaybackBehaviorDelegate>)arg1 ;
@end

