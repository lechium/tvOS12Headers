//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseEpisodeListManifest.h"

#import "MTResultsChangeGeneratorDelegate.h"
#import "NSFetchedResultsControllerDelegate.h"

@class MTAllPropertyChangesQueryObserver, MTIndexPathShifter, MTResultsChangeGenerator, NSArray, NSFetchRequest, NSFetchedResultsController, NSMutableArray, NSPredicate, NSString;

@interface MTPredicateManifest : MTBaseEpisodeListManifest <MTResultsChangeGeneratorDelegate, NSFetchedResultsControllerDelegate>
{
    MTAllPropertyChangesQueryObserver *_allPropertyChangeObserver;	// 8 = 0x8
    _Bool _hasFRCChanges;	// 16 = 0x10
    NSPredicate *_predicate;	// 24 = 0x18
    NSArray *_explicitSortOrder;	// 32 = 0x20
    NSFetchRequest *_fetchRequest;	// 40 = 0x28
    NSFetchedResultsController *_frc;	// 48 = 0x30
    NSMutableArray *_frcEpisodeUuids;	// 56 = 0x38
    MTResultsChangeGenerator *_changeGenerator;	// 64 = 0x40
    MTIndexPathShifter *_indexPathShifter;	// 72 = 0x48
}

@property(nonatomic) _Bool hasFRCChanges; // @synthesize hasFRCChanges=_hasFRCChanges;
@property(retain, nonatomic) MTIndexPathShifter *indexPathShifter; // @synthesize indexPathShifter=_indexPathShifter;
@property(retain, nonatomic) MTResultsChangeGenerator *changeGenerator; // @synthesize changeGenerator=_changeGenerator;
@property(retain, nonatomic) NSMutableArray *frcEpisodeUuids; // @synthesize frcEpisodeUuids=_frcEpisodeUuids;
@property(retain, nonatomic) NSFetchedResultsController *frc; // @synthesize frc=_frc;
@property(retain, nonatomic) NSFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
@property(retain, nonatomic) NSArray *explicitSortOrder; // @synthesize explicitSortOrder=_explicitSortOrder;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (void).cxx_destruct;	// IMP=0x0000000100157530
- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x00000001001572c0
- (void)controllerWillChangeContent:(id)arg1;	// IMP=0x00000001001572bc
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;	// IMP=0x0000000100157258
- (void)generator:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;	// IMP=0x0000000100157178
- (void)_propertyDidChange;	// IMP=0x0000000100157174
- (void)_observeAllPropertyChangesForEntityName:(id)arg1 predicate:(id)arg2;	// IMP=0x0000000100156ec8
- (void)_frcDidChangeResults;	// IMP=0x0000000100156890
- (id)_currentEpisodeUuid;	// IMP=0x00000001001567f4
- (id)_augmentPredicate:(id)arg1;	// IMP=0x0000000100156564
- (void)_processResults:(id)arg1;	// IMP=0x0000000100156560
- (void)_refetch;	// IMP=0x00000001001562e0
- (void)setCurrentIndex:(unsigned long long)arg1;	// IMP=0x0000000100156238
- (void)_load;	// IMP=0x00000001001560e8
- (void)_restrictionsDidChange;	// IMP=0x0000000100156064
@property(retain, nonatomic) NSArray *sortDescriptors;
- (void)dealloc;	// IMP=0x0000000100155f2c
- (id)initWithInitialEpisodeUuid:(id)arg1 fetchRequest:(id)arg2;	// IMP=0x0000000100155d88
- (id)initWithInitialEpisodeUuid:(id)arg1 predicateToTrack:(id)arg2 sortDescriptors:(id)arg3;	// IMP=0x0000000100155b44
- (id)initWithInitialEpisodeUuid:(id)arg1;	// IMP=0x0000000100155b30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

