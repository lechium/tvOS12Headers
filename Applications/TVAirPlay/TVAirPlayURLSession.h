//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVContentKeySessionDelegate.h"
#import "TVAirPlayResourceLoadingMediaItemDelegate.h"
#import "TVAirPlaySession.h"
#import "TVPPlaybackDelegate.h"

@class AVContentKeySession, NSData, NSDictionary, NSMutableDictionary, NSNumber, NSObject<OS_dispatch_source>, NSObject<TVAirPlaySessionDelegate>, NSString, TVPPlayer, TVPPlaylist;

@interface TVAirPlayURLSession : NSObject <TVAirPlayResourceLoadingMediaItemDelegate, TVPPlaybackDelegate, AVContentKeySessionDelegate, TVAirPlaySession>
{
    _Bool _deactivated;	// 8 = 0x8
    _Bool _stoppedDueToUser;	// 9 = 0x9
    _Bool _audioOnly;	// 10 = 0xa
    _Bool _playerKVOObserversAdded;	// 11 = 0xb
    unsigned int _sessionID;	// 12 = 0xc
    NSObject<TVAirPlaySessionDelegate> *_delegate;	// 16 = 0x10
    TVPPlayer *_player;	// 24 = 0x18
    TVPPlaylist *_playlist;	// 32 = 0x20
    NSDictionary *_initialRequest;	// 40 = 0x28
    NSMutableDictionary *_resourceLoadingRequests;	// 48 = 0x30
    id _elapsedTimeObserverToken;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_emptyPlaylistTimer;	// 64 = 0x40
    NSNumber *_audioSessionID;	// 72 = 0x48
    AVContentKeySession *_contentKeySession;	// 80 = 0x50
    NSData *_appIdentifier;	// 88 = 0x58
}

+ (id)_secureStopURL;	// IMP=0x000000010000b1c4
+ (id)_mediaItemForParameters:(id)arg1;	// IMP=0x000000010000a6bc
+ (id)_playerForParameters:(id)arg1 playlist:(id)arg2;	// IMP=0x000000010000a418
@property(retain, nonatomic) NSData *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
@property(retain, nonatomic) AVContentKeySession *contentKeySession; // @synthesize contentKeySession=_contentKeySession;
@property(retain, nonatomic) NSNumber *audioSessionID; // @synthesize audioSessionID=_audioSessionID;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *emptyPlaylistTimer; // @synthesize emptyPlaylistTimer=_emptyPlaylistTimer;
@property(retain, nonatomic) id elapsedTimeObserverToken; // @synthesize elapsedTimeObserverToken=_elapsedTimeObserverToken;
@property(nonatomic) _Bool playerKVOObserversAdded; // @synthesize playerKVOObserversAdded=_playerKVOObserversAdded;
@property(retain, nonatomic) NSMutableDictionary *resourceLoadingRequests; // @synthesize resourceLoadingRequests=_resourceLoadingRequests;
@property(retain, nonatomic) NSDictionary *initialRequest; // @synthesize initialRequest=_initialRequest;
@property(retain, nonatomic) TVPPlaylist *playlist; // @synthesize playlist=_playlist;
@property(nonatomic) _Bool audioOnly; // @synthesize audioOnly=_audioOnly;
@property(nonatomic) _Bool stoppedDueToUser; // @synthesize stoppedDueToUser=_stoppedDueToUser;
@property(retain, nonatomic) TVPPlayer *player; // @synthesize player=_player;
@property(readonly, nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) __weak NSObject<TVAirPlaySessionDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool deactivated; // @synthesize deactivated=_deactivated;
- (void).cxx_destruct;	// IMP=0x000000010000b4a4
- (void)_cancelEmptyPlaylistTimer;	// IMP=0x000000010000a3d4
- (id)_parametersWithAddedSessionOptions:(id)arg1;	// IMP=0x000000010000a344
- (void)_removePlayerKVOObservers;	// IMP=0x000000010000a29c
- (void)_parseSessionOptions:(id)arg1;	// IMP=0x000000010000a178
- (_Bool)_handleFailedURLResponseWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100009c40
- (void)_noteAppIdentifierForStreamingKeyRequest:(id)arg1;	// IMP=0x0000000100009b10
- (id)_handleKeyResponseWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100009794
- (void)mediaItem:(id)arg1 didRequestResource:(id)arg2;	// IMP=0x00000001000095f4
- (_Bool)player:(id)arg1 shouldChangeToMediaAtIndex:(unsigned long long)arg2;	// IMP=0x00000001000095ec
- (_Bool)player:(id)arg1 shouldChangeMediaInDirection:(long long)arg2;	// IMP=0x000000010000952c
- (_Bool)player:(id)arg1 shouldScanAtRate:(double)arg2;	// IMP=0x0000000100009524
- (_Bool)playerShouldPause:(id)arg1;	// IMP=0x000000010000951c
- (_Bool)playerShouldPlay:(id)arg1 timeFromWhichToPlay:(double *)arg2;	// IMP=0x0000000100009514
- (_Bool)player:(id)arg1 shouldSeekToTime:(double *)arg2 playbackDate:(id *)arg3;	// IMP=0x000000010000950c
- (void)_sendPendingSecureStopRecordsForSession:(id)arg1 removeAfterSending:(_Bool)arg2;	// IMP=0x00000001000091a4
- (void)contentKeySessionDidGenerateExpiredSessionReport:(id)arg1;	// IMP=0x00000001000090a4
- (void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2;	// IMP=0x0000000100008fe8
- (_Bool)_removeItemWithInfo:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100008da4
- (void)_insertItemWithInfo:(id)arg1 afterItem:(id)arg2;	// IMP=0x0000000100008cc0
- (void)audioSessionInterrupted:(id)arg1;	// IMP=0x0000000100008bc0
- (void)playlistDidPlayToEnd:(id)arg1;	// IMP=0x0000000100008950
- (void)itemDidChange:(id)arg1;	// IMP=0x00000001000086bc
- (void)itemWillChange:(id)arg1;	// IMP=0x00000001000084dc
- (void)itemDidPlayToEnd:(id)arg1;	// IMP=0x00000001000082fc
- (void)_playerStateDidChange:(id)arg1;	// IMP=0x0000000100007f04
- (void)userStop;	// IMP=0x0000000100007d20
- (_Bool)performAction:(id)arg1 withOptions:(id)arg2 outInfo:(id *)arg3 error:(id *)arg4;	// IMP=0x0000000100007488
- (_Bool)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3 error:(id *)arg4;	// IMP=0x00000001000069d0
- (id)getProperty:(id)arg1 qualifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100006580
- (_Bool)stopWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100006324
- (void)startWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000059a4
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long sessionType;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100005738
- (void)dealloc;	// IMP=0x00000001000056a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
