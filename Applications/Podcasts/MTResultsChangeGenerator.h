//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MTResultsChangeGenerator : NSObject
{
    id <MTResultsChangeGeneratorDelegate> _delegate;	// 8 = 0x8
}

@property(nonatomic) __weak id <MTResultsChangeGeneratorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100196848
- (id)unbox:(id)arg1;	// IMP=0x0000000100196804
- (id)box:(id)arg1;	// IMP=0x000000010019679c
- (id)closestIndexPathToRow:(unsigned long long)arg1 forIndexPaths:(struct NSMutableSet *)arg2;	// IMP=0x000000010019663c
- (void)removeIndexPath:(id)arg1 forObject:(id)arg2 fromMap:(struct NSMutableDictionary *)arg3;	// IMP=0x000000010019655c
- (id)bestIndexPathForObject:(id)arg1 atIndex:(unsigned long long)arg2 fromMap:(struct NSMutableDictionary *)arg3 autoremove:(_Bool)arg4;	// IMP=0x00000001001963f0
- (id)bestIndexPathForObject:(id)arg1 atIndex:(unsigned long long)arg2 fromMap:(struct NSMutableDictionary *)arg3;	// IMP=0x0000000100196380
- (struct NSMutableDictionary *)objectsToIndexPathDictionary:(id)arg1 inSection:(unsigned long long)arg2;	// IMP=0x0000000100196188
- (void)generateChangesForExistingObjects:(id)arg1 newObjects:(id)arg2 inSection:(unsigned long long)arg3;	// IMP=0x0000000100195ba4
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000100195b30

@end

