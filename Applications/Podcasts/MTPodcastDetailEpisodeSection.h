//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFetchedResultsControllerDelegate.h"

@class NSArray, NSPredicate, NSString;

@interface MTPodcastDetailEpisodeSection : NSObject <NSFetchedResultsControllerDelegate>
{
    _Bool _showTitleWithNoEpisodes;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSPredicate *_predicate;	// 24 = 0x18
    NSArray *_sortDescriptors;	// 32 = 0x20
    unsigned long long _sectionType;	// 40 = 0x28
    id <MTPodcastDetailEpisodeSectionDelegate> _delegate;	// 48 = 0x30
    id <MTFetchedResultsControllerProtocol> _frc;	// 56 = 0x38
}

+ (id)dependentPropertyKeys;	// IMP=0x000000010009f82c
@property(retain, nonatomic) id <MTFetchedResultsControllerProtocol> frc; // @synthesize frc=_frc;
@property(nonatomic) __weak id <MTPodcastDetailEpisodeSectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showTitleWithNoEpisodes; // @synthesize showTitleWithNoEpisodes=_showTitleWithNoEpisodes;
@property(nonatomic) unsigned long long sectionType; // @synthesize sectionType=_sectionType;
@property(retain, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;	// IMP=0x000000010009fd44
- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x000000010009fc38
- (void)controllerWillChangeContent:(id)arg1;	// IMP=0x000000010009fbf0
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;	// IMP=0x000000010009faf4
- (unsigned long long)indexOfEpisode:(id)arg1;	// IMP=0x000000010009fa4c
- (id)episodes;	// IMP=0x000000010009f9f8
- (void)loadData;	// IMP=0x000000010009f9ec
- (void)initializeFrc;	// IMP=0x000000010009f640
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

