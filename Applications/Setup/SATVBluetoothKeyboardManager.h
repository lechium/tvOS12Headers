//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TVSBluetoothManagerDelegate.h"
#import "TVSBluetoothManagerObserver.h"

@class NSString, TVSBluetoothDevice;

@interface SATVBluetoothKeyboardManager : NSObject <TVSBluetoothManagerObserver, TVSBluetoothManagerDelegate>
{
    id <SATVBluetoothKeyboardManagerDelegate> _delegate;	// 8 = 0x8
    TVSBluetoothDevice *_pairingDevice;	// 16 = 0x10
}

@property(retain, nonatomic) TVSBluetoothDevice *pairingDevice; // @synthesize pairingDevice=_pairingDevice;
@property(nonatomic) __weak id <SATVBluetoothKeyboardManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100045e68
- (id)_pairedKeyboard;	// IMP=0x0000000100045c90
- (void)_removeSelfFromBluetoothManager;	// IMP=0x0000000100045ba4
- (void)bluetoothManager:(id)arg1 didAcceptPairingPINForDevice:(id)arg2;	// IMP=0x0000000100045b94
- (void)bluetoothManager:(id)arg1 didRejectPairingPINForDevice:(id)arg2;	// IMP=0x0000000100045a98
- (void)bluetoothManager:(id)arg1 presentPairingPIN:(long long)arg2 forDevice:(id)arg3;	// IMP=0x00000001000459d4
- (void)bluetoothManager:(id)arg1 didCompleteDeviceConnection:(id)arg2 error:(id)arg3;	// IMP=0x00000001000458dc
- (void)bluetoothManagerDidUpdateDiscoveredDevices:(id)arg1;	// IMP=0x0000000100045524
- (void)stopPairing;	// IMP=0x00000001000454ec
- (void)cancelPINPairing;	// IMP=0x0000000100045494
- (void)startPairing;	// IMP=0x0000000100045408
- (void)dealloc;	// IMP=0x00000001000453bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

