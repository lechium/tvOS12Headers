//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSTimer, TVSStateMachine;

@interface PBAXFeatureManager : NSObject
{
    NSArray *_pendingUpdates;	// 8 = 0x8
    CDUnknownBlockType _updateCompletion;	// 16 = 0x10
    NSTimer *_updateTimer;	// 24 = 0x18
    TVSStateMachine *_stateMachine;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00000001000c91cc
@property(retain, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(copy, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(copy, nonatomic) CDUnknownBlockType updateCompletion; // @synthesize updateCompletion=_updateCompletion;
@property(copy, nonatomic) NSArray *pendingUpdates; // @synthesize pendingUpdates=_pendingUpdates;
- (void).cxx_destruct;	// IMP=0x00000001000ccd74
- (void)_cancelPendingUpdates;	// IMP=0x00000001000ccc2c
- (void)_servicePendingUpdates;	// IMP=0x00000001000cc8a0
- (void)_applyUpdatesWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000cc7c8
- (id)_updatesForConfigurationOptions:(id)arg1;	// IMP=0x00000001000cb55c
- (id)_currentConfigOptions;	// IMP=0x00000001000caf44
- (id)_handleSetDefaultConfiguration:(id)arg1;	// IMP=0x00000001000cabc4
- (id)_handleSetSingleAppConfiguration:(id)arg1;	// IMP=0x00000001000ca804
- (void)_initialzeStateMachine;	// IMP=0x00000001000ca1d4
- (void)updateWithConfiguration:(id)arg1;	// IMP=0x00000001000ca0dc
- (_Bool)handleAXShortcutEvent;	// IMP=0x00000001000c92e0
- (id)init;	// IMP=0x00000001000c9288

@end

