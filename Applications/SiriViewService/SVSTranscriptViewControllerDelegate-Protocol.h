//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFUserUtterance, AFUserUtteranceSelectionResults, AceObject<SAAceCommand>, NSArray, NSBundle, NSDate, NSString, NSURL, NSUUID, SASSpeechRecognized, SVSTranscriptViewController, UIView, UIViewController;

@protocol SVSTranscriptViewControllerDelegate <NSObject>
- (void)willSendStartRequestForTranscriptViewController:(SVSTranscriptViewController *)arg1;
- (unsigned long long)navigationIndexOfTranscriptViewController:(SVSTranscriptViewController *)arg1;
- (_Bool)inTextInputModeForTranscriptViewController:(SVSTranscriptViewController *)arg1;
- (CDStruct_a82615c4)keyboardInfoForTranscriptViewController:(SVSTranscriptViewController *)arg1;
- (void)transcriptViewControllerDidResignFirstResponder:(SVSTranscriptViewController *)arg1;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 failTest:(NSString *)arg2 withReason:(NSString *)arg3;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 didFinishTest:(NSString *)arg2;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 willStartTest:(NSString *)arg2;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 viewDidSetContentSize:(struct CGSize)arg2;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 requestPasscodeUnlockWithCompletion:(void (^)(long long))arg2;
- (unsigned long long)deviceLockStateForTranscriptViewController:(SVSTranscriptViewController *)arg1;
- (AFUserUtterance *)transcriptViewController:(SVSTranscriptViewController *)arg1 updatedUserUtteranceForRefId:(NSString *)arg2;
- (NSArray *)transcriptViewController:(SVSTranscriptViewController *)arg1 additionalSpeechInterpretationsForRefId:(NSString *)arg2;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 didShowGuideStartDate:(NSDate *)arg2 endDate:(NSDate *)arg3;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 didShowTipWithIdentifier:(NSUUID *)arg2 startDate:(NSDate *)arg3 endDate:(NSDate *)arg4 flowID:(NSString *)arg5;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 didShowAceViewWithIdentifier:(NSUUID *)arg2 aceViewClass:(Class)arg3 metricsContext:(NSString *)arg4 forInterval:(double)arg5;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 didScrollForInterval:(double)arg2;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 didEditSpeechRecognized:(SASSpeechRecognized *)arg2 forInterval:(double)arg3;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 shouldPresentPicker:(UIViewController *)arg2 completion:(void (^)(_Bool))arg3;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3 completion:(void (^)(_Bool))arg4;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 didDismissViewController:(UIViewController *)arg2;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 willDismissViewController:(UIViewController *)arg2;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 didPresentViewController:(UIViewController *)arg2;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 willPresentViewController:(UIViewController *)arg2;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 setStatusViewHidden:(_Bool)arg2;
- (void)cancelSpeakingForTranscriptViewController:(SVSTranscriptViewController *)arg1;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 speakText:(NSString *)arg2 isPhonetic:(_Bool)arg3 completion:(void (^)(void))arg4;
- (void)cancelRequestForTranscriptViewController:(SVSTranscriptViewController *)arg1;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 didRequestKeyboardWithVisibility:(_Bool)arg2;
- (void)transcriptViewControllerDidEndEditing:(SVSTranscriptViewController *)arg1;
- (void)transcriptViewControllerWillBeginEditing:(SVSTranscriptViewController *)arg1;
- (_Bool)transcriptViewControllerShouldPreventUserInteraction:(SVSTranscriptViewController *)arg1;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 showSiriStatusWithText:(NSString *)arg2 speakableDescription:(NSString *)arg3;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 didCorrectRecognition:(NSString *)arg2 correctionIdentifier:(id)arg3 forItemAtIndex:(long long)arg4 userSelectionResults:(AFUserUtteranceSelectionResults *)arg5;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 openURL:(NSURL *)arg2 conversationItemIdentifier:(NSUUID *)arg3 completion:(void (^)(_Bool))arg4;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 performAceCommand:(AceObject<SAAceCommand> *)arg2 conversationItemIdentifier:(NSUUID *)arg3 completion:(void (^)(_Bool))arg4;
- (NSBundle *)effectiveCoreLocationBundleForTranscriptViewController:(SVSTranscriptViewController *)arg1;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 didDelayPresentationOfItemsWithIdentifiers:(NSArray *)arg2;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 willDiscardConversationItemsWithIdentifiers:(NSArray *)arg2;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 didPresentConversationItemsWithIdentifiers:(NSArray *)arg2;
- (void)transcriptViewController:(SVSTranscriptViewController *)arg1 didHideVibrantView:(UIView *)arg2;
- (void)transcriptViewControllerDidShowSuggestions:(SVSTranscriptViewController *)arg1;
- (_Bool)transcriptViewControllerWillShowSuggestions:(SVSTranscriptViewController *)arg1;
- (_Bool)transcriptViewControllerShouldDelaySuggestions:(SVSTranscriptViewController *)arg1;
- (long long)initialDisplayTypeForTranscriptViewController:(SVSTranscriptViewController *)arg1;
- (double)statusViewHeightForTranscriptViewController:(SVSTranscriptViewController *)arg1;
- (struct CGRect)statusBarFrameForTranscriptViewController:(SVSTranscriptViewController *)arg1;
- (struct CGSize)estimatedVisibleContentSizeForTranscriptViewController:(SVSTranscriptViewController *)arg1;
- (double)contentWidthForTranscriptViewController:(SVSTranscriptViewController *)arg1;
@end

