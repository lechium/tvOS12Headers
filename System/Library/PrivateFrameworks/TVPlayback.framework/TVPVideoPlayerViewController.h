/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <TVPlayback/TVPMainVideoViewControllerDelegate.h>
#import <TVPlayback/TVPRelatedContentLoaderDelegate.h>
#import <TVPlayback/TVPRelatedContentViewControllerDelegate.h>
#import <TVPlayback/TVPPlaybackInterruptable.h>
#import <TVPlayback/TVPMediaCacheManagerResponder.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <libobjc.A.dylib/AVPlayerViewControllerDelegate.h>
#import <libobjc.A.dylib/AVPlayerViewControllerPlaybackDelegate.h>
#import <libobjc.A.dylib/AVScanningDelegate.h>

@protocol TVPAVFPlayback, TVPVideoPlayerViewControllerDelegate;
@class NSObject, TVSStateMachine, UIButton, AVPlayerViewController, UIAlertController, TVPRelatedContentViewController, TVPMainVideoViewController, TVPRelatedContentLoader, UILabel, UIActivityIndicatorView, UIView, NSDictionary, AVTransportBarViewController, NSDate, UITapGestureRecognizer, TVPInteractionGestureRecognizer, NSTimer, TVPPlaybackInterruption, TVPPlayer, NSMutableDictionary, TVPVideoView, UIDigitizerTapGestureRecognizer, UIImageView, NSString;

@interface TVPVideoPlayerViewController : UIViewController <TVPMainVideoViewControllerDelegate, TVPRelatedContentLoaderDelegate, TVPRelatedContentViewControllerDelegate, TVPPlaybackInterruptable, TVPMediaCacheManagerResponder, UIViewControllerTransitioningDelegate, AVPlayerViewControllerDelegate, AVPlayerViewControllerPlaybackDelegate, AVScanningDelegate> {

	BOOL _showsTitleWhileLoading;
	BOOL _suppressErrorAlerts;
	BOOL _popWhenPlayerStops;
	BOOL _allowDefaultMenuButtonBehavior;
	BOOL _allowsVideoPlaybackWithoutVisuals;
	BOOL _presentsNowPlayingVideoWithoutAnimations;
	BOOL _invalidatePlayerWhenDone;
	BOOL _dismissed;
	BOOL _loadingInitialItem;
	BOOL _startOrResumeButtonHasGottenInitialFocus;
	BOOL _shouldPlayAfterAppBecomesActive;
	BOOL _shouldPlayAfterLoadingCompletes;
	BOOL _modifyingCacheManager;
	BOOL _playerDurationAndBufferingObserversAdded;
	BOOL _deactivatedBySomethingOtherThanSiri;
	BOOL _deactivatedByAirPlay;
	BOOL _playbackRestrictionsVerifiedPriorToStartup;
	BOOL _hasBeenShown;
	BOOL _hasReceivedWillMoveToParentViewControllerNil;
	BOOL _limitingRemoteInput;
	BOOL _userIsActivelyScrubbing;
	BOOL _originalPausesOnRouteChangeValue;
	BOOL _initialMediaItemLoadedObserverAdded;
	BOOL _bumperTextBeingSpoken;
	BOOL _appDeactivated;
	NSObject*<TVPAVFPlayback> _player;
	id<TVPVideoPlayerViewControllerDelegate> _delegate;
	long long _resumeMenuOption;
	double _startTime;
	TVSStateMachine* _stateMachine;
	UIButton* _resumePlayingButton;
	UIButton* _startFromBeginningButton;
	AVPlayerViewController* _avPlayerViewController;
	UIAlertController* _errorAlertController;
	TVPRelatedContentViewController* _relatedContentViewController;
	TVPMainVideoViewController* _mainVideoViewController;
	TVPRelatedContentLoader* _relatedContentLoader;
	UILabel* _titleTextLabel;
	UIActivityIndicatorView* _spinnerView;
	UIView* _titleAndSpinnerContainerView;
	NSDictionary* _playerErrorDictionary;
	AVTransportBarViewController* _avTransportBarViewController;
	UILabel* _timeUntilReadyToPlayLabel;
	NSDate* _dateOfLastTimeUntilReadyToPlayUpdate;
	NSDate* _dateOfUsersLastInteractionDuringLoading;
	UITapGestureRecognizer* _selectButtonRecognizer;
	TVPInteractionGestureRecognizer* _playPauseButtonRecognizer;
	NSTimer* _spinnerDelayTimer;
	unsigned long long _deactivationReasons;
	NSDate* _dateAppWasBackgrounded;
	TVPPlaybackInterruption* _deactivationInterruption;
	NSTimer* _backgroundStopTimer;
	TVPPlayer* _playerUsedForPreparation;
	NSMutableDictionary* _dynamicChapterArtwork;
	NSTimer* _rentalStopTimer;
	TVPPlayer* _bumperPlayer;
	TVPVideoView* _bumperVideoView;
	UIDigitizerTapGestureRecognizer* _bumperSkipRecognizer;
	UILabel* _bumperWarningLabel;
	UILabel* _bumperAppleIDLabel;
	UIImageView* _bumperLogoImageView;
	NSTimer* _bumperTextTimer;
	UIView* _videoBlockingView;

}

