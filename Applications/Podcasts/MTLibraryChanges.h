//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableDictionary;

@interface MTLibraryChanges : NSObject <NSCopying>
{
    NSMutableDictionary *_changesByEntityName;	// 8 = 0x8
}

@property(retain, nonatomic) NSMutableDictionary *changesByEntityName; // @synthesize changesByEntityName=_changesByEntityName;
- (void).cxx_destruct;	// IMP=0x000000010003c054
- (_Bool)hasUpdatesForEntityNames:(id)arg1;	// IMP=0x000000010003beb8
- (_Bool)hasDeletesForEntityNames:(id)arg1;	// IMP=0x000000010003bd40
- (_Bool)hasInsertsForEntityNames:(id)arg1;	// IMP=0x000000010003bbc8
- (_Bool)hasChangesForEntityNames:(id)arg1;	// IMP=0x000000010003ba50
- (_Bool)hasUpdates;	// IMP=0x000000010003b9d0
- (_Bool)hasDeletes;	// IMP=0x000000010003b950
- (_Bool)hasInserts;	// IMP=0x000000010003b8d0
- (_Bool)hasChanges;	// IMP=0x000000010003b850
- (void)combineChanges:(id)arg1;	// IMP=0x000000010003b5fc
- (void)addChangeWithUuid:(id)arg1 entityName:(id)arg2 changeType:(int)arg3;	// IMP=0x000000010003b4f4
- (void)removeAllChanges;	// IMP=0x000000010003b4b4
- (id)entityNames;	// IMP=0x000000010003b460
- (id)changesForEntityName:(id)arg1;	// IMP=0x000000010003b3dc
- (id)description;	// IMP=0x000000010003b31c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010003b250
- (id)init;	// IMP=0x000000010003b1d0

@end

