//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_PBSMediaRemoteServiceInternalInterface.h"

@class NSMapTable, NSString, PBSystemServiceConnection;

@interface PBMediaRemoteService : NSObject <_PBSMediaRemoteServiceInternalInterface>
{
    PBSystemServiceConnection *_remoteConnection;	// 8 = 0x8
    NSMapTable *_pinViewControllersByToken;	// 16 = 0x10
}

+ (void)_updateVolumeControlAvailableState;	// IMP=0x00000001000cdcc8
+ (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000cdbf4
+ (id)_audioRoutingController;	// IMP=0x00000001000cdb00
+ (void)initialize;	// IMP=0x00000001000cd97c
@property(readonly, nonatomic) NSMapTable *pinViewControllersByToken; // @synthesize pinViewControllersByToken=_pinViewControllersByToken;
@property(readonly, nonatomic) PBSystemServiceConnection *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
- (void).cxx_destruct;	// IMP=0x00000001000cec4c
- (void)__noteUserPresenceDetected;	// IMP=0x00000001000ceb68
- (void)__dismissPinDialogWithToken:(id)arg1;	// IMP=0x00000001000ce9b4
- (void)__showPinDialogWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ce284
- (void)__stopSiriWithContext:(id)arg1;	// IMP=0x00000001000ce0e8
- (void)__startSiriWithContext:(id)arg1;	// IMP=0x00000001000cdf4c
- (void)__activateSiriWithContext:(id)arg1;	// IMP=0x00000001000cddb0
- (id)initWithRemoteConnection:(id)arg1;	// IMP=0x00000001000cd8c0
- (id)init;	// IMP=0x00000001000cd8a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
