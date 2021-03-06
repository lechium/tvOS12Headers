//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SSIndicatorLight;

@interface ATVHIDSystemClient : NSObject
{
    struct __IOHIDEventSystemClient *_hidSystemClient;	// 8 = 0x8
    struct __IOHIDEventSystemClient *_btKeyboardHIDSystemClient;	// 16 = 0x10
    NSArray *_normalEventRouters;	// 24 = 0x18
    _Bool _deviceIsSleeping;	// 32 = 0x20
    SSIndicatorLight *_sil;	// 40 = 0x28
}

+ (_Bool)_buttonEvent:(struct __IOHIDEvent *)arg1 containsUsage:(long long)arg2;	// IMP=0x0000000100068afc
+ (_Bool)isRemoteAppEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000100068adc
+ (_Bool)isCECButtonEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000100068abc
+ (_Bool)isIRRemoteButtonEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000100068a9c
+ (_Bool)isBluetoothKeyboardButtonEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000100068a54
+ (id)sharedInstance;	// IMP=0x00000001000684d8
- (void).cxx_destruct;	// IMP=0x000000010006ae48
- (void)_handleWillWakeNotification:(id)arg1;	// IMP=0x000000010006a83c
- (void)_handleWillSleepNotification:(id)arg1;	// IMP=0x000000010006a1e8
- (void)_setSILForButtonDown:(_Bool)arg1;	// IMP=0x000000010006a19c
- (void)flashSILMorseCode:(id)arg1;	// IMP=0x000000010006a12c
- (void)setSILStateForHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010006a00c
- (void)setSILState_On;	// IMP=0x0000000100069fe8
- (void)_setSILState_On:(id)arg1;	// IMP=0x0000000100069e04
- (void)_setSILState_Off:(id)arg1;	// IMP=0x0000000100069c20
- (void)_processGenericDesktopEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000100069b34
- (void)_processConsumerEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000100069a7c
- (void)_processBatterySystemEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000100069a5c
- (void)_processAppleVendorDebugEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001000697d0
- (void)_processAppleVendorIRRemoteEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000100069760
- (void)_processHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000100069550
- (void)setupHIDEventRouters;	// IMP=0x0000000100068bb4
- (void)dealloc;	// IMP=0x00000001000689b4
- (void)_startKeyboardHIDClient;	// IMP=0x00000001000687f8
- (int)_init;	// IMP=0x00000001000685b4
- (id)init;	// IMP=0x000000010006852c

@end

