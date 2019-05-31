//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MZKeyValueStoreControllerDelegate.h"
#import "MZKeyValueStoreTransactionProcessing.h"

@class IMAsynchronousTask, IMKeyValueStoreController, IMKeyValueStoreTransaction, IMUPPBagContext, NSError, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface IMUniversalPlaybackPositionSyncHandler : NSObject <MZKeyValueStoreControllerDelegate, MZKeyValueStoreTransactionProcessing>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_syncOperationQueue;	// 16 = 0x10
    _Bool _canRequestStoreSignIn;	// 24 = 0x18
    _Bool _syncInProgress;	// 25 = 0x19
    _Bool _canceled;	// 26 = 0x1a
    IMKeyValueStoreController *_kvsController;	// 32 = 0x20
    id <MZUniversalPlaybackPositionDataSource> _dataSource;	// 40 = 0x28
    id <MZUniversalPlaybackPositionTransactionContext> _dataSourceTransactionContext;	// 48 = 0x30
    IMUPPBagContext *_bagContext;	// 56 = 0x38
    IMAsynchronousTask *_task;	// 64 = 0x40
    NSString *_responseDomainVersion;	// 72 = 0x48
    NSMutableDictionary *m_etadataItemsFromDataSource;	// 80 = 0x50
    NSMutableDictionary *_metadataItemsFromKVSStorage;	// 88 = 0x58
    NSMutableDictionary *_metadataItemsToCommitToDataSource;	// 96 = 0x60
    NSMutableDictionary *_metadataItemsToCommitToKVSStorage;	// 104 = 0x68
    NSMutableDictionary *_reportedItemVersionForIdentifier;	// 112 = 0x70
    IMKeyValueStoreTransaction *currentKVSTransaction;	// 120 = 0x78
    NSError *_fatalSyncError;	// 128 = 0x80
}

@property(retain) NSError *fatalSyncError; // @synthesize fatalSyncError=_fatalSyncError;
@property _Bool canceled; // @synthesize canceled=_canceled;
@property _Bool syncInProgress; // @synthesize syncInProgress=_syncInProgress;
@property(retain) IMKeyValueStoreTransaction *currentKVSTransaction; // @synthesize currentKVSTransaction;
@property(retain) NSMutableDictionary *reportedItemVersionForIdentifier; // @synthesize reportedItemVersionForIdentifier=_reportedItemVersionForIdentifier;
@property(retain) NSMutableDictionary *metadataItemsToCommitToKVSStorage; // @synthesize metadataItemsToCommitToKVSStorage=_metadataItemsToCommitToKVSStorage;
@property(retain) NSMutableDictionary *metadataItemsToCommitToDataSource; // @synthesize metadataItemsToCommitToDataSource=_metadataItemsToCommitToDataSource;
@property(retain) NSMutableDictionary *metadataItemsFromKVSStorage; // @synthesize metadataItemsFromKVSStorage=_metadataItemsFromKVSStorage;
@property(retain) NSMutableDictionary *metadataItemsFromDataSource; // @synthesize metadataItemsFromDataSource=m_etadataItemsFromDataSource;
@property(nonatomic) _Bool canRequestStoreSignIn; // @synthesize canRequestStoreSignIn=_canRequestStoreSignIn;
@property(retain) NSString *responseDomainVersion; // @synthesize responseDomainVersion=_responseDomainVersion;
@property(retain) IMAsynchronousTask *task; // @synthesize task=_task;
@property(retain) IMUPPBagContext *bagContext; // @synthesize bagContext=_bagContext;
@property(retain) id <MZUniversalPlaybackPositionTransactionContext> dataSourceTransactionContext; // @synthesize dataSourceTransactionContext=_dataSourceTransactionContext;
@property(retain) id <MZUniversalPlaybackPositionDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain) IMKeyValueStoreController *kvsController; // @synthesize kvsController=_kvsController;
- (id)sinceDomainVersionForTransaction:(id)arg1;	// IMP=0x00000001000642d0
- (id)keysForTransaction:(id)arg1;	// IMP=0x00000001000642ac
- (void)transaction:(id)arg1 mergeData:(id)arg2 forKey:(id)arg3 domainVersion:(id)arg4 version:(id)arg5 mismatch:(_Bool)arg6 finishedBlock:(CDUnknownBlockType)arg7;	// IMP=0x00000001000640d0
- (void)transaction:(id)arg1 didProcessResponseWithDomainVersion:(id)arg2;	// IMP=0x00000001000640cc
- (void)transaction:(id)arg1 willProcessResponseWithDomainVersion:(id)arg2;	// IMP=0x0000000100064088
- (id)dataForSetTransaction:(id)arg1 key:(id)arg2 version:(id *)arg3;	// IMP=0x0000000100064014
- (id)versionForGetTransaction:(id)arg1 key:(id)arg2;	// IMP=0x000000010006400c
- (void)keyValueStoreController:(id)arg1 transactionDidFinish:(id)arg2;	// IMP=0x0000000100063ffc
- (void)keyValueStoreController:(id)arg1 transaction:(id)arg2 didCancelWithError:(id)arg3;	// IMP=0x0000000100063fe8
- (_Bool)keyValueStoreController:(id)arg1 transaction:(id)arg2 didFailWithError:(id)arg3;	// IMP=0x0000000100063f10
- (_Bool)keyValueStoreController:(id)arg1 shouldScheduleTransaction:(id)arg2;	// IMP=0x0000000100063f08
- (void)_signalKVSTransactionCompletion:(id)arg1 withError:(id)arg2;	// IMP=0x0000000100063e74
- (void)_signalKVSTransactionCompletion:(id)arg1;	// IMP=0x0000000100063e20
- (id)_synchronouslyRunKVSTransaction:(id)arg1;	// IMP=0x0000000100063d30
- (id)newKVSGetAllTransactionSinceDomainVersion:(id)arg1;	// IMP=0x0000000100063cd8
- (id)newKVSGetAllTransactionWithMetadataItems:(id)arg1;	// IMP=0x0000000100063c8c
- (id)newKVSPutAllTransactionWithMetadataItems:(id)arg1;	// IMP=0x0000000100063acc
- (id)newKVSTransactionWithType:(int)arg1 keys:(id)arg2;	// IMP=0x00000001000639c0
- (void)_mergeMetadataItemsFromGetResponse;	// IMP=0x0000000100063614
- (int)_mergeMetadataItemFromSetResponse:(id)arg1;	// IMP=0x0000000100063484
- (void)synchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100063154
- (void)cancel;	// IMP=0x0000000100063144
- (void)timeout;	// IMP=0x00000001000630ec
- (void)cancelWithError:(id)arg1;	// IMP=0x0000000100062fd0
- (_Bool)_shouldStop;	// IMP=0x0000000100062e2c
- (_Bool)_synchronize:(id *)arg1;	// IMP=0x00000001000620f8
- (void)_dataSourceCancelTransaction;	// IMP=0x000000010006206c
- (void)_resetState;	// IMP=0x0000000100061f9c
- (void)dealloc;	// IMP=0x0000000100061e34
- (id)initWithDataSource:(id)arg1 bagContext:(id)arg2 andTask:(id)arg3;	// IMP=0x0000000100061bd8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

