/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AVPlayer;


@protocol TVPAVFPlayback <TVPPlayback>
@property (nonatomic,readonly) AVPlayer * avPlayer; 
@optional
-(void)setElapsedTime:(double)arg1 orPlaybackDate:(id)arg2 withAVKitCompletion:(/*^block*/id)arg3;

@required
-(AVPlayer *)avPlayer;
-(void)addWeakReferenceToVideoView:(id)arg1;
-(void)removeWeakReferenceToVideoView:(id)arg1;

@end

