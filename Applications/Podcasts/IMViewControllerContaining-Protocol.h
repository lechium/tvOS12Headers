//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMViewControllerTransition, NSArray, UIViewController<IMViewControllerContaining>;

@protocol IMViewControllerContaining <NSObject>
+ (_Bool)canHostChildViewControllers;
@property(readonly, nonatomic) NSArray *im_childViewControllers;
@property(readonly, nonatomic) UIViewController<IMViewControllerContaining> *im_parentViewController;
- (void)im_dismissModalViewControllerAnimated:(_Bool)arg1;
- (void)im_presentModalViewController:(UIViewController<IMViewControllerContaining> *)arg1 animated:(_Bool)arg2;
- (void)im_addChildViewController:(UIViewController<IMViewControllerContaining> *)arg1;
- (void)im_removeFromParentViewController;

@optional
@property(retain, nonatomic) IMViewControllerTransition *transitionItem;
- (void)didMoveToParentViewController:(UIViewController<IMViewControllerContaining> *)arg1;
- (void)willMoveToParentViewController:(UIViewController<IMViewControllerContaining> *)arg1;
- (_Bool)isMovingFromParentViewController;
- (_Bool)isMovingToParentViewController;
- (_Bool)isBeingDismissed;
- (_Bool)isBeingPresented;
- (void)cancelBeginAppearanceTransition;
- (void)endAppearanceTransition;
- (void)beginAppearanceTransition:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
@end
