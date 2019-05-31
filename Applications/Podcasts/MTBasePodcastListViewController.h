//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTFetchedTableViewController.h"

#import "MTSearchDisplayControllerDelegate.h"
#import "MTTableViewDataSource.h"

@class NSAttributedString, NSString;

@interface MTBasePodcastListViewController : MTFetchedTableViewController <MTSearchDisplayControllerDelegate, MTTableViewDataSource>
{
    _Bool _endRefreshWhenDraggingEnds;	// 8 = 0x8
    _Bool _refreshing;	// 9 = 0x9
    id <MTSourceListDelegate> _delegate;	// 16 = 0x10
    id <MTRefreshControlDelegate> _refreshDelegate;	// 24 = 0x18
    NSString *_selectedUuid;	// 32 = 0x20
    NSAttributedString *_attributedTitleForRefreshControl;	// 40 = 0x28
    SEL _selectorForRefreshControl;	// 48 = 0x30
    id _targetForRefreshControl;	// 56 = 0x38
    id <MTViewControllerEditingNotificationDelegate> _editingNotificationDelegate;	// 64 = 0x40
}

+ (id)defaultsKey;	// IMP=0x000000010000ee64
@property(nonatomic) __weak id <MTViewControllerEditingNotificationDelegate> editingNotificationDelegate; // @synthesize editingNotificationDelegate=_editingNotificationDelegate;
@property(nonatomic) __weak id targetForRefreshControl; // @synthesize targetForRefreshControl=_targetForRefreshControl;
@property(nonatomic) SEL selectorForRefreshControl; // @synthesize selectorForRefreshControl=_selectorForRefreshControl;
@property(retain, nonatomic) NSAttributedString *attributedTitleForRefreshControl; // @synthesize attributedTitleForRefreshControl=_attributedTitleForRefreshControl;
@property(nonatomic, getter=isRefreshing) _Bool refreshing; // @synthesize refreshing=_refreshing;
@property(retain, nonatomic) NSString *selectedUuid; // @synthesize selectedUuid=_selectedUuid;
@property(nonatomic) __weak id <MTRefreshControlDelegate> refreshDelegate; // @synthesize refreshDelegate=_refreshDelegate;
@property(nonatomic) __weak id <MTSourceListDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100010f90
- (_Bool)indexPathIsCurrentlySelectedRow:(id)arg1;	// IMP=0x0000000100010dbc
- (void)selectItemWithUuid:(id)arg1 forceScroll:(_Bool)arg2;	// IMP=0x0000000100010cb0
- (id)_selectItemWithUuid:(id)arg1;	// IMP=0x0000000100010b9c
- (id)firstValidIndexPath;	// IMP=0x0000000100010af0
- (void)getObjectId:(id *)arg1 andIndexPath:(id *)arg2 forItemWithUuid:(id)arg3;	// IMP=0x0000000100010aec
- (void)updatedDefaults:(id)arg1;	// IMP=0x0000000100010970
- (long long)flattenedCellIndexForIndexPath:(id)arg1;	// IMP=0x0000000100010840
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000100010748
- (void)endRefreshingWhenDraggingCompletes;	// IMP=0x0000000100010624
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100010374
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x00000001000102d4
- (void)dealloc;	// IMP=0x000000010001025c
- (void)configureRowHeight;	// IMP=0x00000001000101b4
- (void)viewDidLoad;	// IMP=0x0000000100010004
- (void)loadView;	// IMP=0x000000010000ff18
- (void)didReceiveMemoryWarning;	// IMP=0x000000010000fee4
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010000fdf8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010000f794
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010000f69c
- (id)tableView;	// IMP=0x000000010000f668
- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x000000010000f58c
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;	// IMP=0x000000010000f3f8
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;	// IMP=0x000000010000f3e0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010000f368
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010000f334
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000010000f300
- (void)didEndDraggingScrollView;	// IMP=0x000000010000f2bc
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000010000f2b0
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x000000010000f29c
- (void)restoreSelection;	// IMP=0x000000010000f214
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010000f050
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;	// IMP=0x000000010000f048
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x000000010000f040
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x000000010000f024
- (void)configureCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000010000efc0
- (id)newCellInstanceWithReuseIdentifier:(id)arg1;	// IMP=0x000000010000ef54
- (id)reuseIdentifierForRow:(id)arg1;	// IMP=0x000000010000ef40
- (id)storedUuid;	// IMP=0x000000010000ee6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
