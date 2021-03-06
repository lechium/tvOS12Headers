//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMTaskAssertion, NSError, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface IMAsynchronousTask : NSObject
{
    NSObject<OS_dispatch_queue> *_handlerQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    _Bool _taskInvalidationDisabled;	// 24 = 0x18
    double _taskTimeout;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_taskTimeoutTimer;	// 40 = 0x28
    double _assertionTimeout;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_assertionTimeoutTimer;	// 56 = 0x38
    int _cancelType;	// 64 = 0x40
    CDUnknownBlockType _finishedHandler;	// 72 = 0x48
    CDUnknownBlockType _expirationHandler;	// 80 = 0x50
    id _result;	// 88 = 0x58
    NSError *_error;	// 96 = 0x60
    NSString *_debugDescription;	// 104 = 0x68
    IMTaskAssertion *_taskAssertion;	// 112 = 0x70
    NSMutableArray *_completions;	// 120 = 0x78
}

@property(retain, nonatomic) NSMutableArray *completions; // @synthesize completions=_completions;
@property(retain, nonatomic) IMTaskAssertion *taskAssertion; // @synthesize taskAssertion=_taskAssertion;
@property(copy, nonatomic) NSString *debugDescription; // @synthesize debugDescription=_debugDescription;
- (void)invokeTaskCompletionBlocksWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010005a5f4
- (void)addTaskCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010005a58c
- (void)invalidate;	// IMP=0x000000010005a52c
- (void)_invalidateTaskAssertionForced:(_Bool)arg1;	// IMP=0x000000010005a2f8
- (void)endTaskOperation;	// IMP=0x000000010005a2bc
- (void)finishTaskOperationWithResult:(id)arg1 error:(id)arg2;	// IMP=0x000000010005a07c
- (void)beginTaskOperation;	// IMP=0x0000000100059d8c
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id result; // @synthesize result=_result;
@property(nonatomic) int cancelType; // @synthesize cancelType=_cancelType;
- (void)_onQueueFireExpirationHandlerIfNecesary;	// IMP=0x0000000100059444
@property(copy, nonatomic) CDUnknownBlockType finishedHandler; // @synthesize finishedHandler=_finishedHandler;
@property(copy, nonatomic) CDUnknownBlockType expirationHandler; // @synthesize expirationHandler=_expirationHandler;
- (id)description;	// IMP=0x0000000100058ce8
- (void)_invalidateAssertionTimer;	// IMP=0x0000000100058c24
- (void)_invalidateTaskTimer;	// IMP=0x0000000100058b60
- (void)dealloc;	// IMP=0x00000001000589b0
- (id)initWithHandlerQueue:(id)arg1 taskTimeout:(double)arg2 assertionTimeout:(double)arg3 debugDescription:(id)arg4;	// IMP=0x0000000100058568

@end

