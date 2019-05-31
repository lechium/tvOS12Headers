/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIFocusEnvironment.h>
#import <UIKit/UIInterfaceActionDisplayPropertyObserver.h>

@protocol UIInterfaceActionVisualBackgroundDisplaying;
@class NSArray, UIView, UIInterfaceAction, NSLayoutConstraint, NSString, UIInterfaceActionVisualStyle;

@interface UIInterfaceActionRepresentationView : UIView <UIFocusEnvironment, UIInterfaceActionDisplayPropertyObserver> {

	BOOL _hasLoadedBackgroundView;
	BOOL _canKeepContentsInHierarchy;
	BOOL _hasLoadedContentFirstTime;
	BOOL _enforcedCanRemoveContentFromHierarchyWhenNotVisible;
	BOOL _enforcedCanRemoveContentFromHierarchyWhenNotVisibleValue;
	BOOL _contentsInsertedIntoViewHierarchy;
	BOOL _ownsActionContent;
	BOOL _highlighted;
	BOOL _pressed;
	BOOL _canRemoveContentFromHierarchyWhenNotVisible;
	UIInterfaceAction* _action;
	unsigned long long _visualCornerPosition;
	id _actionViewStateContext;
	UIView*<UIInterfaceActionVisualBackgroundDisplaying> _backgroundHighlightView;
	NSLayoutConstraint* _minimumWidthConstraint;
	NSLayoutConstraint* _minimumHeightConstraint;
	NSArray* _viewsToDisappearWhenHighlighted;
	NSString* _sectionID;

}

