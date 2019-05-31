//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AFConversationDelegate.h"
#import "SVSTranscriptStackViewControllerDataSource.h"
#import "SVSTranscriptStackViewControllerDelegate.h"
#import "SiriUISuggestionsViewDelegate.h"

@class AFConversation, NSString, SVSTranscriptStackViewController, SiriUISuggestionsView;

@interface SVSSuggestionsViewController : UIViewController <SiriUISuggestionsViewDelegate, SVSTranscriptStackViewControllerDelegate, SVSTranscriptStackViewControllerDataSource, AFConversationDelegate>
{
    AFConversation *_conversation;	// 8 = 0x8
    SVSTranscriptStackViewController *_guideController;	// 16 = 0x10
    id <SVSSuggestionsViewControllerDelegate> _delegate;	// 24 = 0x18
}

@property(nonatomic) __weak id <SVSSuggestionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010001e8dc
- (_Bool)suggestionsViewIsInTextInputMode:(id)arg1;	// IMP=0x000000010001e80c
- (double)contentWidthForSuggestionsView:(id)arg1;	// IMP=0x000000010001e7b0
- (void)suggestionsView:(id)arg1 didHideVibrantView:(id)arg2;	// IMP=0x000000010001e710
- (double)statusViewHeightForSuggestionsView:(id)arg1;	// IMP=0x000000010001e6b4
- (double)statusBarHeightForSuggestionsView:(id)arg1;	// IMP=0x000000010001e654
- (void)didShowSuggestionsForSuggestionsView:(id)arg1;	// IMP=0x000000010001e5b8
- (void)conversation:(id)arg1 presentationStateDidChangeForItemsAtIndexPaths:(id)arg2;	// IMP=0x000000010001e59c
- (void)siriDidFinishActionsForConversationItemWithIdentifier:(id)arg1 inConversation:(id)arg2;	// IMP=0x000000010001e554
- (void)conversation:(id)arg1 didRemoveItemsWithIdentifiers:(id)arg2 atIndexPaths:(id)arg3 parentItemIdentifiers:(id)arg4;	// IMP=0x000000010001e4e0
- (void)conversation:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2;	// IMP=0x000000010001e4c4
- (void)conversation:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;	// IMP=0x000000010001e4a8
- (_Bool)inTextInputModeForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001e40c
- (void)willSendStartRequestForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001e408
- (void)transcriptStackViewController:(id)arg1 didDelayPresentationOfItemsWithIdentifiers:(id)arg2;	// IMP=0x000000010001e404
- (void)transcriptStackViewController:(id)arg1 willDiscardConversationItemsWithIdentifiers:(id)arg2;	// IMP=0x000000010001e400
- (void)transcriptStackViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010001e3fc
- (void)transcriptStackViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x000000010001e3f8
- (void)transcriptStackViewController:(id)arg1 didFinishTest:(id)arg2;	// IMP=0x000000010001e3f4
- (void)transcriptStackViewController:(id)arg1 willStartTest:(id)arg2;	// IMP=0x000000010001e3f0
- (void)transcriptStackViewController:(id)arg1 viewDidSetContentSizeForTranscriptAtIndex:(long long)arg2;	// IMP=0x000000010001e3ec
- (void)transcriptStackViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001e3e8
- (void)transcriptStackViewController:(id)arg1 didShowGuideStartDate:(id)arg2 endDate:(id)arg3;	// IMP=0x000000010001e3e4
- (void)transcriptStackViewController:(id)arg1 didShowTipWithIdentifier:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 flowID:(id)arg5;	// IMP=0x000000010001e3e0
- (void)transcriptStackViewController:(id)arg1 didShowAceViewWithIdentifier:(id)arg2 aceViewClass:(Class)arg3 metricsContext:(id)arg4 forInterval:(double)arg5;	// IMP=0x000000010001e3dc
- (void)transcriptStackViewController:(id)arg1 didScrollForInterval:(double)arg2 metricsContext:(id)arg3;	// IMP=0x000000010001e3d8
- (void)transcriptStackViewController:(id)arg1 didEditSpeechRecognized:(id)arg2 forInterval:(double)arg3;	// IMP=0x000000010001e3d4
- (void)transcriptStackViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010001e3d0
- (void)transcriptStackViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2;	// IMP=0x000000010001e3cc
- (void)transcriptStackViewController:(id)arg1 didRequestKeyboardWithVisibility:(_Bool)arg2;	// IMP=0x000000010001e3c8
- (void)transcriptStackViewController:(id)arg1 didDismissViewController:(id)arg2;	// IMP=0x000000010001e3c4
- (void)transcriptStackViewController:(id)arg1 willDismissViewController:(id)arg2;	// IMP=0x000000010001e3c0
- (void)transcriptStackViewController:(id)arg1 didPresentViewController:(id)arg2;	// IMP=0x000000010001e3bc
- (void)transcriptStackViewController:(id)arg1 willPresentViewController:(id)arg2;	// IMP=0x000000010001e3b8
- (void)transcriptStackViewController:(id)arg1 setStatusViewHidden:(_Bool)arg2;	// IMP=0x000000010001e3b4
- (void)transcriptStackViewController:(id)arg1 openURL:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010001e3b0
- (void)transcriptStackViewController:(id)arg1 synthesizeSpeechWithPhoneticText:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010001e3ac
- (void)stopSpeakingForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001e3a8
- (void)transcriptStackViewController:(id)arg1 speakText:(id)arg2 isPhonetic:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010001e3a4
- (void)cancelRequestForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001e3a0
- (void)transcriptStackViewController:(id)arg1 didCorrectRecognition:(id)arg2 correctionIdentifier:(id)arg3 forItemAtIndexPath:(id)arg4 userSelectionResults:(id)arg5;	// IMP=0x000000010001e39c
- (void)transcriptStackViewControllerDidResignFirstResponder:(id)arg1;	// IMP=0x000000010001e398
- (void)transcriptStackViewControllerDidEndEditing:(id)arg1;	// IMP=0x000000010001e394
- (void)transcriptStackViewControllerWillBeginEditing:(id)arg1;	// IMP=0x000000010001e390
- (void)transcriptStackViewController:(id)arg1 didPresentConversationItemsWithIdentifiers:(id)arg2;	// IMP=0x000000010001e38c
- (void)transcriptStackViewController:(id)arg1 didHideVibrantView:(id)arg2;	// IMP=0x000000010001e388
- (void)transcriptStackViewControllerDidShowSuggestions:(id)arg1;	// IMP=0x000000010001e384
- (void)transcriptStackViewControllerDidExitSiriland:(id)arg1;	// IMP=0x000000010001e380
- (void)transcriptStackViewControllerWillEnterSiriland:(id)arg1;	// IMP=0x000000010001e37c
- (CDStruct_a82615c4)keyboardInfoForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001e30c
- (unsigned long long)deviceLockStateForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001e304
- (id)transcriptStackViewController:(id)arg1 updatedUserUtteranceForRefId:(id)arg2;	// IMP=0x000000010001e2fc
- (id)transcriptStackViewController:(id)arg1 additionalSpeechInterpretationsForRefId:(id)arg2;	// IMP=0x000000010001e2f4
- (id)effectiveCoreLocationBundleForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001e2ec
- (_Bool)transcriptStackViewControllerShouldPreventUserInteraction:(id)arg1;	// IMP=0x000000010001e2e4
- (_Bool)transcriptStackViewControllerWillShowSuggestions:(id)arg1;	// IMP=0x000000010001e2dc
- (_Bool)transcriptStackViewControllerShouldDelaySuggestions:(id)arg1;	// IMP=0x000000010001e2d4
- (void)transcriptStackViewController:(id)arg1 performAceCommand:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010001e224
- (long long)initialDisplayTypeForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001e21c
- (double)statusViewHeightForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001e1c0
- (struct CGRect)statusBarFrameForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001e144
- (double)contentWidthForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001e0e8
- (id)siriEnabledAppListForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001e08c
- (id)domainObjectStoreForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001e084
- (id)conversationForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001e074
- (long long)siriStateForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001e06c
- (void)keyboardHeightDidChange;	// IMP=0x000000010001e054
- (void)_createGuideController;	// IMP=0x000000010001de84
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000010001ddf4
- (void)animateOut;	// IMP=0x000000010001dd44
- (void)showRootGuide;	// IMP=0x000000010001dd2c
- (void)showGuideStart;	// IMP=0x000000010001dd14
- (_Bool)isShowingGuide;	// IMP=0x000000010001dcc8
- (void)showGuideAnimated:(_Bool)arg1;	// IMP=0x000000010001db88
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010001dac0
- (void)hideAcousticIDSpinner;	// IMP=0x000000010001da80
- (void)showAcousticIDSpinner;	// IMP=0x000000010001da40
- (void)_showHeaderText:(id)arg1 subheaderText:(id)arg2 largeSubheaderText:(id)arg3;	// IMP=0x000000010001d8d8
- (void)showEmptyView;	// IMP=0x000000010001d874
- (void)showUserNudge;	// IMP=0x000000010001d7ec
- (void)showGreeting;	// IMP=0x000000010001d768
- (void)showUnavailable;	// IMP=0x000000010001d5e4
- (id)_nudgeHeaderText;	// IMP=0x000000010001d4f0
- (id)_initialHeaderText;	// IMP=0x000000010001d3fc
- (void)loadView;	// IMP=0x000000010001d33c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SiriUISuggestionsView *view; // @dynamic view;

@end
