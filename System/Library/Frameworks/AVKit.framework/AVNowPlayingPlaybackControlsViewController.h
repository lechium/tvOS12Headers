/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVPlaybackControlsViewController.h>
#import <AVKit/AVNowPlayingFrameSource.h>
#import <AVKit/AVFrameSetDelegate.h>
#import <AVKit/AVInfoPanelNavigationDelegate.h>
#import <AVKit/AVInfoPanelSubtitlesDelegate.h>
#import <AVKit/AVInfoPanelLanguageDelegate.h>
#import <AVKit/AVInfoPanelViewControllerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol AVPlayerViewControllerDelegate;
@class AVLoadingIndicatorView, NSTimer, UIView, _UIVisualEffectBackdropView, AVNowPlayingDimmingView, AVNowPlayingTransportBar, UIImageView, AVInfoPanelViewController, AVNowPlayingInfoHintView, CADisplayLink, AVFrameSet, AVInternalPlaybackOptions, NSString, NSURL, NSArray, AVKeyValueObserverCollection, AVDurationTimeFormatter, NSUUID, AVStandardScanningDelegate, AVTimeRange, _AVFocusContainerView;

@interface AVNowPlayingPlaybackControlsViewController : AVPlaybackControlsViewController <AVNowPlayingFrameSource, AVFrameSetDelegate, AVInfoPanelNavigationDelegate, AVInfoPanelSubtitlesDelegate, AVInfoPanelLanguageDelegate, AVInfoPanelViewControllerDelegate, UIViewControllerTransitioningDelegate> {

	BOOL _showsLoadingIndicator;
	BOOL _playing;
	BOOL _contentFullyLoaded;
	BOOL _selectButtonHeldDown;
	BOOL _assetHasDates;
	BOOL _initialPlaybackBegun;
	BOOL _sentEnteredInterstitial;
	BOOL _shouldFadeOutPlaybackControlsOncePlaybackBegins;
	long long _playbackControlsStateWhenVisible;
	double _maxMinusMinDurationCached;
	double _timeOfLastCurrentDateCheck;
	AVLoadingIndicatorView* _loadingIndicatorView;
	NSTimer* _hidePlaybackControlsViewAfterDelayTimer;
	UIView* _controlsContainerView;
	_UIVisualEffectBackdropView* _transportCaptureView;
	AVNowPlayingDimmingView* _dimmingView;
	AVNowPlayingTransportBar* _transportBar;
	UIImageView* _scanningImageView;
	AVInfoPanelViewController* _infoPanelViewController;
	AVNowPlayingInfoHintView* _infoHintView;
	CADisplayLink* _displayLink;
	AVFrameSet* _frameSet;
	SCD_Struct_AV8 _touch;
	id _audioSessionInterruptionNotificationObserver;
	id _playerItemDidScanToEndTimeObserver;
	BOOL _applicationResigning;
	BOOL _loading;
	BOOL _shouldShowInfoHint;
	BOOL _scanningImageBlockCalled;
	BOOL _scanningTriggeredBySelectButton;
	float _currentScanRate;
	AVInternalPlaybackOptions* _playbackOptions;
	long long _playbackControlsState;
	NSString* _needleText;
	NSURL* _alternateThumbnailStreamURL;
	id<AVPlayerViewControllerDelegate> _delegate;
	NSArray* _customInfoViewControllers;
	NSString* _infoHint;
	AVKeyValueObserverCollection* _nowPlayingKVO;
	AVDurationTimeFormatter* _interstitialTimeFormatter;
	NSUUID* _scanningSesssionUUID;
	AVStandardScanningDelegate* _standardScanningDelegate;

}

