//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "HBAppGridViewDataSource.h"
#import "HBAppGridViewDelegate.h"
#import "HBBubbleAnimatorViewProvider.h"
#import "HBFolderObserver.h"
#import "NSCacheDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class HBAlertController, HBAppDeleteHintView, HBAppGridView, HBFolder, HBFolderViewControllerTransitioningDelegate, HBRootItem, HBSingleCellHostView, HBUninstallConfirmationController, NSCache, NSMutableArray, NSString, TVSStateMachine, UITapGestureRecognizer, UIView;

@interface HBAppGridViewController : UIViewController <NSCacheDelegate, HBAppGridViewDataSource, HBAppGridViewDelegate, HBBubbleAnimatorViewProvider, HBFolderObserver, UIGestureRecognizerDelegate>
{
    struct {
        unsigned int delegateDidFocusOnItem:1;
        unsigned int delegateDidFocusOnItemInDock:1;
        unsigned int delegateWillUnfocusOnItemInDock:1;
        unsigned int delegateItemMoveIntoDock:1;
        unsigned int delegateItemMoveOutOfDockReplaceWithItem:1;
        unsigned int delegateItemsBecameReady:1;
        unsigned int delegateEditingStateChanged:1;
        unsigned int delegateDidEndDecelerating:1;
        unsigned int delegateDidScrollCloseEnoughToTop:1;
    } _flags;	// 8 = 0x8
    _Bool _dockMode;	// 12 = 0xc
    double _touchHintDisplayStartTime;	// 16 = 0x10
    _Bool _updatePending;	// 24 = 0x18
    _Bool _needsUpdateForAnimatorCompletion;	// 25 = 0x19
    _Bool _shouldIgnoreFolderChanges;	// 26 = 0x1a
    _Bool _shouldCaptureFocusForFolderResign;	// 27 = 0x1b
    _Bool _stableEditingState;	// 28 = 0x1c
    id <HBAppGridViewControllerDelegate> _delegate;	// 32 = 0x20
    HBRootItem *_focusedItem;	// 40 = 0x28
    HBSingleCellHostView *_editingSnapshotTransitionView;	// 48 = 0x30
    UITapGestureRecognizer *_editingMenuGesture;	// 56 = 0x38
    UITapGestureRecognizer *_editingTVButtonGesture;	// 64 = 0x40
    UITapGestureRecognizer *_editingSelectGesture;	// 72 = 0x48
    UITapGestureRecognizer *_editingPlayPauseGesture;	// 80 = 0x50
    HBFolderViewControllerTransitioningDelegate *_strongTransitioningDelegate;	// 88 = 0x58
    HBUninstallConfirmationController *_uninstallConfirmationController;	// 96 = 0x60
    HBAlertController *_editingAlertController;	// 104 = 0x68
    TVSStateMachine *_editingHintStateMachine;	// 112 = 0x70
    HBAppDeleteHintView *_hintView;	// 120 = 0x78
    NSCache *_prefetchedIcons;	// 128 = 0x80
    NSMutableArray *_mutablePrefetchIndexPaths;	// 136 = 0x88
    HBAppGridView *_appGridView;	// 144 = 0x90
    HBFolder *_folder;	// 152 = 0x98
    NSMutableArray *_items;	// 160 = 0xa0
}

