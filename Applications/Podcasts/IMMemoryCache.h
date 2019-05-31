//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString;

@interface IMMemoryCache : NSObject
{
    NSMutableArray *_itemsArray;	// 8 = 0x8
    NSMutableDictionary *_items;	// 16 = 0x10
    unsigned long long _totalCost;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    unsigned long long _count;	// 40 = 0x28
    unsigned long long _countLimit;	// 48 = 0x30
    unsigned long long _totalCostLimit;	// 56 = 0x38
    _Bool _evictsItemsWithDiscardedContent;	// 64 = 0x40
    id _delegate;	// 72 = 0x48
    NSOperationQueue *_queue;	// 80 = 0x50
    double _lastCheckTime;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_accessQueue;	// 96 = 0x60
}

@property(nonatomic) unsigned long long countLimit; // @synthesize countLimit=_countLimit;
@property(nonatomic) unsigned long long totalCostLimit; // @synthesize totalCostLimit=_totalCostLimit;
@property(nonatomic) _Bool evictsItemsWithDiscardedContent; // @synthesize evictsItemsWithDiscardedContent=_evictsItemsWithDiscardedContent;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)_removeObjectForKey:(id)arg1;	// IMP=0x00000001001ce458
- (void)_addItem:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001001ce244
- (id)description;	// IMP=0x00000001001cdfe8
- (long long)numberOfCachedItems;	// IMP=0x00000001001cdea0
- (unsigned long long)costForObjectWithKey:(id)arg1;	// IMP=0x00000001001cdd14
- (unsigned long long)totalCost;	// IMP=0x00000001001cdd04
- (unsigned long long)count;	// IMP=0x00000001001cdcf4
- (void)_checkLimits;	// IMP=0x00000001001cdc24
- (void)_checkLimitsAndEvictObjects;	// IMP=0x00000001001cda7c
- (void)checkLimitsAndEvictObjects;	// IMP=0x00000001001cd9f0
- (_Bool)_shouldRemoveIndex:(unsigned long long)arg1;	// IMP=0x00000001001cd894
- (void)removeObjectsForKeyWithPrefix:(id)arg1;	// IMP=0x00000001001cd5b8
- (void)removeAllObjects;	// IMP=0x00000001001cd4cc
- (void)removeObjectForKey:(id)arg1;	// IMP=0x00000001001cd3e4
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;	// IMP=0x00000001001cd2f4
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001001cd208
- (id)objectForKey:(id)arg1;	// IMP=0x00000001001cce48
- (id)allKeys;	// IMP=0x00000001001ccc94
- (void)dealloc;	// IMP=0x00000001001ccbd8
- (id)init;	// IMP=0x00000001001ccae8

@end
