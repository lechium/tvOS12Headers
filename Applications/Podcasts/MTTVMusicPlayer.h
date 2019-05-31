//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPCPlaybackEngineDelegate.h"
#import "MPCPlaybackEngineEventObserving.h"
#import "MTTVMusicPlayQueueDelegate.h"
#import "TVPAVFPlayback.h"

@class AVPlayer, MPAVItem, MPCPlaybackEngine, MPCPlaybackIntent, MPIdentifierSet, MTTVMusicPlayQueue, NSArray, NSDate, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<TVPMediaItem>, NSString, TVPAudioOption, TVPChapter, TVPChapterCollection, TVPDateRange, TVPInterstitial, TVPPlaybackState, TVPPlaylist, TVPSubtitleOption, TVPTimeRange;

@interface MTTVMusicPlayer : NSObject <MTTVMusicPlayQueueDelegate, MPCPlaybackEngineDelegate, MPCPlaybackEngineEventObserving, TVPAVFPlayback>
{
    id <TVPMediaItem> _currentMediaItem;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_mediaItemObservationQueue;	// 16 = 0x10
    _Bool _waitsAfterPreparingMediaItems;	// 24 = 0x18
    _Bool interactive;	// 25 = 0x19
    _Bool limitReadAhead;	// 26 = 0x1a
    _Bool muted;	// 27 = 0x1b
    _Bool updatesMediaRemoteInfoAutomatically;	// 28 = 0x1c
    _Bool preventsSleepDuringVideoPlayback;	// 29 = 0x1d
    _Bool currentMediaItemInitialLoadingComplete;	// 30 = 0x1e
    _Bool _elapsedTimeJumpInProgress;	// 31 = 0x1f
    _Bool _isStopped;	// 32 = 0x20
    _Bool _isLive;	// 33 = 0x21
    float volume;	// 36 = 0x24
    long long errorBehavior;	// 40 = 0x28
    TVPChapterCollection *currentChapterCollection;	// 48 = 0x30
    double rateUsedForPlayback;	// 56 = 0x38
    NSArray *subtitleOptions;	// 64 = 0x40
    double maximumBitRate;	// 72 = 0x48
    id <TVPASyncPlaybackDelegate> asyncDelegate;	// 80 = 0x50
    TVPSubtitleOption *selectedSubtitleOption;	// 88 = 0x58
    long long mediaItemEndAction;	// 96 = 0x60
    TVPInterstitial *currentInterstitial;	// 104 = 0x68
    NSArray *chapterCollections;	// 112 = 0x70
    TVPAudioOption *selectedAudioOption;	// 120 = 0x78
    double forwardPlaybackEndTime;	// 128 = 0x80
    NSDate *playbackDate;	// 136 = 0x88
    double reversePlaybackEndTime;	// 144 = 0x90
    TVPChapter *currentChapter;	// 152 = 0x98
    MTTVMusicPlayQueue *_playQueue;	// 160 = 0xa0
    MPCPlaybackEngine *_playbackEngine;	// 168 = 0xa8
    NSString *_name;	// 176 = 0xb0
    NSMutableArray *_elapsedTimeObservers;	// 184 = 0xb8
    AVPlayer *_avPlayer;	// 192 = 0xc0
    double _targetElapsedTime;	// 200 = 0xc8
    TVPPlaybackState *_state;	// 208 = 0xd0
    double _duration;	// 216 = 0xd8
    TVPTimeRange *_bufferedTimeRange;	// 224 = 0xe0
    MPAVItem *_currentAVItem;	// 232 = 0xe8
    MPIdentifierSet *_identifiersForLastPlayedContainer;	// 240 = 0xf0
    MPIdentifierSet *_identifiersForLastEndedPlaybackItem;	// 248 = 0xf8
}

