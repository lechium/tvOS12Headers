//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SiriUIAceObjectViewControllerDelegate.h"

@class NSArray, NSDate, NSSet, SiriUISnippetViewController, UIViewController;

@protocol SiriUISnippetViewControllerDelegate <SiriUIAceObjectViewControllerDelegate>
- (void)siriSnippetViewController:(SiriUISnippetViewController *)arg1 requestPasscodeUnlockWithCompletion:(void (^)(long long))arg2;
- (_Bool)siriSnippetViewControllerIsVisible:(id <SiriUIViewController>)arg1;
- (void)siriSnippetViewController:(id <SiriUIViewController>)arg1 didShowGuideStartDate:(NSDate *)arg2 endDate:(NSDate *)arg3;
- (void)siriSnippetViewController:(id <SiriUIViewController>)arg1 shouldPresentPicker:(UIViewController *)arg2 completion:(void (^)(_Bool))arg3;
- (void)siriSnippetViewController:(id <SiriUIViewController>)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3 completion:(void (^)(_Bool))arg4;
- (void)siriSnippetViewController:(id <SiriUIViewController>)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3;
- (void)siriSnippetViewControllerViewDidLoad:(id <SiriUIViewController>)arg1;
- (void)siriSnippetViewControllerWillBecomeFirstResponder:(id <SiriUIViewController>)arg1;
- (void)siriSnippetViewController:(id <SiriUIViewController>)arg1 pushSirilandSnippets:(NSArray *)arg2;

@optional
- (double)boundingWidthForSnippetViewController:(SiriUISnippetViewController *)arg1;
- (unsigned long long)navigationIndexOfSnippetViewController:(SiriUISnippetViewController *)arg1;
- (NSSet *)siriEnabledAppListForSiriViewController:(id <SiriUIViewController>)arg1;
- (unsigned long long)siriDeviceLockStateForSnippetViewController:(id <SiriUIViewController>)arg1;
@end

