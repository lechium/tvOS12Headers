/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UINavigationBarVisualProvider.h>
#import <UIKitCore/_UIBasicAnimationFactory.h>
#import <UIKitCore/_UINavigationBarGestureHandlerDelegate.h>

@protocol UIViewControllerTransitionCoordinator;
@class _UIBarBackground, UIView, NSArray, UIImageView, _UINavBarPrompt, _UINavigationBarGestureHandler, NSMutableArray, _UINavigationBarLegacyContentView, UILayoutGuide, NSLayoutConstraint, UIFocusContainerGuide, NSString;

@interface _UINavigationBarVisualProviderLegacyIOS : _UINavigationBarVisualProvider <_UIBasicAnimationFactory, _UINavigationBarGestureHandlerDelegate> {

	_UIBarBackground* _backgroundView;
	UIView* _customBackgroundView;
	UIView* _currentCanvasView;
	UIView* _titleView;
	NSArray* _leftViews;
	NSArray* _rightViews;
	UIImageView* _backIndicatorView;
	_UINavBarPrompt* _prompt;
	_UINavigationBarGestureHandler* _gestureHandler;
	NSMutableArray* _slideTransitionClippingViews;
	id<UIViewControllerTransitionCoordinator> _transitionCoordinator;
	_UINavigationBarLegacyContentView* _layoutView;
	UIView* _contentView;
	UILayoutGuide* _userContentGuide;
	NSLayoutConstraint* _userContentGuideLeading;
	NSLayoutConstraint* _userContentGuideTrailing;
	UIFocusContainerGuide* _contentFocusContainerGuide;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(id)preferredFocusedView;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimationInView:(id)arg1 withKeyPath:(id)arg2 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)_updateBackIndicatorImage;
