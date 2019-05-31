/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:10 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <PhotosPlayer/ISBehavior.h>

@interface ISLivePhotoHintBehavior : ISBehavior {

	BOOL _playDuringHint;
	BOOL __didFinishPreparing;
	BOOL __preparing;
	float _prerollRate;
	double __lastProgress;
	SCD_Struct_IS4 _seekTime;

}

@property (assign,setter=_setDidFinishPreparing:,nonatomic) BOOL _didFinishPreparing;                //@synthesize _didFinishPreparing=__didFinishPreparing - In the implementation block
@property (assign,setter=_setPreparing:,getter=_isPreparing,nonatomic) BOOL _preparing;              //@synthesize _preparing=__preparing - In the implementation block
@property (assign,setter=_setLastProgress:,nonatomic) double _lastProgress;                          //@synthesize _lastProgress=__lastProgress - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IS4 seekTime;                                              //@synthesize seekTime=_seekTime - In the implementation block
@property (nonatomic,readonly) float prerollRate;                                                    //@synthesize prerollRate=_prerollRate - In the implementation block
@property (nonatomic,readonly) BOOL playDuringHint;                                                  //@synthesize playDuringHint=_playDuringHint - In the implementation block
-(void)_prepareIfNeeded;
-(SCD_Struct_IS4)seekTime;
-(BOOL)playDuringHint;
-(void)_seekToBeginning;
-(void)activeDidChange;
-(void)_setPreparing:(BOOL)arg1 ;
-(BOOL)_isPreparing;
-(void)_handleDidSeekToBeginning;
-(BOOL)_didFinishPreparing;
-(long long)behaviorType;
-(void)_setDidFinishPreparing:(BOOL)arg1 ;
-(double)_lastProgress;
-(void)_setLastProgress:(double)arg1 ;
-(void)_handleDidFinishPreparing;
-(void)_preroll;
-(void)_handleDidPreroll;
-(id)initWithInitialLayoutInfo:(id)arg1 seekTime:(SCD_Struct_IS4)arg2 prerollRate:(float)arg3 playDuringHint:(BOOL)arg4 ;
-(void)hintWithProgress:(float)arg1 ;
-(float)prerollRate;
@end

