//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTResultsController.h"

@interface MTNullResultsController : MTResultsController
{
    unsigned long long _numberOfObjects;	// 8 = 0x8
}

@property(nonatomic) unsigned long long numberOfObjects; // @synthesize numberOfObjects=_numberOfObjects;
- (id)allObjects;	// IMP=0x0000000100068520
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x0000000100068518
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100068510
- (unsigned long long)numberOfObjectsInSection:(unsigned long long)arg1;	// IMP=0x0000000100068504
- (id)indexPathForObject:(id)arg1;	// IMP=0x00000001000684fc
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x00000001000684c0
- (void)reloadData;	// IMP=0x00000001000684bc
- (id)init;	// IMP=0x000000010006844c

@end

