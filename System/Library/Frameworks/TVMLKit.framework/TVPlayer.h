/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <libobjc.A.dylib/AVPlayerViewControllerDelegate.h>
#import <TVMLKit/TVPlayingInternal.h>

@protocol TVPlayerBridging;
@class TVPlaylist, NSMutableSet, NSMutableDictionary, TVMediaItem, AVPlayer, AVPlayerItem, NSString, NSDictionary;

@interface TVPlayer : NSObject <AVPlayerViewControllerDelegate, TVPlayingInternal> {

	long long _state;
	TVPlaylist* _playlist;
	double _scanRate;
	NSMutableSet* _observedTimedMetadataKeys;
	NSMutableDictionary* _observedTimeIntervalMap;
	NSMutableDictionary* _observedTimeBoundaryMap;
	BOOL _currentMediaItemHasVideoContent;
	BOOL _pausesOnHDCPProtectionDown;
	TVMediaItem* _currentMediaItem;
	id<TVPlayerBridging> _bridge;
	AVPlayer* _player;
	AVPlayerItem* _currentPlayerItem;

}

@property (nonatomic,readonly) AVPlayerItem * currentPlayerItem;                    //@synthesize currentPlayerItem=_currentPlayerItem - In the implementation block
@property (assign,nonatomic) BOOL currentMediaItemHasVideoContent;                  //@synthesize currentMediaItemHasVideoContent=_currentMediaItemHasVideoContent - In the implementation block
@property (nonatomic,readonly) AVPlayer * player;                                   //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) TVPlaylist * playlist; 
@property (nonatomic,readonly) long long state; 
@property (nonatomic,readonly) TVMediaItem * currentMediaItem;                      //@synthesize currentMediaItem=_currentMediaItem - In the implementation block
@property (nonatomic,readonly) TVMediaItem * nextMediaItem; 
@property (nonatomic,readonly) TVMediaItem * previousMediaItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<TVPlayerBridging> bridge;                    //@synthesize bridge=_bridge - In the implementation block
@property (assign,nonatomic) double elapsedTime; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,retain) NSDictionary * userInfo; 
@property (assign,nonatomic) double scanRate; 
@property (assign,getter=isMuted,nonatomic) BOOL muted; 
@property (assign,nonatomic) BOOL showsResumeMenu; 
@property (assign,nonatomic) BOOL preventsSleepDuringVideoPlayback; 
@property (assign,nonatomic) BOOL updatesMediaRemoteInfoAutomatically; 
@property (assign,nonatomic) BOOL pausesOnHDCPProtectionDown;                       //@synthesize pausesOnHDCPProtectionDown=_pausesOnHDCPProtectionDown - In the implementation block
+(long long)ikStateForTVPlaybackState:(long long)arg1 ;
-(void)previous;
-(TVPlaylist *)playlist;
-(void)setPlaylist:(TVPlaylist *)arg1 ;
-(void)play;
-(id)initWithPlayer:(id)arg1 ;
-(void)setElapsedTime:(double)arg1 ;
-(TVMediaItem *)currentMediaItem;
-(void)setScanRate:(double)arg1 ;
-(AVPlayer *)player;
-(void)setPreventsSleepDuringVideoPlayback:(BOOL)arg1 ;
-(AVPlayerItem *)currentPlayerItem;
-(void)setMuted:(BOOL)arg1 ;
-(void)next;
-(id<TVPlayerBridging>)bridge;
-(BOOL)isMuted;
-(void)setBridge:(id<TVPlayerBridging>)arg1 ;
-(void)setUpdatesMediaRemoteInfoAutomatically:(BOOL)arg1 ;
-(void)setPausesOnHDCPProtectionDown:(BOOL)arg1 ;
-(BOOL)currentMediaItemHasVideoContent;
-(void)dispatchEvent:(id)arg1 userInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(TVMediaItem *)nextMediaItem;
-(TVMediaItem *)previousMediaItem;
-(BOOL)preventsSleepDuringVideoPlayback;
-(BOOL)updatesMediaRemoteInfoAutomatically;
-(id)playbackDate;
-(void)setCurrentMediaItemHasVideoContent:(BOOL)arg1 ;
-(void)changeToMediaItemAtIndex:(long long)arg1 ;
-(void)startObservingEvent:(id)arg1 extraInfo:(id)arg2 ;
-(void)stopObservingEvent:(id)arg1 ;
-(double)scanRate;
-(id)accessLogs;
-(id)errorLogs;
-(BOOL)pausesOnHDCPProtectionDown;
-(void)playerItemPlayDidEnd:(id)arg1 ;
-(void)setCurrentMediaItem:(TVMediaItem *)arg1 ;
-(void)_updatePlayingStateForRate:(float)arg1 ;
-(void)_processTimedMetadata:(id)arg1 ;
-(void)_updateTimeIntervalObserversWithIntervals:(id)arg1 ;
-(void)_updateTimeBoundaryObserversWithIntervals:(id)arg1 ;
-(void)playerViewController:(id)arg1 willTransitionToVisibilityOfTransportBar:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)reset;
-(void)stop;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)duration;
-(double)elapsedTime;
-(void)pause;
@end

