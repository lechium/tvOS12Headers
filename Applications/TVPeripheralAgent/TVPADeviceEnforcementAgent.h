//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TVSBluetoothManagerDelegate.h"

@class NSSet, NSString;

@interface TVPADeviceEnforcementAgent : NSObject <TVSBluetoothManagerDelegate>
{
    int _notifyTokens[32];	// 8 = 0x8
    NSSet *_priorConnectedDevices;	// 136 = 0x88
    _Bool _observingPhysicalNetworkInterface;	// 144 = 0x90
    _Bool _observingConnectedDevices;	// 145 = 0x91
    _Bool _enforcing;	// 146 = 0x92
}

- (void).cxx_destruct;	// IMP=0x0000000100006fb8
- (_Bool)askUserAboutDisconnectingAudioDevice;	// IMP=0x0000000100006cc8
- (_Bool)askUserAboutConnectingAudioDevice;	// IMP=0x00000001000069d8
- (void)tellUserDevice:(id)arg1 disconnectedDueToDeviceLimit:(long long)arg2;	// IMP=0x000000010000634c
- (void)_bluetoothManagerUpdated:(id)arg1;	// IMP=0x0000000100005e40
- (void)_didCompleteDeviceConnection:(id)arg1 currentState:(unsigned int)arg2;	// IMP=0x00000001000054c0
- (void)bluetoothManager:(id)arg1 didCompleteDeviceConnection:(id)arg2 error:(id)arg3;	// IMP=0x0000000100004fbc
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100004ccc
- (void)startEnforcing;	// IMP=0x0000000100004a7c
- (_Bool)_isBreakingEnforcableRuleForDeviceType:(long long)arg1;	// IMP=0x00000001000049f4
- (void)_applyNewEnforcement;	// IMP=0x0000000100003fbc
- (void)dealloc;	// IMP=0x0000000100003e04
- (id)init;	// IMP=0x00000001000039c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

