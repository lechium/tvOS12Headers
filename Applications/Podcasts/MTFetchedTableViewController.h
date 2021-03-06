//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "NSFetchedResultsControllerDelegate.h"

@class NSArray, NSFetchedResultsController, NSPredicate, NSString, UIBarButtonItem;

@interface MTFetchedTableViewController : UITableViewController <NSFetchedResultsControllerDelegate>
{
    long long _userDrivenCounter;	// 8 = 0x8
    UIBarButtonItem *_editButtonItem_localIvar;	// 16 = 0x10
    _Bool _inSwipeToDeleteMode;	// 24 = 0x18
    NSString *_fetchEntityName;	// 32 = 0x20
    NSPredicate *_fetchPredicate;	// 40 = 0x28
    NSArray *_sortDescriptors;	// 48 = 0x30
    NSString *_sectionName;	// 56 = 0x38
    long long _rowAnimation;	// 64 = 0x40
    NSFetchedResultsController *_frc;	// 72 = 0x48
    NSString *_sectionNameKeyPath;	// 80 = 0x50
}

@property(retain, nonatomic) NSString *sectionNameKeyPath; // @synthesize sectionNameKeyPath=_sectionNameKeyPath;
@property(nonatomic) _Bool inSwipeToDeleteMode; // @synthesize inSwipeToDeleteMode=_inSwipeToDeleteMode;
@property(retain, nonatomic) NSFetchedResultsController *frc; // @synthesize frc=_frc;
@property(nonatomic) long long rowAnimation; // @synthesize rowAnimation=_rowAnimation;
@property(retain, nonatomic) NSString *sectionName; // @synthesize sectionName=_sectionName;
@property(retain, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(retain, nonatomic) NSPredicate *fetchPredicate; // @synthesize fetchPredicate=_fetchPredicate;
@property(retain, nonatomic) NSString *fetchEntityName; // @synthesize fetchEntityName=_fetchEntityName;
- (void).cxx_destruct;	// IMP=0x00000001000160fc
- (void)decodeRestorableStateWithCoder:(id)arg1;	// IMP=0x0000000100015fa4
- (void)encodeRestorableStateWithCoder:(id)arg1;	// IMP=0x0000000100015f70
- (void)reloadVisibleCellsWithAnimation:(long long)arg1;	// IMP=0x0000000100015ed0
- (void)_updateTableAnimated:(_Bool)arg1;	// IMP=0x0000000100015664
- (_Bool)hasSectionNameKeyPathChanged;	// IMP=0x0000000100015580
- (id)fetchRequestInManagedObjectContext:(id)arg1;	// IMP=0x00000001000153cc
- (void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4;	// IMP=0x00000001000152ec
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;	// IMP=0x00000001000150f0
- (void)setRefreshControl:(id)arg1;	// IMP=0x0000000100014ff0
- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x0000000100014f8c
- (void)controllerWillChangeContent:(id)arg1;	// IMP=0x0000000100014f28
- (id)newCellInstanceWithReuseIdentifier:(id)arg1;	// IMP=0x0000000100014ebc
- (void)configureCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000100014eb8
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100014d80
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100014ce0
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100014c6c
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;	// IMP=0x0000000100014c30
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;	// IMP=0x0000000100014c0c
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000100014b28
- (id)reuseIdentifierForRow:(id)arg1;	// IMP=0x0000000100014b0c
- (void)refetchWithPredicate:(id)arg1 sortDescriptors:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000001000149e4
- (void)refetchWithPredicate:(id)arg1;	// IMP=0x0000000100014930
- (void)refetchWithSortDescriptors:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100014870
- (void)viewDidLoad;	// IMP=0x00000001000147cc
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100014798
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100014744
@property(nonatomic) _Bool changeIsUserDriven; // @dynamic changeIsUserDriven;
- (void)initializeFrc;	// IMP=0x0000000100014590
- (void)didReceiveMemoryWarning;	// IMP=0x000000010001455c
- (void)dealloc;	// IMP=0x0000000100014500
- (id)initWithEntityName:(id)arg1;	// IMP=0x00000001000144ec
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3;	// IMP=0x00000001000143b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

