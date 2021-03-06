//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "HBAppGridLayoutDelegatePrivate.h"
#import "HBRootCellDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDataSourcePrefetching.h"
#import "UICollectionViewDelegate_Private.h"
#import "UIScrollViewDelegate.h"
#import "_HBTouchablePanGestureRecognizerDelegate.h"

@class HBAppGridLayout, HBRootCell, HBSingleCellHostView, NSIndexPath, NSString, TVSStateMachine, UICollectionView, UIFocusGuide, UIScrollView, UITapGestureRecognizer, _HBTouchablePanGestureRecognizer;

@interface HBAppGridView : UIView <UICollectionViewDataSource, UICollectionViewDataSourcePrefetching, UICollectionViewDelegate_Private, UIScrollViewDelegate, HBRootCellDelegate, _HBTouchablePanGestureRecognizerDelegate, HBAppGridLayoutDelegatePrivate>
{
    struct {
        unsigned int delegatePreferredFocusIndexPath:1;
        unsigned int delegateDidSelectItemAtIndexPath:1;
        unsigned int delegateShowPressCompleteForItemIndexPath:1;
        unsigned int delegateDidLongPressItemAtIndexPath:1;
        unsigned int delegateDidFocusItemAtIndexPath:1;
        unsigned int delegateDidEndDecelerating:1;
        unsigned int delegateDidScrollCloseEnoughToTop:1;
        unsigned int delegateDidStableTouchBeginWhileEditing:1;
        unsigned int delegateDidStableTouchEndWhileEditing:1;
        unsigned int delegateDidDidBeginStableEditing:1;
        unsigned int delegateDidDidEndStableEditing:1;
        unsigned int dataSourceNumberOfApplicationsInGridView:1;
        unsigned int dataSourceCanMoveItemAtIndexPath:1;
        unsigned int dataSourceMoveItemAtIndexPathToIndexPath:1;
        unsigned int dataSourceDroppedItemAtIndexPathOnItemAtIndexPath:1;
        unsigned int dataSourceDroppedItemAtIndexPathOutOfBounds:1;
    } _flags;	// 8 = 0x8
    _Bool _dockMode;	// 12 = 0xc
    _Bool _editing;	// 13 = 0xd
    _Bool _decelerating;	// 14 = 0xe
    _Bool _shouldIgnoreHeaderViewForFocus;	// 15 = 0xf
    _Bool _shouldFocusTopShelf;	// 16 = 0x10
    _Bool _scrollingToTop;	// 17 = 0x11
    _Bool _executingPerformUpdateBlock;	// 18 = 0x12
    _Bool _didScrollForTimer;	// 19 = 0x13
    id <HBAppGridViewDelegate> _delegate;	// 24 = 0x18
    id <HBAppGridViewDataSource> _dataSource;	// 32 = 0x20
    UIView *_headerView;	// 40 = 0x28
    NSIndexPath *_editingIndexPath;	// 48 = 0x30
    UICollectionView *_gridView;	// 56 = 0x38
    HBAppGridLayout *_layout;	// 64 = 0x40
    UIFocusGuide *_headerViewExitGuide;	// 72 = 0x48
    CDUnknownBlockType _scrollCompletionBlock;	// 80 = 0x50
    TVSStateMachine *_editStateMachine;	// 88 = 0x58
    NSIndexPath *_dropTargetIndexPath;	// 96 = 0x60
    UIScrollView *_editingScrollView;	// 104 = 0x68
    UIView *_editingCellProxyContainer;	// 112 = 0x70
    HBSingleCellHostView *_editingCellProxy;	// 120 = 0x78
    _HBTouchablePanGestureRecognizer *_editPanGesture;	// 128 = 0x80
    UITapGestureRecognizer *_editUpGesture;	// 136 = 0x88
    UITapGestureRecognizer *_editDownGesture;	// 144 = 0x90
    UITapGestureRecognizer *_editLeftGesture;	// 152 = 0x98
    UITapGestureRecognizer *_editRightGesture;	// 160 = 0xa0
    HBRootCell *_dockSelectedCell;	// 168 = 0xa8
    struct CGPoint _lastVelocity;	// 176 = 0xb0
    struct UIEdgeInsets _editingClampInsets;	// 192 = 0xc0
}

