//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBSBulletinServiceDelegate.h"

@class NSNumber, NSString, PBBulletinService, PBSBulletin;

@interface PBMediaRemoteObserver : NSObject <PBSBulletinServiceDelegate>
{
    PBBulletinService *_bulletinService;	// 8 = 0x8
    NSNumber *_lastNotificationPID;	// 16 = 0x10
    _Bool _metadataUpdateRunning;	// 24 = 0x18
    _Bool _playing;	// 25 = 0x19
    _Bool _playingMusic;	// 26 = 0x1a
    _Bool _isMusicAppPlaying;	// 27 = 0x1b
    _Bool _isPodcastsAppPlaying;	// 28 = 0x1c
    int _nowPlayingProcessPID;	// 32 = 0x20
    NSNumber *_playbackRate;	// 40 = 0x28
    PBSBulletin *_currentBulletin;	// 48 = 0x30
    id <PBMediaRemoteObserverDelegate> _delegate;	// 56 = 0x38
    NSNumber *_trackIdentifier;	// 64 = 0x40
    NSString *_mediaType;	// 72 = 0x48
}

+ (id)_allAudioMediaTypes;	// IMP=0x00000001000c8f94
+ (id)_bulletinInfoForNowPlayingInfo:(id)arg1;	// IMP=0x00000001000c8c38
+ (id)sharedInstance;	// IMP=0x00000001000c6bb4
@property(readonly, copy, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, copy, nonatomic) NSNumber *trackIdentifier; // @synthesize trackIdentifier=_trackIdentifier;
@property(nonatomic) __weak id <PBMediaRemoteObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001000c90d4
- (void)_updateWithNowPlayingInfoDictionary:(id)arg1 playbackState:(unsigned int)arg2 nowPlayingPID:(int)arg3;	// IMP=0x00000001000c81a8
- (void)_performMetadataUpdate;	// IMP=0x00000001000c79d0
- (void)_setNeedsMetadataUpdate;	// IMP=0x00000001000c77dc
- (void)_presentTrackChangeBulletinWithInfo:(id)arg1;	// IMP=0x00000001000c74f4
- (void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3;	// IMP=0x00000001000c7468
- (void)_nowPlayingAppDidChange:(id)arg1;	// IMP=0x00000001000c72e4
- (void)_nowPlayingAppPlaybackStateDidChange:(id)arg1;	// IMP=0x00000001000c7200
- (void)_nowPlayingInfoDidChange:(id)arg1;	// IMP=0x00000001000c711c
@property(readonly, nonatomic) int nowPlayingProcessPID; // @synthesize nowPlayingProcessPID=_nowPlayingProcessPID;
@property(retain, nonatomic) PBSBulletin *currentBulletin; // @synthesize currentBulletin=_currentBulletin;
@property(readonly, nonatomic) _Bool isPodcastsAppPlaying; // @synthesize isPodcastsAppPlaying=_isPodcastsAppPlaying;
@property(readonly, nonatomic) _Bool isMusicAppPlaying; // @synthesize isMusicAppPlaying=_isMusicAppPlaying;
@property(readonly, nonatomic) _Bool playingMusic; // @synthesize playingMusic=_playingMusic;
@property(readonly, nonatomic) _Bool playing; // @synthesize playing=_playing;
@property(readonly, copy, nonatomic) NSNumber *playbackRate; // @synthesize playbackRate=_playbackRate;
- (_Bool)nowPlayingMediaTypeAudioOnly;	// IMP=0x00000001000c6e10
- (void)stopObserving;	// IMP=0x00000001000c6db8
- (void)startObserving;	// IMP=0x00000001000c6cbc
- (void)dealloc;	// IMP=0x00000001000c6c70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

