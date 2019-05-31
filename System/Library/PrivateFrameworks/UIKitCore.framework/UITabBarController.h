/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/GKContentRefresh.h>
#import <libobjc.A.dylib/GKURLHandling.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UILayoutContainerViewDelegate.h>
#import <UIKit/UITabBarDelegate.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol UITabBarControllerDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;
@class UITabBar, UILayoutContainerView, UIView, UIViewController, UIMoreNavigationController, NSArray, UITapGestureRecognizer, UIGestureRecognizer, UIFocusContainerGuide, UILongPressGestureRecognizer, NSMutableArray, NSMapTable, NSString, UINavigationController;

@interface UITabBarController : UIViewController <GKContentRefresh, GKURLHandling, UIGestureRecognizerDelegate, UILayoutContainerViewDelegate, UITabBarDelegate, NSCoding> {

	UITabBar* _tabBar;
	UILayoutContainerView* _containerView;
	UIView* _viewControllerTransitionView;
	id _tabBarItemsToViewControllers;
	UIViewController* _selectedViewController;
	UIMoreNavigationController* _moreNavigationController;
	NSArray* _customizableViewControllers;
	UIViewController* _selectedViewControllerDuringWillAppear;
	UIViewController* _transientViewController;
	unsigned long long _customMaxItems;
	unsigned long long _defaultMaxItems;
	long long _tabBarPosition;
	UITapGestureRecognizer* _backGestureRecognizer;
	UITapGestureRecognizer* _nudgeLeftGestureRecognizer;
	UITapGestureRecognizer* _nudgeRightGestureRecognizer;
	UITapGestureRecognizer* _selectGestureRecognizer;
	UIGestureRecognizer* _touchDetectionGestureRecognizer;
	UIFocusContainerGuide* _contentFocusContainerGuide;
	UILongPressGestureRecognizer* _accessibilityLongPressGestureRecognizer;
	struct {
		unsigned isShowingMoreItem : 1;
		unsigned needsToRebuildItems : 1;
		unsigned isBarHidden : 1;
		unsigned editButtonOnLeft : 1;
		unsigned barLayoutIsValid : 1;
		unsigned reselectTab : 1;
		unsigned delegateSupportedInterfaceOrientations : 1;
		unsigned delegatePreferredInterfaceOrientationForPresentation : 1;
		unsigned preferTabBarFocused : 1;
		unsigned offscreen : 1;
		unsigned hidNavBar : 1;
	}  _tabBarControllerFlags;
	NSMutableArray* _moreChildViewControllers;
	UIView* _accessoryView;
	NSMapTable* _rememberedFocusedItemsByViewController;
	id<UITabBarControllerDelegate> _delegate;
	NSString* __backdropGroupName;
	id<UIViewControllerAnimatedTransitioning> __animator;
	id<UIViewControllerInteractiveTransitioning> __interactor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=px_isTabBarHidden,nonatomic,readonly) BOOL px_tabBarHidden; 
