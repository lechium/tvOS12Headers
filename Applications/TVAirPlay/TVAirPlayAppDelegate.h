//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "UIApplicationDelegate.h"

@class BKSProcessAssertion, NSString, TVAirPlayReceiverDelegate, UIWindow;

@interface TVAirPlayAppDelegate : UIResponder <UIApplicationDelegate>
{
    _Bool _playbackActive;	// 8 = 0x8
    int _cloudAvailabilityNotifyToken;	// 12 = 0xc
    UIWindow *_window;	// 16 = 0x10
    BKSProcessAssertion *_procAssert;	// 24 = 0x18
    TVAirPlayReceiverDelegate *_receiverDelegate;	// 32 = 0x20
    NSString *_previousAudioRouteUID;	// 40 = 0x28
}

@property(retain, nonatomic) NSString *previousAudioRouteUID; // @synthesize previousAudioRouteUID=_previousAudioRouteUID;
@property(nonatomic) int cloudAvailabilityNotifyToken; // @synthesize cloudAvailabilityNotifyToken=_cloudAvailabilityNotifyToken;
@property(retain, nonatomic) TVAirPlayReceiverDelegate *receiverDelegate; // @synthesize receiverDelegate=_receiverDelegate;
@property(retain, nonatomic) BKSProcessAssertion *procAssert; // @synthesize procAssert=_procAssert;
@property(nonatomic) _Bool playbackActive; // @synthesize playbackActive=_playbackActive;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;	// IMP=0x0000000100017344
- (void)_updatePlaybackActive;	// IMP=0x00000001000171f4
- (void)_updateCloudConnectivityState;	// IMP=0x0000000100017008
- (void)_reenableAirPlaySpeakerIfNecessary;	// IMP=0x0000000100016c40
- (void)_disableAirPlaySpeakerIfNecessary;	// IMP=0x00000001000168d8
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x000000010001674c
- (void)dealloc;	// IMP=0x00000001000166d4
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x00000001000162cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

