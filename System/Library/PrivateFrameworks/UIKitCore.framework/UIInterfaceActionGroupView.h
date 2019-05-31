/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegatePrivate.h>
#import <UIKitCore/_UIInterfaceActionPresenting.h>
#import <UIKit/UIInterfaceActionGroupDisplayPropertyObserver.h>
#import <UIKit/UIInterfaceActionGroupDisplaying.h>

@protocol UIInterfaceActionVisualStyleProviding, UIInterfaceActionHandlerInvocationDelegate, UISeparatorDisplaying;
@class UIInterfaceActionVisualStyle, NSString, UIInterfaceActionSelectionTrackingController, UIInterfaceActionGroup, NSArray, _UIContentConstraintsLayoutGuide, UIView, NSMutableArray, _UIInterfaceActionRepresentationsSequenceView, NSLayoutConstraint, NSPointerArray, UILongPressGestureRecognizer, UIInterfaceActionRepresentationView, UIInterfaceActionHighlightAttributes, UIInterfaceActionSeparatorAttributes, UIFont;

@interface UIInterfaceActionGroupView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegatePrivate, _UIInterfaceActionPresenting, UIInterfaceActionGroupDisplayPropertyObserver, UIInterfaceActionGroupDisplaying> {

	BOOL _needsUpdateTopLevelViewsArrangement;
	BOOL _needsUpdateActionSequenceViewArrangement;
	BOOL _needsInitialViewLoading;
	BOOL _isSettingVisualStyle;
	UIInterfaceActionVisualStyle* _activeTestingVisualStyle;
	NSString* _cachedSizeCategory;
	BOOL _showsSeparatorAboveActions;
	BOOL _drawsBackground;
	id<UIInterfaceActionVisualStyleProviding> _visualStyleProvider;
	UIInterfaceActionSelectionTrackingController* _actionSelectionController;
	UIInterfaceActionGroup* _actionGroup;
	id<UIInterfaceActionHandlerInvocationDelegate> _actionHandlerInvocationDelegate;
	long long _presentationStyle;
	NSArray* _allowedActionLayoutAxisByPriority;
	long long _actionLayoutAxis;
	UIInterfaceActionVisualStyle* _visualStyle;
	UIInterfaceActionVisualStyle* _appliedVisualStyle;
	_UIContentConstraintsLayoutGuide* _contentGuide;
	UIView* _backgroundView;
	UIView* _topLevelItemsView;
	NSArray* _topLevelViewArrangementConstraints;
	NSMutableArray* _arrangedScrollableHeaderViews;
	UIView*<UISeparatorDisplaying> _actionSequenceTopSeparatorView;
	_UIInterfaceActionRepresentationsSequenceView* _actionSequenceView;
	NSLayoutConstraint* _actionSequenceViewWidthAnchoredToConstantConstraint;
	NSLayoutConstraint* _actionSequenceViewWidthAnchoredToContentGuideConstraint;
	NSPointerArray* _weakSimultaneouslyPresentedGroupViews;
	UILongPressGestureRecognizer* _actionSelectionGestureRecognizer;
	double _requiredActionRepresentationWidth;
	UIInterfaceActionRepresentationView* _preferredActionRepresentation;
	UIInterfaceActionHighlightAttributes* _visualStyleOverrideActionHighlightAttributes;
	UIInterfaceActionSeparatorAttributes* _visualStyleOverrideSeparatorAttributes;
	UIFont* _visualStyleOverrideTitleLabelFont;
	double _selectionHighlightContinuousCornerRadius;

}