@property(retain, nonatomic) MPIdentifierSet *identifiersForLastEndedPlaybackItem; // @synthesize identifiersForLastEndedPlaybackItem=_identifiersForLastEndedPlaybackItem;
@property(retain, nonatomic) MPIdentifierSet *identifiersForLastPlayedContainer; // @synthesize identifiersForLastPlayedContainer=_identifiersForLastPlayedContainer;
@property(retain, nonatomic) MPAVItem *currentAVItem; // @synthesize currentAVItem=_currentAVItem;
@property(retain, nonatomic) TVPTimeRange *bufferedTimeRange; // @synthesize bufferedTimeRange=_bufferedTimeRange;
@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(nonatomic) _Bool isStopped; // @synthesize isStopped=_isStopped;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) TVPPlaybackState *state; // @synthesize state=_state;
@property(nonatomic) double targetElapsedTime; // @synthesize targetElapsedTime=_targetElapsedTime;
@property(nonatomic) _Bool elapsedTimeJumpInProgress; // @synthesize elapsedTimeJumpInProgress=_elapsedTimeJumpInProgress;
@property(retain, nonatomic) AVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property(retain, nonatomic) NSMutableArray *elapsedTimeObservers; // @synthesize elapsedTimeObservers=_elapsedTimeObservers;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property(retain, nonatomic) MTTVMusicPlayQueue *playQueue; // @synthesize playQueue=_playQueue;
@property(nonatomic) _Bool currentMediaItemInitialLoadingComplete; // @synthesize currentMediaItemInitialLoadingComplete;
@property(readonly, nonatomic) TVPChapter *currentChapter; // @synthesize currentChapter;
@property(readonly, nonatomic) double reversePlaybackEndTime; // @synthesize reversePlaybackEndTime;
@property(nonatomic) float volume; // @synthesize volume;
@property(copy, nonatomic) NSDate *playbackDate; // @synthesize playbackDate;
@property(readonly, nonatomic) double forwardPlaybackEndTime; // @synthesize forwardPlaybackEndTime;
@property(retain, nonatomic) TVPAudioOption *selectedAudioOption; // @synthesize selectedAudioOption;
@property(readonly, nonatomic) NSArray *chapterCollections; // @synthesize chapterCollections;
@property(readonly, nonatomic) TVPInterstitial *currentInterstitial; // @synthesize currentInterstitial;
@property(nonatomic) long long mediaItemEndAction; // @synthesize mediaItemEndAction;
@property(nonatomic) _Bool preventsSleepDuringVideoPlayback; // @synthesize preventsSleepDuringVideoPlayback;
@property(retain, nonatomic) TVPSubtitleOption *selectedSubtitleOption; // @synthesize selectedSubtitleOption;
@property(nonatomic) __weak id <TVPASyncPlaybackDelegate> asyncDelegate; // @synthesize asyncDelegate;
@property(nonatomic) double maximumBitRate; // @synthesize maximumBitRate;
@property(readonly, nonatomic) NSArray *subtitleOptions; // @synthesize subtitleOptions;
@property(nonatomic) _Bool updatesMediaRemoteInfoAutomatically; // @synthesize updatesMediaRemoteInfoAutomatically;
@property(nonatomic) _Bool waitsAfterPreparingMediaItems; // @synthesize waitsAfterPreparingMediaItems=_waitsAfterPreparingMediaItems;
@property(nonatomic) _Bool muted; // @synthesize muted;
@property(nonatomic) double rateUsedForPlayback; // @synthesize rateUsedForPlayback;
@property(nonatomic) _Bool limitReadAhead; // @synthesize limitReadAhead;
@property(retain, nonatomic) TVPChapterCollection *currentChapterCollection; // @synthesize currentChapterCollection;
@property(nonatomic) _Bool interactive; // @synthesize interactive;
@property(nonatomic) long long errorBehavior; // @synthesize errorBehavior;
- (void).cxx_destruct;	// IMP=0x00000001001155f8
- (void)engine:(id)arg1 didResetQueueWithPlaybackContext:(id)arg2 error:(id)arg3;	// IMP=0x00000001001151a4
- (void)engine:(id)arg1 willChangeToItem:(id)arg2 fromItem:(id)arg3;	// IMP=0x0000000100115034
- (_Bool)_getStringForTitleLabel:(id *)arg1 subtitleLabel:(id *)arg2 forMediaItem:(id)arg3;	// IMP=0x0000000100114ee8
- (void)_populatePlayerItem:(id)arg1 withMetadataFromMediaItem:(id)arg2;	// IMP=0x00000001001148b4
- (id)_TVPPlaybackStateFromMCPPlayerState:(long long)arg1;	// IMP=0x00000001001147a8
- (void)_playerPathChanged:(id)arg1;	// IMP=0x0000000100114740
- (void)_itemChanged:(id)arg1;	// IMP=0x0000000100114638
- (void)_itemReadyToPlay:(id)arg1;	// IMP=0x0000000100114410
- (void)_loadedDurationDidChange:(id)arg1;	// IMP=0x0000000100114368
- (void)engine:(id)arg1 willResetQueueWithPlaybackIntent:(id)arg2;	// IMP=0x0000000100114364
- (void)_sendNotificationForError:(id)arg1 avItem:(id)arg2;	// IMP=0x000000010011414c
- (void)engine:(id)arg1 didFailToPlayItem:(id)arg2 withError:(id)arg3;	// IMP=0x0000000100114084
- (void)engine:(id)arg1 didFailToPlayFirstItem:(id)arg2;	// IMP=0x000000010011400c
- (void)engineDidPauseForLeaseEnd:(id)arg1;	// IMP=0x0000000100113fb4
- (void)_updateElapsedTimeObserversWithDurationSnapshot:(CDStruct_fce57115)arg1;	// IMP=0x0000000100113ddc
- (void)playQueue:(id)arg1 didChangeDurationSnapshot:(CDStruct_fce57115)arg2;	// IMP=0x0000000100113c98
- (void)playQueue:(id)arg1 didChangeAVPlayer:(id)arg2;	// IMP=0x0000000100113c88
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100113a64
- (void)_setAVPlayer:(id)arg1;	// IMP=0x0000000100113684
- (void)playQueue:(id)arg1 didChangeFromPlayState:(long long)arg2 toPlayState:(long long)arg3;	// IMP=0x00000001001133d4
- (void)playQueue:(id)arg1 didChangePlayingItem:(id)arg2;	// IMP=0x00000001001133c4
- (void)playQueue:(id)arg1 didUpdateQueue:(id)arg2;	// IMP=0x0000000100113258
- (void)skipToNextChapterInDirection:(long long)arg1;	// IMP=0x0000000100113254
- (_Bool)currentMediaItemSupportsScrubbingUsingPlayer;	// IMP=0x000000010011324c
- (void)updateSubtitleOptions;	// IMP=0x0000000100113248
- (void)setSelectedSubtitleOption:(id)arg1 setGlobalPreference:(_Bool)arg2;	// IMP=0x0000000100113244
- (void)removeBoundaryTimeObserverWithToken:(id)arg1;	// IMP=0x000000010011323c
@property(readonly, nonatomic) TVPDateRange *seekableDateRange;
@property(readonly, nonatomic) TVPTimeRange *seekableTimeRange;
@property(readonly, nonatomic) NSArray *audioOptions;
- (void)invalidate;	// IMP=0x00000001001131cc
- (void)removeWeakReferenceToVideoView:(id)arg1;	// IMP=0x00000001001131c8
- (void)addWeakReferenceToVideoView:(id)arg1;	// IMP=0x00000001001131c4
- (void)continueLoadingCurrentItem;	// IMP=0x00000001001131c0
- (void)stopWithVolumeRampDuration:(double)arg1;	// IMP=0x00000001001131b4
- (void)pauseWithVolumeRampDuration:(double)arg1;	// IMP=0x00000001001131a8
- (void)pauseIgnoringDelegate:(_Bool)arg1;	// IMP=0x000000010011319c
- (void)playIgnoringDelegate:(_Bool)arg1;	// IMP=0x0000000100113190
- (id)addBoundaryTimeObserverForDates:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010011310c
- (id)addBoundaryTimeObserverForTimes:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100113104
- (void)changeMediaInDirection:(long long)arg1 reason:(id)arg2;	// IMP=0x00000001001130f8
- (void)changeMediaInDirection:(long long)arg1;	// IMP=0x0000000100113078
- (void)changeToMediaAtIndex:(unsigned long long)arg1 reason:(id)arg2;	// IMP=0x0000000100113030
- (void)setElapsedTime:(double)arg1 seekPrecision:(CDStruct_1b6d18a9)arg2 ignoreDelegate:(_Bool)arg3;	// IMP=0x0000000100113024
- (void)setElapsedTime:(double)arg1 seekPrecision:(CDStruct_1b6d18a9)arg2;	// IMP=0x0000000100113018
- (void)setElapsedTime:(double)arg1 orPlaybackDate:(id)arg2 withAVKitCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100112f6c
- (void)setElapsedTime:(double)arg1 precise:(_Bool)arg2;	// IMP=0x0000000100112f60
- (void)setElapsedTime:(double)arg1;	// IMP=0x0000000100112ee4
@property(readonly, nonatomic) double elapsedTime;
- (void)_setCurrentMediaItem:(id)arg1;	// IMP=0x0000000100112c08
@property(retain, nonatomic) NSObject<TVPMediaItem> *currentMediaItem;
- (void)_setCurrentState:(id)arg1;	// IMP=0x0000000100112848
- (void)stop;	// IMP=0x0000000100112618
- (void)play;	// IMP=0x00000001001125c0
- (void)togglePlayPause;	// IMP=0x0000000100112530
- (void)scanWithRate:(double)arg1;	// IMP=0x0000000100112448
- (void)pause;	// IMP=0x0000000100112338
@property(nonatomic) __weak id <TVPPlaybackDelegate> delegate;
@property(readonly, nonatomic) double rate;
- (void)removeElapsedTimeObserverWithToken:(id)arg1;	// IMP=0x000000010011221c
- (id)addElapsedTimeObserver:(CDUnknownBlockType)arg1;	// IMP=0x0000000100112180
@property(readonly, nonatomic) _Bool currentMediaItemHasDates;
@property(readonly, nonatomic) struct CGSize currentMediaItemPresentationSize;
@property(readonly, nonatomic) _Bool currentMediaItemIsStreaming;
@property(readonly, nonatomic) _Bool currentMediaItemPreparedForLoading;
@property(readonly, nonatomic) _Bool currentMediaItemHasVideoContent;
@property(retain, nonatomic) TVPPlaylist *playlist;
@property(retain, nonatomic) MPCPlaybackIntent *fallbackPlaybackIntent;
- (void)dealloc;	// IMP=0x0000000100111e30
- (id)init;	// IMP=0x0000000100111bf8
- (id)initWithName:(id)arg1;	// IMP=0x0000000100111b8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

