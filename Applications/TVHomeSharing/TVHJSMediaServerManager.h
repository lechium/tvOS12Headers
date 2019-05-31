//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IKJSObject.h"

#import "TVHJSMediaServerManager.h"
#import "TVHKManagerDelegate.h"

@class NSArray, NSMutableArray, NSString, TVHJSMediaServerDiscoveryConfiguration;

@interface TVHJSMediaServerManager : IKJSObject <TVHKManagerDelegate, TVHJSMediaServerManager>
{
    TVHJSMediaServerDiscoveryConfiguration *_mediaServerDiscoveryConfiguration;	// 8 = 0x8
    NSMutableArray *_mutableMediaServers;	// 16 = 0x10
}

+ (id)_currentMediaServerDiscoveryConfigurationWithAppContext:(id)arg1;	// IMP=0x0000000100039a50
@property(retain, nonatomic) NSMutableArray *mutableMediaServers; // @synthesize mutableMediaServers=_mutableMediaServers;
@property(retain, nonatomic) TVHJSMediaServerDiscoveryConfiguration *mediaServerDiscoveryConfiguration; // @synthesize mediaServerDiscoveryConfiguration=_mediaServerDiscoveryConfiguration;
- (void).cxx_destruct;	// IMP=0x000000010003a108
- (void)_sortMediaServersByName;	// IMP=0x0000000100039f98
- (void)_removeMediaServersWithMediaEntityServers:(id)arg1 appContext:(id)arg2;	// IMP=0x0000000100039cc4
- (void)_addMediaServersWithMediaEntityServers:(id)arg1 appContext:(id)arg2;	// IMP=0x0000000100039b04
- (void)_updateMediaServerDiscoveryConfiguration;	// IMP=0x0000000100039878
- (void)_updateMediaServersWithMediaEntityServers:(id)arg1 changeKind:(unsigned long long)arg2;	// IMP=0x00000001000394dc
- (void)_stopObservingManager;	// IMP=0x000000010003943c
- (void)_startObservingManager;	// IMP=0x0000000100039394
- (void)managerDidStop:(id)arg1;	// IMP=0x0000000100039390
- (void)manager:(id)arg1 didRestartWithSuccess:(_Bool)arg2 error:(id)arg3;	// IMP=0x0000000100039378
- (void)managerWillRestart:(id)arg1;	// IMP=0x0000000100039360
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010003918c
- (void)updateSettingsForMediaServer:(id)arg1:(id)arg2;	// IMP=0x0000000100038fe4
- (id)mediaServerWithIdentifier:(id)arg1;	// IMP=0x0000000100038e4c
- (void)restartMediaServerDiscovery;	// IMP=0x0000000100038e00
@property(readonly, copy, nonatomic) NSArray *mediaServers;
@property(readonly, copy, nonatomic) NSArray *browseableMediaServers;
- (void)dealloc;	// IMP=0x0000000100038cb4
- (id)initWithAppContext:(id)arg1;	// IMP=0x0000000100038b60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