@property (nonatomic,retain) UIInterfaceActionVisualStyle * visualStyle;                                                                                                                                                   //@synthesize visualStyle=_visualStyle - In the implementation block
@property (nonatomic,retain) UIInterfaceActionVisualStyle * appliedVisualStyle;                                                                                                                                            //@synthesize appliedVisualStyle=_appliedVisualStyle - In the implementation block
@property (nonatomic,readonly) _UIContentConstraintsLayoutGuide * contentGuide;                                                                                                                                            //@synthesize contentGuide=_contentGuide - In the implementation block
@property (nonatomic,readonly) UIView * backgroundView;                                                                                                                                                                    //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) UIView * topLevelItemsView;                                                                                                                                                                 //@synthesize topLevelItemsView=_topLevelItemsView - In the implementation block
@property (nonatomic,readonly) NSArray * topLevelViewArrangementConstraints;                                                                                                                                               //@synthesize topLevelViewArrangementConstraints=_topLevelViewArrangementConstraints - In the implementation block
@property (nonatomic,readonly) NSMutableArray * arrangedScrollableHeaderViews;                                                                                                                                             //@synthesize arrangedScrollableHeaderViews=_arrangedScrollableHeaderViews - In the implementation block
@property (nonatomic,readonly) UIView*<UISeparatorDisplaying> actionSequenceTopSeparatorView;                                                                                                                              //@synthesize actionSequenceTopSeparatorView=_actionSequenceTopSeparatorView - In the implementation block
@property (nonatomic,readonly) _UIInterfaceActionRepresentationsSequenceView * actionSequenceView;                                                                                                                         //@synthesize actionSequenceView=_actionSequenceView - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * actionSequenceViewWidthAnchoredToConstantConstraint;                                                                                                                   //@synthesize actionSequenceViewWidthAnchoredToConstantConstraint=_actionSequenceViewWidthAnchoredToConstantConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * actionSequenceViewWidthAnchoredToContentGuideConstraint;                                                                                                               //@synthesize actionSequenceViewWidthAnchoredToContentGuideConstraint=_actionSequenceViewWidthAnchoredToContentGuideConstraint - In the implementation block
@property (nonatomic,readonly) UIInterfaceActionSelectionTrackingController * actionSelectionController;                                                                                                                   //@synthesize actionSelectionController=_actionSelectionController - In the implementation block
@property (nonatomic,readonly) NSPointerArray * weakSimultaneouslyPresentedGroupViews;                                                                                                                                     //@synthesize weakSimultaneouslyPresentedGroupViews=_weakSimultaneouslyPresentedGroupViews - In the implementation block
@property (assign,nonatomic) BOOL showsSeparatorAboveActions;                                                                                                                                                              //@synthesize showsSeparatorAboveActions=_showsSeparatorAboveActions - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * actionSelectionGestureRecognizer;                                                                                                                              //@synthesize actionSelectionGestureRecognizer=_actionSelectionGestureRecognizer - In the implementation block
@property (assign,nonatomic) double requiredActionRepresentationWidth;                                                                                                                                                     //@synthesize requiredActionRepresentationWidth=_requiredActionRepresentationWidth - In the implementation block
@property (nonatomic,retain) UIInterfaceActionRepresentationView * preferredActionRepresentation;                                                                                                                          //@synthesize preferredActionRepresentation=_preferredActionRepresentation - In the implementation block
@property (setter=_setVisualStyleOverrideActionHighlightAttributes:,nonatomic,retain) UIInterfaceActionHighlightAttributes * visualStyleOverrideActionHighlightAttributes;                                                 //@synthesize visualStyleOverrideActionHighlightAttributes=_visualStyleOverrideActionHighlightAttributes - In the implementation block
@property (setter=_setVisualStyleOverrideSeparatorAttributes:,getter=_visualStyleOverrideSeparatorAttributes,nonatomic,retain) UIInterfaceActionSeparatorAttributes * visualStyleOverrideSeparatorAttributes;              //@synthesize visualStyleOverrideSeparatorAttributes=_visualStyleOverrideSeparatorAttributes - In the implementation block
@property (setter=_setVisualStyleOverrideTitleLabelFont:,getter=_visualStyleOverrideTitleLabelFont,nonatomic,retain) UIFont * visualStyleOverrideTitleLabelFont;                                                           //@synthesize visualStyleOverrideTitleLabelFont=_visualStyleOverrideTitleLabelFont - In the implementation block
@property (assign,setter=_setDrawsBackground:,getter=_drawsBackground,nonatomic) BOOL drawsBackground;                                                                                                                     //@synthesize drawsBackground=_drawsBackground - In the implementation block
@property (assign,setter=_setSelectionHighlightContinuousCornerRadius:,getter=_selectionHighlightContinuousCornerRadius,nonatomic) double selectionHighlightContinuousCornerRadius;                                        //@synthesize selectionHighlightContinuousCornerRadius=_selectionHighlightContinuousCornerRadius - In the implementation block
@property (nonatomic,readonly) UIInterfaceActionGroup * actionGroup;                                                                                                                                                       //@synthesize actionGroup=_actionGroup - In the implementation block
@property (assign,nonatomic,__weak) id<UIInterfaceActionHandlerInvocationDelegate> actionHandlerInvocationDelegate;                                                                                                        //@synthesize actionHandlerInvocationDelegate=_actionHandlerInvocationDelegate - In the implementation block
@property (assign,nonatomic) long long presentationStyle;                                                                                                                                                                  //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (nonatomic,retain) NSArray * allowedActionLayoutAxisByPriority;                                                                                                                                                  //@synthesize allowedActionLayoutAxisByPriority=_allowedActionLayoutAxisByPriority - In the implementation block
@property (nonatomic,readonly) long long actionLayoutAxis;                                                                                                                                                                 //@synthesize actionLayoutAxis=_actionLayoutAxis - In the implementation block
@property (nonatomic,readonly) NSArray * arrangedHeaderViews; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<UIInterfaceActionVisualStyleProviding> visualStyleProvider;                                                                                                                         //@synthesize visualStyleProvider=_visualStyleProvider - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_alertController;
-(void)interfaceAction:(id)arg1 invokeActionHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)interfaceActionGroup:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2 ;
-(void)interfaceActionGroup:(id)arg1 reloadDisplayedContentActionGroupProperties:(id)arg2 ;
-(void)_setUsAsThePresentingViewControllerForAllActions;
-(void)_installContentGuideConstraints;
-(void)_loadTopLevelItemsView;
-(void)_loadActionSequenceView;
-(void)setVisualStyleProvider:(id<UIInterfaceActionVisualStyleProviding>)arg1 ;
-(void)reloadVisualStyle;
-(void)_commonInitWithActionGroup:(id)arg1 visualStyleProvider:(id)arg2 actionHandlerInvocationDelegate:(id)arg3 ;
-(void)_removeUsAsThePresentingViewControllerForAllActions;
-(void)_setNeedsUpdateTopLevelViewsArrangement;
-(void)_setNeedsUpdateActionSequenceViewArrangement;
-(void)_updateActionSequenceViewActionLayoutAxis;
-(void)setActionLayoutAxis:(long long)arg1 ;
-(void)_arrangeTopLevelViews;
-(NSArray *)arrangedHeaderViews;
-(void)_scrollActionRepresentationViewToVisibleForAction:(id)arg1 animated:(BOOL)arg2 ;
-(UIInterfaceActionVisualStyle *)visualStyle;
-(void)_scrollPreferredActionRepresentationViewToVisibleAnimated:(BOOL)arg1 ;
-(void)_updateRequiredActionRepresentationSizeConstraints;
-(_UIInterfaceActionRepresentationsSequenceView *)actionSequenceView;
-(UIEdgeInsets)_buttonEdgeInsetsFromGroupViewEdge;
-(void)_addConstraintToActiveTopLevelViewArrangementConstraints:(id)arg1 ;
-(void)_removeConstraintToActiveTopLevelViewArrangementConstraints:(id)arg1 ;
-(UIInterfaceActionRepresentationView *)preferredActionRepresentation;
-(id)_currentlyFocusedActionView;
-(UIInterfaceActionGroup *)actionGroup;
-(id)_actionRepresentationViewForAction:(id)arg1 ;
-(void)_applyVisualStyleToActionsViewScrollView;
-(id)_visualStyleByApplyingOurTraitsToVisualStyle:(id)arg1 traitCollection:(id)arg2 ;
-(void)_setAndApplyVisualStyle:(id)arg1 ;
-(void)_applyVisualStyle;
-(id)_loadVisualStyleForTraitCollection:(id)arg1 ;
-(void)_reloadStackViewContentsIfNeeded;
-(void)updateConstraints;
-(void)_determineActualLayoutAxis;
-(CGRect)_contentEdgeFrame;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)_shouldAllowPassthroughToLayersBehindUsForTouches:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)beginTrackingSessionByTakingOverForSystemProvidedGestureRecognizer:(id)arg1 ;
-(void)_associateWeakSimultaneouslyPresentedGroupViews:(id)arg1 bidirectional:(BOOL)arg2 ;
-(id)_allActionViews;
-(BOOL)_shouldInstallContentGuideConstraints;
-(void)_loadViewsIfNeeded;
-(void)_reloadTopSeparatorView;
-(void)_arrangeActionViewsInActionSequenceView;
-(void)_updateRoundedCornerPositionForSubviews;
-(BOOL)_shouldShowSeparatorAboveActionsSequenceView;
-(id)_constraintsToPinView:(id)arg1 layoutGuide:(id)arg2 identifier:(id)arg3 ;
-(void)_updateActionSequenceViewDebugLayoutIdentifier;
-(void)_setLayoutDebuggingIdentifier:(id)arg1 ;
-(id)_viewContainingTopLevelItems;
-(id)_orderedTopLevelViews;
-(id)_widthAnchoredToContentGuideConstraintForTopLevelView:(id)arg1 ;
-(NSMutableArray *)arrangedScrollableHeaderViews;
-(id)_defaultOrderingForActionRepresentationViews:(id)arg1 ;
-(void)_actionSequenceViewContentSizeDidChange;
-(void)_updateActionSequenceScrollability;
-(BOOL)_actionLayoutAxisUnknownDisallowedIsVertical;
-(long long)actionLayoutAxis;
-(NSArray *)allowedActionLayoutAxisByPriority;
-(id)_newSeparatorViewForSeparatingTitleAndButtons;
-(id)_interfaceActionGroupViewState;
-(id)defaultVisualStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2 ;
-(id)_visualStyleOverrideSeparatorAttributes;
-(UIInterfaceActionHighlightAttributes *)visualStyleOverrideActionHighlightAttributes;
-(id)_visualStyleOverrideTitleLabelFont;
-(double)_selectionHighlightContinuousCornerRadius;
-(void)_applyVisualStyleToBackgroundViewDisplay;
-(void)setVisualStyle:(UIInterfaceActionVisualStyle *)arg1 ;
-(BOOL)_drawsBackground;
-(void)_addBackgroudViewToViewHierarchy:(id)arg1 ;
-(void)_applyVisualStyleCornerRadius;
-(BOOL)_isCornerRadiusDisplayEnabled;
-(long long)_actionLayoutAxisUnknowDisallowed;
-(CGRect)_actionSequenceVisibleRectForMakingCenteredAction:(id)arg1 ;
-(id<UIInterfaceActionVisualStyleProviding>)visualStyleProvider;
-(id)initWithActionGroup:(id)arg1 actionHandlerInvocationDelegate:(id)arg2 ;
-(id)_initWithActionGroup:(id)arg1 visualStyleProvider:(id)arg2 actionHandlerInvocationDelegate:(id)arg3 ;
-(void)setActionGroup:(UIInterfaceActionGroup *)arg1 ;
-(void)setAllowedActionLayoutAxisByPriority:(NSArray *)arg1 ;
-(void)insertArrangedHeaderView:(id)arg1 atIndex:(unsigned long long)arg2 scrollable:(BOOL)arg3 ;
-(void)removeArrangedHeaderView:(id)arg1 ;
-(void)setPresentationStyle:(long long)arg1 ;
-(void)scrollToCenterForInterfaceAction:(id)arg1 ;
-(void)configureForPresentAlongsideTransitionCoordinator:(id)arg1 ;
-(void)configureForDismissAlongsideTransitionCoordinator:(id)arg1 ;
-(void)setRequiredActionRepresentationWidth:(double)arg1 ;
-(id)preferredFocusedView;
-(void)setActiveTestingVisualStyle:(id)arg1 ;
-(void)setSimultaneouslyPresentedGroupViews:(id)arg1 ;
-(id)_newActionGroupBackgroundView;
-(id)_interfaceActionOfFocusedRepresentationView;
-(UIInterfaceActionSelectionTrackingController *)actionSelectionController;
-(BOOL)_hasLoadedStackViewContents;
-(id)_viewDisplayingRoundedBackground;
-(void)_setDrawsBackground:(BOOL)arg1 ;
-(void)_setSelectionHighlightContinuousCornerRadius:(double)arg1 ;
-(void)_setVisualStyleOverrideSeparatorAttributes:(id)arg1 ;
-(void)_setVisualStyleOverrideActionHighlightAttributes:(id)arg1 ;
-(void)_setVisualStyleOverrideTitleLabelFont:(id)arg1 ;
-(id<UIInterfaceActionHandlerInvocationDelegate>)actionHandlerInvocationDelegate;
-(void)setActionHandlerInvocationDelegate:(id<UIInterfaceActionHandlerInvocationDelegate>)arg1 ;
-(long long)presentationStyle;
-(UIInterfaceActionVisualStyle *)appliedVisualStyle;
-(void)setAppliedVisualStyle:(UIInterfaceActionVisualStyle *)arg1 ;
-(_UIContentConstraintsLayoutGuide *)contentGuide;
-(UIView *)backgroundView;
-(UIView *)topLevelItemsView;
-(NSArray *)topLevelViewArrangementConstraints;
-(UIView*<UISeparatorDisplaying>)actionSequenceTopSeparatorView;
-(NSLayoutConstraint *)actionSequenceViewWidthAnchoredToConstantConstraint;
-(NSLayoutConstraint *)actionSequenceViewWidthAnchoredToContentGuideConstraint;
-(NSPointerArray *)weakSimultaneouslyPresentedGroupViews;
-(BOOL)showsSeparatorAboveActions;
-(void)setShowsSeparatorAboveActions:(BOOL)arg1 ;
-(UILongPressGestureRecognizer *)actionSelectionGestureRecognizer;
-(void)setActionSelectionGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(double)requiredActionRepresentationWidth;
-(void)setPreferredActionRepresentation:(UIInterfaceActionRepresentationView *)arg1 ;
@end

