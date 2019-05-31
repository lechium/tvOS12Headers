/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextInputTraits_Private.h>
#import <UIKit/UIStatusBarTinting.h>
#import <UIKitCore/_UIBarPositioningInternal.h>
#import <UIKitCore/_UINavigationBarAugmentedTitleView.h>
#import <UIKit/UIBarPositioning.h>
#import <UIKit/UITextInputTraits.h>

@protocol UISearchBarDelegateUISearchBarDelegate_Private, _UINavigationBarTitleViewDataSource;
@class NSString, NSIndexSet, UIColor, UIImage, UIInputContextHistory, UITextInputPasswordRules, UISearchBarTextField, UILabel, UIButton, UIImageView, NSArray, UIView, _UISearchBarNavigationItem, _UISearchBarScopeBarBackground, UIBarButtonItem, _UIBackdropView, UITapGestureRecognizer, UITextInputTraits, _UINavigationBarTitleViewOverlayRects, UISearchController, UITextInputAssistantItem;

@interface UISearchBar : UIView <UITextInputTraits_Private, UIStatusBarTinting, _UIBarPositioningInternal, _UINavigationBarAugmentedTitleView, UIBarPositioning, UITextInputTraits> {

	UISearchBarTextField* _searchField;
	UILabel* _promptLabel;
	UIButton* _cancelButton;
	id<UISearchBarDelegate><UISearchBarDelegate_Private> _delegate;
	id _controller;
	UIColor* _barTintColor;
	UIImageView* _separator;
	NSString* _cancelButtonText;
	NSArray* _scopes;
	long long _selectedScope;
	UIView* _background;
	UIView* _scopeBar;
	UIView* _scopeBarContainerView;
	UIEdgeInsets _contentInsetPrivate;
	double _indexWidth;
	UIEdgeInsets _effectiveContentInset;
	UIImageView* _shadowView;
	id _appearanceStorage;
	_UISearchBarNavigationItem* _searchDisplayControllerNavigationItem;
	_UISearchBarScopeBarBackground* _scopeBarBackgroundView;
	UIBarButtonItem* _animatedAppearanceBarButtonItem;
	_UIBackdropView* _backdrop;
	unsigned long long _backdropStyle;
	UIView* _maskView;
	UITapGestureRecognizer* _tapToActivateGestureRecognizer;
	UIBarButtonItem* _cancelBarButtonItem;
	UITextInputTraits* _textInputTraits;
	UIButton* _leftButton;
	id<_UINavigationBarTitleViewDataSource> _dataSource;
	long long _titleLocation;
	_UINavigationBarTitleViewOverlayRects* _overlayRects;
	struct {
		unsigned barStyle : 3;
		unsigned showsBookmarkButton : 1;
		unsigned showsCancelButton : 1;
		unsigned showsDeleteButton : 1;
		unsigned barTranslucence : 3;
		unsigned autoDisableCancelButton : 1;
		unsigned showsScopeBar : 1;
		unsigned hideBackground : 1;
		unsigned combinesLandscapeBars : 1;
		unsigned usesEmbeddedAppearance : 1;
		unsigned showsSearchResultsButton : 1;
		unsigned searchResultsButtonSelected : 1;
		unsigned pretendsIsInBar : 1;
		unsigned disabled : 1;
		unsigned backgroundLayoutNeedsUpdate : 1;
		unsigned containedInNavigationPalette : 1;
		unsigned containedInNavigationBar : 1;
		unsigned containedInToolBar : 1;
		unsigned drawsBackgroundInPalette : 1;
		unsigned centerPlaceholder : 1;
		unsigned searchFieldLeftViewMode : 2;
		unsigned cancelButtonWantsLetterpress : 1;
		unsigned isAnimatingScopeBarIn : 1;
		unsigned isAnimatingScopeBarOut : 1;
	}  _searchBarFlags;
	BOOL __forceCenteredPlaceholderLayout;
	BOOL __transplanting;
	UIColor* _statusBarTintColor;
	UIView* _inputAccessoryView;
	long long _barPosition;
	unsigned long long _searchBarStyle;
	UISearchController* __searchController;
	unsigned long long __scopeBarPosition;

}

