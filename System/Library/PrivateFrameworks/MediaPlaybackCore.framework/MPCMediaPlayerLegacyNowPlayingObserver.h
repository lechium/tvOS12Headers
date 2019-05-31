/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPNowPlayingObserver.h>

@class MPCMediaPlayerLegacyPlayer;

@interface MPCMediaPlayerLegacyNowPlayingObserver : MPNowPlayingObserver {

	MPCMediaPlayerLegacyPlayer* _mpcPlayer;

}

@property (assign,nonatomic,__weak) MPCMediaPlayerLegacyPlayer * mpcPlayer;              //@synthesize mpcPlayer=_mpcPlayer - In the implementation block
-(void)_createNowPlayingInfoForItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setMpcPlayer:(MPCMediaPlayerLegacyPlayer *)arg1 ;
-(MPCMediaPlayerLegacyPlayer *)mpcPlayer;
@end

