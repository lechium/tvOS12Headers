/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKApplicationStateTrackingView.h>
#import <libobjc.A.dylib/_WKWebViewPrintProvider.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UITextAutoscrolling.h>
#import <UIKit/UITextInputMultiDocument.h>
#import <UIKit/UITextInputPrivate.h>
#import <UIKit/UIWebFormAccessoryDelegate.h>
#import <UIKit/UIWebTouchEventsGestureRecognizerDelegate.h>
#import <UIKit/UIWKInteractionViewProtocol.h>
#import <libobjc.A.dylib/WKActionSheetAssistantDelegate.h>
#import <libobjc.A.dylib/WKFileUploadPanelDelegate.h>

@class UITextInteractionAssistant, RTIInputSystemSourceSession, WKWebView, NSString, UIWebFormAccessory, UITextInputPasswordRules, UITextRange, NSDictionary, UITextPosition, UIView, NSIndexSet, UIColor, UIImage, UIInputContextHistory, WKBrowsingContextController;

@interface WKContentView : WKApplicationStateTrackingView <_WKWebViewPrintProvider, UIGestureRecognizerDelegate, UITextAutoscrolling, UITextInputMultiDocument, UITextInputPrivate, UIWebFormAccessoryDelegate, UIWebTouchEventsGestureRecognizerDelegate, UIWKInteractionViewProtocol, WKActionSheetAssistantDelegate, WKFileUploadPanelDelegate> {

