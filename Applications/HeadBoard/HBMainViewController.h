//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "HBAppGridViewControllerDelegate.h"
#import "MCProfileConnectionObserver.h"

@class HBAppGridViewController, HBAppRoot, HBRootItem, HBTopShelfHostViewController, NSMutableDictionary, NSString;

@interface HBMainViewController : UIViewController <HBAppGridViewControllerDelegate, MCProfileConnectionObserver>
{
    _Bool _resignFocus;	// 8 = 0x8
    int _screenSaverNotificationToken;	// 12 = 0xc
    HBAppGridViewController *_gridViewController;	// 16 = 0x10
    HBAppRoot *_appRoot;	// 24 = 0x18
    HBRootItem *_currentTopShelfItem;	// 32 = 0x20
    NSMutableDictionary *_appIdentifierToExtensionMonitor;	// 40 = 0x28
    HBTopShelfHostViewController *_topShelfViewController;	// 48 = 0x30
    CDUnknownBlockType _topShelfDelayCallback;	// 56 = 0x38
    CDUnknownBlockType _topShelfDecelerationCompleteCallback;	// 64 = 0x40
    UIViewController *_currentTopShelfItemViewController;	// 72 = 0x48
}

+ (void)initialize;	// IMP=0x000000010009b428
@property(retain, nonatomic) UIViewController *currentTopShelfItemViewController; // @synthesize currentTopShelfItemViewController=_currentTopShelfItemViewController;
@property(copy, nonatomic) CDUnknownBlockType topShelfDecelerationCompleteCallback; // @synthesize topShelfDecelerationCompleteCallback=_topShelfDecelerationCompleteCallback;
@property(copy, nonatomic) CDUnknownBlockType topShelfDelayCallback; // @synthesize topShelfDelayCallback=_topShelfDelayCallback;
@property(retain, nonatomic) HBTopShelfHostViewController *topShelfViewController; // @synthesize topShelfViewController=_topShelfViewController;
@property(retain, nonatomic) NSMutableDictionary *appIdentifierToExtensionMonitor; // @synthesize appIdentifierToExtensionMonitor=_appIdentifierToExtensionMonitor;
@property(retain, nonatomic) HBRootItem *currentTopShelfItem; // @synthesize currentTopShelfItem=_currentTopShelfItem;
@property(retain, nonatomic) HBAppRoot *appRoot; // @synthesize appRoot=_appRoot;
@property(retain, nonatomic) HBAppGridViewController *gridViewController; // @synthesize gridViewController=_gridViewController;
- (void).cxx_destruct;	// IMP=0x000000010009ed30
- (id)_debugDumpTopShelfForAppIdentifier:(id)arg1;	// IMP=0x000000010009eb64
- (void)_handleTopShelfDecelerationCallback;	// IMP=0x000000010009ead4
- (void)_removeDemoStateStore;	// IMP=0x000000010009e5e4
- (void)_resetStoreDemoState;	// IMP=0x000000010009e218
- (id)_extensionForApp:(id)arg1;	// IMP=0x000000010009e180
- (void)_unregisterTopShelfExtensionForAppIdentifier:(id)arg1;	// IMP=0x000000010009e0fc
- (void)_registerTopShelfExtensionForApp:(id)arg1;	// IMP=0x000000010009df70
- (void)_purgeAssetCache;	// IMP=0x000000010009df10
- (void)_handleTVTapEvent:(id)arg1;	// IMP=0x000000010009de70
- (void)_menuGesture:(id)arg1;	// IMP=0x000000010009dd04
- (void)_resignFocusForIdleScreen;	// IMP=0x000000010009dc84
- (void)_becomeFocusedFromIdleScreen;	// IMP=0x000000010009dbb8
- (void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000010009d998
- (void)reloadAppRoot;	// IMP=0x000000010009d820
- (void)gridViewControllerItemsBecameReady:(id)arg1;	// IMP=0x000000010009d15c
- (void)gridViewControllerDidScrollCloseEnoughToTop:(id)arg1;	// IMP=0x000000010009d150
- (void)gridViewControllerDidEndDecelerating:(id)arg1;	// IMP=0x000000010009d144
- (void)gridViewController:(id)arg1 itemMovedOutOfDock:(id)arg2 replacedWithItem:(id)arg3;	// IMP=0x000000010009d084
- (void)gridViewController:(id)arg1 itemMovedIntoDock:(id)arg2;	// IMP=0x000000010009cfc4
- (void)gridViewController:(id)arg1 didFocusOnItemInDock:(id)arg2 inDirection:(long long)arg3;	// IMP=0x000000010009cf10
- (void)gridViewController:(id)arg1 willUnfocusOnItemInDock:(id)arg2 inDirection:(long long)arg3;	// IMP=0x000000010009ce80
- (void)applicationDidBecomeActiveNotification:(id)arg1;	// IMP=0x000000010009cc98
- (void)applicationWillResignActiveNotification:(id)arg1;	// IMP=0x000000010009cbd4
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x000000010009c9e0
- (void)_updateTopShelfWithItem:(id)arg1 inDirection:(long long)arg2;	// IMP=0x000000010009c458
- (void)_delayedTopShelfChange;	// IMP=0x000000010009c3c8
- (void)prepareForTransitionWithType:(long long)arg1 animationDuration:(double)arg2 delay:(double)arg3;	// IMP=0x000000010009c180
- (id)preferredFocusEnvironments;	// IMP=0x000000010009c078
- (void)viewDidLoad;	// IMP=0x000000010009bc28
- (void)dealloc;	// IMP=0x000000010009bb60
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010009b4a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

