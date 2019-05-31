/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MPAVLightweightRoutingControllerDelegate.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MPAVLightweightRoutingController, UIButton, UILabel, MPVolumeSlider, UIImage, NSString;

@interface MPVolumeView : UIView <MPAVLightweightRoutingControllerDelegate, NSCoding> {

	MPAVLightweightRoutingController* _lightweightRoutingController;
	BOOL _hasNonDefaultRouteButtonImages;
	BOOL _hasNonDefaultMaxVolumeSliderImage;
	BOOL _hasNonDefaultMinVolumeSliderImage;
	BOOL _hidesRouteLabelWhenNoRouteChoice;
	UIButton* _routeButton;
	BOOL _routeButtonShowsTouchWhenHighlighted;
	BOOL _routeDiscoveryEnabled;
	UILabel* _routeLabel;
	BOOL _showingButton;
	BOOL _showingLabel;
	BOOL _showingSlider;
	BOOL _showsRouteButton;
	BOOL _showsVolumeSlider;
	long long _style;
	MPVolumeSlider* _volumeSlider;
	BOOL _volumeSliderShrinksFromBothEnds;
	BOOL _wirelessRouteIsPicked;
	BOOL _wirelessRoutesAvailable;
	BOOL _pushedRouteDiscoveryModeState;

}

@property (nonatomic,readonly) long long style; 
@property (nonatomic,readonly) MPVolumeSlider * volumeSlider; 
@property (assign,nonatomic) BOOL volumeSliderShrinksFromBothEnds; 
@property (assign,nonatomic) BOOL hidesRouteLabelWhenNoRouteChoice; 
@property (nonatomic,readonly) BOOL isVisible; 
@property (nonatomic,readonly) BOOL isShowingRouteButton; 
@property (assign,nonatomic) BOOL routeButtonShowsTouchWhenHighlighted; 
@property (assign,nonatomic) BOOL showsVolumeSlider; 
@property (assign,nonatomic) BOOL showsRouteButton; 
@property (getter=areWirelessRoutesAvailable,nonatomic,readonly) BOOL wirelessRoutesAvailable; 
@property (getter=isWirelessRouteActive,nonatomic,readonly) BOOL wirelessRouteActive; 
@property (nonatomic,retain) UIImage * volumeWarningSliderImage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MPVolumeSlider *)volumeSlider;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)lightweightRoutingController:(id)arg1 didChangeDevicePresenceDetected:(BOOL)arg2 ;
-(void)lightweightRoutingController:(id)arg1 didChangePickedRoutes:(id)arg2 ;
-(void)_volumeSliderVolumeControlAvailabilityDidChangeNotification:(id)arg1 ;
-(void)_initWithStyle:(long long)arg1 ;
-(void)_setShowsVolumeSlider:(BOOL)arg1 ;
-(void)_setShowsRouteButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setRouteDiscoveryEnabled:(BOOL)arg1 ;
-(void)_loadAudioRoutePickerIfNeeded;
-(void)_updateWirelessRouteStatus;
-(void)_getDefaultVolumeSliderFrame:(CGRect*)arg1 routeButtonFrame:(CGRect*)arg2 forBounds:(CGRect)arg3 ;
-(BOOL)routeButtonShowsTouchWhenHighlighted;
-(id)_defaultRouteButtonImageAsSelected:(BOOL)arg1 ;
-(void)_displayAudioRoutePicker;
-(void)_startPrewarmingAudioRoutePicker;
-(void)_stopPrewarmingAudioRoutePicker;
-(CGRect)volumeSliderRectForBounds:(CGRect)arg1 ;
-(CGRect)routeButtonRectForBounds:(CGRect)arg1 ;
-(BOOL)isShowingRouteButton;
-(BOOL)isWirelessRouteActive;
-(BOOL)areWirelessRoutesAvailable;
-(id)minimumVolumeSliderImageForState:(unsigned long long)arg1 ;
-(id)maximumVolumeSliderImageForState:(unsigned long long)arg1 ;
-(UIImage *)volumeWarningSliderImage;
-(id)routeButtonImageForState:(unsigned long long)arg1 ;
-(void)setMinimumVolumeSliderImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setMaximumVolumeSliderImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setVolumeWarningSliderImage:(UIImage *)arg1 ;
-(void)setRouteButtonImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setRouteButtonShowsTouchWhenHighlighted:(BOOL)arg1 ;
-(void)setShowsRouteButton:(BOOL)arg1 ;
-(void)setShowsVolumeSlider:(BOOL)arg1 ;
-(void)setVolumeThumbImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(BOOL)showsRouteButton;
-(BOOL)showsVolumeSlider;
-(id)volumeThumbImageForState:(unsigned long long)arg1 ;
-(CGRect)volumeThumbRectForBounds:(CGRect)arg1 volumeSliderRect:(CGRect)arg2 value:(float)arg3 ;
-(BOOL)hidesRouteLabelWhenNoRouteChoice;
-(BOOL)volumeSliderShrinksFromBothEnds;
-(void)setHidesRouteLabelWhenNoRouteChoice:(BOOL)arg1 ;
-(void)setVolumeSliderShrinksFromBothEnds:(BOOL)arg1 ;
-(void)dismissActiveOverlaysAnimated:(BOOL)arg1 ;
-(BOOL)isShowingActiveOverlays;
-(id)_routeButton;
-(void)_createSubviews;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)style;
-(BOOL)isVisible;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
@end

