//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIViewControllerTransitioningDelegate.h"

@class NSString;

@interface PBTVButtonChangeViewController : UIViewController <UIViewControllerTransitioningDelegate>
{
    CDUnknownBlockType _dismissalCompletion;	// 8 = 0x8
}

@property(copy, nonatomic) CDUnknownBlockType dismissalCompletion; // @synthesize dismissalCompletion=_dismissalCompletion;
- (void).cxx_destruct;	// IMP=0x00000001000da5a4
- (void)_dismissViewControllerWithValue:(_Bool)arg1;	// IMP=0x00000001000da42c
- (void)_handleHomeButton:(id)arg1;	// IMP=0x00000001000da350
- (void)_handleMenuButton:(id)arg1;	// IMP=0x00000001000da274
- (void)_handleOK;	// IMP=0x00000001000da254
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x00000001000da1d8
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x00000001000da1a4
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x00000001000da170
- (void)viewDidLoad;	// IMP=0x00000001000d9d40
- (void)dealloc;	// IMP=0x00000001000d9cb8
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000d9c1c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