	RefPtr<WebKit::WebPageProxy, WTF::DumbPtrTraits<WebKit::WebPageProxy> >* _page;
	WKWebView* _webView;
	RetainPtr<UIWebTouchEventsGestureRecognizer>* _touchEventGestureRecognizer;
	BOOL _canSendTouchEventsAsynchronously;
	RetainPtr<WKSyntheticClickTapGestureRecognizer>* _singleTapGestureRecognizer;
	RetainPtr<_UIWebHighlightLongPressGestureRecognizer>* _highlightLongPressGestureRecognizer;
	RetainPtr<UILongPressGestureRecognizer>* _longPressGestureRecognizer;
	RetainPtr<UITapGestureRecognizer>* _doubleTapGestureRecognizer;
	RetainPtr<UITapGestureRecognizer>* _nonBlockingDoubleTapGestureRecognizer;
	RetainPtr<UITapGestureRecognizer>* _twoFingerDoubleTapGestureRecognizer;
	RetainPtr<UITapGestureRecognizer>* _twoFingerSingleTapGestureRecognizer;
	RetainPtr<WKInspectorNodeSearchGestureRecognizer>* _inspectorNodeSearchGestureRecognizer;
	RetainPtr<UIWKTextInteractionAssistant>* _textSelectionAssistant;
	RetainPtr<UIWKSelectionAssistant>* _webSelectionAssistant;
	BOOL _suppressAssistantSelectionView;
	RetainPtr<UITextInputTraits>* _traits;
	RetainPtr<UIWebFormAccessory>* _formAccessoryView;
	RetainPtr<_UIHighlightView>* _highlightView;
	RetainPtr<UIView>* _interactionViewsContainerView;
	RetainPtr<NSString>* _markedText;
	RetainPtr<WKActionSheetAssistant>* _actionSheetAssistant;
	RetainPtr<WKAirPlayRoutePicker>* _airPlayRoutePicker;
	RetainPtr<WKFormInputSession>* _formInputSession;
	RetainPtr<WKFileUploadPanel>* _fileUploadPanel;
	RetainPtr<UIGestureRecognizer>* _previewGestureRecognizer;
	RetainPtr<UIGestureRecognizer>* _previewSecondaryGestureRecognizer;
	Vector<bool, 0, WTF::CrashOnOverflow, 16>* _focusStateStack;
	unique_ptr<WebKit::SmartMagnificationController, std::__1::default_delete<WebKit::SmartMagnificationController> >* _smartMagnificationController;
	WeakObjCPtr<id<UITextInputDelegate> > _inputDelegate;
	unsigned long long _latestTapID;
	TapHighlightInformation* _tapHighlightInformation;
	WKAutoCorrectionData* _autocorrectionData;
	InteractionInformationAtPosition* _positionInformation;
	AssistedNodeInformation* _assistedNodeInformation;
	RetainPtr<NSObject<WKFormPeripheral> >* _inputPeripheral;
	RetainPtr<UIEvent>* _uiEventBeingResent;
	BlockPtr<void (WebEvent *, bool)> _keyWebEventHandler;
	CGPoint _lastInteractionLocation;
	unsigned long long _layerTreeTransactionIdAtLastTouchStart;
	WKSelectionDrawingInfo* _lastSelectionDrawingInfo;
	optional<WebKit::InteractionInformationRequest> _outstandingPositionInformationRequest;
	unsigned long long _positionInformationCallbackDepth;
	Vector<std::optional<std::__1::pair<WebKit::InteractionInformationRequest, WTF::BlockPtr<void (WebKit::InteractionInformationAtPosition)> > >, 0, WTF::CrashOnOverflow, 16>* _pendingPositionInformationHandlers;
	unique_ptr<WebKit::InputViewUpdateDeferrer, std::__1::default_delete<WebKit::InputViewUpdateDeferrer> >* _inputViewUpdateDeferrer;
	BOOL _isEditable;
	BOOL _showingTextStyleOptions;
	BOOL _hasValidPositionInformation;
	BOOL _isTapHighlightIDValid;
	BOOL _potentialTapInProgress;
	BOOL _isDoubleTapPending;
	BOOL _highlightLongPressCanClick;
	BOOL _hasTapHighlightForPotentialTap;
	BOOL _selectionNeedsUpdate;
	BOOL _shouldRestoreSelection;
	BOOL _usingGestureForSelection;
	BOOL _inspectorNodeSearchEnabled;
	BOOL _didAccessoryTabInitiateFocus;
	BOOL _isExpectingFastSingleTapCommit;
	BOOL _showDebugTapHighlightsForFastClicking;
	BOOL _becomingFirstResponder;
	BOOL _resigningFirstResponder;
	BOOL _needsDeferredEndScrollingSelectionUpdate;
	BOOL _isChangingFocus;
	BOOL _isBlurringFocusedNode;
	BOOL _focusRequiresStrongPasswordAssistance;
	unique_ptr<WebKit::PageClientImpl, std::__1::default_delete<WebKit::PageClientImpl> >* _pageClient;
	RetainPtr<WKBrowsingContextController>* _browsingContextController;
	RetainPtr<UIView>* _rootContentView;
	RetainPtr<UIView>* _fixedClippingView;
	RetainPtr<WKInspectorIndicationView>* _inspectorIndicationView;
	RetainPtr<WKInspectorHighlightView>* _inspectorHighlightView;
	HistoricalVelocityData _historicalKinematicData;
	RetainPtr<NSUndoManager>* _undoManager;
	BOOL _isPrintingToPDF;
	RetainPtr<CGPDFDocument *>* _printedDocument;
	BOOL _sizeChangedSinceLastVisibleContentRectUpdate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGPDFDocumentRef _wk_printedDocument; 
@property (nonatomic,readonly) CGPoint lastInteractionLocation; 
@property (nonatomic,readonly) BOOL isEditable; 
@property (nonatomic,readonly) BOOL shouldHideSelectionWhenScrolling; 
@property (nonatomic,readonly) const InteractionInformationAtPosition* positionInformation; 
@property (nonatomic,readonly) const WKAutoCorrectionData* autocorrectionData; 
@property (nonatomic,readonly) const AssistedNodeInformation* assistedNodeInformation; 
@property (nonatomic,readonly) UIWebFormAccessory * formAccessoryView; 
@property (assign,nonatomic) BOOL suppressAssistantSelectionView; 
@property (nonatomic,readonly) InteractionInformationAtPosition currentPositionInformation; 
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
@property (nonatomic,readonly) BOOL hasText; 
@property (copy) UITextRange * selectedTextRange; 
@property (nonatomic,readonly) UITextRange * markedTextRange; 
@property (nonatomic,copy) NSDictionary * markedTextStyle; 
@property (nonatomic,readonly) UITextPosition * beginningOfDocument; 
@property (nonatomic,readonly) UITextPosition * endOfDocument; 
@property (assign,nonatomic,__weak) id<UITextInputDelegate> inputDelegate; 
@property (nonatomic,readonly) id<UITextInputTokenizer> tokenizer; 
@property (nonatomic,readonly) UIView * textInputView; 
@property (assign,nonatomic) long long selectionAffinity; 
@property (nonatomic,readonly) id insertDictationResultPlaceholder; 
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
@property (nonatomic,readonly) UITextInteractionAssistant * interactionAssistant; 
@property (assign,nonatomic) long long selectionGranularity; 
@property (nonatomic,readonly) id<UITextInputSuggestionDelegate> textInputSuggestionDelegate; 
@property (assign,nonatomic) long long _textInputSource; 
@property (nonatomic,readonly) RTIInputSystemSourceSession * _rtiSourceSession; 
@property (nonatomic,readonly) NSString * textContentTypeForTesting; 
@property (nonatomic,readonly) NSString * selectFormPopoverTitle; 
@property (nonatomic,readonly) NSString * formInputLabel; 
@property (nonatomic,readonly) WKBrowsingContextController * browsingContextController; 
@property (nonatomic,readonly) WebPageProxy* page; 
@property (nonatomic,readonly) BOOL isAssistingNode; 
@property (assign,getter=isShowingInspectorIndication,nonatomic) BOOL showingInspectorIndication; 
@property (getter=isResigningFirstResponder,nonatomic,readonly) BOOL resigningFirstResponder;                  //@synthesize resigningFirstResponder=_resigningFirstResponder - In the implementation block
@property (assign,nonatomic) BOOL sizeChangedSinceLastVisibleContentRectUpdate;                                //@synthesize sizeChangedSinceLastVisibleContentRectUpdate=_sizeChangedSinceLastVisibleContentRectUpdate - In the implementation block
-(void)actionSheetAssistant:(id)arg1 performAction:(int)arg2 ;
-(void)actionSheetAssistant:(id)arg1 openElementAtLocation:(CGPoint)arg2 ;
-(void)actionSheetAssistant:(id)arg1 shareElementWithURL:(id)arg2 rect:(CGRect)arg3 ;
-(unsigned long long)_wk_pageCountForPrintFormatter:(id)arg1 ;
-(CGPDFDocumentRef)_wk_printedDocument;
-(unique_ptr<WebKit::DrawingAreaProxy, std::__1::default_delete<WebKit::DrawingAreaProxy> >*)_createDrawingAreaProxy;
-(void)_processDidExit;
-(void)_didRelaunchProcess;
-(void)_didNotHandleTapAsClick:(const IntPoint*)arg1 ;
-(void)_didCompleteSyntheticClick;
-(void)_didCommitLoadForMainFrame;
-(void)_disableDoubleTapGesturesDuringTapIfNecessary:(unsigned long long)arg1 ;
-(void)_setAccessibilityWebProcessToken:(id)arg1 ;
-(BOOL)_interpretKeyEvent:(id)arg1 isCharEvent:(BOOL)arg2 ;
-(void)_positionInformationDidChange:(const InteractionInformationAtPosition*)arg1 ;
-(void)_selectionChanged;
-(void)_didHandleKeyEvent:(id)arg1 eventWasHandled:(BOOL)arg2 ;
-(void)_webTouchEvent:(const NativeWebTouchEvent*)arg1 preventsNativeGestures:(BOOL)arg2 ;
-(void)_setAcceleratedCompositingRootView:(id)arg1 ;
-(void)_commitPotentialTapFailed;
-(void)_didGetTapHighlightForRequest:(unsigned long long)arg1 color:(const Color*)arg2 quads:(const Vector<WebCore::FloatQuad, 0, WTF::CrashOnOverflow, 16>*)arg3 topLeftRadius:(const IntSize*)arg4 topRightRadius:(const IntSize*)arg5 bottomLeftRadius:(const IntSize*)arg6 bottomRightRadius:(const IntSize*)arg7 ;
-(void)_didCommitLayerTree:(const RemoteLayerTreeTransaction*)arg1 ;
-(void)_layerTreeCommitComplete;
-(void)_startAssistingNode:(const AssistedNodeInformation*)arg1 userIsInteracting:(BOOL)arg2 blurPreviousNode:(BOOL)arg3 changingActivityState:(BOOL)arg4 userObject:(id)arg5 ;
-(BOOL)isAssistingNode;
-(void)_stopAssistingNode;
-(void)_showPlaybackTargetPicker:(BOOL)arg1 fromRect:(const IntRect*)arg2 routeSharingPolicy:(int)arg3 routingContextUID:(id)arg4 ;
-(void)_showRunOpenPanel:(OpenPanelParametersRef)arg1 resultListener:(WebOpenPanelResultListenerProxyRef)arg2 ;
-(void)_showInspectorHighlight:(const Highlight*)arg1 ;
-(void)_hideInspectorHighlight;
-(void)setShowingInspectorIndication:(BOOL)arg1 ;
-(void)_enableInspectorNodeSearch;
-(void)_disableInspectorNodeSearch;
-(void)scrollViewWillStartPanOrPinchGesture;
-(void)_overflowScrollingWillBegin;
-(void)_overflowScrollingDidEnd;
-(void)_zoomOutWithOrigin:(CGPoint)arg1 ;
-(void)_zoomToInitialScaleWithOrigin:(CGPoint)arg1 ;
-(BOOL)_zoomToRect:(CGRect)arg1 withOrigin:(CGPoint)arg2 fitEntireRect:(BOOL)arg3 minimumScale:(double)arg4 maximumScale:(double)arg5 minimumScrollDistance:(double)arg6 ;
-(optional<WebKit::InteractionInformationAtPosition>*)positionInformationForActionSheetAssistant:(id)arg1 ;
-(void)updatePositionInformationForActionSheetAssistant:(id)arg1 ;
-(void)actionSheetAssistant:(id)arg1 willStartInteractionWithElement:(id)arg2 ;
-(BOOL)actionSheetAssistant:(id)arg1 showCustomSheetForElement:(id)arg2 ;
-(RetainPtr<NSArray>*)actionSheetAssistant:(id)arg1 decideActionsForElement:(id)arg2 defaultActions:(RetainPtr<NSArray>*)arg3 ;
-(void)actionSheetAssistant:(id)arg1 getAlternateURLForImage:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)actionSheetAssistantDidStopInteraction:(id)arg1 ;
-(OpaqueWKPageRef)_pageRef;
-(void)setupInteraction;
-(id)_commonInitializationWithProcessPool:(WebProcessPool*)arg1 configuration:(Ref<API::PageConfiguration, WTF::DumbPtrTraits<API::PageConfiguration> >*)arg2 ;
-(void)cleanupInteraction;
-(void)_windowDidMoveToScreenNotification:(id)arg1 ;
-(BOOL)shouldHideSelectionWhenScrolling;
-(CGRect)_computeUnobscuredContentRectRespectingInputViewBounds:(CGRect)arg1 inputViewBounds:(CGRect)arg2 ;
-(void)updateFixedClippingView:(FloatRect)arg1 ;
-(void)_didExitStableState;
-(void)_didEndScrollingOrZooming;
-(void)_willStartScrollingOrZooming;
-(void)_accessibilityRegisterUIProcessTokens;
-(void)_updateChangedSelection;
-(void)_zoomToFocusRect:(CGRect)arg1 selectionRect:(CGRect)arg2 insideFixed:(BOOL)arg3 fontSize:(float)arg4 minimumScale:(double)arg5 maximumScale:(double)arg6 allowScaling:(BOOL)arg7 forceScroll:(BOOL)arg8 ;
-(id)initWithFrame:(CGRect)arg1 processPool:(WebProcessPool*)arg2 configuration:(Ref<API::PageConfiguration, WTF::DumbPtrTraits<API::PageConfiguration> >*)arg3 webView:(id)arg4 ;
-(WKBrowsingContextController *)browsingContextController;
-(BOOL)isShowingInspectorIndication;
-(void)didUpdateVisibleRect:(CGRect)arg1 unobscuredRect:(CGRect)arg2 unobscuredRectInScrollViewCoordinates:(CGRect)arg3 obscuredInsets:(UIEdgeInsets)arg4 unobscuredSafeAreaInsets:(UIEdgeInsets)arg5 inputViewBounds:(CGRect)arg6 scale:(double)arg7 minimumScale:(double)arg8 inStableState:(BOOL)arg9 isChangingObscuredInsetsInteractively:(BOOL)arg10 enclosedInScrollableAncestorView:(BOOL)arg11 ;
-(void)didFinishScrolling;
-(void)didInterruptScrolling;
-(void)willStartZoomOrScroll;
-(void)didZoomToScale:(double)arg1 ;
-(void)_webViewDestroyed;
-(BOOL)_scrollToRect:(CGRect)arg1 withOrigin:(CGPoint)arg2 minimumScrollDistance:(double)arg3 ;
-(BOOL)isResigningFirstResponder;
-(BOOL)sizeChangedSinceLastVisibleContentRectUpdate;
-(void)setSizeChangedSinceLastVisibleContentRectUpdate:(BOOL)arg1 ;
-(UIWebFormAccessory *)formAccessoryView;
-(void)reloadContextViewForPresentedListViewController;
-(void)_singleTapCommited:(id)arg1 ;
-(void)_singleTapDidReset:(id)arg1 ;
-(void)_nonBlockingDoubleTapRecognized:(id)arg1 ;
-(void)_createAndConfigureDoubleTapGestureRecognizer;
-(void)_createAndConfigureLongPressGestureRecognizer;
-(void)_twoFingerSingleTapGestureRecognized:(id)arg1 ;
-(void)setUpTextSelectionAssistant;
-(void)_cancelInteraction;
-(void)_updateChangedSelection:(BOOL)arg1 ;
-(void)_updateTapHighlight;
-(void)_removeDefaultGestureRecognizers;
-(void)_inspectorNodeSearchRecognized:(id)arg1 ;
-(void)_addDefaultGestureRecognizers;
-(void)_resetIsDoubleTapPending;
-(Color*)_tapHighlightColorForFastClick:(BOOL)arg1 ;
-(void)_showTapHighlight;
-(void)_finishInteraction;
-(void)_setDoubleTapGesturesEnabled:(BOOL)arg1 ;
-(BOOL)requiresAccessoryView;
-(void)_ensureFormAccessoryView;
-(void)_showAttachmentSheet;
-(SEL)_actionForLongPressFromPositionInformation:(const InteractionInformationAtPosition*)arg1 ;
-(BOOL)_currentPositionInformationIsValidForRequest:(const InteractionInformationRequest*)arg1 ;
-(BOOL)_hasValidOutstandingPositionInformationRequest:(const InteractionInformationRequest*)arg1 ;
-(void)requestAsynchronousPositionInformationUpdate:(InteractionInformationRequest)arg1 ;
-(void)_invokeAndRemovePendingHandlersValidForCurrentPositionInformation;
-(BOOL)ensurePositionInformationIsUpToDate:(InteractionInformationRequest)arg1 ;
-(SEL)_actionForLongPress;
-(id)webSelectionRectsForSelectionRects:(const Vector<WebCore::SelectionRect, 0, WTF::CrashOnOverflow, 16>*)arg1 ;
-(void)_attemptClickAtLocation:(CGPoint)arg1 ;
-(void)_endPotentialTapAndEnableDoubleTapGesturesIfNecessary;
-(void)_arrowKey:(id)arg1 ;
-(void)executeEditCommandWithCallback:(id)arg1 ;
-(void)_accessibilityRetrieveRectsAtSelectionOffset:(long long)arg1 withText:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)changeSelectionWithGestureAt:(CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3 withFlags:(long long)arg4 ;
-(BOOL)_isInteractingWithAssistedNode;
-(optional<WebCore::FloatPoint>)_scrollOffsetForEvent:(id)arg1 ;
-(BOOL)suppressAssistantSelectionView;
-(BOOL)setIsEditable:(BOOL)arg1 ;
-(const InteractionInformationAtPosition*)positionInformation;
-(CGPoint)lastInteractionLocation;
-(BOOL)canBecomeFirstResponderForWebView;
-(BOOL)becomeFirstResponderForWebView;
-(BOOL)resignFirstResponderForWebView;
-(BOOL)_mayDisableDoubleTapGesturesDuringSingleTap;
-(void)_showDataDetectorsSheet;
-(InteractionInformationAtPosition)currentPositionInformation;
-(void)doAfterPositionInformationUpdate:(/*^block*/id)arg1 forRequest:(InteractionInformationRequest)arg2 ;
-(BOOL)_currentPositionInformationIsApproximatelyValidForRequest:(const InteractionInformationRequest*)arg1 ;
-(id)_uiTextSelectionRects;
-(void)_lookupForWebView:(id)arg1 ;
-(void)_shareForWebView:(id)arg1 ;
-(void)_addShortcutForWebView:(id)arg1 ;
-(void)_promptForReplaceForWebView:(id)arg1 ;
-(void)_transliterateChineseForWebView:(id)arg1 ;
-(void)replaceForWebView:(id)arg1 ;
-(BOOL)canPerformActionForWebView:(SEL)arg1 withSender:(id)arg2 ;
-(id)targetForActionForWebView:(SEL)arg1 withSender:(id)arg2 ;
-(void)copyForWebView:(id)arg1 ;
-(void)cutForWebView:(id)arg1 ;
-(void)pasteForWebView:(id)arg1 ;
-(void)selectForWebView:(id)arg1 ;
-(void)selectAllForWebView:(id)arg1 ;
-(void)toggleBoldfaceForWebView:(id)arg1 ;
-(void)toggleItalicsForWebView:(id)arg1 ;
-(void)toggleUnderlineForWebView:(id)arg1 ;
-(void)_showTextStyleOptionsForWebView:(id)arg1 ;
-(void)_showDictionary:(id)arg1 ;
-(void)_defineForWebView:(id)arg1 ;
-(void)accessibilityRetrieveSpeakSelectionContent;
-(void)_accessibilityRetrieveRectsEnclosingSelectionOffset:(long long)arg1 withGranularity:(long long)arg2 ;
-(void)_accessibilityRetrieveRectsAtSelectionOffset:(long long)arg1 withText:(id)arg2 ;
-(void)_accessibilityStoreSelection;
-(void)_accessibilityClearSelection;
-(const WKAutoCorrectionData*)autocorrectionData;
-(void)_arrowKeyForWebView:(id)arg1 ;
-(void)_becomeFirstResponderWithSelectionMovingForward:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CGRect)rectForNSRange:(NSRange)arg1 ;
-(NSRange)_markedTextNSRange;
-(CGRect)rectContainingCaretSelection;
-(id)previousUnperturbedDictationResultBoundaryFromPosition:(id)arg1 ;
-(id)wordRangeContainingCaretSelection;
-(const AssistedNodeInformation*)assistedNodeInformation;
-(Vector<WebKit::OptionItem, 0, WTF::CrashOnOverflow, 16>*)assistedNodeSelectOptions;
-(void)updateCurrentAssistedNodeInformation:(Function<void (bool)>*)arg1 ;
-(void)setSuppressAssistantSelectionView:(BOOL)arg1 ;
-(id)dataDetectionContextForActionSheetAssistant:(id)arg1 ;
-(id)selectedTextForActionSheetAssistant:(id)arg1 ;
-(NSString *)selectFormPopoverTitle;
-(void)_simulateTextEntered:(id)arg1 ;
-(void)_simulateLongPressActionAtLocation:(CGPoint)arg1 ;
-(void)selectFormAccessoryPickerRow:(long long)arg1 ;
-(NSString *)textContentTypeForTesting;
-(NSString *)formInputLabel;
-(void)setTimePickerValueToHour:(long long)arg1 minute:(long long)arg2 ;
-(id)_contentsOfUserInterfaceItem:(id)arg1 ;
-(void)dealloc;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)becomeFirstResponder;
-(void)_didScroll;
-(BOOL)resignFirstResponder;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)willMoveToWindow:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)textInputTraits;
-(void)takeTraitsFrom:(id)arg1 ;
-(id)inputAccessoryView;
-(UIColor *)insertionPointColor;
-(void)deleteBackward;
-(void)insertTextSuggestion:(id)arg1 ;
-(UITextPosition *)beginningOfDocument;
-(UITextPosition *)endOfDocument;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(void)replaceRange:(id)arg1 withText:(id)arg2 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(id)_scroller;
-(id)keyCommands;
-(BOOL)isEditable;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(id)undoManager;
-(void)fileUploadPanelDidDismiss:(id)arg1 ;
-(void)accessoryDone;
-(void)accessoryTab:(BOOL)arg1 ;
-(void)accessoryAutoFill;
-(void)accessoryClear;
-(void)insertText:(id)arg1 ;
-(BOOL)hasText;
-(WebPageProxy*)page;
-(void)select:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)_promptForReplace:(id)arg1 ;
-(void)_transliterateChinese:(id)arg1 ;
-(void)_showTextStyleOptions:(id)arg1 ;
-(void)_lookup:(id)arg1 ;
-(void)_define:(id)arg1 ;
-(void)_addShortcut:(id)arg1 ;
-(void)_share:(id)arg1 ;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)replace:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 canBePreventedByGestureRecognizer:(id)arg2 ;
-(BOOL)pointIsNearMarkedText:(CGPoint)arg1 ;
-(UITextRange *)markedTextRange;
-(id)closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(id<UITextInputDelegate>)inputDelegate;
-(UITextRange *)selectedTextRange;
-(id)textInRange:(id)arg1 ;
-(id<UITextInputTokenizer>)tokenizer;
-(id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3 ;
-(long long)comparePosition:(id)arg1 toPosition:(id)arg2 ;
-(BOOL)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3 ;
-(id)selectedText;
-(CGRect)firstRectForRange:(id)arg1 ;
-(CGRect)_selectionClipRect;
-(id)inputView;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)unmarkText;
-(id)positionFromPosition:(id)arg1 offset:(long long)arg2 ;
-(id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 ;
-(long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2 ;
-(id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2 ;
-(long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2 ;
-(void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2 ;
-(id)selectionRectsForRange:(id)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 ;
-(id)characterRangeAtPoint:(CGPoint)arg1 ;
-(void)setSelectedTextRange:(UITextRange *)arg1 ;
-(NSDictionary *)markedTextStyle;
-(void)setMarkedTextStyle:(NSDictionary *)arg1 ;
-(void)setInputDelegate:(id<UITextInputDelegate>)arg1 ;
-(id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2 ;
-(void)handleKeyEvent:(id)arg1 ;
-(void)_handleKeyUIEvent:(id)arg1 ;
-(void)_wheelChangedWithEvent:(id)arg1 ;
-(id)markedText;
-(void)toggleBoldface:(id)arg1 ;
-(void)toggleItalics:(id)arg1 ;
-(void)toggleUnderline:(id)arg1 ;
-(id)metadataDictionariesForDictationResults;
-(BOOL)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3 ;
-(void)requestDictationContext:(/*^block*/id)arg1 ;
-(UITextInteractionAssistant *)interactionAssistant;
-(void)replaceDictatedText:(id)arg1 withText:(id)arg2 ;
-(id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3 ;
-(NSRange)selectionRange;
-(BOOL)hasContent;
-(void)selectAll;
-(BOOL)hasSelection;
-(BOOL)requiresKeyEvents;
-(void)handleKeyWebEvent:(id)arg1 ;
-(void)handleKeyWebEvent:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)selectionInteractionAssistant;
-(void)setBottomBufferHeight:(double)arg1 ;
-(id)automaticallySelectedOverlay;
-(void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2 ;
-(id)textColorForCaretSelection;
-(id)fontForCaretSelection;
-(long long)selectionGranularity;
-(unsigned short)characterBeforeCaretSelection;
-(id)nextUnperturbedDictationResultBoundaryFromPosition:(id)arg1 ;
-(BOOL)hasMarkedText;
-(void)changeSelectionWithGestureAt:(CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3 ;
-(void)changeSelectionWithTouchesFrom:(CGPoint)arg1 to:(CGPoint)arg2 withGesture:(long long)arg3 withState:(long long)arg4 ;
-(CGRect)textFirstRect;
-(CGRect)textLastRect;
-(void)requestAutocorrectionContextWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)requestAutocorrectionRectsForString:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)applyAutocorrection:(id)arg1 toString:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)hasSelectablePositionAtPoint:(CGPoint)arg1 ;
-(BOOL)textInteractionGesture:(long long)arg1 shouldBeginAtPoint:(CGPoint)arg2 ;
-(id)webSelectionRects;
-(void)_cancelLongPressGestureRecognizer;
-(void)selectPositionAtPoint:(CGPoint)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)beginSelectionInDirection:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)selectTextWithGranularity:(long long)arg1 atPoint:(CGPoint)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateSelectionWithExtentPoint:(CGPoint)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateSelectionWithExtentPoint:(CGPoint)arg1 withBoundary:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)selectWordForReplacement;
-(void)changeSelectionWithTouchAt:(CGPoint)arg1 withSelectionTouch:(long long)arg2 baseIsStart:(BOOL)arg3 withFlags:(long long)arg4 ;
-(void)clearSelection;
-(void)replaceText:(id)arg1 withText:(id)arg2 ;
-(BOOL)isReplaceAllowed;
-(void)selectWordBackward;
-(id)unscaledView;
-(double)inverseScale;
-(CGRect)unobscuredContentRect;
-(void)moveByOffset:(long long)arg1 ;
-(void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 fromPoint:(CGPoint)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)moveSelectionAtBoundary:(long long)arg1 inDirection:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_requiresKeyboardWhenFirstResponder;
-(id)_moveToStartOfWord:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfWord:(BOOL)arg1 withHistory:(id)arg2 ;
-(void)moveBackward:(unsigned)arg1 ;
-(id)_moveLeft:(BOOL)arg1 withHistory:(id)arg2 ;
-(void)moveForward:(unsigned)arg1 ;
-(id)_moveRight:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveDown:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveUp:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfLine:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfLine:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfParagraph:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfParagraph:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfDocument:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfDocument:(BOOL)arg1 withHistory:(id)arg2 ;
-(unsigned)_characterBeforeCaretSelection;
-(BOOL)_selectionAtDocumentStart;
-(BOOL)_requiresKeyboardResetOnReload;
-(void)_preserveFocusWithToken:(id)arg1 destructively:(BOOL)arg2 ;
-(void)_restoreFocusWithToken:(id)arg1 ;
-(void)scrollSelectionToVisible:(BOOL)arg1 ;
-(void)beginSelectionChange;
-(void)endSelectionChange;
-(id)wordContainingCaretSelection;
-(void)startAutoscroll:(CGPoint)arg1 ;
-(void)cancelAutoscroll;
-(unsigned)_characterInRelationToCaretSelection:(int)arg1 ;
-(BOOL)_allowAnimatedUpdateSelectionRectViews;
-(id)selectedDOMRange;
-(id)supportedPasteboardTypesForCurrentSelection;
-(void)setMarkedText:(id)arg1 ;
-(void)setSelectedDOMRange:(id)arg1 affinityDownstream:(BOOL)arg2 ;
-(void)_resetShowingTextStyle:(id)arg1 ;
-(void)_startAssistingKeyboard;
-(void)_stopAssistingKeyboard;
-(void)_webTouchEventsRecognized:(id)arg1 ;
-(void)_nextAccessoryTab:(id)arg1 ;
-(void)_prevAccessoryTab:(id)arg1 ;
-(void)_displayFormNodeInputView;
-(void)_updateAccessory;
-(BOOL)shouldIgnoreWebTouch;
-(BOOL)isAnyTouchOverActiveArea:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldIgnoreWebTouchWithEvent:(id)arg2 ;
-(id)webSelectionAssistant;
-(void)_showLinkSheet;
-(void)_singleTapRecognized:(id)arg1 ;
-(void)_doubleTapRecognized:(id)arg1 ;
-(void)_twoFingerDoubleTapRecognized:(id)arg1 ;
-(void)_highlightLongPressRecognized:(id)arg1 ;
-(void)_longPressRecognized:(id)arg1 ;
-(void)_showImageSheet;
-(void)_updateForScreen:(id)arg1 ;
@end

