//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, TVCSEndpointManager;

@interface TVSettingsRemoteAppFacade : NSObject
{
    NSArray *_pairedDevices;	// 8 = 0x8
    NSArray *_pairableDevices;	// 16 = 0x10
    TVCSEndpointManager *_endpointManager;	// 24 = 0x18
}

+ (id)deviceStatusFormatter;	// IMP=0x0000000100081a80
@property(readonly, nonatomic) TVCSEndpointManager *endpointManager; // @synthesize endpointManager=_endpointManager;
@property(copy, nonatomic) NSArray *pairableDevices; // @synthesize pairableDevices=_pairableDevices;
@property(copy, nonatomic) NSArray *pairedDevices; // @synthesize pairedDevices=_pairedDevices;
- (void).cxx_destruct;	// IMP=0x0000000100082f60
- (void)_updateRemotesSynchronously:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000824ec
- (void)_pairDevice:(id)arg1 withPasscode:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000823e8
- (void)_unpairDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100082070
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100081fa4
- (void)remoteStatusUpdated:(id)arg1;	// IMP=0x0000000100081f90
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x0000000100081f7c
- (void)dealloc;	// IMP=0x0000000100081e50
- (id)init;	// IMP=0x0000000100081cbc

@end