@property (nonatomic,readonly) UIView*<UIInterfaceActionVisualBackgroundDisplaying> backgroundHighlightView;                     //@synthesize backgroundHighlightView=_backgroundHighlightView - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * minimumWidthConstraint;                                                      //@synthesize minimumWidthConstraint=_minimumWidthConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * minimumHeightConstraint;                                                     //@synthesize minimumHeightConstraint=_minimumHeightConstraint - In the implementation block
@property (nonatomic,retain) NSArray * viewsToDisappearWhenHighlighted;                                                          //@synthesize viewsToDisappearWhenHighlighted=_viewsToDisappearWhenHighlighted - In the implementation block
@property (assign,nonatomic) BOOL canRemoveContentFromHierarchyWhenNotVisible;                                                   //@synthesize canRemoveContentFromHierarchyWhenNotVisible=_canRemoveContentFromHierarchyWhenNotVisible - In the implementation block
@property (nonatomic,retain) NSString * sectionID;                                                                               //@synthesize sectionID=_sectionID - In the implementation block
@property (assign,setter=_setContentsInsertedIntoViewHierarchy:,nonatomic) BOOL _contentsInsertedIntoViewHierarchy;              //@synthesize contentsInsertedIntoViewHierarchy=_contentsInsertedIntoViewHierarchy - In the implementation block
@property (nonatomic,readonly) UIInterfaceAction * action;                                                                       //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) UIInterfaceActionVisualStyle * visualStyle; 
@property (assign,nonatomic) BOOL ownsActionContent;                                                                             //@synthesize ownsActionContent=_ownsActionContent - In the implementation block
@property (assign,nonatomic) unsigned long long visualCornerPosition;                                                            //@synthesize visualCornerPosition=_visualCornerPosition - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                                                              //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,getter=isPressed,nonatomic) BOOL pressed;                                                                      //@synthesize pressed=_pressed - In the implementation block
@property (nonatomic,retain) id actionViewStateContext;                                                                          //@synthesize actionViewStateContext=_actionViewStateContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (nonatomic,readonly) id<UIFocusItemContainer> focusItemContainer; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
-(void)dealloc;
-(NSString *)description;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIInterfaceAction *)action;
-(BOOL)isHighlighted;
-(BOOL)isFocused;
-(id)actionViewStateContext;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isPressed;
-(void)setPressed:(BOOL)arg1 ;
-(unsigned long long)visualCornerPosition;
-(id)initWithAction:(id)arg1 ;
-(void)setActionViewStateContext:(id)arg1 ;
-(void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2 ;
-(void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2 ;
-(UIInterfaceActionVisualStyle *)visualStyle;
-(void)_applyVisualStyle;
-(void)updateConstraints;
-(void)setVisualCornerPosition:(unsigned long long)arg1 ;
-(void)setOwnsActionContent:(BOOL)arg1 ;
-(NSString *)sectionID;
-(void)setSectionID:(NSString *)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(NSLayoutConstraint *)minimumWidthConstraint;
-(NSLayoutConstraint *)minimumHeightConstraint;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_initializeHorizontalMarginsForAction;
-(void)updateContentsInsertedIntoHierarchy;
-(void)_updateHighlightAndPressedFeedback;
-(void)_removeLoadedContentsFromHierarchyIfNotVisible;
-(void)setCanRemoveContentFromHierarchyWhenNotVisible:(BOOL)arg1 ;
-(void)_updateLoadedContentsHierarchyByInsertingOrRemovingIfNecessary;
-(id)_actionViewState;
-(void)_updateFittingContentSizingViewToFitSize;
-(void)_loadContentsIntoHierarchyAndPrepareIfNecessary;
-(id)__fittingContentSizingViewIfNotSelf;
-(void)layoutMarginsDidChange;
-(id)__fittingContentSizingViewAllowingSelf;
-(CGSize)intrinsicContentSize;
-(CGSize)_fittingContentSizeWithFittingViewSize:(CGSize)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(CGRect)_fittingContentSizingViewFrameInBounds:(CGRect)arg1 ;
-(id)_fittingContentSizingView;
-(UIEdgeInsets)_fittingContentSizingViewMargins;
-(BOOL)_showsFocusForFocusedView:(id)arg1 ;
-(void)_showVisualFeedbackForPressed:(BOOL)arg1 ;
-(BOOL)_handleVisualFeedbackForPress:(id)arg1 pressed:(BOOL)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_shouldShowPressFeedbackForEventWithPresses:(id)arg1 ;
-(void)_applyVisualStyleToMinimumSizeConstraints;
-(void)_applyVisualStyleToLayoutMargins;
-(void)_applyVisualStyleToBackgroundViewAndHighlighting;
-(BOOL)_fittingContentViewHasItsOwnActiveMinimumSizeConstraintsWithSize:(CGSize)arg1 ;
-(void)_setHorizontalMargins:(UIEdgeInsets)arg1 preservesSuperviewLayoutMargins:(BOOL)arg2 ;
-(void)_reloadBackgroundHighlightView;
-(NSArray *)viewsToDisappearWhenHighlighted;
-(BOOL)_canLoadContentsIntoHierarchy;
-(void)_addLoadedContentsToHierarchyFirstTime;
-(void)_addLoadedContentsToHierarchyIfAllowed;
-(void)loadContents;
-(void)_setContentsInsertedIntoViewHierarchy:(BOOL)arg1 ;
-(BOOL)_isVisibleWithinContainmentAncestor;
-(void)invokeInterfaceAction;
-(BOOL)hasLayoutHeightConstraintsIdenticalToRepresentationView:(id)arg1 ;
-(void)_enforceActionRepresentationViewsCanRemoveContentFromHierarchyWhenNotVisible:(BOOL)arg1 ;
-(BOOL)canBecomeFocused;
-(void)_didScroll;
-(id)_viewDisplayingBackground;
-(void)_clearBackgroundPressedState;
-(BOOL)_contentsInsertedIntoViewHierarchy;
-(BOOL)ownsActionContent;
-(UIView*<UIInterfaceActionVisualBackgroundDisplaying>)backgroundHighlightView;
-(void)setViewsToDisappearWhenHighlighted:(NSArray *)arg1 ;
-(BOOL)canRemoveContentFromHierarchyWhenNotVisible;
@end

