//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MZKeyValueStoreDeserializeOperationDelegate.h"
#import "MZKeyValueStoreOperationDelegate.h"

@class IMKeyValueStoreAuthenticationController, IMKeyValueStoreDeserializer, IMKeyValueStoreTransaction, IMTaskAssertion, NSMutableArray, NSNumber, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString, NSURL;

@interface IMKeyValueStoreController : NSObject <MZKeyValueStoreOperationDelegate, MZKeyValueStoreDeserializeOperationDelegate>
{
    id <MZKeyValueStoreControllerDelegate> _delegate;	// 8 = 0x8
    NSURL *_defaultGetURL;	// 16 = 0x10
    NSURL *_defaultSetURL;	// 24 = 0x18
    NSString *_defaultDomain;	// 32 = 0x20
    _Bool _enabled;	// 40 = 0x28
    IMKeyValueStoreAuthenticationController *_authenticationController;	// 48 = 0x30
    _Bool _canRequestStoreSignIn;	// 56 = 0x38
    _Bool _resolvingError;	// 57 = 0x39
    NSMutableArray *_pendingTransactions;	// 64 = 0x40
    IMKeyValueStoreTransaction *_currentTransaction;	// 72 = 0x48
    NSOperationQueue *_operationQueue;	// 80 = 0x50
    IMKeyValueStoreDeserializer *_currentDeserializer;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 96 = 0x60
    IMTaskAssertion *_backgroundTaskAssertion;	// 104 = 0x68
    id _networkTypeObserver;	// 112 = 0x70
}

