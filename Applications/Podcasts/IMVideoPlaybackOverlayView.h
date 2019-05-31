//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IMVideoOverlay.h"
#import "MPAVRoutingControllerDelegate.h"
#import "MPDetailSliderDelegate.h"
#import "MPVolumeControllerDelegate.h"
#import "UIPopoverPresentationControllerDelegate.h"

@class IMAVPlayer, IMKnockoutButton, IMPlayerItem, MPAVItem, MPAVRoutingController, MPAudioAndSubtitlesController, MPDetailSlider, MPVolumeController, MPVolumeSlider, NSArray, NSLayoutConstraint, NSString, UIActivityIndicatorView, UIButton, UILabel, UINavigationBar, UIStatusBar, UIViewController, _UIBackdropView;

@interface IMVideoPlaybackOverlayView : UIView <UIPopoverPresentationControllerDelegate, MPAVRoutingControllerDelegate, MPVolumeControllerDelegate, IMVideoOverlay, MPDetailSliderDelegate>
{
    MPDetailSlider *_scrubber;	// 8 = 0x8
    _UIBackdropView *_topBarBackdropView;	// 16 = 0x10
    _UIBackdropView *_bottomBarBackdropView;	// 24 = 0x18
    IMKnockoutButton *_playPauseButton;	// 32 = 0x20
    IMKnockoutButton *_fullscreenButton;	// 40 = 0x28
    IMKnockoutButton *_pictureInPictureButton;	// 48 = 0x30
    IMKnockoutButton *_airplayButton;	// 56 = 0x38
    UIStatusBar *_statusBar;	// 64 = 0x40
    UIButton *_doneButton;	// 72 = 0x48
    UIActivityIndicatorView *_loadingIndicator;	// 80 = 0x50
    UILabel *_loadingLabel;	// 88 = 0x58
    UIButton *_scaleButton;	// 96 = 0x60
    UILabel *_scrubInstructions1;	// 104 = 0x68
    UILabel *_scrubInstructions2;	// 112 = 0x70
    MPVolumeSlider *_volumeSlider;	// 120 = 0x78
    IMKnockoutButton *_leftButton;	// 128 = 0x80
    IMKnockoutButton *_rightButton;	// 136 = 0x88
    UIButton *_audioAndSubtitlesButton;	// 144 = 0x90
    MPAVRoutingController *_airplayController;	// 152 = 0x98
    MPVolumeController *_volumeController;	// 160 = 0xa0
    UIView *_topBarLayoutGuide;	// 168 = 0xa8
    UIView *_topBarItemsGuide;	// 176 = 0xb0
    UIView *_bottomBarTopLayoutGuide;	// 184 = 0xb8
    UIView *_bottomBarBottomLayoutGuide;	// 192 = 0xc0
    UIView *_bottomBarItemsGuide;	// 200 = 0xc8
    MPAudioAndSubtitlesController *_audioAndSubtitlesController;	// 208 = 0xd0
    _Bool _ticking;	// 216 = 0xd8
    _Bool _ignoreTouchUp;	// 217 = 0xd9
    _Bool _shouldResumePlayback;	// 218 = 0xda
    _Bool _seekForward;	// 219 = 0xdb
    long long _overrideType;	// 224 = 0xe0
    NSLayoutConstraint *_topBarBottomConstraint;	// 232 = 0xe8
    NSLayoutConstraint *_topBarHeightConstraint;	// 240 = 0xf0
    NSLayoutConstraint *_topBarLayoutGuideHeightConstraint;	// 248 = 0xf8
    NSLayoutConstraint *_topItemsTopConstraint;	// 256 = 0x100
    NSLayoutConstraint *_topItemsTrailingConstraint;	// 264 = 0x108
    NSLayoutConstraint *_bottomBarHeightConstraint;	// 272 = 0x110
    NSLayoutConstraint *_bottomItemsBottomConstraint;	// 280 = 0x118
    NSLayoutConstraint *_bottomItemsLeftConstraint;	// 288 = 0x120
    NSLayoutConstraint *_bottomItemsRightConstraint;	// 296 = 0x128
    NSLayoutConstraint *_volumeSliderRightConstraint;	// 304 = 0x130
    NSLayoutConstraint *_volumeSliderWidthConstraint;	// 312 = 0x138
    NSArray *_topItemsConstraints;	// 320 = 0x140
    NSArray *_bottomItemsConstraints;	// 328 = 0x148
    double _previousTopBarMargin;	// 336 = 0x150
    NSArray *_topBarTraitCollectionConstraints;	// 344 = 0x158
    NSArray *_topItems;	// 352 = 0x160
    NSArray *_bottomItems;	// 360 = 0x168
    MPAVItem *_avItem;	// 368 = 0x170
    _Bool _allowsWirelessPlayback;	// 376 = 0x178
    _Bool navigationBarHidden;	// 377 = 0x179
    _Bool _automaticallyHandleTransportControls;	// 378 = 0x17a
    _Bool _allowsExitFromFullscreen;	// 379 = 0x17b
    _Bool _allowsPictureInPicture;	// 380 = 0x17c
    _Bool _allowsAudioAndSubtitles;	// 381 = 0x17d
    id <IMVideoOverlayDelegate> _delegate;	// 384 = 0x180
    IMAVPlayer *_player;	// 392 = 0x188
    IMPlayerItem *_item;	// 400 = 0x190
    unsigned long long disabledParts;	// 408 = 0x198
    unsigned long long desiredParts;	// 416 = 0x1a0
    unsigned long long visibleParts;	// 424 = 0x1a8
    long long _style;	// 432 = 0x1b0
    UIViewController *_viewControllerForModalPresentationOrientation;	// 440 = 0x1b8
}

