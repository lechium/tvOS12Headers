//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFetchedResultsController.h"

@class NSOperationQueue;

@interface IMUbiquitousFetchedResultsController : NSFetchedResultsController
{
    NSOperationQueue *_queue;	// 8 = 0x8
}

@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
- (void)coordinatorWillRemoveStore:(id)arg1;	// IMP=0x0000000100200be8
- (void)dealloc;	// IMP=0x0000000100200b58
- (id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2 sectionNameKeyPath:(id)arg3 cacheName:(id)arg4;	// IMP=0x0000000100200aa8

@end

