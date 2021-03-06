//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFQueueDelegate.h"
#import "NSFastEnumeration.h"
#import "SVSTranscriptItemGroupDelegate.h"

@class AFQueue, NSMutableArray, NSMutableDictionary, NSString;

@interface SVSTranscript : NSObject <AFQueueDelegate, SVSTranscriptItemGroupDelegate, NSFastEnumeration>
{
    id <SVSTranscriptDataSource> _dataSource;	// 8 = 0x8
    id <SVSTranscriptDelegate> _delegate;	// 16 = 0x10
    NSMutableArray *_allTranscriptItems;	// 24 = 0x18
    NSMutableArray *_exposedTranscriptItems;	// 32 = 0x20
    NSMutableArray *_waitingTranscriptItems;	// 40 = 0x28
    NSMutableDictionary *_exposedIdToWaitingIdMap;	// 48 = 0x30
    NSMutableDictionary *_waitingIdToExposedIdMap;	// 56 = 0x38
    AFQueue *_loadingTranscriptItemGroupQueue;	// 64 = 0x40
    long long _discardedItemCount;	// 72 = 0x48
}

@property(readonly, nonatomic) long long discardedItemCount; // @synthesize discardedItemCount=_discardedItemCount;
@property(readonly, nonatomic, getter=_loadingTranscriptItemGroupQueue) AFQueue *loadingTranscriptItemGroupQueue; // @synthesize loadingTranscriptItemGroupQueue=_loadingTranscriptItemGroupQueue;
@property(retain, nonatomic) NSMutableDictionary *waitingIdToExposedIdMap; // @synthesize waitingIdToExposedIdMap=_waitingIdToExposedIdMap;
@property(retain, nonatomic) NSMutableDictionary *exposedIdToWaitingIdMap; // @synthesize exposedIdToWaitingIdMap=_exposedIdToWaitingIdMap;
@property(retain, nonatomic) NSMutableArray *waitingTranscriptItems; // @synthesize waitingTranscriptItems=_waitingTranscriptItems;
@property(readonly, nonatomic, getter=_exposedTranscriptItems) NSMutableArray *exposedTranscriptItems; // @synthesize exposedTranscriptItems=_exposedTranscriptItems;
@property(readonly, nonatomic, getter=_allTranscriptItems) NSMutableArray *allTranscriptItems; // @synthesize allTranscriptItems=_allTranscriptItems;
@property(nonatomic) __weak id <SVSTranscriptDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SVSTranscriptDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;	// IMP=0x0000000100024834
- (_Bool)_transcriptHasProvisionalItems;	// IMP=0x0000000100024574
- (id)_aceObjectForItemAtIndex:(long long)arg1;	// IMP=0x0000000100024508
- (id)_transcriptItemsForDataSourceItemsAtIndexes:(id)arg1;	// IMP=0x0000000100024488
- (id)_transcriptItemForDataSourceItemAtIndex:(long long)arg1;	// IMP=0x000000010002442c
- (long long)conversationIndexForTranscriptLevelModelItemAtIndex:(long long)arg1;	// IMP=0x00000001000242f0
- (unsigned long long)_waitingIndexOfTranscriptItemWithAceObjectAceId:(id)arg1;	// IMP=0x000000010002411c
- (unsigned long long)_conversationIndexOfTranscriptItemWithAceObjectAceId:(id)arg1;	// IMP=0x0000000100023f2c
- (unsigned long long)_conversationIndexForTranscriptItem:(id)arg1;	// IMP=0x0000000100023eb0
- (id)conversationIndexesForTranscriptLevelModelItemsAtIndexes:(id)arg1;	// IMP=0x0000000100023c0c
- (long long)_conversationIndexForWaitingTranscriptItem:(id)arg1;	// IMP=0x0000000100023b38
- (void)_clearViewControllerDelegateForTranscriptItem:(id)arg1;	// IMP=0x0000000100023a8c
- (void)_notifyThatViewControllerWillBeRemoved:(id)arg1;	// IMP=0x00000001000239d8
- (void)clearTranscriptItemViewControllerDelegates;	// IMP=0x00000001000238a8
- (id)transcriptItemForViewController:(id)arg1;	// IMP=0x00000001000236b0
- (id)_createTranscriptItemForAceObject:(id)arg1 itemIndex:(long long)arg2;	// IMP=0x00000001000234f8
- (id)_createErrorSnippetViewControllerWithAceObject:(id)arg1 itemIndex:(long long)arg2;	// IMP=0x0000000100023424
- (void)_configureViewController:(id)arg1 withAceObject:(id)arg2 itemIndex:(long long)arg3;	// IMP=0x000000010002317c
- (void)enumerateTranscriptItemsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100023164
- (void)enumerateTranscriptItemsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000230f0
- (unsigned long long)_indexOfTranscriptItemWithAceObjectAceId:(id)arg1;	// IMP=0x0000000100022f00
- (unsigned long long)indexOfTranscriptItem:(id)arg1;	// IMP=0x0000000100022e84
- (id)lastItem;	// IMP=0x0000000100022e30
- (id)transcriptItemForConversationItemWithIdentifier:(id)arg1;	// IMP=0x0000000100022c08
- (id)transcriptItemsAtIndexes:(id)arg1;	// IMP=0x0000000100022b88
- (id)transcriptItemAtIndex:(long long)arg1;	// IMP=0x0000000100022ac4
@property(readonly, nonatomic) long long transcriptItemCount;
- (id)conversationItemIdentifierForViewController:(id)arg1;	// IMP=0x0000000100022848
- (void)transcriptItemDidBecomeReadyToAppear:(id)arg1;	// IMP=0x000000010002283c
- (void)_processLoadingTranscriptItemGroupQueue;	// IMP=0x00000001000211e4
- (void)setErrorViewControllerForTranscriptItem:(id)arg1;	// IMP=0x0000000100021130
- (void)presentationStateDidChangeForItemsAtIndexes:(id)arg1;	// IMP=0x0000000100020f60
- (void)removeItemsWithIdentifiers:(id)arg1 atIndexes:(id)arg2;	// IMP=0x00000001000206f0
- (void)reloadItemsAtIndexes:(id)arg1;	// IMP=0x000000010001fda8
- (void)reloadViewControllerAtIndex:(long long)arg1;	// IMP=0x000000010001fba0
- (void)unloadViewControllerAtIndex:(long long)arg1;	// IMP=0x000000010001fb30
- (void)insertItemsAtIndexes:(id)arg1;	// IMP=0x000000010001f23c
- (void)reloadData;	// IMP=0x000000010001eb88
- (void)transcriptItemGroupPresentationEligibilityDidChange:(id)arg1;	// IMP=0x000000010001eb40
- (void)queue:(id)arg1 didEnqueueObjects:(id)arg2;	// IMP=0x000000010001eb34
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000010001eac8
- (id)init;	// IMP=0x000000010001e92c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

