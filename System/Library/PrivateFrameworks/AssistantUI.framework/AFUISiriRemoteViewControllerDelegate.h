/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFUISiriRemoteViewControllerDelegate <NSObject>
@required
-(void)viewWillAppearFinishedForSiriRemoteViewController:(id)arg1;
-(void)viewWillDisappearFinishedForSiriRemoteViewController:(id)arg1;
-(void)siriRemoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2;
-(long long)siriRemoteViewControllerRequestsActivationSource:(id)arg1;
-(void)dismissSiriRemoteViewController:(id)arg1 delayForTTS:(BOOL)arg2 userInfo:(id)arg3;
-(void)startGuidedAccessForRemoteViewController:(id)arg1;
-(void)siriRemoteViewController:(id)arg1 didReadBulletinWithIdentifier:(id)arg2;
-(void)siriRemoteViewController:(id)arg1 startRequestWithOptions:(id)arg2;
-(void)userRelevantEventDidOccurInSiriRemoteViewController:(id)arg1;
-(void)siriRemoteViewController:(id)arg1 didRequestCurrentTextInputWithReplyHandler:(/*^block*/id)arg2;
-(void)siriRemoteViewController:(id)arg1 launchApplicationWithBundleIdentifier:(id)arg2 withURL:(id)arg3 launchOptions:(long long)arg4 replyHandler:(/*^block*/id)arg5;
-(void)notifyOnNextUserInteractionForSiriRemoteViewController:(id)arg1;
-(void)siriRemoteViewController:(id)arg1 siriIdleAndQuietStatusDidChange:(BOOL)arg2;
-(void)siriRemoteViewController:(id)arg1 setStatusViewHidden:(BOOL)arg2;
-(void)siriRemoteViewController:(id)arg1 setCarDisplaySnippetVisible:(BOOL)arg2;
-(void)siriRemoteViewController:(id)arg1 setCarDisplayGatekeeperVisible:(BOOL)arg2;
-(void)siriRemoteViewController:(id)arg1 setStatusViewDisabled:(BOOL)arg2;
-(void)siriRemoteViewController:(id)arg1 setStatusViewUserInteractionEnabled:(BOOL)arg2;
-(void)siriRemoteViewController:(id)arg1 willPresentViewControllerWithStatusBarStyle:(long long)arg2;
-(void)siriRemoteViewController:(id)arg1 didPresentViewControllerWithStatusBarStyle:(long long)arg2;
-(void)siriRemoteViewController:(id)arg1 willDismissViewControllerWithStatusBarStyle:(long long)arg2;
-(void)siriRemoteViewController:(id)arg1 didDismissViewControllerWithStatusBarStyle:(long long)arg2;
-(void)siriRemoteViewController:(id)arg1 setStatusBarHidden:(BOOL)arg2 animated:(BOOL)arg3;
-(void)siriRemoteViewController:(id)arg1 setStatusBarHidden:(BOOL)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)siriRemoteViewController:(id)arg1 setHelpButtonEmphasized:(BOOL)arg2;
-(void)siriRemoteViewController:(id)arg1 setBugReportingAvailable:(BOOL)arg2;
-(void)siriRemoteViewController:(id)arg1 handlePasscodeUnlockWithCompletion:(/*^block*/id)arg2;
-(void)siriRemoteViewControllerPulseHelpButton:(id)arg1;
-(void)siriRemoteViewController:(id)arg1 didRequestKeyboard:(BOOL)arg2;
-(void)siriRemoteViewController:(id)arg1 didRequestKeyboard:(BOOL)arg2 minimized:(BOOL)arg3;
-(void)siriRemoteViewControllerDidResetTextInput:(id)arg1;
-(void)siriRemoteViewControllerWillBeginTapToEdit:(id)arg1;
-(void)siriRemoteViewControllerDidEndTapToEdit:(id)arg1;
-(void)siriRemoteViewController:(id)arg1 willStartTest:(id)arg2;
-(void)siriRemoteViewController:(id)arg1 didFinishTest:(id)arg2;
-(void)siriRemoteViewController:(id)arg1 failTest:(id)arg2 withReason:(id)arg3;
-(void)siriRemoteViewControllerDidEnterUITrackingMode:(id)arg1;
-(void)siriRemoteViewControllerDidExitUITrackingMode:(id)arg1;
-(void)siriRemoteViewControllerDidPresentUserInterface:(id)arg1;
-(void)siriRemoteViewController:(id)arg1 openURL:(id)arg2 delaySessionEndForTTS:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(BOOL)siriRemoteViewController:(id)arg1 openURL:(id)arg2 appBundleID:(id)arg3 allowSiriDismissal:(BOOL)arg4;
-(void)siriRemoteViewControllerDidDetectMicButtonTap:(id)arg1;
-(void)siriRemoteViewControllerDidDetectMicButtonLongPressBegan:(id)arg1;
-(void)siriRemoteViewControllerDidDetectMicButtonLongPressEnded:(id)arg1;
-(void)siriRemoteViewController:(id)arg1 didChangePresentationPeekMode:(unsigned long long)arg2;
-(void)siriRemoteViewControllerDidPresentConversationFromBreadcrumb:(id)arg1;
-(void)siriRemoteViewControllerDidDetectAudioRoutePickerTap:(id)arg1;
-(void)siriRemoteViewController:(id)arg1 didEncounterUnexpectedServiceError:(id)arg2;

@end

