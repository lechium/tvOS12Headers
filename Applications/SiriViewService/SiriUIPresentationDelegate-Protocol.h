//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFUIRequestOptions, AFUserUtterance, AFUserUtteranceSelectionResults, AceObject<SAAceCommand>, NSArray, NSBundle, NSDate, NSIndexPath, NSString, NSURL, NSUUID, SASSpeechRecognized, UIViewController;

@protocol SiriUIPresentationDelegate <NSObject>
- (void)siriPresentationDidHideUnlockScreen:(id <SiriUIPresentation>)arg1;
- (void)siriPresentationDidResignFirstResponder:(id <SiriUIPresentation>)arg1;
- (void)siriPresentationDidEndEditing:(id <SiriUIPresentation>)arg1;
- (void)siriPresentationWillBeginEditing:(id <SiriUIPresentation>)arg1;
- (AFUserUtterance *)siriPresentation:(id <SiriUIPresentation>)arg1 updatedUserUtteranceForRefId:(NSString *)arg2;
- (NSArray *)siriPresentation:(id <SiriUIPresentation>)arg1 additionalSpeechInterpretationsForRefId:(NSString *)arg2;
- (void)siriPresentationClearContext:(id <SiriUIPresentation>)arg1;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 didChangePeekMode:(unsigned long long)arg2;
- (void)siriPresentationMicButtonLongPressEnded:(id <SiriUIPresentation>)arg1;
- (void)siriPresentationMicButtonLongPressBegan:(id <SiriUIPresentation>)arg1;
- (void)siriPresentationMicButtonWasTapped:(id <SiriUIPresentation>)arg1;
- (void)siriPresentationDidPresentCarPlayGatekeeper:(id <SiriUIPresentation>)arg1;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 didShowGuideStartTime:(NSDate *)arg2 endTime:(NSDate *)arg3;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 didShowTipWithIdentifier:(NSUUID *)arg2 startDate:(NSDate *)arg3 endDate:(NSDate *)arg4 flowID:(NSString *)arg5;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 didShowAceViewWithIdentifier:(NSUUID *)arg2 aceViewClass:(Class)arg3 metricsContext:(NSString *)arg4 forInterval:(double)arg5;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 didScrollForInterval:(double)arg2 metricsContext:(NSString *)arg3;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 didEditSpeechRecognized:(SASSpeechRecognized *)arg2 forInterval:(double)arg3;
- (void)siriPresentationDidPresentUserInterface:(id <SiriUIPresentation>)arg1;
- (_Bool)inTextInputModeForSiriPresentation:(id <SiriUIPresentation>)arg1;
- (_Bool)siriPresentationShouldDelaySuggestions:(id <SiriUIPresentation>)arg1;
- (void)siriPresentationDidDismissBugReporter:(id <SiriUIPresentation>)arg1;
- (void)siriPresentationDidPresentBugReporter:(id <SiriUIPresentation>)arg1;
- (void)siriPresentationDidPresentConversationFromBreadcrumb:(id <SiriUIPresentation>)arg1;
- (void)siriPresentationPulseHelpButton:(id <SiriUIPresentation>)arg1;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 setBugReportingAvailable:(_Bool)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 setHelpButtonEmphasized:(_Bool)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 didRequestKeyboardWithVisibility:(_Bool)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 didDismissViewController:(UIViewController *)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 willDismissViewController:(UIViewController *)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 didPresentViewController:(UIViewController *)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 willPresentViewController:(UIViewController *)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3 completion:(void (^)(_Bool))arg4;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 setStatusViewDisabled:(_Bool)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 setStatusViewUserInteractionEnabled:(_Bool)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 setCarDisplayGatekeeperVisible:(_Bool)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 setCarDisplaySnippetVisible:(_Bool)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 setStatusViewHidden:(_Bool)arg2;
- (void)handlePasscodeUnlockForSiriPresentation:(id <SiriUIPresentation>)arg1 withCompletion:(void (^)(long long))arg2;
- (void)siriPresentationRemoveAcousticIDSpinner:(id <SiriUIPresentation>)arg1;
- (void)siriPresentationPresentAcousticIDSpinner:(id <SiriUIPresentation>)arg1;
- (void)getScreenshotImageForSiriPresentation:(id <SiriUIPresentation>)arg1 withCompletion:(void (^)(UIImage *))arg2;
- (void)notifyOnNextUserInteractionForSiriPresentation:(id <SiriUIPresentation>)arg1;
- (void)disableIdleTimerForSiriPresentation:(id <SiriUIPresentation>)arg1;
- (void)enableIdleTimerForSiriPresentation:(id <SiriUIPresentation>)arg1;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 openURL:(NSURL *)arg2 appBundleID:(NSString *)arg3 allowSiriDismissal:(_Bool)arg4;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 openURL:(NSURL *)arg2 conversationItemIdentifier:(NSUUID *)arg3 completion:(void (^)(_Bool))arg4;
- (NSBundle *)effectiveCoreLocationBundleForSiriPresentation:(id <SiriUIPresentation>)arg1;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 performAceCommand:(AceObject<SAAceCommand> *)arg2 conversationItemIdentifier:(NSUUID *)arg3 completion:(void (^)(_Bool))arg4;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 didCorrectRecognition:(NSString *)arg2 correctionIdentifier:(id)arg3 forItemAtIndexPath:(NSIndexPath *)arg4;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 didCorrectRecognition:(NSString *)arg2 correctionIdentifier:(id)arg3 forConversationItemWithIdentifier:(NSUUID *)arg4 userSelectionResults:(AFUserUtteranceSelectionResults *)arg5;
- (void)stopSpeakingForSiriPresentation:(id <SiriUIPresentation>)arg1;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 synthesizeSpeechWithPhoneticText:(NSString *)arg2 completion:(void (^)(void))arg3;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 synthesizeSpeechWithText:(NSString *)arg2 completion:(void (^)(void))arg3;
- (unsigned long long)siriDeviceLockStateForSiriPresentation:(id <SiriUIPresentation>)arg1;
- (_Bool)siriIsSpeakingForSiriPresentation:(id <SiriUIPresentation>)arg1;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 didDelayPresentationOfItemsWithIdentifiers:(NSArray *)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 willDiscardConversationItemsWithIdentifiers:(NSArray *)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 didPresentItemsAtIndexPaths:(NSArray *)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 didPresentConversationItemsWithIdentifiers:(NSArray *)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 didPrepareAnimationLinkedConversationItem:(NSUUID *)arg2 animationBlock:(void (^)(void))arg3;
- (void)endSiriSessionForSiriPresentation:(id <SiriUIPresentation>)arg1 delayForTTS:(_Bool)arg2;
- (void)endSiriSessionForSiriPresentation:(id <SiriUIPresentation>)arg1;
- (void)forceAudioSessionInactiveForSiriPresentation:(id <SiriUIPresentation>)arg1;
- (void)cancelRequestForSiriPresentation:(id <SiriUIPresentation>)arg1;
- (void)stopRecordingSpeechForSiriPresentation:(id <SiriUIPresentation>)arg1;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 startRequestWithOptions:(AFUIRequestOptions *)arg2;
- (double)statusViewHeightForSiriPresentation:(id <SiriUIPresentation>)arg1;
- (struct CGRect)statusBarFrameForSiriPresentation:(id <SiriUIPresentation>)arg1;
- (double)contentWidthForForSiriPresentation:(id <SiriUIPresentation>)arg1;

@optional
- (void)siriPresentationWillSendStartRequest:(id <SiriUIPresentation>)arg1;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 failTest:(NSString *)arg2 withReason:(NSString *)arg3;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 didFinishTest:(NSString *)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 willStartTest:(NSString *)arg2;
@end

