//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@interface UIViewController (MTAdditions)
+ (id)mt_rootViewController;	// IMP=0x0000000100111b08
- (id)mt_topViewControllerExcludingPopovers;	// IMP=0x0000000100111a4c
- (id)mt_topViewController;	// IMP=0x00000001001119ac
- (_Bool)mt_isVisible;	// IMP=0x0000000100111930
- (void)simulateMemoryWarning;	// IMP=0x000000010011192c
- (_Bool)isADescendantOfParentViewController:(id)arg1;	// IMP=0x000000010011184c
- (void)visitChildenViewControllers:(CDUnknownBlockType)arg1;	// IMP=0x00000001001116ec
- (id)recursiveDescription;	// IMP=0x0000000100111680
- (id)_recursiveDescriptionWithLevel:(long long)arg1 result:(id)arg2;	// IMP=0x0000000100111460
@end

