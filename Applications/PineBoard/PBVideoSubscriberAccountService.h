//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBSVideoSubscriberAccountServiceInterface.h"

@class NSString, PBSystemServiceConnection;

@interface PBVideoSubscriberAccountService : NSObject <PBSVideoSubscriberAccountServiceInterface>
{
    PBSystemServiceConnection *_remoteConnection;	// 8 = 0x8
}

@property(readonly, nonatomic) PBSystemServiceConnection *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
- (void).cxx_destruct;	// IMP=0x0000000100094970
- (void)installAppWithMetadata:(id)arg1;	// IMP=0x0000000100093c40
- (id)initWithRemoteConnection:(id)arg1;	// IMP=0x0000000100093bc0
- (id)init;	// IMP=0x0000000100093ba8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

