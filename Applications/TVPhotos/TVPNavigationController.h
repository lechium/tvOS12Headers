//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "UINavigationControllerDelegate.h"

@class NSString;

@interface TVPNavigationController : UINavigationController <UINavigationControllerDelegate>
{
}

- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;	// IMP=0x0000000100095630
- (void)setDelegate:(id)arg1;	// IMP=0x0000000100095578
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000954dc
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100095448
- (void)pu_configureAsRootViewController;	// IMP=0x000000010004b3e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