@property (nonatomic,retain) TVSStateMachine * stateMachine;                                              //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) UIButton * resumePlayingButton;                                              //@synthesize resumePlayingButton=_resumePlayingButton - In the implementation block
@property (nonatomic,retain) UIButton * startFromBeginningButton;                                         //@synthesize startFromBeginningButton=_startFromBeginningButton - In the implementation block
@property (assign,nonatomic) BOOL invalidatePlayerWhenDone;                                               //@synthesize invalidatePlayerWhenDone=_invalidatePlayerWhenDone - In the implementation block
@property (nonatomic,retain) AVPlayerViewController * avPlayerViewController;                             //@synthesize avPlayerViewController=_avPlayerViewController - In the implementation block
@property (nonatomic,retain) UIAlertController * errorAlertController;                                    //@synthesize errorAlertController=_errorAlertController - In the implementation block
@property (nonatomic,retain) TVPRelatedContentViewController * relatedContentViewController;              //@synthesize relatedContentViewController=_relatedContentViewController - In the implementation block
@property (nonatomic,retain) TVPMainVideoViewController * mainVideoViewController;                        //@synthesize mainVideoViewController=_mainVideoViewController - In the implementation block
@property (nonatomic,retain) TVPRelatedContentLoader * relatedContentLoader;                              //@synthesize relatedContentLoader=_relatedContentLoader - In the implementation block
@property (nonatomic,retain) UILabel * titleTextLabel;                                                    //@synthesize titleTextLabel=_titleTextLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinnerView;                                       //@synthesize spinnerView=_spinnerView - In the implementation block
@property (nonatomic,retain) UIView * titleAndSpinnerContainerView;                                       //@synthesize titleAndSpinnerContainerView=_titleAndSpinnerContainerView - In the implementation block
@property (nonatomic,retain) NSDictionary * playerErrorDictionary;                                        //@synthesize playerErrorDictionary=_playerErrorDictionary - In the implementation block
@property (assign,getter=isDismissed,nonatomic) BOOL dismissed;                                           //@synthesize dismissed=_dismissed - In the implementation block
@property (assign,nonatomic) BOOL loadingInitialItem;                                                     //@synthesize loadingInitialItem=_loadingInitialItem - In the implementation block
@property (nonatomic,retain) AVTransportBarViewController * avTransportBarViewController;                 //@synthesize avTransportBarViewController=_avTransportBarViewController - In the implementation block
@property (assign,nonatomic) BOOL startOrResumeButtonHasGottenInitialFocus;                               //@synthesize startOrResumeButtonHasGottenInitialFocus=_startOrResumeButtonHasGottenInitialFocus - In the implementation block
@property (nonatomic,retain) UILabel * timeUntilReadyToPlayLabel;                                         //@synthesize timeUntilReadyToPlayLabel=_timeUntilReadyToPlayLabel - In the implementation block
@property (nonatomic,retain) NSDate * dateOfLastTimeUntilReadyToPlayUpdate;                               //@synthesize dateOfLastTimeUntilReadyToPlayUpdate=_dateOfLastTimeUntilReadyToPlayUpdate - In the implementation block
@property (nonatomic,retain) NSDate * dateOfUsersLastInteractionDuringLoading;                            //@synthesize dateOfUsersLastInteractionDuringLoading=_dateOfUsersLastInteractionDuringLoading - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * selectButtonRecognizer;                             //@synthesize selectButtonRecognizer=_selectButtonRecognizer - In the implementation block
@property (nonatomic,retain) TVPInteractionGestureRecognizer * playPauseButtonRecognizer;                 //@synthesize playPauseButtonRecognizer=_playPauseButtonRecognizer - In the implementation block
@property (assign,nonatomic) BOOL shouldPlayAfterAppBecomesActive;                                        //@synthesize shouldPlayAfterAppBecomesActive=_shouldPlayAfterAppBecomesActive - In the implementation block
@property (assign,nonatomic) BOOL shouldPlayAfterLoadingCompletes;                                        //@synthesize shouldPlayAfterLoadingCompletes=_shouldPlayAfterLoadingCompletes - In the implementation block
@property (assign,nonatomic) BOOL modifyingCacheManager;                                                  //@synthesize modifyingCacheManager=_modifyingCacheManager - In the implementation block
@property (assign,nonatomic) BOOL playerDurationAndBufferingObserversAdded;                               //@synthesize playerDurationAndBufferingObserversAdded=_playerDurationAndBufferingObserversAdded - In the implementation block
@property (nonatomic,retain) NSTimer * spinnerDelayTimer;                                                 //@synthesize spinnerDelayTimer=_spinnerDelayTimer - In the implementation block
@property (assign,nonatomic) BOOL deactivatedBySomethingOtherThanSiri;                                    //@synthesize deactivatedBySomethingOtherThanSiri=_deactivatedBySomethingOtherThanSiri - In the implementation block
@property (assign,nonatomic) BOOL deactivatedByAirPlay;                                                   //@synthesize deactivatedByAirPlay=_deactivatedByAirPlay - In the implementation block
@property (assign,nonatomic) unsigned long long deactivationReasons;                                      //@synthesize deactivationReasons=_deactivationReasons - In the implementation block
@property (assign,nonatomic) BOOL playbackRestrictionsVerifiedPriorToStartup;                             //@synthesize playbackRestrictionsVerifiedPriorToStartup=_playbackRestrictionsVerifiedPriorToStartup - In the implementation block
@property (nonatomic,copy) NSDate * dateAppWasBackgrounded;                                               //@synthesize dateAppWasBackgrounded=_dateAppWasBackgrounded - In the implementation block
@property (assign,nonatomic) BOOL hasBeenShown;                                                           //@synthesize hasBeenShown=_hasBeenShown - In the implementation block
@property (nonatomic,retain) TVPPlaybackInterruption * deactivationInterruption;                          //@synthesize deactivationInterruption=_deactivationInterruption - In the implementation block
@property (assign,nonatomic) BOOL hasReceivedWillMoveToParentViewControllerNil;                           //@synthesize hasReceivedWillMoveToParentViewControllerNil=_hasReceivedWillMoveToParentViewControllerNil - In the implementation block
@property (assign,getter=isLimitingRemoteInput,nonatomic) BOOL limitingRemoteInput;                       //@synthesize limitingRemoteInput=_limitingRemoteInput - In the implementation block
@property (assign,nonatomic) BOOL userIsActivelyScrubbing;                                                //@synthesize userIsActivelyScrubbing=_userIsActivelyScrubbing - In the implementation block
@property (nonatomic,retain) NSTimer * backgroundStopTimer;                                               //@synthesize backgroundStopTimer=_backgroundStopTimer - In the implementation block
@property (nonatomic,retain) TVPPlayer * playerUsedForPreparation;                                        //@synthesize playerUsedForPreparation=_playerUsedForPreparation - In the implementation block
@property (assign,nonatomic) BOOL originalPausesOnRouteChangeValue;                                       //@synthesize originalPausesOnRouteChangeValue=_originalPausesOnRouteChangeValue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dynamicChapterArtwork;                                 //@synthesize dynamicChapterArtwork=_dynamicChapterArtwork - In the implementation block
@property (assign,nonatomic) BOOL initialMediaItemLoadedObserverAdded;                                    //@synthesize initialMediaItemLoadedObserverAdded=_initialMediaItemLoadedObserverAdded - In the implementation block
@property (nonatomic,retain) NSTimer * rentalStopTimer;                                                   //@synthesize rentalStopTimer=_rentalStopTimer - In the implementation block
@property (nonatomic,retain) TVPPlayer * bumperPlayer;                                                    //@synthesize bumperPlayer=_bumperPlayer - In the implementation block
@property (nonatomic,retain) TVPVideoView * bumperVideoView;                                              //@synthesize bumperVideoView=_bumperVideoView - In the implementation block
@property (nonatomic,retain) UIDigitizerTapGestureRecognizer * bumperSkipRecognizer;                      //@synthesize bumperSkipRecognizer=_bumperSkipRecognizer - In the implementation block
@property (nonatomic,retain) UILabel * bumperWarningLabel;                                                //@synthesize bumperWarningLabel=_bumperWarningLabel - In the implementation block
@property (nonatomic,retain) UILabel * bumperAppleIDLabel;                                                //@synthesize bumperAppleIDLabel=_bumperAppleIDLabel - In the implementation block
@property (nonatomic,retain) UIImageView * bumperLogoImageView;                                           //@synthesize bumperLogoImageView=_bumperLogoImageView - In the implementation block
@property (nonatomic,retain) NSTimer * bumperTextTimer;                                                   //@synthesize bumperTextTimer=_bumperTextTimer - In the implementation block
@property (assign,nonatomic) BOOL bumperTextBeingSpoken;                                                  //@synthesize bumperTextBeingSpoken=_bumperTextBeingSpoken - In the implementation block
@property (nonatomic,retain) UIView * videoBlockingView;                                                  //@synthesize videoBlockingView=_videoBlockingView - In the implementation block
@property (assign,nonatomic) BOOL appDeactivated;                                                         //@synthesize appDeactivated=_appDeactivated - In the implementation block
@property (nonatomic,readonly) NSObject*<TVPAVFPlayback> player;                                          //@synthesize player=_player - In the implementation block
@property (assign,nonatomic,__weak) id<TVPVideoPlayerViewControllerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long resumeMenuOption;                                                  //@synthesize resumeMenuOption=_resumeMenuOption - In the implementation block
@property (assign,nonatomic) double startTime;                                                            //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL showsTitleWhileLoading;                                                 //@synthesize showsTitleWhileLoading=_showsTitleWhileLoading - In the implementation block
@property (assign,nonatomic) BOOL suppressErrorAlerts;                                                    //@synthesize suppressErrorAlerts=_suppressErrorAlerts - In the implementation block
@property (assign,nonatomic) BOOL popWhenPlayerStops;                                                     //@synthesize popWhenPlayerStops=_popWhenPlayerStops - In the implementation block
@property (assign,nonatomic) BOOL allowDefaultMenuButtonBehavior;                                         //@synthesize allowDefaultMenuButtonBehavior=_allowDefaultMenuButtonBehavior - In the implementation block
@property (assign,nonatomic) BOOL allowsVideoPlaybackWithoutVisuals;                                      //@synthesize allowsVideoPlaybackWithoutVisuals=_allowsVideoPlaybackWithoutVisuals - In the implementation block
@property (assign,nonatomic) BOOL presentsNowPlayingVideoWithoutAnimations;                               //@synthesize presentsNowPlayingVideoWithoutAnimations=_presentsNowPlayingVideoWithoutAnimations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)bumperLogoSize;
+(void)initialize;
-(void)_applicationWillAddDeactivationReason:(id)arg1 ;
-(void)_applicationDidRemoveDeactivationReason:(id)arg1 ;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(NSObject*<TVPAVFPlayback>)player;
-(void)setDismissed:(BOOL)arg1 ;
-(UIActivityIndicatorView *)spinnerView;
-(void)setSpinnerView:(UIActivityIndicatorView *)arg1 ;
-(BOOL)deactivatedBySomethingOtherThanSiri;
-(void)setDeactivatedBySomethingOtherThanSiri:(BOOL)arg1 ;
-(void)_useNowPlayingVideoViewController:(id)arg1 ;
-(void)insertOverlayViewController:(id)arg1 ;
-(void)insertOverlaySubview:(id)arg1 ;
-(void)dismissWithErrorText:(id)arg1 ;
-(void)playerViewController:(id)arg1 willPresentInterstitialTimeRange:(id)arg2 ;
-(void)playerViewController:(id)arg1 didPresentInterstitialTimeRange:(id)arg2 ;
-(void)playerViewController:(id)arg1 willResumePlaybackAfterUserNavigatedFromTime:(SCD_Struct_TV4)arg2 toTime:(SCD_Struct_TV4)arg3 ;
-(void)skipToNextItemForPlayerViewController:(id)arg1 ;
-(void)skipToPreviousItemForPlayerViewController:(id)arg1 ;
-(void)playerViewController:(id)arg1 didAcceptContentProposal:(id)arg2 ;
-(void)setResumeMenuOption:(long long)arg1 ;
-(void)setAllowsVideoPlaybackWithoutVisuals:(BOOL)arg1 ;
-(void)setPresentsNowPlayingVideoWithoutAnimations:(BOOL)arg1 ;
-(void)didSelectMainVideoViewController:(id)arg1 ;
-(AVPlayerViewController *)avPlayerViewController;
-(void)_handleSelectButton:(id)arg1 ;
-(void)setAvPlayerViewController:(AVPlayerViewController *)arg1 ;
-(void)_currentMediaItemDidChange:(id)arg1 ;
-(void)setStateMachine:(TVSStateMachine *)arg1 ;
-(TVSStateMachine *)stateMachine;
-(void)relatedContentViewController:(id)arg1 willTransitionToDisplayMode:(long long)arg2 ;
-(void)relatedContentViewController:(id)arg1 didTransitionToDisplayMode:(long long)arg2 ;
-(void)userInteractionBeganWithRelatedContentViewController:(id)arg1 ;
-(void)didDismissRelatedContentViewController:(id)arg1 ;
-(void)_registerStateMachineHandlers;
-(void)_handleMenuButton:(id)arg1 ;
-(BOOL)popWhenPlayerStops;
-(void)_removeRestrictionsPasscodeViewController;
-(void)setPopWhenPlayerStops:(BOOL)arg1 ;
-(id)initWithPlayer:(id)arg1 invalidateWhenDone:(BOOL)arg2 ;
-(void)setInitialMediaItemLoadedObserverAdded:(BOOL)arg1 ;
-(BOOL)isLimitingRemoteInput;
-(void)setLimitingRemoteInput:(BOOL)arg1 ;
-(void)_addPlayerBufferingAndDurationObservers;
-(void)_handlePlaybackStateChangeNotification:(id)arg1 ;
-(void)_handlePlaybackErrorNotification:(id)arg1 ;
-(void)_handleMainPlayerMediaItemPreparedNotification:(id)arg1 ;
-(void)_handlePrepPlayerMediaItemPreparedNotification:(id)arg1 ;
-(void)_handleMediaCacheManagerErrorNotification:(id)arg1 ;
-(void)_handleMediaCacheManagerWillStopNotification:(id)arg1 ;
-(void)_reducedTransparencyStateChanged:(id)arg1 ;
-(void)_removePlayerBufferingAndDurationObservers;
-(id)_normalizedBufferedRangeFromPlayer;
-(id)_normalizedBufferedRangeFromCacheManager;
-(void)setDynamicChapterArtwork:(NSMutableDictionary *)arg1 ;
-(void)_updateAVChapterNavigationMarkers;
-(void)setPlaybackRestrictionsVerifiedPriorToStartup:(BOOL)arg1 ;
-(BOOL)hasReceivedWillMoveToParentViewControllerNil;
-(NSTimer *)backgroundStopTimer;
-(void)setBackgroundStopTimer:(NSTimer *)arg1 ;
-(NSTimer *)bumperTextTimer;
-(void)setBumperTextTimer:(NSTimer *)arg1 ;
-(TVPPlayer *)bumperPlayer;
-(void)setBumperPlayer:(TVPPlayer *)arg1 ;
-(BOOL)hasBeenShown;
-(BOOL)allowsVideoPlaybackWithoutVisuals;
-(TVPMainVideoViewController *)mainVideoViewController;
-(void)_modifyCacheManagerWithBlock:(/*^block*/id)arg1 ;
-(void)setErrorAlertController:(UIAlertController *)arg1 ;
-(void)_cleanUpCachingListeners;
-(void)setHasReceivedWillMoveToParentViewControllerNil:(BOOL)arg1 ;
-(AVTransportBarViewController *)avTransportBarViewController;
-(UIButton *)resumePlayingButton;
-(UIButton *)startFromBeginningButton;
-(BOOL)startOrResumeButtonHasGottenInitialFocus;
-(double)_currentMediaItemNetBookmarkTime;
-(double)_currentMediaItemNetDuration;
-(void)_enforceHighContrastResumeMenuLabelColors;
-(void)setStartOrResumeButtonHasGottenInitialFocus:(BOOL)arg1 ;
-(void)_updateAVPlayerViewControllerSkippingBehavior;
-(void)setMainVideoViewController:(TVPMainVideoViewController *)arg1 ;
-(void)setRelatedContentViewController:(TVPRelatedContentViewController *)arg1 ;
-(void)setRelatedContentLoader:(TVPRelatedContentLoader *)arg1 ;
-(void)setVideoBlockingView:(UIView *)arg1 ;
-(BOOL)showsTitleWhileLoading;
-(void)_addAVTransportBarViewController;
-(BOOL)allowDefaultMenuButtonBehavior;
-(void)setHasBeenShown:(BOOL)arg1 ;
-(TVPRelatedContentViewController *)relatedContentViewController;
-(void)_dismissRelatedContent;
-(void)setAppDeactivated:(BOOL)arg1 ;
-(NSMutableDictionary *)dynamicChapterArtwork;
-(BOOL)deactivatedByAirPlay;
-(BOOL)modifyingCacheManager;
-(NSTimer *)rentalStopTimer;
-(void)setRentalStopTimer:(NSTimer *)arg1 ;
-(void)setDeactivatedByAirPlay:(BOOL)arg1 ;
-(TVPPlaybackInterruption *)deactivationInterruption;
-(void)interruptionWillBegin;
-(void)interruptionDidEnd;
-(void)setDateAppWasBackgrounded:(NSDate *)arg1 ;
-(BOOL)isDismissed;
-(void)_createAVTransportBarViewControllerAndConfigureNotifications;
-(UIView *)titleAndSpinnerContainerView;
-(void)_removeAVTransportBarViewController;
-(NSTimer *)spinnerDelayTimer;
-(void)setSpinnerDelayTimer:(NSTimer *)arg1 ;
-(UILabel *)titleTextLabel;
-(void)setTitleTextLabel:(UILabel *)arg1 ;
-(void)setResumePlayingButton:(UIButton *)arg1 ;
-(void)setStartFromBeginningButton:(UIButton *)arg1 ;
-(UILabel *)timeUntilReadyToPlayLabel;
-(void)setTimeUntilReadyToPlayLabel:(UILabel *)arg1 ;
-(void)_removeRelatedContentViewController;
-(BOOL)suppressErrorAlerts;
-(TVPInteractionGestureRecognizer *)playPauseButtonRecognizer;
-(void)_handlePlayPauseButton;
-(void)setPlayPauseButtonRecognizer:(TVPInteractionGestureRecognizer *)arg1 ;
-(void)setModifyingCacheManager:(BOOL)arg1 ;
-(BOOL)playerDurationAndBufferingObserversAdded;
-(void)setPlayerDurationAndBufferingObserversAdded:(BOOL)arg1 ;
-(long long)resumeMenuOption;
-(double)_currentMediaItemGrossBookmarkTime;
-(BOOL)playbackRestrictionsVerifiedPriorToStartup;
-(BOOL)loadingInitialItem;
-(BOOL)shouldPlayAfterLoadingCompletes;
-(void)_resumePlayingButtonSelected:(id)arg1 ;
-(void)_startFromBeginningButtonSelected:(id)arg1 ;
-(void)setLoadingInitialItem:(BOOL)arg1 ;
-(UIView *)videoBlockingView;
-(void)setTitleAndSpinnerContainerView:(UIView *)arg1 ;
-(BOOL)presentsNowPlayingVideoWithoutAnimations;
-(void)_spinnerDelayTimerFired:(id)arg1 ;
-(TVPPlayer *)playerUsedForPreparation;
-(void)_bumperPlayerStateDidChange:(id)arg1 ;
-(void)setBumperVideoView:(TVPVideoView *)arg1 ;
-(void)setBumperWarningLabel:(UILabel *)arg1 ;
-(void)setBumperAppleIDLabel:(UILabel *)arg1 ;
-(void)setBumperLogoImageView:(UIImageView *)arg1 ;
-(void)_bumperTextTimerFired:(id)arg1 ;
-(void)setBumperTextBeingSpoken:(BOOL)arg1 ;
-(void)_bumperTextDidFinishSpeaking:(id)arg1 ;
-(void)_handerSkipBumperGesture:(id)arg1 ;
-(void)setBumperSkipRecognizer:(UIDigitizerTapGestureRecognizer *)arg1 ;
-(TVPVideoView *)bumperVideoView;
-(UIDigitizerTapGestureRecognizer *)bumperSkipRecognizer;
-(UILabel *)bumperWarningLabel;
-(UILabel *)bumperAppleIDLabel;
-(UIImageView *)bumperLogoImageView;
-(NSDictionary *)playerErrorDictionary;
-(void)_addErrorViewControllerWithErrorIfAppropriate:(id)arg1 ;
-(double)_startTimeWhenResumeMenuIsNotShown;
-(void)_configureCachingListeners;
-(void)setDateOfUsersLastInteractionDuringLoading:(NSDate *)arg1 ;
-(void)_updateTitleText;
-(BOOL)appDeactivated;
-(NSDate *)dateOfUsersLastInteractionDuringLoading;
-(void)setSelectButtonRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)_setPlayPauseButtonEnabled:(BOOL)arg1 ;
-(BOOL)bumperTextBeingSpoken;
-(void)setPlayerErrorDictionary:(NSDictionary *)arg1 ;
-(void)_rentalStopTimerFired:(id)arg1 ;
-(NSDate *)dateOfLastTimeUntilReadyToPlayUpdate;
-(void)setDateOfLastTimeUntilReadyToPlayUpdate:(NSDate *)arg1 ;
-(void)_updateTimeUntilReadyToPlay;
-(UITapGestureRecognizer *)selectButtonRecognizer;
-(void)setShouldPlayAfterAppBecomesActive:(BOOL)arg1 ;
-(void)setShouldPlayAfterLoadingCompletes:(BOOL)arg1 ;
-(BOOL)shouldPlayAfterAppBecomesActive;
-(void)_backgroundStopTimerFired:(id)arg1 ;
-(NSDate *)dateAppWasBackgrounded;
-(void)loadRelatedContentForMediaItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)relatedContentLoader:(id)arg1 shouldShowRelatedContent:(id)arg2 ;
-(BOOL)mediaCacheManagerItemDidBecomeLikelyToKeepUp:(id)arg1 ;
-(void)playerViewController:(id)arg1 shouldSeekToTime:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)playerViewController:(id)arg1 shouldSeekToDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)playerViewController:(id)arg1 shouldPlayFromTime:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)playerViewController:(id)arg1 shouldPauseWithCompletion:(/*^block*/id)arg2 ;
-(void)playerViewController:(id)arg1 shouldScanAtRate:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)didFinishScanningForPlayerViewController:(id)arg1 ;
-(long long)playerViewController:(id)arg1 scanFromElapsedTime:(SCD_Struct_TV4)arg2 rate:(double)arg3 imageBlock:(/*^block*/id)arg4 ;
-(void)stopScanningPlayerViewController:(id)arg1 ;
-(BOOL)playerViewController:(id)arg1 shouldHandleScanningForPlayerItem:(id)arg2 ;
-(void)loadCurrentMediaItem;
-(void)restrictedPlaybackPreviouslyUnlocked;
-(id)tvp_customAnimatorForNavigationControllerOperation:(long long)arg1 fromViewController:(id)arg2 ;
-(void)playerViewController:(id)arg1 willResumePlaybackAfterUserNavigatedFromDate:(id)arg2 toDate:(id)arg3 ;
-(void)setShowsTitleWhileLoading:(BOOL)arg1 ;
-(void)setSuppressErrorAlerts:(BOOL)arg1 ;
-(void)setAllowDefaultMenuButtonBehavior:(BOOL)arg1 ;
-(BOOL)invalidatePlayerWhenDone;
-(void)setInvalidatePlayerWhenDone:(BOOL)arg1 ;
-(UIAlertController *)errorAlertController;
-(TVPRelatedContentLoader *)relatedContentLoader;
-(void)setAvTransportBarViewController:(AVTransportBarViewController *)arg1 ;
-(void)setDeactivationInterruption:(TVPPlaybackInterruption *)arg1 ;
-(BOOL)userIsActivelyScrubbing;
-(void)setUserIsActivelyScrubbing:(BOOL)arg1 ;
-(void)setPlayerUsedForPreparation:(TVPPlayer *)arg1 ;
-(BOOL)originalPausesOnRouteChangeValue;
-(void)setOriginalPausesOnRouteChangeValue:(BOOL)arg1 ;
-(BOOL)initialMediaItemLoadedObserverAdded;
-(void)dealloc;
-(void)setDelegate:(id<TVPVideoPlayerViewControllerDelegate>)arg1 ;
-(id<TVPVideoPlayerViewControllerDelegate>)delegate;
-(void)dismiss;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(unsigned long long)deactivationReasons;
-(void)setDeactivationReasons:(unsigned long long)arg1 ;
-(BOOL)_isRunningInViewService;
@end