@property(nonatomic) __weak UIViewController *viewControllerForModalPresentationOrientation; // @synthesize viewControllerForModalPresentationOrientation=_viewControllerForModalPresentationOrientation;
@property(nonatomic) _Bool allowsAudioAndSubtitles; // @synthesize allowsAudioAndSubtitles=_allowsAudioAndSubtitles;
@property(nonatomic) _Bool allowsPictureInPicture; // @synthesize allowsPictureInPicture=_allowsPictureInPicture;
@property(nonatomic) _Bool allowsExitFromFullscreen; // @synthesize allowsExitFromFullscreen=_allowsExitFromFullscreen;
@property(nonatomic) _Bool automaticallyHandleTransportControls; // @synthesize automaticallyHandleTransportControls=_automaticallyHandleTransportControls;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) _Bool navigationBarHidden; // @synthesize navigationBarHidden;
@property(nonatomic) unsigned long long visibleParts; // @synthesize visibleParts;
@property(nonatomic) unsigned long long desiredParts; // @synthesize desiredParts;
@property(nonatomic) unsigned long long disabledParts; // @synthesize disabledParts;
@property(nonatomic) _Bool allowsWirelessPlayback; // @synthesize allowsWirelessPlayback=_allowsWirelessPlayback;
@property(retain, nonatomic) IMPlayerItem *item; // @synthesize item=_item;
@property(retain, nonatomic) IMAVPlayer *player; // @synthesize player=_player;
@property(nonatomic) __weak id <IMVideoOverlayDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100215378
- (void)hideAlternateTracks;	// IMP=0x00000001002151c8
- (void)showAlternateTracks;	// IMP=0x00000001002151c4
- (void)setDesiredParts:(unsigned long long)arg1 animate:(_Bool)arg2;	// IMP=0x00000001002151c0
- (void)setVisibleParts:(unsigned long long)arg1 animate:(_Bool)arg2;	// IMP=0x00000001002151bc
@property(readonly, retain, nonatomic) UINavigationBar *navigationBar;
- (_Bool)_shouldHideStatusBar;	// IMP=0x000000010021509c
- (void)_updateVolumeImage:(float)arg1;	// IMP=0x0000000100214fd4
- (void)_updateVolumeSlider;	// IMP=0x0000000100214fd0
- (void)_updateTopBarBoundsBasedConstraints;	// IMP=0x0000000100214bbc
- (_Bool)updateTimeBasedValues;	// IMP=0x00000001002149ac
- (void)_updateLoadingIndicator;	// IMP=0x0000000100214338
- (void)_updateScaleButton;	// IMP=0x000000010021402c
- (void)_updateAirplayButton;	// IMP=0x0000000100213ce8
- (void)_unregisterForPlayerNotifications:(id)arg1;	// IMP=0x0000000100213c14
- (void)_unregisterForItemNotifications:(id)arg1;	// IMP=0x0000000100213b58
- (void)_startSeeking;	// IMP=0x0000000100213ae4
- (void)_setScrubberValue:(double)arg1;	// IMP=0x0000000100213ac8
- (void)_setOverrideType:(long long)arg1;	// IMP=0x0000000100213aa0
- (void)_setScrubberDuration:(double)arg1;	// IMP=0x0000000100213a88
- (void)_notifyDelegateOfUserEventEnd:(unsigned long long)arg1;	// IMP=0x00000001002139e4
- (void)_notifyDelegateOfUserEventCancel:(unsigned long long)arg1;	// IMP=0x0000000100213940
- (void)_notifyDelegateOfUserEventBegin:(unsigned long long)arg1;	// IMP=0x000000010021389c
- (void)_notifyDelegateOfUserEvent:(unsigned long long)arg1;	// IMP=0x0000000100213860
- (void)_registerForPlayerNotifications:(id)arg1;	// IMP=0x000000010021374c
- (void)_registerForItemNotifications:(id)arg1;	// IMP=0x0000000100213680
- (id)_newFrostedGlassBackdropView;	// IMP=0x00000001002134ec
- (id)_imageNamed:(id)arg1 forControlState:(unsigned long long)arg2;	// IMP=0x00000001002132d4
- (id)_imageNamed:(id)arg1;	// IMP=0x0000000100213220
- (_Bool)_prefersSkipOverSeek;	// IMP=0x0000000100213218
- (_Bool)_canSkipToSeekableEnd;	// IMP=0x0000000100213210
- (_Bool)_canPlayFastReverse;	// IMP=0x0000000100213208
- (void)_configureTransportControls;	// IMP=0x0000000100212cc0
- (void)_configureAuxiliaryButtons:(_Bool)arg1;	// IMP=0x0000000100212920
- (void)_setButtons:(id)arg1 inBar:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000100212254
- (void)_videoViewDidMoveToWindow:(id)arg1;	// IMP=0x0000000100212248
- (void)_tick:(id)arg1;	// IMP=0x0000000100212198
- (void)_seekabilityChanged:(id)arg1;	// IMP=0x000000010021218c
- (void)_playbackStateChanged:(id)arg1;	// IMP=0x0000000100211f60
- (void)_itemReadyToPlay:(id)arg1;	// IMP=0x0000000100211f18
- (void)_itemChanged:(id)arg1;	// IMP=0x0000000100211d5c
- (void)_effectiveScaleModeDidChange:(id)arg1;	// IMP=0x0000000100211d50
- (void)_durationAvailable:(id)arg1;	// IMP=0x0000000100211bc4
- (void)_applicationWillEnterForegroundNotification:(id)arg1;	// IMP=0x0000000100211b64
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;	// IMP=0x0000000100211b48
- (void)_alternateTracksAvailable:(id)arg1;	// IMP=0x0000000100211ac0
- (void)_activeAudioRouteDidChange:(id)arg1;	// IMP=0x0000000100211ab4
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;	// IMP=0x0000000100211aa8
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;	// IMP=0x0000000100211a60
- (void)_skipButtonTouchUpOutside:(id)arg1;	// IMP=0x00000001002119bc
- (void)_skipButtonTouchUpInside:(id)arg1;	// IMP=0x00000001002116c0
- (void)_skipButtonTouchCancel:(id)arg1;	// IMP=0x0000000100211610
- (void)_skipButtonTouchDown:(id)arg1;	// IMP=0x0000000100211520
- (void)_scaleButtonTapped:(id)arg1;	// IMP=0x0000000100211420
- (void)_playPauseButtonTapped:(id)arg1;	// IMP=0x00000001002113cc
- (void)_observeControl:(id)arg1;	// IMP=0x0000000100211310
- (void)_pictureInPictureButtonTapped:(id)arg1;	// IMP=0x0000000100211274
- (void)_fullscreenButtonTapped:(id)arg1;	// IMP=0x00000001002111d8
- (void)_airplayButtonTapped:(id)arg1;	// IMP=0x00000001002111d4
- (void)_doneButtonTapped:(id)arg1;	// IMP=0x0000000100211138
- (void)_buttonInteractionEnded:(id)arg1;	// IMP=0x0000000100211128
- (void)_buttonInteractionCanceled:(id)arg1;	// IMP=0x0000000100211118
- (void)_buttonInteractionBegan:(id)arg1;	// IMP=0x0000000100211108
- (void)_audioAndSubtitlesButtonTapped:(id)arg1;	// IMP=0x0000000100210cd4
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100210ba8
- (void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3;	// IMP=0x0000000100210b3c
- (void)_handleDismissAudioAndSubtitlesController;	// IMP=0x0000000100210aa8
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;	// IMP=0x0000000100210aa0
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;	// IMP=0x0000000100210a94
- (void)_showScrubInstructions;	// IMP=0x00000001002107c0
- (void)_hideScrubInstructions;	// IMP=0x0000000100210608
- (void)detailSliderTrackingDidCancel:(id)arg1;	// IMP=0x0000000100210520
- (void)detailSliderTrackingDidEnd:(id)arg1;	// IMP=0x0000000100210438
- (void)detailSliderTrackingDidBegin:(id)arg1;	// IMP=0x0000000100210328
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;	// IMP=0x000000010021025c
- (void)detailSlider:(id)arg1 didChangeScrubSpeed:(long long)arg2;	// IMP=0x00000001002101fc
- (void)stopTicking;	// IMP=0x00000001002101e4
- (void)startTicking;	// IMP=0x00000001002101a0
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2 animateAlongside:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000010020d53c
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010020d524
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010020d514
- (void)setHidden:(_Bool)arg1;	// IMP=0x000000010020d480
@property(readonly, nonatomic) double bottomBarHeight;
@property(nonatomic) _Bool allowsDetailScrubbing;
@property(nonatomic) _Bool allowsScrubbing;
- (void)removeFromSuperview;	// IMP=0x000000010020d244
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000010020d1e4
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000010020d184
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000010020d098
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010020cfa8
- (void)layoutSubviews;	// IMP=0x000000010020ce68
- (void)updateConstraints;	// IMP=0x000000010020c8c4
- (void)safeAreaInsetsDidChange;	// IMP=0x000000010020c874
- (void)didMoveToWindow;	// IMP=0x000000010020c7b8
- (void)dealloc;	// IMP=0x000000010020c4dc
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;	// IMP=0x000000010020c208
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010020c1f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