@property (nonatomic,retain) AVKeyValueObserverCollection * nowPlayingKVO;                                                //@synthesize nowPlayingKVO=_nowPlayingKVO - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;                                                               //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic) BOOL shouldShowInfoHint;                                                                     //@synthesize shouldShowInfoHint=_shouldShowInfoHint - In the implementation block
@property (nonatomic,retain) AVFrameSet * frameSet;                                                                       //@synthesize frameSet=_frameSet - In the implementation block
@property (getter=isFrameSetForNavigationMarkersOnly,readonly) BOOL frameSetForNavigationMarkersOnly; 
@property (readonly) AVTimeRange * currentInterstitialTimeRange; 
@property (nonatomic,retain) AVDurationTimeFormatter * interstitialTimeFormatter;                                         //@synthesize interstitialTimeFormatter=_interstitialTimeFormatter - In the implementation block
@property (getter=isSeeking,readonly) BOOL seeking; 
@property (nonatomic,retain) NSUUID * scanningSesssionUUID;                                                               //@synthesize scanningSesssionUUID=_scanningSesssionUUID - In the implementation block
@property (nonatomic,retain) AVStandardScanningDelegate * standardScanningDelegate;                                       //@synthesize standardScanningDelegate=_standardScanningDelegate - In the implementation block
@property (assign,nonatomic) BOOL scanningImageBlockCalled;                                                               //@synthesize scanningImageBlockCalled=_scanningImageBlockCalled - In the implementation block
@property (assign,nonatomic) float currentScanRate;                                                                       //@synthesize currentScanRate=_currentScanRate - In the implementation block
@property (assign,getter=wasScanningTriggeredBySelectButton,nonatomic) BOOL scanningTriggeredBySelectButton;              //@synthesize scanningTriggeredBySelectButton=_scanningTriggeredBySelectButton - In the implementation block
@property (getter=isScrubbingSupported,nonatomic,readonly) BOOL scrubbingSupported; 
@property (nonatomic,retain) AVInternalPlaybackOptions * playbackOptions;                                                 //@synthesize playbackOptions=_playbackOptions - In the implementation block
@property (readonly) long long playbackControlsState;                                                                     //@synthesize playbackControlsState=_playbackControlsState - In the implementation block
@property (nonatomic,copy) NSString * needleText;                                                                         //@synthesize needleText=_needleText - In the implementation block
@property (nonatomic,retain) NSURL * alternateThumbnailStreamURL;                                                         //@synthesize alternateThumbnailStreamURL=_alternateThumbnailStreamURL - In the implementation block
@property (assign,nonatomic,__weak) id<AVPlayerViewControllerDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * customInfoViewControllers;                                                           //@synthesize customInfoViewControllers=_customInfoViewControllers - In the implementation block
@property (nonatomic,copy) NSString * infoHint;                                                                           //@synthesize infoHint=_infoHint - In the implementation block
@property (assign,getter=isApplicationResigning,nonatomic) BOOL applicationResigning;                                     //@synthesize applicationResigning=_applicationResigning - In the implementation block
@property (getter=isScanning,nonatomic,readonly) BOOL scanning; 
@property (nonatomic,readonly) _AVFocusContainerView * focusContainerView; 
@property (assign,nonatomic) BOOL wantPlayback; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)timeControlStatus;
-(void)setPlaybackRate:(float)arg1 ;
-(BOOL)canSeek;
-(BOOL)isPlaying;
-(void)togglePlayback;
-(BOOL)isScrubbing;
-(AVFrameSet *)frameSet;
-(void)setFrameSet:(AVFrameSet *)arg1 ;
-(BOOL)isSeeking;
-(void)setHint:(long long)arg1 ;
-(void)setNeedleText:(NSString *)arg1 ;
-(unsigned long long)frameIndexForTime:(double)arg1 ;
-(NSString *)needleText;
-(id)interstitialTimeRangeCollection;
-(BOOL)areControlsVisible;
-(void)setControlsVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)upToNextNavigationMode;
-(void)downToNextNavigationMode;
-(void)skipToNextFrame;
-(void)skipToPreviousFrame;
-(void)didChangePlayerController;
-(BOOL)showsLoadingIndicator;
-(void)setShowsLoadingIndicator:(BOOL)arg1 ;
-(id)_playerItemForScrubbing;
-(AVInternalPlaybackOptions *)playbackOptions;
-(void)setInfoHint:(NSString *)arg1 ;
-(void)setCustomInfoViewControllers:(NSArray *)arg1 ;
-(void)setAlternateThumbnailStreamURL:(NSURL *)arg1 ;
-(NSURL *)alternateThumbnailStreamURL;
-(NSArray *)customInfoViewControllers;
-(NSString *)infoHint;
-(void)didDismissInfoPanelViewController;
-(void)infoPanelViewController:(id)arg1 willShowViewController:(id)arg2 ;
-(void)infoPanelViewController:(id)arg1 playPauseRecognizedByViewController:(id)arg2 ;
-(void)viewController:(id)arg1 didSelectLanguageOption:(id)arg2 ;
-(void)viewController:(id)arg1 didSelectSubtitleOption:(id)arg2 ;
-(unsigned long long)numberOfMarkersForNavigationViewController:(id)arg1 ;
-(id)navigationViewController:(id)arg1 imageProxyForMarkerIndex:(unsigned long long)arg2 ;
-(id)navigationViewController:(id)arg1 titleForMarkerIndex:(unsigned long long)arg2 ;
-(void)navigationViewController:(id)arg1 didSelectMarkerIndex:(unsigned long long)arg2 ;
-(void)didLoadFrameAffectingRange:(NSRange)arg1 ;
-(void)mediaServerResetInvalidatedFrameSet:(id)arg1 ;
-(double)timeForFrameIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfFramesForTransportBar:(id)arg1 ;
-(double)transportBar:(id)arg1 frameTimeForDisplayTime:(double)arg2 ;
-(double)transportBar:(id)arg1 displayTimeForFrameTime:(double)arg2 ;
-(void)transportBar:(id)arg1 didRevealFrameIndex:(unsigned long long)arg2 ;
-(void)updateDisplayLinkInterval;
-(void)startDisplayLink;
-(void)stopDisplayLink;
-(void)hidePlaybackControlsAfterUserInteraction;
-(void)_timerFiredForHidingPlaybackControls:(id)arg1 ;
-(void)userDidInteract;
-(void)cancelUserDidInteract;
-(BOOL)isStalled;
-(BOOL)isScrubbingSupported;
-(BOOL)isScanning;
-(BOOL)isScanningEnabled;
-(void)setScanningImage:(id)arg1 ;
-(BOOL)isPausingEnabled;
-(void)setShowsLoadingIndicator:(BOOL)arg1 afterDelay:(double)arg2 ;
-(BOOL)hasThumbNails;
-(void)_updateLoadingAndErrorIndicators;
-(void)_keyDidChangeAffectingLoadingOrErrorStatus:(id)arg1 ;
-(void)_updateSeekableRangesOnceOnMain;
-(void)_seekableRangesDidChange;
-(void)_playerStatusDidChange:(id)arg1 ;
-(void)_updateStartAndEndDatesAndTimes;
-(void)_playerItemForScrubbingDidChange:(id)arg1 ;
-(void)_scrubbingPlayerItemStatusDidChange:(id)arg1 ;
-(BOOL)isAtPausePoint;
-(void)resetToPausePoint;
-(void)_didBeginPlaybackInsideTimeRange:(id)arg1 ;
-(void)_enterInterstitialForTimeRange:(id)arg1 ;
-(void)_exitInterstitialForTimeRange:(id)arg1 ;
-(_AVFocusContainerView *)focusContainerView;
-(BOOL)isFrameSetForNavigationMarkersOnly;
-(void)_updateTransportBarScrubDataSource;
-(void)_updateHintsForTouchPosition:(long long)arg1 ;
-(void)_updateHintsForDigitizerLocation:(CGPoint)arg1 ;
-(void)updateHintsForEvent:(id)arg1 ;
-(void)setShouldShowInfoHint:(BOOL)arg1 ;
-(void)_cancelInfoHint;
-(void)_scheduleInfoHint;
-(void)_showInfoHint;
-(BOOL)shouldIgnoreTouchEvents;
-(BOOL)_isTouchingRemote;
-(void)didReceiveTouchCount:(unsigned long long)arg1 ;
-(void)scrubGestureDetected:(id)arg1 ;
-(void)_currentItemDurationDidChange;
-(void)updateTransportBarLiveState;
-(void)_currentItemDidChange;
-(void)_togglePlayback:(id)arg1 ;
-(BOOL)wantPlayback;
-(void)setWantPlayback:(BOOL)arg1 ;
-(void)pauseForModalInterruption;
-(void)resumeAfterModalInterruption;
-(double)timeFromTransportBar;
-(void)_skipDisplayTimeByAdding:(double)arg1 seeking:(BOOL)arg2 ;
-(void)skipToNextScrubbingFrame;
-(void)skipToPreviousScrubbingFrame;
-(BOOL)skipToNextNavigationMarker;
-(BOOL)skipToPreviousNavigationMarker;
-(BOOL)mediaRemoteSkipBy:(double)arg1 ;
-(BOOL)mediaRemoteSeekToDisplayTime:(double)arg1 ;
-(void)_setHintForRate:(float)arg1 ;
-(void)scanForwardNext;
-(void)scanBackwardNext;
-(void)scanAtRate:(double)arg1 ;
-(void)didPressLeftArrowB39;
-(void)didPressRightArrowB39;
-(void)didPressUpArrowB39;
-(void)navigateDown;
-(void)didPressDownArrowB39;
-(void)didPressSelectB39;
-(void)handleB39ClickGesture:(id)arg1 ;
-(BOOL)isInfoPaneActive;
-(id)_availableSubtitleMediaSelectionOptions;
-(id)_availableExternalSubtitleLanguageOptions;
-(void)_updateMediaSelectionOptions;
-(void)_updateCurrentLegibleMediaSelectionOption;
-(void)_updateCurrentAudibleMediaSelectionOption;
-(void)showInfoPaneAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)hideInfoPaneAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)didSelectAudioMediaSelectionOption:(id)arg1 ;
-(void)didSelectLegibleMediaSelectionOption:(id)arg1 externalLanguage:(id)arg2 ;
-(BOOL)_isFullScreen;
-(BOOL)_isInfoAllowed;
-(BOOL)_isTransportBarAllowed;
-(void)playerViewController:(id)arg1 willDismissViewController:(id)arg2 ;
-(void)playerViewController:(id)arg1 didDismissViewController:(id)arg2 ;
-(void)remoteSelectButtonDown:(id)arg1 ;
-(float)currentScanRate;
-(void)startFFRWRate:(float)arg1 ;
-(void)removePlayerItemDidScanToEndTimeObserverIfNeeded;
-(void)handlePlayerItemDidScanPastEndTime:(float)arg1 ;
-(void)stopFFRW;
-(void)stopFFRWWithBounceBack:(BOOL)arg1 ;
-(void)startFFRWDirection:(long long)arg1 ;
-(void)remoteSelectButtonHeld:(id)arg1 ;
-(void)remoteSelectButtonUp:(id)arg1 ;
-(void)_setControlsContainerSubviewsVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setControlsContainerVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setPlaybackControlsStateToHiddenWithVisibleState:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setPlaybackControlsState:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setPlaybackControlsState:(long long)arg1 visibleState:(long long)arg2 animated:(BOOL)arg3 ;
-(void)_setPlaybackControlsState:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_setVisiblePlaybackControlsState:(long long)arg1 ;
-(double)secondsPerScrubbingFrame;
-(void)cleanupScrubbingFrames;
-(void)invalidateFrameSet;
-(BOOL)isCurrentTimeValid;
-(BOOL)_isLive;
-(double)endTimeInterval;
-(unsigned long long)nearestAvailableFrameIndexToScrubbingFrameIndex:(unsigned long long)arg1 ;
-(id)nearestAvailableImageToScrubbingFrameIndex:(unsigned long long)arg1 ;
-(id)existingImageForScrubbingFrameIndex:(unsigned long long)arg1 ;
-(id)imageForScrubbingFrameIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfScrubbingFrames;
-(void)prepareInfoMetadata;
-(long long)_scrubbingIndexForMarkerIndex:(unsigned long long)arg1 ;
-(id)_navigationMarkerIndexPathsForFrameRange:(NSRange)arg1 ;
-(id)_imageProxyForNavigationMarkerIndex:(unsigned long long)arg1 ;
-(void)_updateAdMarkers;
-(unsigned long long)_prefetchFramesForSliceSize:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_prefetchThumbnails;
-(void)_prefetchChapterFramesThenOthers;
-(void)_frameSetDidBecomeReady;
-(id)timeRangeForScrubbing;
-(id)displayedTimeRangeOfContentLoaded;
-(AVTimeRange *)currentInterstitialTimeRange;
-(id)previousInterstitialTimeRange;
-(double)timeRemainingInCurrentInterstitial;
-(id)interstitialNeedleText;
-(void)updateDisplayLink:(id)arg1 ;
-(void)updateFractionOfContentLoaded;
-(void)heartbeat:(id)arg1 ;
-(void)setPlaybackOptions:(AVInternalPlaybackOptions *)arg1 ;
-(long long)playbackControlsState;
-(BOOL)isApplicationResigning;
-(void)setApplicationResigning:(BOOL)arg1 ;
-(AVKeyValueObserverCollection *)nowPlayingKVO;
-(void)setNowPlayingKVO:(AVKeyValueObserverCollection *)arg1 ;
-(BOOL)shouldShowInfoHint;
-(AVDurationTimeFormatter *)interstitialTimeFormatter;
-(void)setInterstitialTimeFormatter:(AVDurationTimeFormatter *)arg1 ;
-(NSUUID *)scanningSesssionUUID;
-(void)setScanningSesssionUUID:(NSUUID *)arg1 ;
-(AVStandardScanningDelegate *)standardScanningDelegate;
-(void)setStandardScanningDelegate:(AVStandardScanningDelegate *)arg1 ;
-(BOOL)scanningImageBlockCalled;
-(void)setScanningImageBlockCalled:(BOOL)arg1 ;
-(void)setCurrentScanRate:(float)arg1 ;
-(BOOL)wasScanningTriggeredBySelectButton;
-(void)setScanningTriggeredBySelectButton:(BOOL)arg1 ;
-(void)setPlaying:(BOOL)arg1 ;
-(void)setLoading:(BOOL)arg1 ;
-(void)touchesBegan:(id)arg1 ;
-(void)touchesMoved:(id)arg1 ;
-(void)touchesEnded:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)accessibilityElements;
-(void)setDelegate:(id<AVPlayerViewControllerDelegate>)arg1 ;
-(id<AVPlayerViewControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)removeFromParentViewController;
-(void)invalidate;
-(double)duration;
-(void)didReceiveMemoryWarning;
-(double)currentTime;
-(void)pause;
-(BOOL)isLoading;
@end