@property(nonatomic) id networkTypeObserver; // @synthesize networkTypeObserver=_networkTypeObserver;
@property(retain, nonatomic) IMTaskAssertion *backgroundTaskAssertion; // @synthesize backgroundTaskAssertion=_backgroundTaskAssertion;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) IMKeyValueStoreDeserializer *currentDeserializer; // @synthesize currentDeserializer=_currentDeserializer;
@property(nonatomic, getter=isResolvingError) _Bool resolvingError; // @synthesize resolvingError=_resolvingError;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) IMKeyValueStoreTransaction *currentTransaction; // @synthesize currentTransaction=_currentTransaction;
@property(retain, nonatomic) NSMutableArray *pendingTransactions; // @synthesize pendingTransactions=_pendingTransactions;
@property _Bool canRequestStoreSignIn; // @synthesize canRequestStoreSignIn=_canRequestStoreSignIn;
@property(getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain) IMKeyValueStoreAuthenticationController *authenticationController; // @synthesize authenticationController=_authenticationController;
@property(copy) NSString *defaultDomain; // @synthesize defaultDomain=_defaultDomain;
@property(retain) NSURL *defaultSetURL; // @synthesize defaultSetURL=_defaultSetURL;
@property(retain) NSURL *defaultGetURL; // @synthesize defaultGetURL=_defaultGetURL;
@property id <MZKeyValueStoreControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deserializeOperationDidFinish:(id)arg1 shouldReschedule:(_Bool)arg2;	// IMP=0x0000000100076dbc
- (void)keyValueStoreOperationOperationDidFinish:(id)arg1;	// IMP=0x0000000100076db0
- (void)keyValueStoreOperation:(id)arg1 scheduleURLOperation:(id)arg2;	// IMP=0x0000000100076d4c
- (void)operation:(id)arg1 failedWithError:(id)arg2;	// IMP=0x0000000100076b20
- (void)operation:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x00000001000769d8
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;	// IMP=0x00000001000768b4
- (void)_endBackgroundTask;	// IMP=0x00000001000767c8
- (void)_beginBackgroundTask;	// IMP=0x0000000100076584
- (void)_delegateTransactionDidFinish:(id)arg1;	// IMP=0x0000000100076450
- (void)_delegateTransactionDidCancel:(id)arg1 withError:(id)arg2;	// IMP=0x00000001000763c0
- (_Bool)_delegateTransactionDidFail:(id)arg1 withError:(id)arg2;	// IMP=0x0000000100076330
- (_Bool)_delegateShouldScheduleTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x000000010007627c
- (void)_errorResolutionDefault:(id)arg1;	// IMP=0x00000001000761f0
- (void)_errorResolutionCancel:(id)arg1;	// IMP=0x000000010007617c
- (void)_errorResolutionRetry:(id)arg1;	// IMP=0x000000010007606c
- (void)_resolveError:(id)arg1 resolution:(int)arg2;	// IMP=0x0000000100075f6c
- (void)_processOperationOutput:(id)arg1 operationAuthenticated:(_Bool)arg2;	// IMP=0x0000000100075b94
- (void)_transactionDidCancel:(id)arg1 withError:(id)arg2;	// IMP=0x0000000100075a44
- (void)_transactionDidFail:(id)arg1 withError:(id)arg2;	// IMP=0x00000001000758b8
- (void)_currentTransactionDidFinish;	// IMP=0x00000001000757d4
- (id)_scheduleTransactionWithType:(int)arg1 sinceDomainVersion:(id)arg2 URL:(id)arg3 keys:(id)arg4 processor:(id)arg5;	// IMP=0x00000001000756fc
- (_Bool)_authenticationCanProcessTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100075634
- (_Bool)_clampsCanScheduleTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000755f8
- (_Bool)_isTransactionValid:(id)arg1 error:(id *)arg2;	// IMP=0x000000010007555c
- (_Bool)_isEnabledForTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000754f0
- (_Bool)_canScheduleTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100075470
- (void)_addPendingTransaction:(id)arg1;	// IMP=0x00000001000753c8
- (void)_scheduleTransaction:(id)arg1;	// IMP=0x0000000100075358
- (id)_requestForTransaction:(id)arg1;	// IMP=0x000000010007527c
- (void)_processCurrentTransaction;	// IMP=0x00000001000751a0
- (void)_processPendingTransactions;	// IMP=0x00000001000750bc
- (void)_cancelTransaction:(id)arg1 error:(id)arg2;	// IMP=0x0000000100074f5c
- (void)_cancelAllTransactions:(id)arg1;	// IMP=0x0000000100074d88
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;	// IMP=0x0000000100074d5c
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100074d30
- (_Bool)isIdle;	// IMP=0x0000000100074c94
- (void)reset;	// IMP=0x0000000100074bf8
- (void)resolveError:(id)arg1 resolution:(int)arg2;	// IMP=0x0000000100074b14
- (void)cancelAllTransactionsCancelCode:(long long)arg1;	// IMP=0x0000000100074874
- (void)cancelAllTransactions;	// IMP=0x00000001000745d8
- (void)cancelScheduledTransaction:(id)arg1;	// IMP=0x00000001000744c8
- (void)scheduleTransaction:(id)arg1;	// IMP=0x00000001000743a8
- (id)scheduleSetTransactionWithKeys:(id)arg1 processor:(id)arg2;	// IMP=0x0000000100074350
- (id)scheduleGetTransactionWithKeys:(id)arg1 processor:(id)arg2;	// IMP=0x00000001000742f8
- (id)scheduleGetAllTransactionWithSinceDomainVersion:(id)arg1 processor:(id)arg2;	// IMP=0x00000001000742a0
- (id)clampsController;	// IMP=0x000000010007428c
- (void)operationQueue:(id)arg1 willRemoveOperation:(id)arg2;	// IMP=0x000000010007427c
- (void)operationQueue:(id)arg1 willAddOperation:(id)arg2;	// IMP=0x0000000100074214
- (void)clearWeakReferencesInOperation:(id)arg1;	// IMP=0x00000001000741b0
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100073d58
- (_Bool)enabled;	// IMP=0x0000000100073d48
- (void)dealloc;	// IMP=0x0000000100073a64
- (id)initWithDomain:(id)arg1 baseURLForGETAll:(id)arg2 baseURLForPUTAll:(id)arg3;	// IMP=0x0000000100073658
- (id)scheduleApnSubscriptionTransactionWithDictionary:(id)arg1;	// IMP=0x00000001001342ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end

