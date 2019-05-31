/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPresentationController.h>
#import <UIKitCore/_UISearchControllerPresenting.h>

@class _UISearchPresentationAssistant, UIView, NSMapTable, NSString;

@interface _UISearchPresentationController : UIPresentationController <_UISearchControllerPresenting> {

	_UISearchPresentationAssistant* _assistant;
	UIView* _placeholderView;
	NSMapTable* _excisedSearchBarConstraitMap;
	NSMapTable* _placeholderConstraitMap;
	CGRect _finalFrameForContainerView;
	SCD_Struct_UI54 _controllerFlags;

}

@property (nonatomic,readonly) UIView * backgroundObscuringView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) UIView * searchBarContainerView; 
@property (nonatomic,readonly) BOOL shouldAccountForStatusBar; 
@property (nonatomic,readonly) double statusBarAdjustment; 
@property (nonatomic,readonly) BOOL searchBarToBecomeTopAttached; 
@property (nonatomic,readonly) BOOL resultsUnderlapsSearchBar; 
@property (nonatomic,readonly) BOOL searchBarCanContainScopeBar; 
@property (nonatomic,readonly) BOOL searchBarShouldClipToBounds; 
@property (nonatomic,readonly) double resultsControllerContentOffset; 
@property (nonatomic,readonly) UIPresentationController*<_UISearchControllerPresenting> adaptivePresentationController; 
@property (nonatomic,readonly) CGRect finalFrameForContainerView;                                                                    //@synthesize finalFrameForContainerView=_finalFrameForContainerView - In the implementation block
@property (nonatomic,readonly) BOOL animatorShouldLayoutPresentationViews; 
@property (nonatomic,readonly) BOOL forceObeyNavigationBarInsets; 
@property (nonatomic,readonly) unsigned long long edgeForHidingNavigationBar; 
+(BOOL)shouldExciseSearchBar:(id)arg1 duringPresentationWithPresenter:(id)arg2 ;
-(void)dealloc;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(id)_presentationControllerForTraitCollection:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)adaptivePresentationStyle;
-(void)containerViewWillLayoutSubviews;
-(BOOL)shouldPresentInFullscreen;
-(BOOL)_shouldRespectDefinesPresentationContext;
-(BOOL)shouldRemovePresentersView;
-(void)presentationTransitionWillBegin;
-(CGRect)frameOfPresentedViewInContainerView;
-(void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)dismissalTransitionWillBegin;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(void)_transitionFromWillBegin;
-(void)_transitionFromDidEnd;
-(void)_transitionToWillBegin;
-(void)_transitionToDidEnd;
-(BOOL)_shouldKeepCurrentFirstResponder;
-(BOOL)_shouldDisableInteractionDuringTransitions;
-(id)_presentedViewControllerForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(UIView *)backgroundObscuringView;
-(UIView *)searchBarContainerView;
-(BOOL)searchBarToBecomeTopAttached;
-(double)resultsControllerContentOffset;
-(double)statusBarAdjustment;
-(void)showBackgroundObscuringView;
-(void)hideBackgroundObscuringView;
-(BOOL)shouldAccountForStatusBar;
-(BOOL)resultsUnderlapsSearchBar;
-(BOOL)searchBarCanContainScopeBar;
-(BOOL)searchBarShouldClipToBounds;
-(UIPresentationController*<_UISearchControllerPresenting>)adaptivePresentationController;
-(CGRect)finalFrameForContainerView;
-(void)setContentVisible:(BOOL)arg1 ;
-(BOOL)animatorShouldLayoutPresentationViews;
-(BOOL)forceObeyNavigationBarInsets;
-(unsigned long long)edgeForHidingNavigationBar;
-(double)_visibleRefreshControlHeightForTableView:(id)arg1 ;
-(void)_exciseSearchBarFromCurrentContext;
-(void)_updateContainerFinalFrameForNonExcisedSearchBar;
-(void)_updatePresentingViewControllerContentScrollViewWithOffsets:(CGSize)arg1 transitionCoordinator:(id)arg2 ;
-(void)_placeSearchBarBackIntoOriginalContext;
-(id)_constraintCopyOfConstraint:(id)arg1 replaceItem:(id)arg2 withItem:(id)arg3 ;
-(void)_layoutPresentationWithSize:(CGSize)arg1 transitionCoordinator:(id)arg2 ;
@end
