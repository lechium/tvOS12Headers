//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexSet;

@interface HBCollectionChange : NSObject
{
    unsigned long long _changeKind;	// 8 = 0x8
    NSIndexSet *_sourceIndexes;	// 16 = 0x10
    NSIndexSet *_destinationIndexes;	// 24 = 0x18
}

@property(readonly, copy, nonatomic) NSIndexSet *destinationIndexes; // @synthesize destinationIndexes=_destinationIndexes;
@property(readonly, copy, nonatomic) NSIndexSet *sourceIndexes; // @synthesize sourceIndexes=_sourceIndexes;
@property(readonly, nonatomic) unsigned long long changeKind; // @synthesize changeKind=_changeKind;
- (void).cxx_destruct;	// IMP=0x0000000100099ef4
- (id)description;	// IMP=0x0000000100099d54
- (id)init;	// IMP=0x0000000100099d3c
- (id)initWithChangeKind:(unsigned long long)arg1 sourceIndexes:(id)arg2 destinationIndexes:(id)arg3;	// IMP=0x0000000100099c5c

@end