+ (id)_subItemsFromItems:(id)arg1 aroundIndex:(unsigned long long)arg2 amount:(unsigned long long)arg3;	// IMP=0x0000000100093778
+ (_Bool)_canRemoveApp:(id)arg1;	// IMP=0x0000000100092754
+ (void)initialize;	// IMP=0x000000010008bc48
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) HBFolder *folder; // @synthesize folder=_folder;
@property(retain, nonatomic) HBAppGridView *appGridView; // @synthesize appGridView=_appGridView;
@property(retain, nonatomic) NSMutableArray *mutablePrefetchIndexPaths; // @synthesize mutablePrefetchIndexPaths=_mutablePrefetchIndexPaths;
@property(retain, nonatomic) NSCache *prefetchedIcons; // @synthesize prefetchedIcons=_prefetchedIcons;
@property(nonatomic) _Bool stableEditingState; // @synthesize stableEditingState=_stableEditingState;
@property(retain, nonatomic) HBAppDeleteHintView *hintView; // @synthesize hintView=_hintView;
@property(retain, nonatomic) TVSStateMachine *editingHintStateMachine; // @synthesize editingHintStateMachine=_editingHintStateMachine;
@property(nonatomic) _Bool shouldCaptureFocusForFolderResign; // @synthesize shouldCaptureFocusForFolderResign=_shouldCaptureFocusForFolderResign;
@property(nonatomic) _Bool shouldIgnoreFolderChanges; // @synthesize shouldIgnoreFolderChanges=_shouldIgnoreFolderChanges;
@property(nonatomic) _Bool needsUpdateForAnimatorCompletion; // @synthesize needsUpdateForAnimatorCompletion=_needsUpdateForAnimatorCompletion;
@property(nonatomic, getter=isUpdatePending) _Bool updatePending; // @synthesize updatePending=_updatePending;
@property(retain, nonatomic) HBAlertController *editingAlertController; // @synthesize editingAlertController=_editingAlertController;
@property(retain, nonatomic) HBUninstallConfirmationController *uninstallConfirmationController; // @synthesize uninstallConfirmationController=_uninstallConfirmationController;
@property(retain, nonatomic) HBFolderViewControllerTransitioningDelegate *strongTransitioningDelegate; // @synthesize strongTransitioningDelegate=_strongTransitioningDelegate;
@property(retain, nonatomic) UITapGestureRecognizer *editingPlayPauseGesture; // @synthesize editingPlayPauseGesture=_editingPlayPauseGesture;
@property(retain, nonatomic) UITapGestureRecognizer *editingSelectGesture; // @synthesize editingSelectGesture=_editingSelectGesture;
@property(retain, nonatomic) UITapGestureRecognizer *editingTVButtonGesture; // @synthesize editingTVButtonGesture=_editingTVButtonGesture;
@property(retain, nonatomic) UITapGestureRecognizer *editingMenuGesture; // @synthesize editingMenuGesture=_editingMenuGesture;
@property(retain, nonatomic) HBSingleCellHostView *editingSnapshotTransitionView; // @synthesize editingSnapshotTransitionView=_editingSnapshotTransitionView;
@property(retain, nonatomic) HBRootItem *focusedItem; // @synthesize focusedItem=_focusedItem;
@property(nonatomic) __weak id <HBAppGridViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100096730
- (id)_newEditingHintStateMachine;	// IMP=0x0000000100095938
- (void)_handleTouchEndWhileWaitingForHintTimerExpireEvent;	// IMP=0x0000000100095910
- (void)_handleMinimumShowHintOnTouchEndEvent;	// IMP=0x0000000100095848
- (void)_handleShowHintEventForTouchEvent;	// IMP=0x000000010009580c
- (void)_handleTouchBeginWhileStableEvent;	// IMP=0x00000001000957b0
- (void)_handleBeginStableEditingEvent;	// IMP=0x0000000100095794
- (void)_handleEndStableEditingEvent;	// IMP=0x000000010009576c
- (void)_postHintEndEventForTimer;	// IMP=0x0000000100095724
- (void)_handleShowHintEvent:(double)arg1;	// IMP=0x00000001000954b4
- (void)_postWaitingToHintTimerExpireEvent;	// IMP=0x000000010009546c
- (void)_handleHintBeginEvent;	// IMP=0x0000000100095450
- (void)_handleHintDismissalForEvent;	// IMP=0x00000001000952b0
- (void)setNeedsUpdate;	// IMP=0x0000000100095180
- (void)_profileListChanged:(id)arg1;	// IMP=0x0000000100095090
- (void)_enterIdleMode:(id)arg1;	// IMP=0x000000010009507c
- (void)_applicationWillResignActive:(id)arg1;	// IMP=0x0000000100095068
- (void)_completeTransitionFromApp:(id)arg1 toIndex:(long long)arg2 transitionView:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100094930
- (void)_zoomResignItemTransitionAnimationCompleteWithApp:(id)arg1 fromFolder:(id)arg2 transitionView:(id)arg3 resignTransitionToLeft:(_Bool)arg4;	// IMP=0x0000000100094274
- (void)_resignApp:(id)arg1 toFolder:(id)arg2 resignTransitionToLeft:(_Bool)arg3;	// IMP=0x0000000100093f70
- (void)_zoomLaunchItemTransitionAnimationCompleteWithApp:(id)arg1 transitionView:(id)arg2;	// IMP=0x0000000100093db4
- (void)_startTransitionFromApp:(id)arg1 toFolder:(id)arg2;	// IMP=0x0000000100093934
- (id)_snapshotOfFocusedCell;	// IMP=0x00000001000936c8
- (void)_openFolder:(id)arg1;	// IMP=0x0000000100093438
- (id)_proposedFolderNameForTargetApp:(id)arg1 editedApp:(id)arg2;	// IMP=0x0000000100093194
- (id)_possibleDestinationFoldersForApp:(id)arg1;	// IMP=0x000000010009306c
- (void)_attemptToRemoveApp:(id)arg1;	// IMP=0x00000001000927b0
- (long long)_animationDirectionFromItem:(id)arg1 toItem:(id)arg2;	// IMP=0x0000000100092600
- (id)_appGridViewItemAtIndexPath:(id)arg1;	// IMP=0x000000010009250c
- (id)_indexPathOfItem:(id)arg1;	// IMP=0x000000010009245c
- (void)_handlePlayPauseGestureWhileEditing:(id)arg1;	// IMP=0x0000000100091964
- (void)_handleGestureToEndEditing:(id)arg1;	// IMP=0x00000001000918fc
- (void)_commitItemsToFolder:(id)arg1;	// IMP=0x0000000100091828
- (void)_handleEditingStateChange;	// IMP=0x0000000100091370
- (void)_attemptToEndEditingWithReason:(long long)arg1 shouldSave:(_Bool)arg2;	// IMP=0x000000010009115c
- (void)_startEditingWithSnapshotView:(id)arg1;	// IMP=0x00000001000910bc
- (void)_startEditing;	// IMP=0x0000000100091034
@property(readonly, nonatomic, getter=isEditing) _Bool editing;
@property(readonly, nonatomic, getter=isEditingAllowed) _Bool editingAllowed;
- (void)_prefetchItems;	// IMP=0x000000010009089c
- (id)viewsForAnimator:(id)arg1;	// IMP=0x00000001000906c4
- (void)appGridViewDidEndStableEditing:(id)arg1;	// IMP=0x0000000100090664
- (void)appGridViewDidBeginStableEditing:(id)arg1;	// IMP=0x0000000100090604
- (void)appGridViewDidStableTouchEndWhileEditing:(id)arg1;	// IMP=0x00000001000905bc
- (void)appGridViewDidStableTouchBeginWhileEditing:(id)arg1;	// IMP=0x0000000100090574
- (void)appGridViewDidScrollCloseEnoughToTop:(id)arg1;	// IMP=0x0000000100090508
- (void)appGridViewDidEndDecelerating:(id)arg1;	// IMP=0x00000001000904a0
- (void)appGridView:(id)arg1 didFocusItemAtIndexPath:(id)arg2;	// IMP=0x00000001000903d8
- (void)appGridView:(id)arg1 didLongPressItemAtIndexPath:(id)arg2;	// IMP=0x0000000100090394
- (void)appGridView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010008fca0
- (void)prioritizeAppInstallIfApplicable:(id)arg1;	// IMP=0x000000010008fa40
- (id)preferredFocusIndexPathInAppGridView:(id)arg1;	// IMP=0x000000010008f9e0
- (void)appGridView:(id)arg1 droppedItemAtIndexPathOutOfBounds:(id)arg2 isLeft:(_Bool)arg3;	// IMP=0x000000010008f898
- (void)_moveApp:(id)arg1 toFolder:(id)arg2;	// IMP=0x000000010008f36c
- (void)_createFolderWithApp:(id)arg1;	// IMP=0x000000010008edf8
- (void)_createFolderWithTargetApp:(id)arg1 editedApp:(id)arg2;	// IMP=0x000000010008e87c
- (void)appGridView:(id)arg1 droppedItemAtIndexPath:(id)arg2 onItemAtIndexPath:(id)arg3;	// IMP=0x000000010008e62c
- (void)appGridView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x000000010008e374
- (_Bool)appGridView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;	// IMP=0x000000010008e36c
- (id)appGridView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010008e198
- (void)appGridView:(id)arg1 cancelPrefetchingForItemsAtIndexPaths:(id)arg2;	// IMP=0x000000010008df84
- (void)appGridView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;	// IMP=0x000000010008df34
- (unsigned long long)numberOfApplicationsInAppGridView:(id)arg1;	// IMP=0x000000010008dee8
- (void)cache:(id)arg1 willEvictObject:(id)arg2;	// IMP=0x000000010008dee4
- (void)didReceiveMemoryWarning;	// IMP=0x000000010008dddc
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010008dda8
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010008dd08
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010008dc68
- (void)loadView;	// IMP=0x000000010008db98
@property(readonly, nonatomic, getter=isFirstCellFocused) _Bool firstCellFocused;
@property(readonly, nonatomic, getter=isDecelerating) _Bool decelerating;
- (void)_ensureFirstCellIsFocused;	// IMP=0x000000010008d900
- (void)moveFocusToFirstDockItem;	// IMP=0x000000010008d8ac
- (void)scrollToTop:(CDUnknownBlockType)arg1;	// IMP=0x000000010008d810
- (void)scrollToTop;	// IMP=0x000000010008d800
- (_Bool)isItemInDock:(id)arg1;	// IMP=0x000000010008d6cc
@property(retain, nonatomic) UIView *headerView;
@property(readonly, nonatomic) unsigned long long maxNumberOfItemsInDock;
- (void)_updateItems;	// IMP=0x000000010008cb90
- (id)_compareOldItems:(id)arg1 toNewItems:(id)arg2;	// IMP=0x000000010008ca24
- (void)_bubbleAnimatorAnimatingDidChange:(id)arg1;	// IMP=0x000000010008c974
- (void)itemsDidChange:(id)arg1;	// IMP=0x000000010008c930
@property(nonatomic) struct UIEdgeInsets editingClampInsets;
- (id)preferredFocusEnvironments;	// IMP=0x000000010008c704
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x000000010008c6a8
- (void)dealloc;	// IMP=0x000000010008c5d0
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000010008c37c
- (id)initWithFolder:(id)arg1 dockMode:(_Bool)arg2;	// IMP=0x000000010008bce4
- (id)initWithFolder:(id)arg1;	// IMP=0x000000010008bcd4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010008bcc4
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010008bcb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

