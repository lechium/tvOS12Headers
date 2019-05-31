/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class MPRemotePlaybackQueue;

@interface MPSetPlaybackQueueCommandEvent : MPRemoteCommandEvent {

	MPRemotePlaybackQueue* _playbackQueue;

}

@property (nonatomic,readonly) MPRemotePlaybackQueue * playbackQueue;              //@synthesize playbackQueue=_playbackQueue - In the implementation block
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithCommand:(id)arg1 playbackQueue:(id)arg2 ;
-(MPRemotePlaybackQueue *)playbackQueue;
@end