@property (getter=_searchBarTextField,nonatomic,readonly) UISearchBarTextField * searchBarTextField; 
@property (nonatomic,readonly) UIEdgeInsets _effectiveContentInset; 
@property (setter=_setStatusBarTintColor:,nonatomic,retain) UIColor * _statusBarTintColor;                        //@synthesize statusBarTintColor=_statusBarTintColor - In the implementation block
@property (assign,nonatomic) BOOL _forceCenteredPlaceholderLayout;                                                //@synthesize _forceCenteredPlaceholderLayout=__forceCenteredPlaceholderLayout - In the implementation block
@property (assign,setter=_setSearchController:,nonatomic) UISearchController * _searchController;                 //@synthesize _searchController=__searchController - In the implementation block
@property (assign,setter=_setTransplanting:,nonatomic) BOOL _transplanting;                                       //@synthesize _transplanting=__transplanting - In the implementation block
@property (assign,setter=_setScopeBarPosition:,nonatomic) unsigned long long _scopeBarPosition;                   //@synthesize _scopeBarPosition=__scopeBarPosition - In the implementation block
@property (nonatomic,retain,readonly) UIButton * _leftButton;                                                     //@synthesize leftButton=_leftButton - In the implementation block
@property (assign,nonatomic) long long barStyle; 
@property (assign,nonatomic,__weak) id<UISearchBarDelegate> delegate;                                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * prompt; 
@property (nonatomic,copy) NSString * placeholder; 
@property (assign,nonatomic) BOOL showsBookmarkButton; 
@property (assign,nonatomic) BOOL showsCancelButton; 
@property (assign,nonatomic) BOOL showsSearchResultsButton; 
@property (assign,getter=isSearchResultsButtonSelected,nonatomic) BOOL searchResultsButtonSelected; 
@property (nonatomic,readonly) UITextInputAssistantItem * inputAssistantItem; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) UIColor * barTintColor;                                                              //@synthesize barTintColor=_barTintColor - In the implementation block
@property (assign,nonatomic) unsigned long long searchBarStyle;                                                   //@synthesize searchBarStyle=_searchBarStyle - In the implementation block
@property (assign,getter=isTranslucent,nonatomic) BOOL translucent; 
@property (nonatomic,copy) NSArray * scopeButtonTitles; 
@property (assign,nonatomic) long long selectedScopeButtonIndex; 
@property (assign,nonatomic) BOOL showsScopeBar; 
@property (nonatomic,retain) UIView * inputAccessoryView;                                                         //@synthesize inputAccessoryView=_inputAccessoryView - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage; 
@property (nonatomic,retain) UIImage * scopeBarBackgroundImage; 
@property (assign,nonatomic) UIOffset searchFieldBackgroundPositionAdjustment; 
@property (assign,nonatomic) UIOffset searchTextPositionAdjustment; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long smartQuotesType; 
@property (assign,nonatomic) long long smartDashesType; 
@property (assign,nonatomic) long long smartInsertDeleteType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,copy) UITextInputPasswordRules * passwordRules; 
@property (nonatomic,copy) NSString * recentInputIdentifier; 
@property (assign,nonatomic) NSRange validTextRange; 
@property (nonatomic,copy) NSIndexSet * PINEntrySeparatorIndexes; 
@property (assign,nonatomic) CFCharacterSetRef textTrimmingSet; 
@property (nonatomic,retain) UIColor * insertionPointColor; 
@property (nonatomic,retain) UIColor * selectionBarColor; 
@property (nonatomic,retain) UIColor * selectionHighlightColor; 
@property (nonatomic,retain) UIImage * selectionDragDotImage; 
@property (nonatomic,retain) UIColor * underlineColorForTextAlternatives; 
@property (nonatomic,retain) UIColor * underlineColorForSpelling; 
@property (assign,nonatomic) unsigned long long insertionPointWidth; 
@property (assign,nonatomic) int textLoupeVisibility; 
@property (assign,nonatomic) int textSelectionBehavior; 
@property (assign,nonatomic) id textSuggestionDelegate; 
@property (assign,nonatomic) BOOL isSingleLineDocument; 
@property (assign,nonatomic) BOOL contentsIsSingleValue; 
@property (assign,nonatomic) BOOL hasDefaultContents; 
@property (assign,nonatomic) BOOL acceptsPayloads; 
@property (assign,nonatomic) BOOL acceptsEmoji; 
@property (assign,nonatomic) BOOL acceptsDictationSearchResults; 
@property (assign,nonatomic) BOOL forceEnableDictation; 
@property (assign,nonatomic) BOOL forceDisableDictation; 
@property (assign,nonatomic) BOOL forceDefaultDictationInfo; 
@property (assign,nonatomic) long long forceDictationKeyboardType; 
@property (assign,nonatomic) int emptyContentReturnKeyType; 
@property (assign,nonatomic) BOOL returnKeyGoesToNextResponder; 
@property (assign,nonatomic) BOOL acceptsFloatingKeyboard; 
@property (assign,nonatomic) BOOL acceptsSplitKeyboard; 
@property (assign,nonatomic) BOOL displaySecureTextUsingPlainText; 
@property (assign,nonatomic) BOOL displaySecureEditsUsingPlainText; 
@property (assign,nonatomic) BOOL learnsCorrections; 
@property (assign,nonatomic) int shortcutConversionType; 
@property (assign,nonatomic) BOOL suppressReturnKeyStyling; 
@property (assign,nonatomic) BOOL useInterfaceLanguageForLocalization; 
@property (assign,nonatomic) BOOL deferBecomingResponder; 
@property (assign,nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent; 
@property (nonatomic,copy) NSString * autocorrectionContext; 
@property (nonatomic,copy) NSString * responseContext; 
@property (nonatomic,retain) UIInputContextHistory * inputContextHistory; 
@property (assign,nonatomic) BOOL disableInputBars; 
@property (assign,nonatomic) BOOL isCarPlayIdiom; 
@property (assign,nonatomic) long long textScriptType; 
@property (assign,nonatomic) BOOL loadKeyboardsForSiriLanguage; 
@property (assign,nonatomic) BOOL disablePrediction; 
@property (assign,nonatomic) BOOL hidePrediction; 
@property (assign,getter=isDevicePasscodeEntry,nonatomic) BOOL devicePasscodeEntry; 
@property (nonatomic,readonly) BOOL _underlayNavigationBarContent; 
@property (nonatomic,readonly) double _navigationBarContentHeight; 
@property (nonatomic,readonly) double _navigationBarBackButtonMaximumWidth; 
@property (nonatomic,readonly) BOOL _hideNavigationBarBackButton; 
@property (nonatomic,readonly) BOOL _hideNavigationBarLeadingBarButtons; 
@property (nonatomic,readonly) BOOL _hideNavigationBarStandardTitle; 
@property (nonatomic,readonly) BOOL _hideNavigationBarTrailingBarButtons; 
@property (nonatomic,readonly) long long _preferredAlignment; 
@property (nonatomic,readonly) long long barPosition;                                                             //@synthesize barPosition=_barPosition - In the implementation block
+(void)_initializeForIdiom:(long long)arg1 ;
-(void)_cnui_applyContactStyle;
-(void)setFrame:(CGRect)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(void)setDelegate:(id<UISearchBarDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id<UISearchBarDelegate>)delegate;
-(void)setPlaceholder:(NSString *)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)sendSubviewToBack:(id)arg1 ;
-(id)preferredFocusedView;
-(id)_backgroundView;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)layoutMarginsDidChange;
-(CGSize)intrinsicContentSize;
-(id)preferredFocusEnvironments;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(BOOL)resignFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)safeAreaInsetsDidChange;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)bringSubviewToFront:(id)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_commonInit;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(long long)barPosition;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(void)setBarStyle:(long long)arg1 ;
-(long long)barStyle;
-(long long)_barPosition;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)isTranslucent;
-(void)setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3 ;
-(id)backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2 ;
-(void)setTranslucent:(BOOL)arg1 ;
-(UIImage *)backgroundImage;
-(void)setBackgroundImage:(id)arg1 forBarMetrics:(long long)arg2 ;
-(id)_effectiveBarTintColor;
-(void)_updateOpacity;
-(void)_setBarPosition:(long long)arg1 ;
-(NSString *)prompt;
-(UIColor *)_statusBarTintColor;
-(void)setBarTintColor:(UIColor *)arg1 ;
-(UIColor *)barTintColor;
-(void)setPrompt:(NSString *)arg1 ;
-(void)_setDataSource:(id)arg1 navigationItem:(id)arg2 titleLocation:(long long)arg3 ;
-(UISearchController *)_searchController;
-(long long)_preferredContentSizeForSize:(long long)arg1 ;
-(void)_contentDidChange;
-(BOOL)_wantsTwoPartTransition;
-(void)_transitionWillBegin:(long long)arg1 willBeDisplayed:(BOOL)arg2 ;
-(void)_performTransition:(long long)arg1 willBeDisplayed:(BOOL)arg2 ;
-(void)_transitionCompleted:(long long)arg1 willBeDisplayed:(BOOL)arg2 ;
-(BOOL)_underlayNavigationBarContent;
-(double)_navigationBarContentHeight;
-(double)_navigationBarBackButtonMaximumWidth;
-(BOOL)_hideNavigationBarBackButton;
-(BOOL)_hideNavigationBarLeadingBarButtons;
-(BOOL)_hideNavigationBarStandardTitle;
-(BOOL)_hideNavigationBarTrailingBarButtons;
-(long long)_preferredAlignment;
-(id)_textColor;
-(BOOL)_shouldUseNavigationBarHeight;
-(void)setSearchFieldBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)searchFieldBackgroundImageForState:(unsigned long long)arg1 ;
-(UIImage *)scopeBarBackgroundImage;
-(void)setScopeBarBackgroundImage:(UIImage *)arg1 ;
-(void)_setMaskActive:(BOOL)arg1 ;
-(void)_updateEffectiveContentInset;
-(void)tappedSearchBar:(id)arg1 ;
-(void)_setMaskBounds:(CGRect)arg1 ;
-(id)_searchBarTextField;
-(id)searchField;
-(void)setKeyboardAppearance:(long long)arg1 ;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)setScopeButtonTitles:(NSArray *)arg1 ;
-(void)_scopeChanged:(id)arg1 ;
-(void)setUsesEmbeddedAppearance:(BOOL)arg1 ;
-(void)_setupSearchField;
-(id)textInputTraits;
-(void)setSearchBarStyle:(unsigned long long)arg1 ;
-(void)_setupPromptLabel;
-(void)_setupCancelButton;
-(void)_setShowsSeparator:(BOOL)arg1 ;
-(void)setSearchTextPositionAdjustment:(UIOffset)arg1 ;
-(void)setSearchFieldBackgroundPositionAdjustment:(UIOffset)arg1 ;
-(id)_scopeBarContainer;
-(NSArray *)scopeButtonTitles;
-(NSString *)placeholder;
-(UIOffset)searchTextPositionAdjustment;
-(UIOffset)searchFieldBackgroundPositionAdjustment;
-(BOOL)centerPlaceholder;
-(BOOL)_consideredInBarWithSuperview:(id)arg1 ;
-(void)_identifyBarContainer;
-(void)setDrawsBackgroundInPalette:(BOOL)arg1 ;
-(id)_searchBarTextFieldOrMailReplacementView;
-(void)setDrawsBackground:(BOOL)arg1 ;
-(void)_updateScopeBarBackground;
-(void)_updateSearchFieldArt;
-(id)_currentSeparatorImage;
-(void)_updatePlaceholderColor;
-(void)_updateRightView;
-(void)_updateMagnifyingGlassView;
-(id)_imageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2 ;
-(void)_resultsListButtonPressed;
-(void)_bookmarkButtonPressed;
-(void)setShowsCancelButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_allowCursorToAppear:(BOOL)arg1 ;
-(void)_destroyCancelButton;
-(BOOL)_isInBar;
-(void)_displayNavBarCancelButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_cancelBarButtonItem;
-(void)_cancelButtonPressed;
-(BOOL)_containedInNavigationPalette;
-(BOOL)drawsBackgroundInPalette;
-(BOOL)_shouldCombineLandscapeBarsForOrientation:(long long)arg1 ;
-(unsigned long long)_scopeBarPosition;
-(BOOL)_wouldCombineLandscapeBarsForSize:(CGSize)arg1 ;
-(BOOL)_useRelaxedScopeLayout;
-(double)_landscapeScopeBarWidth;
-(UIEdgeInsets)_scopeBarInsets;
-(double)_availableBoundsWidthForSize:(CGSize)arg1 ;
-(BOOL)_searchFieldWidthShouldBeFlexible;
-(void)_setBarTintColor:(id)arg1 forceUpdate:(BOOL)arg2 ;
-(void)_setupLeftButton;
-(void)takeTraitsFrom:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)layoutSubviewsInBounds:(CGRect)arg1 ;
-(void)_getTopInset:(double*)arg1 bottomInset:(double*)arg2 forBarMetrics:(long long)arg3 barPosition:(long long)arg4 ;
-(double)_barHeightForBarMetrics:(long long)arg1 withEffectiveInsets:(UIEdgeInsets)arg2 ;
-(double)_defaultHeightForOrientation:(long long)arg1 ;
-(long long)_barMetricsForOrientation:(long long)arg1 ;
-(double)_barHeightForBarMetrics:(long long)arg1 ;
-(double)_scopeBarHeight;
-(double)_defaultHeight;
-(double)_defaultWidth;
-(double)_availableBoundsWidth;
-(double)_landscapeSearchFieldWidth;
-(id)_viewForChildViews;
-(void)_getScopeBarHeight:(double*)arg1 containerHeight:(double*)arg2 ;
-(BOOL)_shouldCombineLandscapeBars;
-(BOOL)_scopeBarIsVisible;
-(BOOL)_containsScopeBar;
-(BOOL)drawsBackground;
-(void)_updateScopeBarFrame;
-(void)_layoutBackgroundViewConsideringTopBarStatusAndChangedHeight:(BOOL)arg1 ;
-(double)_searchFieldHeight;
-(id)_navigationBarForShadow;
-(BOOL)_shouldDisplayShadow;
-(id)_makeShadowView;
-(id)controller;
-(BOOL)_getNavigationTitleLeadingInset:(double*)arg1 trailingInset:(double*)arg2 isRTL:(BOOL)arg3 ;
-(void)_setUpScopeBar;
-(void)_setShowsScopeBar:(BOOL)arg1 animateOpacity:(BOOL)arg2 ;
-(void)_setDisableFocus:(BOOL)arg1 ;
-(void)_effectiveBarTintColorDidChange:(BOOL)arg1 ;
-(void)_updateNeedForBackdrop;
-(id)_colorForComponent:(unsigned long long)arg1 disabled:(BOOL)arg2 ;
-(id)_imageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2 customImage:(BOOL*)arg3 ;
-(UIView *)inputAccessoryView;
-(BOOL)_ownsInputAccessoryView;
-(UITextInputAssistantItem *)inputAssistantItem;
-(BOOL)_isAtTop;
-(void)_applySearchBarStyle;
-(BOOL)_hasDarkUIAppearance;
-(void)setController:(id)arg1 ;
-(id)_scopeBar;
-(id)_defaultPromptString;
-(void)setShowsSearchResultsButton:(BOOL)arg1 ;
-(BOOL)showsSearchResultsButton;
-(void)setSearchResultsButtonSelected:(BOOL)arg1 ;
-(BOOL)isSearchResultsButtonSelected;
-(void)setShowsBookmarkButton:(BOOL)arg1 ;
-(BOOL)showsBookmarkButton;
-(void)setShowsCancelButton:(BOOL)arg1 ;
-(BOOL)showsCancelButton;
-(void)_setShowsCancelButton:(BOOL)arg1 ;
-(void)setCombinesLandscapeBars:(BOOL)arg1 ;
-(BOOL)combinesLandscapeBars;
-(BOOL)usesEmbeddedAppearance;
-(void)setCancelButton:(id)arg1 ;
-(id)cancelButton;
-(UIButton *)_leftButton;
-(double)_barHeightForBarMetrics:(long long)arg1 barPosition:(long long)arg2 ;
-(void)_setShadowVisibleIfNecessary:(BOOL)arg1 ;
-(UIEdgeInsets)contentInset;
-(UIEdgeInsets)_effectiveContentInset;
-(void)setSelectedScopeButtonIndex:(long long)arg1 ;
-(long long)selectedScopeButtonIndex;
-(void)_setScopeBarHidden:(BOOL)arg1 ;
-(void)setShowsScopeBar:(BOOL)arg1 ;
-(BOOL)showsScopeBar;
-(void)_setStatusBarTintColor:(id)arg1 ;
-(id)_separatorImage;
-(void)_setSeparatorImage:(id)arg1 ;
-(void)setImage:(id)arg1 forSearchBarIcon:(long long)arg2 state:(unsigned long long)arg3 ;
-(id)imageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2 ;
-(void)setScopeBarButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)scopeBarButtonBackgroundImageForState:(unsigned long long)arg1 ;
-(void)setScopeBarButtonDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 ;
-(id)scopeBarButtonDividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 ;
-(void)setScopeBarButtonTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)scopeBarButtonTitleTextAttributesForState:(unsigned long long)arg1 ;
-(void)setPositionAdjustment:(UIOffset)arg1 forSearchBarIcon:(long long)arg2 ;
-(UIOffset)positionAdjustmentForSearchBarIcon:(long long)arg1 ;
-(id)_searchDisplayControllerNavigationItem;
-(id)_animatedAppearanceBarButtonItem;
-(void)_setBackgroundLayoutNeedsUpdate:(BOOL)arg1 ;
-(void)_setBackdropStyle:(unsigned long long)arg1 ;
-(unsigned long long)_backdropStyle;
-(id)_presentationBackgroundBlurEffectForTraitCollection:(id)arg1 ;
-(void)setCenterPlaceholder:(BOOL)arg1 ;
-(void)_updateInsetsForTableView:(id)arg1 ;
-(void)_updateInsetsForCurrentContainerViewAndBarPosition;
-(long long)searchFieldLeftViewMode;
-(void)setSearchFieldLeftViewMode:(long long)arg1 ;
-(id)_alternateTitle;
-(void)_setCancelButtonWantsLetterpress;
-(id)_uiktest_placeholderLabelColor;
-(void)setInputAccessoryView:(UIView *)arg1 ;
-(unsigned long long)searchBarStyle;
-(BOOL)_forceCenteredPlaceholderLayout;
-(void)set_forceCenteredPlaceholderLayout:(BOOL)arg1 ;
-(void)_setSearchController:(id)arg1 ;
-(BOOL)_transplanting;
-(void)_setTransplanting:(BOOL)arg1 ;
-(void)_setScopeBarPosition:(unsigned long long)arg1 ;
-(id)_scopeBarContainerView;
-(id)_scopeBarBackgroundView;
-(BOOL)pretendsIsInBar;
-(void)_searchFieldBeginEditing;
-(void)_searchFieldEditingChanged;
-(void)_searchFieldEndEditing;
-(void)_searchFieldReturnPressed;
-(void)_deleteButtonPressed;
-(void)_setupCancelButtonWithAppearance:(id)arg1 ;
-(void)_cancelOperation:(id)arg1 ;
-(void)reloadInputViews;
-(BOOL)canResignFirstResponder;
-(void)_setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setScopeBarSegmentsEnabled:(BOOL)arg1 ;
-(long long)_textInputSource;
-(void)setPretendsIsInBar:(BOOL)arg1 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(BOOL)_textFieldShouldScrollToVisibleWhenBecomingFirstResponder:(id)arg1 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(void)_setShowsDeleteButton:(BOOL)arg1 ;
-(void)_setCancelButtonText:(id)arg1 ;
-(void)_setAutoDisableCancelButton:(BOOL)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)_disableAutomaticKeyboardUI;
-(BOOL)_enableAutomaticKeyboardPressDone;
-(BOOL)_isEnabled;
-(void)_setEnabled:(BOOL)arg1 ;
-(void)_updateBackgroundToBackdropStyle:(long long)arg1 ;
-(double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 inContainer:(id)arg3 isGuide:(BOOL)arg4 ;
-(BOOL)_hasCustomAutolayoutNeighborSpacingForAttribute:(long long*)arg1 ;
-(double)_defaultAutolayoutSpacing;
@end