-(void)_updateBackground;
-(id)_shim_compatibilityBackgroundView;
-(void)_shim_setCustomBackgroundView:(id)arg1 ;
-(double)_shim_shadowAlpha;
-(void)_shim_setShadowAlpha:(double)arg1 ;
-(BOOL)_shim_disableBlurTinting;
-(void)_shim_setDisableBlurTinting:(BOOL)arg1 ;
-(double)_shim_backgroundHeight;
-(id)_shim_backdropGroupName;
-(void)_shim_setBackdropGroupName:(id)arg1 ;
-(void)changeAppearance;
-(id)_shim_userContentGuide;
-(void)teardown;
-(BOOL)_supportsCanvasView;
-(void)_shim_setUseContentView:(BOOL)arg1 ;
-(void)prepare;
-(void)updateTopNavigationItemAnimated:(BOOL)arg1 ;
-(void)updateTopNavigationItemTitleView;
-(id)_shim_promptText;
-(id)_shim_contentView;
-(void)setupTopNavigationItem;
-(void)updateArchivedSubviews:(id)arg1 ;
-(void)prepareForPush;
-(void)pushAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareForPop;
-(void)popAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)shouldUseHeightRangeFittingWidth;
-(BOOL)canHandleStatusBarTouchAtPoint:(CGPoint)arg1 ;
-(id)_shim_customHitTest:(CGPoint)arg1 forView:(id)arg2 ;
-(void)_shim_pressBackIndicator:(BOOL)arg1 initialPress:(BOOL)arg2 ;
-(void)_shim_popForCarplayPressAtFakePoint:(CGPoint)arg1 ;
-(BOOL)_shim_wantsCustomTouchHandlingForTouches:(id)arg1 ;
-(void)_shim_touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_shim_touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_shim_touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_shim_touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_shim_updateBackIndicator;
-(BOOL)_shim_throwConstraintExceptions;
-(long long)statusBarStyle;
-(BOOL)_shim_34415965;
-(BOOL)_shouldShowBackButtonForNavigationItem:(id)arg1 ;
-(id)_backButtonForBackItem:(id)arg1 topItem:(id)arg2 ;
-(void)_shim_setPromptText:(id)arg1 animated:(BOOL)arg2 ;
-(void)setBackButtonVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)barSizeChanged;
-(void)_shim_updateBackgroundViewIgnoringFlag;
-(id)_shim_displayViewsIncludingHiddenBackButtonViews:(BOOL)arg1 ;
-(void)_shim_updateUserContentGuideForTopItem:(id)arg1 backItem:(id)arg2 ;
-(void)_shim_30244716;
-(long long)_shim_backdropStyle;
-(void)intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(void)provideViewsForContents:(id)arg1 topItem:(id)arg2 backItem:(id)arg3 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 defaultAnswer:(/*^block*/id)arg2 ;
-(double)_effectiveBackIndicatorLeftMargin;
-(BOOL)_suppressBackIndicator;
-(id)backButtonViewAtPoint:(CGPoint)arg1 ;
-(BOOL)shouldGestureHandler:(id)arg1 recognizedPopAtLocation:(CGPoint)arg2 ;
-(void)gestureHandler:(id)arg1 recognizedPopAtLocation:(CGPoint)arg2 ;
-(id)_shim_layoutView;
-(id)_shim_backIndicatorView;
-(void)_layoutSubviewsFromContentView;
-(void)_setUpContentFocusContainerGuide;
-(id)_navigationItemAtPoint:(CGPoint)arg1 ;
-(void)_popForTouchAtPoint:(CGPoint)arg1 ;
-(BOOL)_shouldPopForTouchAtPoint:(CGPoint)arg1 ;
-(CGSize)_preferredContentSizeForItem:(id)arg1 ;
-(void)_layoutInBounds:(CGRect)arg1 withVisualStyle:(id)arg2 ;
-(CGRect)_frameForCanvasView:(id)arg1 inBounds:(CGRect)arg2 ;
-(void)_getTitleViewFrame:(CGRect*)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3 forPreviousItem:(id)arg4 item:(id)arg5 ;
-(CGRect)_contentViewFrameInBounds:(CGRect)arg1 style:(id)arg2 ;
-(void)_startPushAnimationFromOldBackItem:(id)arg1 oldTopItem:(id)arg2 newBackItem:(id)arg3 newTopItem:(id)arg4 withTransitionAssistant:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)_startPopAnimationFromOldBackItem:(id)arg1 oldTopItem:(id)arg2 newBackItem:(id)arg3 newTopItem:(id)arg4 withTransitionAssistant:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)_setViewsAnimated:(BOOL)arg1 forTopNavigationItem:(id)arg2 backNavigationItem:(id)arg3 previousTopItem:(id)arg4 ;
-(void)_getLeftMargin:(double*)arg1 rightMargin:(double*)arg2 forNavigationItem:(id)arg3 showingBackButton:(BOOL)arg4 visualStyle:(id)arg5 ;
-(id)_defaultTitleFontForItem:(id)arg1 fittingHeight:(double)arg2 withScaleAdjustment:(double)arg3 ;
-(void)_getTitleViewFrame:(CGRect*)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3 forPreviousItem:(id)arg4 item:(id)arg5 returnedIdealWidthOfTextContent:(double*)arg6 availableLayoutWidthForTextContent:(double*)arg7 idealBackButtonWidth:(double*)arg8 ;
-(unsigned long long)_subviewIndexAboveBackground;
-(id)_effectiveBackIndicatorImage;
-(void)_updateBackIndicatorViewTintColor;
-(double)_backTitleWidthOverTitleWidthForMatchingBackButtonView:(id)arg1 titleView:(id)arg2 withBackButtonWidth:(double)arg3 ;
-(void)_wrapView:(id)arg1 inClippingViewWithLeftBoundary:(double)arg2 rightBoundary:(double)arg3 leftMaskImage:(id)arg4 leftMaskIsChevron:(BOOL)arg5 rightMaskImage:(id)arg6 ;
-(double)_backIndicatorClippingMargin;
-(id)_effectiveBackIndicatorTransitionMaskImage;
-(BOOL)_prepareTransitionFromItem:(id)arg1 toItem:(id)arg2 ;
-(BOOL)_performCanvasViewTransitionFromItem:(id)arg1 toItem:(id)arg2 ;
-(void)_completeTransitionFromCanvasView:(id)arg1 toCanvasView:(id)arg2 updateSize:(BOOL)arg3 transitionAssistant:(id)arg4 ;
-(void)_completeNavigationTransitionWithIncomingViews:(id)arg1 outgoingViews:(id)arg2 transitionAssistant:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_completeTopItemTransitionWithIncomingViews:(id)arg1 outgoingViews:(id)arg2 previousLeftViews:(id)arg3 previousRightViews:(id)arg4 enableUserInteraction:(id)arg5 transitionAssistant:(id)arg6 ;
-(void)_handleMouseDownAtPoint:(CGPoint)arg1 ;
-(void)_handleMouseUpAtPoint:(CGPoint)arg1 ;
-(CGPoint)frameOriginForStatusBarLocatedAt:(CGPoint)arg1 ;
@end

