//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVHJSObject.h"

#import "TVHJSMediaEntityFetchController.h"
#import "TVHKMediaEntityFetchControllerDelegate.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, NSUUID, TVHCollectionChangesToJSCollectionChangesValueTransformer, TVHKMediaEntityFetchController;

@interface TVHJSMediaEntityFetchController : TVHJSObject <TVHKMediaEntityFetchControllerDelegate, TVHJSMediaEntityFetchController>
{
    NSMutableArray *_jsMediaEntities;	// 8 = 0x8
    NSMutableArray *_jsRecentlyAddedMediaEntities;	// 16 = 0x10
    NSMutableDictionary *_jsGroupings;	// 24 = 0x18
    NSArray *_jsMediaEntitiesSortHeaders;	// 32 = 0x20
    TVHKMediaEntityFetchController *_wrappedFetchController;	// 40 = 0x28
    NSUUID *_fetchControllerContext;	// 48 = 0x30
    TVHCollectionChangesToJSCollectionChangesValueTransformer *_collectionChangesValueTransformer;	// 56 = 0x38
}

+ (id)_jsSortHeadersFromSortHeaders:(id)arg1 appContext:(id)arg2;	// IMP=0x0000000100013f38
+ (id)_jsMediaEntitiesFromMediaEntities:(id)arg1 indexes:(id)arg2 appContext:(id)arg3;	// IMP=0x0000000100013e48
+ (id)create:(id)arg1:(id)arg2;	// IMP=0x00000001000119dc
@property(retain, nonatomic) TVHCollectionChangesToJSCollectionChangesValueTransformer *collectionChangesValueTransformer; // @synthesize collectionChangesValueTransformer=_collectionChangesValueTransformer;
@property(retain, nonatomic) NSUUID *fetchControllerContext; // @synthesize fetchControllerContext=_fetchControllerContext;
@property(retain, nonatomic) TVHKMediaEntityFetchController *wrappedFetchController; // @synthesize wrappedFetchController=_wrappedFetchController;
@property(retain, nonatomic, setter=setJSMediaEntitiesSortHeaders:) NSArray *jsMediaEntitiesSortHeaders; // @synthesize jsMediaEntitiesSortHeaders=_jsMediaEntitiesSortHeaders;
@property(retain, nonatomic, setter=setJSGroupings:) NSMutableDictionary *jsGroupings; // @synthesize jsGroupings=_jsGroupings;
@property(retain, nonatomic, setter=setJSRecentlyAddedMediaEntities:) NSMutableArray *jsRecentlyAddedMediaEntities; // @synthesize jsRecentlyAddedMediaEntities=_jsRecentlyAddedMediaEntities;
@property(retain, nonatomic, setter=setJSMediaEntities:) NSMutableArray *jsMediaEntities; // @synthesize jsMediaEntities=_jsMediaEntities;
- (void).cxx_destruct;	// IMP=0x000000010001420c
- (void)_updateJSMediaQueryResult:(id)arg1 withJSObjects:(id)arg2 andChanges:(id)arg3 sortHeaders:(id)arg4;	// IMP=0x0000000100013d30
- (id)_groupsValueTransformerWithKeyPath:(id)arg1;	// IMP=0x0000000100013ba4
- (void)_updateGroupingWithResult:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x000000010001354c
- (void)_updateGroupingsWithResult:(id)arg1;	// IMP=0x00000001000133d0
- (void)_applyChanges:(id)arg1 fromSourceMediaEntities:(id)arg2 toDestinationMediaEntities:(id)arg3;	// IMP=0x000000010001320c
- (void)_updateMediaEntitiesMutableArray:(id)arg1 withResult:(id)arg2;	// IMP=0x00000001000130ac
- (void)_updateJSArraysWithResult:(id)arg1;	// IMP=0x0000000100012ea8
- (void)controller:(id)arg1 fetchRequest:(id)arg2 didFailWithError:(id)arg3;	// IMP=0x0000000100012b28
- (void)controller:(id)arg1 fetchRequest:(id)arg2 didCompleteWithResult:(id)arg3;	// IMP=0x00000001000122b8
- (void)simulateContentsChangeWithFetchFromServer:(_Bool)arg1;	// IMP=0x000000010001220c
- (void)resume;	// IMP=0x00000001000121cc
- (void)pause;	// IMP=0x000000010001218c
- (void)stop;	// IMP=0x00000001000120a0
- (void)start;	// IMP=0x000000010001201c
@property(nonatomic) _Bool calculatesRecentlyAdded;
@property(copy, nonatomic) NSArray *groupingKeyPaths;
@property(copy, nonatomic) NSString *logNameSuffix;
@property(copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSArray *mediaEntities;
- (id)initWithMediaServer:(id)arg1 fetchRequest:(id)arg2 appContext:(id)arg3;	// IMP=0x00000001000117bc
- (id)initWithAppContext:(id)arg1;	// IMP=0x0000000100011734

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

