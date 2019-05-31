/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusFoundation/OFUIView.h>
#import <libobjc.A.dylib/OKCollectionProxyDataSource.h>
#import <libobjc.A.dylib/OKDynamicItemProxiedObject.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/OKActionResponderPrivate.h>
#import <libobjc.A.dylib/OKActionResponderPrivate.h>
#import <libobjc.A.dylib/OKSettingsSupport.h>
#import <libobjc.A.dylib/OKPresentationReadinessPrivate.h>
#import <libobjc.A.dylib/OKWidgetViewProxyExports.h>
#import <libobjc.A.dylib/OKPresentationReadiness.h>
#import <libobjc.A.dylib/OKActionResponder.h>
#import <libobjc.A.dylib/OKPlayable.h>

@protocol OKWidgetViewDelegate;
@class OKWidgetView, NSMutableArray, NSURL, UIImageView, OKWidgetContainerView, OKPresentationPage, OKPresentationWidget, NSArray, NSString, OFUIView, NSMutableDictionary, NSRecursiveLock, OKDynamicItemProxy, UISnapBehavior, OKPresentationViewController;

@interface OKWidgetViewProxy : OFUIView <OKCollectionProxyDataSource, OKDynamicItemProxiedObject, UIGestureRecognizerDelegate, OKActionResponderPrivate, OKActionResponderPrivate, OKSettingsSupport, OKPresentationReadinessPrivate, OKWidgetViewProxyExports, OKPresentationReadiness, OKActionResponder, OKPlayable> {

	UIEdgeInsets _eventsInset;
	BOOL _ignoreEventsOnTransparentPixels;
	NSMutableArray* _subWidgetViews;
	NSURL* _borderImageURL;
	UIImageView* _borderView;
	OKWidgetContainerView* _contentContainerView;
	BOOL _needsApplySettings;
	BOOL _hasSettingsApplied;
	OKWidgetView* _parentWidgetView;
	id<OKWidgetViewDelegate> _delegate;
	unsigned long long _prepareMode;
	OKPresentationPage* _page;
	OKPresentationWidget* _widget;
	NSMutableArray* _mediaURLs;
	OKWidgetContainerView* _contentView;
	UIEdgeInsets _borderEdgeOutsets;
	UIEdgeInsets _borderImageCapEdgeInsets;
	BOOL _shadowOptimization;
	NSArray* _contentEffects;
	BOOL _needsZoning;
	BOOL _antialiasing;
	CATransform3D _widgetTransform;
	CATransform3D _motionTransform;
	CATransform3D _parallaxTransform;
	CGAffineTransform _dynamicsTransform;
	double _zRotation;
	CGPoint _zRotationAnchorPoint;
	BOOL _xFlipped;
	BOOL _yFlipped;
	CGPoint _xyTranslation;
	CGSize _xyScale;
	BOOL _motionEnabled;
	BOOL _motionTiltXEnabled;
	BOOL _motionTiltYEnabled;
	BOOL _motionTiltZEnabled;
	CGSize _motionXMinMax;
	CGSize _motionYMinMax;
	CGSize _motionZMinMax;
	CGPoint _motionXTiltAnchorPoint;
	CGPoint _motionYTiltAnchorPoint;
	CGPoint _motionZTiltAnchorPoint;
	BOOL _motionXTiltReversed;
	BOOL _motionYTiltReversed;
	BOOL _motionZTiltReversed;
	BOOL _parallaxEnabled;
	NSString* _dynamicsCollisionActionScript;
	unsigned long long _presentationMode;
	OFUIView* _dimmerView;
	SCD_Struct_OK13* _focusGestureHelper;
	unsigned long long _focusGestureMode;
	UIEdgeInsets _focusGestureInsets;
	NSString* _prepareActionScript;
	NSString* _canPerformActionScript;
	NSArray* _layoutSteps;
	NSMutableDictionary* _actionBindings;
	BOOL _isReady;
	NSMutableArray* _readyNotificationBlocks;
	NSRecursiveLock* _readyRecursiveLock;
	CGRect _originalFrame;
	CGSize _lastBoundsSize;
	NSMutableArray* _newSubWidgetViews;
	OKDynamicItemProxy* _dynamicProxy;
	UISnapBehavior* _dynamicSnapBehavior;

}

