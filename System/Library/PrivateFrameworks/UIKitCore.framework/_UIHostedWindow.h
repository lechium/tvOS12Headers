/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIWindow.h>

@protocol _UIHostedWindowDelegate;
@class UIColor, UITraitCollection, _UIHostedWindowHostingHandle;

@interface _UIHostedWindow : UIWindow {

	BOOL _wantsTraitPropagation;
	BOOL __hostViewUnderlapsStatusBar;
	long long _hostTintAdjustmentMode;
	UIColor* __hostTintColor;
	UITraitCollection* _hostTraitCollection;
	id<_UIHostedWindowDelegate> __hostedWindowDelegate;

}

@property (assign,setter=_setHostTintAdjustmentMode:,nonatomic) long long _hostTintAdjustmentMode;                  //@synthesize hostTintAdjustmentMode=_hostTintAdjustmentMode - In the implementation block
@property (setter=_setHostTraitCollection:,nonatomic,retain) UITraitCollection * _hostTraitCollection;              //@synthesize hostTraitCollection=_hostTraitCollection - In the implementation block
@property (assign,setter=_setWantsTraitPropagation:,nonatomic) BOOL _wantsTraitPropagation;                         //@synthesize wantsTraitPropagation=_wantsTraitPropagation - In the implementation block
@property (setter=_setHostTintColor:,nonatomic,retain) UIColor * _hostTintColor;                                    //@synthesize _hostTintColor=__hostTintColor - In the implementation block
@property (assign,nonatomic,__weak) id<_UIHostedWindowDelegate> _hostedWindowDelegate;                              //@synthesize _hostedWindowDelegate=__hostedWindowDelegate - In the implementation block
@property (nonatomic,readonly) _UIHostedWindowHostingHandle * hostingHandle; 
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setScreen:(id)arg1 ;
-(id)_normalInheritedTintColor;
-(BOOL)_isWindowServerHostingManaged;
-(void)_setFirstResponder:(id)arg1 ;
-(BOOL)__hostViewUnderlapsStatusBar;
-(unsigned)contextID;
-(void)didSetResponderTargetForCalloutBar:(id)arg1 ;
-(BOOL)_usesWindowServerHitTesting;
-(long long)_orientationForViewTransform;
-(long long)_orientationForRootTransform;
-(BOOL)_needsShakesWhenInactive;
-(void)_configureContextOptions:(id)arg1 ;
-(void)_updateWindowTraitsAndNotify:(BOOL)arg1 ;
-(BOOL)_shouldPropagateTraitCollectionChanges;
-(id)_traitCollectionForSize:(CGSize)arg1 screenCollection:(id)arg2 ;
-(BOOL)_canPromoteFromKeyWindowStack;
-(BOOL)_isConstrainedByScreenJail;
-(void)_updateAppTintView;
-(void)_updateTransformLayerForClassicPresentation;
-(void)_registerScrollToTopView:(id)arg1 ;
-(void)_unregisterScrollToTopView:(id)arg1 ;
-(void)__setHostViewUnderlapsStatusBar:(BOOL)arg1 ;
-(BOOL)_allowsLinkPreviewInteractionInViewServices;
-(void)set_hostedWindowDelegate:(id<_UIHostedWindowDelegate>)arg1 ;
-(void)_setHostTintColor:(id)arg1 ;
-(void)_setHostTintAdjustmentMode:(long long)arg1 ;
-(void)_setHostTraitCollection:(id)arg1 ;
-(_UIHostedWindowHostingHandle *)hostingHandle;
-(UIColor *)_hostTintColor;
-(long long)_hostTintAdjustmentMode;
-(long long)_defaultTintAdjustmentMode;
-(void)_setWantsTraitPropagation:(BOOL)arg1 ;
-(UITraitCollection *)_hostTraitCollection;
-(BOOL)_wantsTraitPropagation;
-(id<_UIHostedWindowDelegate>)_hostedWindowDelegate;
@end