@property (nonatomic,readonly) BOOL px_hidesTabBarForRegularHorizontalSizeClass; 
@property (nonatomic,readonly) BOOL px_hidesTabBarForCurrentHorizontalSizeClass; 
@property (setter=_setBackdropGroupName:,getter=_backdropGroupName,nonatomic,retain) NSString * _backdropGroupName;                             //@synthesize _backdropGroupName=__backdropGroupName - In the implementation block
@property (getter=_rememberedFocusedItemsByViewController,nonatomic,readonly) NSMapTable * rememberedFocusedItemsByViewController;              //@synthesize rememberedFocusedItemsByViewController=_rememberedFocusedItemsByViewController - In the implementation block
@property (nonatomic,retain) NSMutableArray * moreChildViewControllers;                                                                         //@synthesize moreChildViewControllers=_moreChildViewControllers - In the implementation block
@property (setter=_setAnimator:,nonatomic,retain) id<UIViewControllerAnimatedTransitioning> _animator;                                          //@synthesize _animator=__animator - In the implementation block
@property (setter=_setInteractor:,nonatomic,retain) id<UIViewControllerInteractiveTransitioning> _interactor;                                   //@synthesize _interactor=__interactor - In the implementation block
@property (setter=_setAccessoryView:,nonatomic,retain) UIView * _accessoryView;                                                                 //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,copy) NSArray * viewControllers; 
@property (assign,nonatomic) UIViewController * selectedViewController; 
@property (assign,nonatomic) unsigned long long selectedIndex; 
@property (nonatomic,readonly) UINavigationController * moreNavigationController; 
@property (nonatomic,copy) NSArray * customizableViewControllers;                                                                               //@synthesize customizableViewControllers=_customizableViewControllers - In the implementation block
@property (nonatomic,readonly) UITabBar * tabBar; 
@property (assign,nonatomic,__weak) id<UITabBarControllerDelegate> delegate;                                                                    //@synthesize delegate=_delegate - In the implementation block
+(Class)_moreNavigationControllerClass;
+(BOOL)_directlySetsContentOverlayInsetsForChildren;
+(BOOL)doesOverridePreferredInterfaceOrientationForPresentation;
+(BOOL)doesOverrideSupportedInterfaceOrientations;
+(BOOL)_shouldSendLegacyMethodsFromViewWillTransitionToSize;
-(void)_gkForceNextContentUpdate;
-(void)_gkResetContents;
-(void)_gkUpdateContentsWithCompletionHandlerAndError:(/*^block*/id)arg1 ;
-(void)_gkHandleURLPathComponents:(id)arg1 query:(id)arg2 ;
-(void)_gkSetContentsNeedUpdateWithHandler:(/*^block*/id)arg1 ;
-(void)_gkRefreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 ;
-(BOOL)_gkShouldRefreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 ;
-(double)px_HDRFocus;
-(double)px_imageModulationIntensity;
-(BOOL)px_isImageModulationEnabled;
-(id)px_diagnosticsItemProvidersForPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(CGRect)px_frameForTabItem:(unsigned long long)arg1 inCoordinateSpace:(id)arg2 ;
-(BOOL)px_hidesTabBarForRegularHorizontalSizeClass;
-(BOOL)px_canPerformAddToTabAnimationForTab:(unsigned long long)arg1 ;
-(BOOL)px_isTabBarHidden;
-(id)px_navigateToMemoryWithLocalIdentifier:(id)arg1 ;
-(BOOL)px_hidesTabBarForCurrentHorizontalSizeClass;
-(void)px_performAddToTabAnimation:(unsigned long long)arg1 withSnapshotView:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UITabBarControllerDelegate>)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)_gestureRecognizerShouldBegin:(id)arg1 ;
-(id<UITabBarControllerDelegate>)delegate;
-(id)transitionCoordinator;
-(BOOL)becomeFirstResponder;
-(void)setView:(id)arg1 ;
-(void)_setAccessoryView:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)preferredFocusedView;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)_isSupportedInterfaceOrientation:(long long)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_getRotationContentSettings:(SCD_Struct_UI9*)arg1 ;
-(UIView *)_accessoryView;
-(void)tabBarSizingDidChange:(id)arg1 ;
-(void)tabBar:(id)arg1 willBeginCustomizingItems:(id)arg2 ;
-(void)tabBar:(id)arg1 didEndCustomizingItems:(id)arg2 changed:(BOOL)arg3 ;
-(void)tabBar:(id)arg1 willEndCustomizingItems:(id)arg2 changed:(BOOL)arg3 ;
-(UITabBar *)tabBar;
-(id)_existingMoreNavigationController;
-(void)_updateLayoutForStatusBarAndInterfaceOrientation;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id<UIViewControllerAnimatedTransitioning>)_animator;
-(void)_setAnimator:(id)arg1 ;
-(void)_setInteractor:(id)arg1 ;
-(id<UIViewControllerInteractiveTransitioning>)_interactor;
-(void)_performBackGesture:(id)arg1 ;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(long long)_subclassPreferredFocusedViewPrioritizationType;
-(void)beginCustomizingTabBar:(id)arg1 ;
-(BOOL)showsEditButtonOnLeft;
-(void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2 ;
-(BOOL)_allowsCustomizing;
-(NSArray *)viewControllers;
-(void)setViewControllers:(NSArray *)arg1 ;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(unsigned long long)_effectiveMaxItems;
-(void)_populateArchivedChildViewControllers:(id)arg1 ;
-(id)_transitionView;
-(UIViewController *)selectedViewController;
-(id)_selectedViewControllerInTabBar;
-(id)_deepestUnambiguousResponder;
-(id)_viewForViewController:(id)arg1 ;
-(CGRect)_frameForWrapperViewForViewController:(id)arg1 ;
-(CGRect)_frameForViewController:(id)arg1 ;
-(void)_layoutViewController:(id)arg1 ;
-(void)setSelectedViewController:(UIViewController *)arg1 ;
-(id)_wrapperViewForViewController:(id)arg1 ;
-(void)_rebuildTabBarItemsIfNeeded;
-(void)_setSelectedTabBarItem:(id)arg1 ;
-(void)_layoutContainerView;
-(void)_selectDefaultViewControllerIfNecessaryWithAppearanceTransitions:(BOOL)arg1 ;
-(long long)_effectiveTabBarPosition;
-(CGRect)_adjustTabBarFrameForOffscreenFocus:(CGRect)arg1 barPosition:(long long)arg2 ;
-(BOOL)_shouldAdjustContentViewFrameForOffscreenFocus:(id)arg1 adjustedTabBarFrame:(CGRect)arg2 ;
-(void)_safeAreaInsetsDidChangeForView;
-(void)_updateTabBarLayout;
-(NSString *)_backdropGroupName;
-(void)_prepareTabBar;
-(BOOL)_isBarHidden;
-(void)_updateGestureRecognizersForTraitCollection:(id)arg1 ;
-(void)_setUpFocusContainerGuides;
-(void)_setBackdropGroupName:(id)arg1 ;
-(void)_tabBarItemClicked:(id)arg1 ;
-(void)_updateLayoutForTraitCollection:(id)arg1 ;
-(id)_accessibilityHUDLongPressRecognizer;
-(void)purgeMemoryForReason:(int)arg1 ;
-(void)_rebuildTabBarItemsAnimated:(BOOL)arg1 ;
-(void)_showBarWithTransition:(int)arg1 isExplicit:(BOOL)arg2 ;
-(void)_setTabBarPosition:(long long)arg1 ;
-(void)_setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(void)_performSelectGesture:(id)arg1 ;
-(void)_performLeftGesture:(id)arg1 ;
-(void)_performRightGesture:(id)arg1 ;
-(void)_performTouchDetectionGesture:(id)arg1 ;
-(BOOL)_isTabBarFocused;
-(void)_rememberFocusedItem:(id)arg1 forViewController:(id)arg2 ;
-(void)_performFocusGesture:(unsigned long long)arg1 ;
-(void)_rememberPresentingFocusedItem:(id)arg1 ;
-(id)_overridingPreferredFocusEnvironment;
-(id)_recallRememberedFocusedItemForViewController:(id)arg1 ;
-(BOOL)_canRestoreFocusAfterTransitionToRecalledItem:(id)arg1 inViewController:(id)arg2 ;
-(void)_forgetFocusedItemForViewController:(id)arg1 ;
-(void)_updateOffscreenStatus:(BOOL)arg1 ;
-(id)_rememberedFocusedItemsByViewController;
-(void)_configureTargetActionForTabBarItem:(id)arg1 ;
-(UINavigationController *)moreNavigationController;
-(id)transientViewController;
-(void)setTransientViewController:(id)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)selectedIndex;
-(id)_viewControllersInTabBar;
-(id)_viewControllerForSelectAtIndex:(unsigned long long)arg1 ;
-(void)setSelectedIndex:(unsigned long long)arg1 ;
-(void)setCustomizableViewControllers:(NSArray *)arg1 ;
-(BOOL)_allowSelectionWithinMoreList;
-(void)setTransientViewController:(id)arg1 ;
-(void)_setSelectedViewController:(id)arg1 ;
-(id)allViewControllers;
-(void)transitionFromViewController:(id)arg1 toViewController:(id)arg2 ;
-(NSArray *)customizableViewControllers;
-(void)setRestorationIdentifier:(id)arg1 ;
-(void)_setMoreNavigationControllerRestorationIdentifier;
-(id)_viewsWithDisabledInteractionGivenTransitionContext:(id)arg1 ;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(void)_hideBarWithTransition:(int)arg1 isExplicit:(BOOL)arg2 duration:(double)arg3 ;
-(void)animationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)_hideBarWithTransition:(int)arg1 isExplicit:(BOOL)arg2 ;
-(void)_showBarWithTransition:(int)arg1 isExplicit:(BOOL)arg2 duration:(double)arg3 ;
-(id)_backdropBarGroupName;
-(id)_viewControllerForTabBarItem:(id)arg1 ;
-(void)concealTabBarSelection;
-(void)transitionFromViewController:(id)arg1 toViewController:(id)arg2 transition:(int)arg3 shouldSetSelected:(BOOL)arg4 ;
-(CGRect)_adjustContentViewFrameForOffscreenFocus:(CGRect)arg1 viewController:(id)arg2 ;
-(id)_customAnimatorForFromViewController:(id)arg1 toViewController:(id)arg2 ;
-(id)_customInteractionControllerForAnimator:(id)arg1 ;
-(void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3 ;
-(void)revealTabBarSelection;
-(BOOL)_allowsAutorotation;
-(BOOL)_shouldSynthesizeSupportedOrientations;
-(BOOL)_hasPreferredInterfaceOrientationForPresentation;
-(BOOL)_doAllViewControllersSupportInterfaceOrientation:(long long)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(id)rotatingHeaderView;
-(id)rotatingFooterView;
-(BOOL)_shouldUseOnePartRotation;
-(void)_invalidateBarLayoutIfNecessary;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1 ;
-(void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)__viewWillLayoutSubviews;
-(BOOL)_shouldPersistViewWhenCoding;
-(void)setTabBar:(UITabBar *)arg1 ;
-(BOOL)_isPresentationContextByDefault;
-(void)_accessibilityLongPressChanged:(id)arg1 ;
-(void)updateTabBarItemForViewController:(id)arg1 ;
-(BOOL)_reallyWantsFullScreenLayout;
-(id)_responderSelectionContainerViewForResponder:(id)arg1 ;
-(void)unwindForSegue:(id)arg1 towardsViewController:(id)arg2 ;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForWhitePointAdaptivityStyle;
-(id)childViewControllerForUserInterfaceStyle;
-(BOOL)_transitionsChildViewControllers;
-(void)hideBarWithTransition:(int)arg1 ;
-(void)hideBarWithTransition:(int)arg1 duration:(double)arg2 ;
-(void)showBarWithTransition:(int)arg1 duration:(double)arg2 ;
-(void)showBarWithTransition:(int)arg1 ;
-(long long)_tabBarPosition;
-(void)transitionViewDidStart:(id)arg1 ;
-(void)setShowsEditButtonOnLeft:(BOOL)arg1 ;
-(void)_setMaximumNumberOfItems:(unsigned long long)arg1 ;
-(void)_setSelectedViewControllerNeedsLayout;
-(id)rotatingSnapshotViewForWindow:(id)arg1 ;
-(void)_setBadgeValue:(id)arg1 forTabBarItem:(id)arg2 ;
-(NSMutableArray *)moreChildViewControllers;
-(void)setMoreChildViewControllers:(NSMutableArray *)arg1 ;
-(BOOL)_ignoreUnselectedTabsForStateRestoration;
-(id)_allContainedViewControllers;
-(id)_additionalViewControllersToCheckForUserActivity;
@end