@property (assign,nonatomic) unsigned long long prepareMode;                                           //@synthesize prepareMode=_prepareMode - In the implementation block
@property (nonatomic,retain) OKPresentationPage * page;                                                //@synthesize page=_page - In the implementation block
@property (nonatomic,readonly) OKPresentationViewController * presentationViewController; 
@property (nonatomic,retain,readonly) OKDynamicItemProxy * dynamicProxy;                               //@synthesize dynamicProxy=_dynamicProxy - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * subWidgetViews;                                 //@synthesize subWidgetViews=_subWidgetViews - In the implementation block
@property (nonatomic,readonly) BOOL parallaxEnabled;                                                   //@synthesize parallaxEnabled=_parallaxEnabled - In the implementation block
@property (nonatomic,readonly) BOOL needsZoning;                                                       //@synthesize needsZoning=_needsZoning - In the implementation block
@property (assign,nonatomic) unsigned long long presentationMode;                                      //@synthesize presentationMode=_presentationMode - In the implementation block
@property (nonatomic,retain,readonly) OKPresentationWidget * widget;                                   //@synthesize widget=_widget - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * mediaURLs;                                      //@synthesize mediaURLs=_mediaURLs - In the implementation block
@property (nonatomic,retain,readonly) OFUIView * contentView;                                          //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) OKWidgetView * parentWidgetView;                                          //@synthesize parentWidgetView=_parentWidgetView - In the implementation block
@property (assign,nonatomic) id<OKWidgetViewDelegate> delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGPoint center; 
@property (assign,nonatomic) CGRect bounds; 
@property (assign,nonatomic) CGAffineTransform dynamicsTransform; 
@property (readonly) OFUIView * actionView; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)setCenterX:(double)arg1 ;
-(void)setCenterY:(double)arg1 ;
-(BOOL)parallaxEnabled;
-(void)play;
-(void)_cancelAllOperations;
-(OKPresentationWidget *)widget;
-(void)instantPause;
-(id)initWithWidget:(id)arg1 ;
-(id)pageViewController;
-(OKPresentationViewController *)presentationViewController;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)prepareForWarmup:(BOOL)arg1 ;
-(BOOL)prepareForUnload:(BOOL)arg1 ;
-(void)networkStatusDidChange:(long long)arg1 ;
-(void)setNeedsApplySettings;
-(unsigned long long)prepareMode;
-(void)applySettingsIfNeeded;
-(void)applyLayoutSettings;
-(void)removeAllActionBindings;
-(BOOL)needsZoning;
-(NSMutableArray *)subWidgetViews;
-(OKWidgetView *)parentWidgetView;
-(void)updateWithParallaxTranslationX:(double)arg1 translationY:(double)arg2 ;
-(void)prepareForMode:(unsigned long long)arg1 force:(BOOL)arg2 ;
-(NSMutableArray *)mediaURLs;
-(id)subWidgetViewForName:(id)arg1 recursively:(BOOL)arg2 ;
-(void)updateMotion;
-(void)updateParallax;
-(void)updateDynamics;
-(void)setNeedsPrepare;
-(void)prepareForRefresh;
-(void)instantResume;
-(void)updateWithMotionTiltRotationX:(double)arg1 tiltRotationY:(double)arg2 tiltRotationZ:(double)arg3 ;
-(CGSize)layoutFactor;
-(id)_preparseLayoutString:(id)arg1 targetView:(out id*)arg2 anchorView:(out id*)arg3 ;
-(unsigned long long)countOfDictionaryProxy:(id)arg1 ;
-(id)allKeysForDictionaryProxy:(id)arg1 ;
-(id)dictionaryProxy:(id)arg1 objectForKey:(id)arg2 ;
-(id)allActionBindings;
-(OKDynamicItemProxy *)dynamicProxy;
-(id)subDynamicProxies;
-(void)beganCollisionWithWidgetView:(id)arg1 fromGroup:(id)arg2 ;
-(id)dictionaryProxy:(id)arg1 objectAtIndexPath:(id)arg2 ;
-(void)applySettings;
-(void)prepareForReload;
-(void)updateLayoutSteps;
-(void)setSettingParallaxEnabled:(BOOL)arg1 ;
-(void)setSettingDynamicsEnabled:(BOOL)arg1 ;
-(CGAffineTransform)dynamicsTransform;
-(void)setDynamicsTransform:(CGAffineTransform)arg1 ;
-(void)setActivityIndicatorVisible:(BOOL)arg1 ;
-(BOOL)isActivityIndicatorVisible;
-(void)notifyWhenBecomesReady:(/*^block*/id)arg1 ;
-(void)removeAllReadyNotifications;
-(BOOL)sendAction:(id)arg1 toTarget:(id)arg2 ;
-(void)setParentWidgetView:(OKWidgetView *)arg1 ;
-(BOOL)isReady:(BOOL)arg1 ;
-(double)readyProgress:(BOOL)arg1 ;
-(void)setSettingBorderColor:(id)arg1 ;
-(void)setSettingBorderWidth:(double)arg1 ;
-(BOOL)performActionScript:(id)arg1 withAction:(id)arg2 ;
-(BOOL)interactivityEnabled;
-(OFUIView *)actionView;
-(void)addActionBinding:(id)arg1 scope:(unsigned long long)arg2 ;
-(void)removeActionBinding:(id)arg1 ;
-(id)actionBindingForAction:(id)arg1 isTouchCountAgnostic:(BOOL)arg2 ;
-(CGSize)parentLayoutFactor;
-(id)layoutSettingsKeys;
-(void)setSettingPrepareActionScript:(id)arg1 ;
-(BOOL)supportsReadiness;
-(void)readinessDidChange:(BOOL)arg1 ;
-(void)becomeReady;
-(void)resignReady;
-(CGRect)settingFrame;
-(void)setSettingFrame:(CGRect)arg1 ;
-(void)setSettingCanPerformActionScript:(id)arg1 ;
-(id)settingBackgroundColor;
-(void)setSettingBackgroundColor:(id)arg1 ;
-(id)dynamicProxyForOffsetFromCenter:(UIOffset)arg1 realRemoteOffsetFromCenter:(UIOffset*)arg2 ;
-(void)setSettingActionBindings:(id)arg1 ;
-(void)setSettingMotionEnabled:(BOOL)arg1 ;
-(void)setSettingMotionTiltXEnabled:(BOOL)arg1 ;
-(void)setSettingMotionTiltYEnabled:(BOOL)arg1 ;
-(void)setSettingMotionTiltZEnabled:(BOOL)arg1 ;
-(void)setSettingMotionXMinMax:(CGSize)arg1 ;
-(void)setSettingMotionYMinMax:(CGSize)arg1 ;
-(void)setSettingMotionZMinMax:(CGSize)arg1 ;
-(void)setSettingLayoutSteps:(id)arg1 ;
-(UIEdgeInsets)settingEventsInset;
-(void)setSettingEventsInset:(UIEdgeInsets)arg1 ;
-(void)setAntialiasing:(BOOL)arg1 ;
-(BOOL)needsAntialiasing;
-(void)dynamicsRemoveSnapping;
-(CGRect)borderRect;
-(CGRect)calculateFrame:(CGRect)arg1 ;
-(void)updateTransforms;
-(void)updateAntialiasing;
-(id)settingActionBindings;
-(void)updateBorder;
-(void)updateContentFilters;
-(void)stopContentEffects;
-(void)updateContentEffects;
-(void)updateWidgetTransforms;
-(void)prepareContentEffects;
-(void)startContentEffects;
-(void)restartContentEffects;
-(void)reloadMediaURL:(id)arg1 size:(CGSize)arg2 mode:(long long)arg3 lowQuality:(BOOL)arg4 highQuality:(BOOL)arg5 identifier:(id)arg6 progressHandler:(/*^block*/id)arg7 completionHandler:(/*^block*/id)arg8 ;
-(void)_reloadBorderContentInHighQuality:(BOOL)arg1 ;
-(void)_unloadBorderContent;
-(void)setPrepareMode:(unsigned long long)arg1 ;
-(void)_reloadBorderContent;
-(void)_stopShowingProgressIndicator;
-(void)_startShowingProgressIndicator;
-(double)_localReadyProgress;
-(void)pauseContentEffects;
-(void)resumeContentEffects:(BOOL)arg1 ;
-(double)remainingPlayDuration;
-(CGSize)_focusSize;
-(void)_animationToFocus;
-(void)_completionToFocus:(BOOL)arg1 ;
-(id)_contentViewToFocus;
-(void)_animationToUnfocus;
-(void)_completionToUnfocus:(BOOL)arg1 ;
-(void)_prepareToFocus;
-(void)_animateToFocus:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)focus:(unsigned long long)arg1 duration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)unfocus:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)_prepareToUnfocus;
-(void)_animateToUnfocus:(double)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)presentationMode;
-(CATransform3D)_jsOriginalTransform;
-(CATransform3D)_jsTransform;
-(void)_jsSetTransform:(CATransform3D)arg1 ;
-(void)dynamicsSnapToPoint:(CGPoint)arg1 withDamping:(double)arg2 ;
-(id)addSubWidgetViewWithTemplateName:(id)arg1 name:(id)arg2 andSettings:(id)arg3 ;
-(CGPoint)convertPointWithParallax:(CGPoint)arg1 ;
-(id)subWidgetViewsInRect:(CGRect)arg1 ;
-(id)_dimmerView;
-(id)_borderView;
-(id)subWidgetViewNames;
-(CGPoint)settingCenter;
-(void)setSettingCenter:(CGPoint)arg1 ;
-(CGSize)settingSize;
-(void)setSettingSize:(CGSize)arg1 ;
-(CGPoint)settingPosition;
-(void)setSettingPosition:(CGPoint)arg1 ;
-(BOOL)settingClipsToBounds;
-(void)setSettingClipsToBounds:(BOOL)arg1 ;
-(BOOL)settingUserInteractionEnabled;
-(void)setSettingUserInteractionEnabled:(BOOL)arg1 ;
-(double)settingZPosition;
-(void)setSettingZPosition:(double)arg1 ;
-(double)settingAlpha;
-(void)setSettingAlpha:(double)arg1 ;
-(void)setSettingHidden:(BOOL)arg1 ;
-(BOOL)settingNeedsZoning;
-(void)setSettingNeedsZoning:(BOOL)arg1 ;
-(double)settingCornerRadius;
-(void)setSettingCornerRadius:(double)arg1 ;
-(BOOL)settingAntialiasing;
-(void)setSettingAntialiasing:(BOOL)arg1 ;
-(unsigned long long)settingAutoresizingMask;
-(void)setSettingAutoresizingMask:(unsigned long long)arg1 ;
-(BOOL)settingIgnoreEventsOnTransparentPixels;
-(void)setSettingIgnoreEventsOnTransparentPixels:(BOOL)arg1 ;
-(id)settingShadowColor;
-(void)setSettingShadowColor:(id)arg1 ;
-(double)settingShadowRadius;
-(void)setSettingShadowRadius:(double)arg1 ;
-(double)settingShadowOpacity;
-(void)setSettingShadowOpacity:(double)arg1 ;
-(CGSize)settingShadowOffset;
-(void)setSettingShadowOffset:(CGSize)arg1 ;
-(BOOL)settingShadowOptimization;
-(void)setSettingShadowOptimization:(BOOL)arg1 ;
-(id)settingBorderColor;
-(double)settingBorderWidth;
-(UIEdgeInsets)settingBorderEdgeOutsets;
-(void)setSettingBorderEdgeOutsets:(UIEdgeInsets)arg1 ;
-(id)settingBorderImageURL;
-(void)setSettingBorderImageURL:(id)arg1 ;
-(UIEdgeInsets)settingBorderImageCapEdgeInsets;
-(void)setSettingBorderImageCapEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)settingContentFilters;
-(void)setSettingContentFilters:(id)arg1 ;
-(id)settingContentEffects;
-(void)setSettingContentEffects:(id)arg1 ;
-(double)settingZRotation;
-(void)setSettingZRotation:(double)arg1 ;
-(CGPoint)settingZRotationAnchorPoint;
-(void)setSettingZRotationAnchorPoint:(CGPoint)arg1 ;
-(BOOL)settingXFlipped;
-(void)setSettingXFlipped:(BOOL)arg1 ;
-(BOOL)settingYFlipped;
-(void)setSettingYFlipped:(BOOL)arg1 ;
-(CGSize)settingXyScale;
-(void)setSettingXyScale:(CGSize)arg1 ;
-(CGPoint)settingXyTranslation;
-(void)setSettingXyTranslation:(CGPoint)arg1 ;
-(BOOL)settingMotionEnabled;
-(BOOL)settingMotionTiltXEnabled;
-(BOOL)settingMotionTiltYEnabled;
-(BOOL)settingMotionTiltZEnabled;
-(CGSize)settingMotionXMinMax;
-(CGSize)settingMotionYMinMax;
-(CGSize)settingMotionZMinMax;
-(CGPoint)settingMotionXTiltAnchorPoint;
-(void)setSettingMotionXTiltAnchorPoint:(CGPoint)arg1 ;
-(CGPoint)settingMotionYTiltAnchorPoint;
-(void)setSettingMotionYTiltAnchorPoint:(CGPoint)arg1 ;
-(CGPoint)settingMotionZTiltAnchorPoint;
-(void)setSettingMotionZTiltAnchorPoint:(CGPoint)arg1 ;
-(BOOL)settingMotionXtiltReversed;
-(void)setSettingMotionXTiltReversed:(BOOL)arg1 ;
-(BOOL)settingMotionYTiltReversed;
-(void)setSettingMotionYTiltReversed:(BOOL)arg1 ;
-(BOOL)settingMotionZTiltReversed;
-(void)setSettingMotionZTiltReversed:(BOOL)arg1 ;
-(BOOL)settingDynamicsEnabled;
-(BOOL)settingDynamicsGravityDisabled;
-(void)setSettingDynamicsGravityDisabled:(BOOL)arg1 ;
-(double)settingDynamicsBodyElasticity;
-(void)setSettingDynamicsBodyElasticity:(double)arg1 ;
-(double)settingDynamicsBodyFriction;
-(void)setSettingDynamicsBodyFriction:(double)arg1 ;
-(double)settingDynamicsBodyDensity;
-(void)setSettingDynamicsBodyDensity:(double)arg1 ;
-(double)settingDynamicsBodyResistance;
-(void)setSettingDynamicsBodyResistance:(double)arg1 ;
-(double)settingDynamicsBodyAngularResistance;
-(void)setSettingDynamicsBodyAngularResistance:(double)arg1 ;
-(BOOL)settingDynamicsBodyAllowsRotation;
-(void)setSettingDynamicsBodyAllowsRotation:(BOOL)arg1 ;
-(id)settingDynamicsCollisionGroups;
-(void)setSettingDynamicsCollisionGroups:(id)arg1 ;
-(void)setSettingDynamicsCollisionActionScript:(id)arg1 ;
-(id)settingDynamicsAttachments;
-(void)setSettingDynamicsAttachments:(id)arg1 ;
-(id)settingDynamicsPushGroups;
-(void)setSettingDynamicsPushGroups:(id)arg1 ;
-(void)updateContentTransforms;
-(void)_cancelBorderOperations;
-(float)contentAspectRatio;
-(void)wobble;
-(void)prepareIfNeeded:(BOOL)arg1 ;
-(void)startShowingProgressIndicator;
-(void)stopShowingProgressIndicator;
-(void)updateProgressIndicator:(double)arg1 ;
-(void)prefetchMediaURL:(id)arg1 identifier:(id)arg2 ;
-(SCD_Struct_OK13*)_focusGestureHelper;
-(void)focus:(id)arg1 ;
-(void)setPresentationMode:(unsigned long long)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)name;
-(NSString *)description;
-(void)setDelegate:(id<OKWidgetViewDelegate>)arg1 ;
-(OFUIView *)contentView;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(void)sizeToFit;
-(id<OKWidgetViewDelegate>)delegate;
-(BOOL)isFocused;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(OKPresentationPage *)page;
-(void)setPage:(OKPresentationPage *)arg1 ;
-(CGRect)originalFrame;
-(BOOL)prepareForDisplay:(BOOL)arg1 ;
-(BOOL)canPerformAction:(id)arg1 ;
-(void)commonInit;
-(void)updateShadowPath;
@end