+ (void)_removeJiggleFromView:(id)arg1;	// IMP=0x0000000100084524
+ (void)_applyJiggleToView:(id)arg1;	// IMP=0x0000000100084400
+ (id)_jiggleTransformAnimation;	// IMP=0x000000010007f1dc
+ (id)_jigglePositionAnimation;	// IMP=0x000000010007ec8c
+ (void)_shouldSetSelected:(_Bool)arg1 onCell:(id)arg2 withFocusAnimationCoordinator:(id)arg3;	// IMP=0x000000010007d318
+ (void)initialize;	// IMP=0x000000010007c384
@property(retain, nonatomic) HBRootCell *dockSelectedCell; // @synthesize dockSelectedCell=_dockSelectedCell;
@property(retain, nonatomic) UITapGestureRecognizer *editRightGesture; // @synthesize editRightGesture=_editRightGesture;
@property(retain, nonatomic) UITapGestureRecognizer *editLeftGesture; // @synthesize editLeftGesture=_editLeftGesture;
@property(retain, nonatomic) UITapGestureRecognizer *editDownGesture; // @synthesize editDownGesture=_editDownGesture;
@property(retain, nonatomic) UITapGestureRecognizer *editUpGesture; // @synthesize editUpGesture=_editUpGesture;
@property(retain, nonatomic) _HBTouchablePanGestureRecognizer *editPanGesture; // @synthesize editPanGesture=_editPanGesture;
@property(nonatomic) _Bool didScrollForTimer; // @synthesize didScrollForTimer=_didScrollForTimer;
@property(retain, nonatomic) HBSingleCellHostView *editingCellProxy; // @synthesize editingCellProxy=_editingCellProxy;
@property(retain, nonatomic) UIView *editingCellProxyContainer; // @synthesize editingCellProxyContainer=_editingCellProxyContainer;
@property(retain, nonatomic) UIScrollView *editingScrollView; // @synthesize editingScrollView=_editingScrollView;
@property(nonatomic) struct CGPoint lastVelocity; // @synthesize lastVelocity=_lastVelocity;
@property(retain, nonatomic) NSIndexPath *dropTargetIndexPath; // @synthesize dropTargetIndexPath=_dropTargetIndexPath;
@property(retain, nonatomic) TVSStateMachine *editStateMachine; // @synthesize editStateMachine=_editStateMachine;
@property(nonatomic, getter=isExecutingPerformUpdateBlock) _Bool executingPerformUpdateBlock; // @synthesize executingPerformUpdateBlock=_executingPerformUpdateBlock;
@property(copy, nonatomic) CDUnknownBlockType scrollCompletionBlock; // @synthesize scrollCompletionBlock=_scrollCompletionBlock;
@property(nonatomic, getter=isScrollingToTop) _Bool scrollingToTop; // @synthesize scrollingToTop=_scrollingToTop;
@property(retain, nonatomic) UIFocusGuide *headerViewExitGuide; // @synthesize headerViewExitGuide=_headerViewExitGuide;
@property(retain, nonatomic) HBAppGridLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UICollectionView *gridView; // @synthesize gridView=_gridView;
@property(nonatomic) _Bool shouldFocusTopShelf; // @synthesize shouldFocusTopShelf=_shouldFocusTopShelf;
@property(nonatomic) _Bool shouldIgnoreHeaderViewForFocus; // @synthesize shouldIgnoreHeaderViewForFocus=_shouldIgnoreHeaderViewForFocus;
@property(nonatomic, getter=isDecelerating) _Bool decelerating; // @synthesize decelerating=_decelerating;
@property(nonatomic) struct UIEdgeInsets editingClampInsets; // @synthesize editingClampInsets=_editingClampInsets;
@property(retain, nonatomic) NSIndexPath *editingIndexPath; // @synthesize editingIndexPath=_editingIndexPath;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <HBAppGridViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <HBAppGridViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100088520
- (void)_configureEditStateMachine;	// IMP=0x0000000100086384
- (struct CGRect)_editingAreaRect;	// IMP=0x000000010008615c
- (struct CGRect)_hoverRect;	// IMP=0x0000000100086134
- (struct CGRect)_visibleContentRect;	// IMP=0x0000000100086080
- (id)_scrollRegionIndexPathForCurrentEditingPosition;	// IMP=0x0000000100085f5c
- (double)_ratioIntoScrollRegion;	// IMP=0x0000000100085d30
- (long long)_regionForCurrentEditingPosition;	// IMP=0x0000000100085c50
- (void)_editingMoveFromIndexPath:(id)arg1 toIndexPath:(id)arg2;	// IMP=0x00000001000859dc
- (_Bool)_changeExceedsMovementThreshold:(struct CGPoint)arg1;	// IMP=0x00000001000859a8
- (_Bool)_canDropEditingCellOnProposedIndexPath:(id)arg1;	// IMP=0x000000010008578c
- (_Bool)_isEditingCellDroppable;	// IMP=0x0000000100085708
- (void)_restartScrollTimer;	// IMP=0x000000010008558c
- (void)_cancelScrollTimer;	// IMP=0x0000000100085540
- (void)_restartHoverTimer;	// IMP=0x00000001000854f8
- (void)_cancelHoverTimer;	// IMP=0x00000001000854d0
- (void)_handleEditRightGesture:(id)arg1;	// IMP=0x000000010008545c
- (void)_handleEditLeftGesture:(id)arg1;	// IMP=0x00000001000853e8
- (void)_handleEditDownGesture:(id)arg1;	// IMP=0x0000000100085374
- (void)_handleEditUpGesture:(id)arg1;	// IMP=0x0000000100085300
- (void)_handleTouchEndWhileStable;	// IMP=0x0000000100085294
- (void)_handleTouchBeginWhileStable;	// IMP=0x000000010008522c
- (_Bool)_handlePanChangeForConfirmFolderEvent;	// IMP=0x00000001000851a0
- (void)_scrollTimerExpired;	// IMP=0x0000000100085144
- (void)_hoverTimerExpired;	// IMP=0x00000001000850fc
- (void)_handlePanChangedEvent;	// IMP=0x0000000100084f5c
- (void)_handlePanBeginEvent;	// IMP=0x0000000100084ef8
- (struct CGPoint)_genericHandlePanChange;	// IMP=0x0000000100084a7c
- (void)_handlePanAnimationEndEvent;	// IMP=0x0000000100084a78
- (void)_editPanGesture:(id)arg1;	// IMP=0x000000010008499c
- (void)gestureRecognizer:(id)arg1 touchesCanceled:(id)arg2 withEvent:(id)arg3;	// IMP=0x0000000100084954
- (void)gestureRecognizer:(id)arg1 touchesEnded:(id)arg2 withEvent:(id)arg3;	// IMP=0x000000010008490c
- (void)gestureRecognizer:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;	// IMP=0x00000001000848c4
- (void)_notifyDelegateDidDidEndStableEditing;	// IMP=0x0000000100084858
- (void)_notifyDelegateDidDidBeginStableEditing;	// IMP=0x00000001000847ec
- (_Bool)_isPositionOutOfFolder:(struct CGPoint)arg1;	// IMP=0x000000010008472c
- (void)enableScrolling:(_Bool)arg1;	// IMP=0x00000001000843e8
- (void)stopJiggle;	// IMP=0x000000010008432c
- (void)startJiggle;	// IMP=0x0000000100084270
- (void)_scrollToIndexPath:(id)arg1;	// IMP=0x0000000100083d40
- (void)_moveEditItemToIndexPath:(id)arg1;	// IMP=0x0000000100083c5c
- (_Bool)_handleTouchDuringAnimationEvent;	// IMP=0x0000000100083a64
- (_Bool)_handleTapDuringAnimationInDirection:(long long)arg1;	// IMP=0x0000000100083960
- (void)_handleTapInDirection:(long long)arg1;	// IMP=0x0000000100083808
- (void)_clearConfirmTransforms;	// IMP=0x00000001000835bc
- (void)_applyConfirmTransforms;	// IMP=0x000000010008337c
- (void)_cancelFolderCreateTimer;	// IMP=0x0000000100083310
- (void)_handleCreateFolderEvent;	// IMP=0x00000001000830d8
- (void)_confirmFolderCreateTimerExpired;	// IMP=0x0000000100083090
- (void)_handleAlmostCreateFolderEvent;	// IMP=0x0000000100083084
- (void)_confirmFolderCreateTimerAlmostExpired;	// IMP=0x000000010008303c
- (void)_beginConfirmFolderCreateTimer;	// IMP=0x0000000100082ff8
- (_Bool)_handleHoverEvent;	// IMP=0x0000000100082be8
- (void)_handleScrollEvent;	// IMP=0x00000001000829d4
- (void)_handleEndMovementEvent;	// IMP=0x0000000100081e7c
- (void)_handleSnapshotSafeEvent;	// IMP=0x0000000100081d34
- (void)_endGlobalEditingMode;	// IMP=0x0000000100081a98
- (_Bool)_attemptToEndEditingModeWithReason:(long long)arg1;	// IMP=0x00000001000819c4
- (id)_handleEditEndWithReasonEvent:(long long)arg1;	// IMP=0x0000000100081954
- (_Bool)_beginGlobalEditingMode;	// IMP=0x00000001000814a0
- (id)indexPathNearPosition:(struct CGPoint)arg1;	// IMP=0x0000000100081434
- (void)endEditingWithReason:(long long)arg1;	// IMP=0x00000001000812e0
- (void)startEditingWithSnapshotView:(id)arg1;	// IMP=0x0000000100081190
- (void)startEditing;	// IMP=0x00000001000810f4
- (void)_startEditing;	// IMP=0x0000000100081058
- (void)_showPressCompleteNotification:(id)arg1;	// IMP=0x0000000100080f3c
- (void)_cellPressDidClearNotification:(id)arg1;	// IMP=0x0000000100080e38
- (void)_setEditedCellCenter:(struct CGPoint)arg1;	// IMP=0x0000000100080d9c
- (void)_clearEditedPositionAnimations;	// IMP=0x0000000100080cc8
- (id)_editingCell;	// IMP=0x0000000100080c3c
- (void)_configureStyleForCell:(id)arg1;	// IMP=0x0000000100080a50
- (void)didLongPressCell:(id)arg1;	// IMP=0x0000000100080978
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000100080878
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000001000807cc
- (void)collectionView:(id)arg1 cancelPrefetchingForItemsAtIndexPaths:(id)arg2;	// IMP=0x000000010008075c
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;	// IMP=0x00000001000806ec
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000100080678
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000100080670
- (struct CGRect)_collectionViewHoverOverlayRect:(id)arg1 layout:(id)arg2;	// IMP=0x0000000100080664
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x00000001000805c4
- (_Bool)collectionView:(id)arg1 shouldUpdateFocusInContext:(id)arg2;	// IMP=0x00000001000805a4
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x0000000100080584
- (void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2;	// IMP=0x00000001000804a8
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100080418
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000010008037c
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x0000000100080304
- (void)scrollViewWillBeginDecelerating:(id)arg1;	// IMP=0x00000001000802f4
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x00000001000801f4
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x0000000100080030
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x000000010007ff60
- (id)preferredFocusEnvironments;	// IMP=0x000000010007fd80
- (void)moveToTop;	// IMP=0x000000010007fd34
- (double)offsetToBottom;	// IMP=0x000000010007fad8
- (double)offsetToTop;	// IMP=0x000000010007facc
- (void)scrollToBottom:(CDUnknownBlockType)arg1;	// IMP=0x000000010007f758
- (void)scrollToBottom;	// IMP=0x000000010007f748
- (void)scrollToTop:(CDUnknownBlockType)arg1;	// IMP=0x000000010007f5cc
- (void)scrollToTop;	// IMP=0x000000010007f5bc
- (id)snapshotOfCellAtIndexPath:(id)arg1;	// IMP=0x000000010007f3e0
- (void)_updateEditingSnapshotWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010007e9a8
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;	// IMP=0x000000010007e828
- (void)reloadItemsAtIndexPaths:(id)arg1;	// IMP=0x000000010007e6f4
- (void)deleteItemsAtIndexPaths:(id)arg1;	// IMP=0x000000010007e5c0
- (void)insertItemsAtIndexPaths:(id)arg1;	// IMP=0x000000010007e48c
- (void)performUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010007e184
- (void)updateWithChanges:(id)arg1;	// IMP=0x000000010007e114
- (void)reloadData;	// IMP=0x000000010007e0d4
- (id)viewAtIndexPath:(id)arg1;	// IMP=0x000000010007e028
- (id)visibleCells;	// IMP=0x000000010007dfd4
- (id)visibleViews;	// IMP=0x000000010007dcb0
- (id)cellForItemAtIndexPath:(id)arg1;	// IMP=0x000000010007dc04
- (id)dequeueFolderCellForIndexPath:(id)arg1;	// IMP=0x000000010007db20
- (id)dequeueAppCellForIndexPath:(id)arg1;	// IMP=0x000000010007da3c
- (id)indexPathForCell:(id)arg1;	// IMP=0x000000010007d990
- (_Bool)isIndexPathInDock:(id)arg1;	// IMP=0x000000010007d8f4
@property(readonly, nonatomic) unsigned long long maxNumberOfItemsInDock;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010007ce68
- (void)dealloc;	// IMP=0x000000010007cdf0
- (id)initWithFrame:(struct CGRect)arg1 dockMode:(_Bool)arg2;	// IMP=0x000000010007c400
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010007c3f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

