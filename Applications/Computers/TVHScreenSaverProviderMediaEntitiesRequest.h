//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TVHKMediaEntityFetchControllerDelegate.h"

@class NSString, TVHKMediaEntityFetchController, TVHKMediaEntityIdentifier, TVHKMediaEntityServer, TVHSMediaServerIdentifier, TVSStateMachine;

@interface TVHScreenSaverProviderMediaEntitiesRequest : NSObject <TVHKMediaEntityFetchControllerDelegate>
{
    unsigned long long _mediaCategoryType;	// 8 = 0x8
    TVHSMediaServerIdentifier *_mediaServerIdentifier;	// 16 = 0x10
    TVHKMediaEntityIdentifier *_mediaCollectionIdentifier;	// 24 = 0x18
    TVHKMediaEntityServer *_mediaEntityServer;	// 32 = 0x20
    TVSStateMachine *_stateMachine;	// 40 = 0x28
    TVHKMediaEntityFetchController *_mediaEntityFetchResultsController;	// 48 = 0x30
    CDUnknownBlockType _completionBlock;	// 56 = 0x38
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) TVHKMediaEntityFetchController *mediaEntityFetchResultsController; // @synthesize mediaEntityFetchResultsController=_mediaEntityFetchResultsController;
@property(retain, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) TVHKMediaEntityServer *mediaEntityServer; // @synthesize mediaEntityServer=_mediaEntityServer;
@property(retain, nonatomic) TVHKMediaEntityIdentifier *mediaCollectionIdentifier; // @synthesize mediaCollectionIdentifier=_mediaCollectionIdentifier;
@property(retain, nonatomic) TVHSMediaServerIdentifier *mediaServerIdentifier; // @synthesize mediaServerIdentifier=_mediaServerIdentifier;
@property(nonatomic) unsigned long long mediaCategoryType; // @synthesize mediaCategoryType=_mediaCategoryType;
- (void).cxx_destruct;	// IMP=0x000000010002e3b8
- (void)_completeWithFetchResult:(id)arg1 error:(id)arg2;	// IMP=0x000000010002e09c
- (void)_startFetchingMediaEntities;	// IMP=0x000000010002dfcc
- (id)_fetchRequest;	// IMP=0x000000010002dd64
- (void)_stopObservingMediaServer:(id)arg1;	// IMP=0x000000010002dcd4
- (void)_startObservingMediaServer:(id)arg1;	// IMP=0x000000010002dc3c
- (id)_stateMachineName;	// IMP=0x000000010002dba0
- (void)_registerStateMachineHandlers;	// IMP=0x000000010002d204
- (void)_setupStateMachine;	// IMP=0x000000010002d16c
- (void)_handleMediaServerConnectionStateDidChangeNotification:(id)arg1;	// IMP=0x000000010002d000
- (void)controller:(id)arg1 fetchRequest:(id)arg2 didFailWithError:(id)arg3;	// IMP=0x000000010002cf08
- (void)controller:(id)arg1 fetchRequest:(id)arg2 didCompleteWithResult:(id)arg3;	// IMP=0x000000010002ce14
- (void)fetchMediaEntitiesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010002cbe8
- (void)dealloc;	// IMP=0x000000010002cb90
- (id)initWithMediaCategoryType:(unsigned long long)arg1 mediaServerIdentifier:(id)arg2 mediaCollectionIdentifier:(id)arg3;	// IMP=0x000000010002ca48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

