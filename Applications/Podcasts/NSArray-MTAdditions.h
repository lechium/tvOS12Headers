//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSArray.h"

@interface NSArray (MTAdditions)
- (id)mt_uniqueOrdered;	// IMP=0x000000010012b4a8
- (id)mt_uniqued;	// IMP=0x000000010012b48c
- (id)mt_allObjectsExcludingIndexes:(id)arg1;	// IMP=0x000000010012b38c
- (id)mt_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x000000010012b218
- (id)arrayByRemovingObject:(id)arg1;	// IMP=0x000000010012b198
- (id)filter:(CDUnknownBlockType)arg1 map:(CDUnknownBlockType)arg2;	// IMP=0x000000010012afc4
- (id)filter:(CDUnknownBlockType)arg1;	// IMP=0x000000010012ae30
- (id)map:(CDUnknownBlockType)arg1;	// IMP=0x000000010012ac8c
@end
