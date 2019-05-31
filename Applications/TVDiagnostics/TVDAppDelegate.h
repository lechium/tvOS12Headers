//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "UIApplicationDelegate.h"

@class NSString, UIWindow;

@interface TVDAppDelegate : UIResponder <UIApplicationDelegate>
{
    _Bool _allowApplicationBackgrounding;	// 8 = 0x8
    _Bool _shouldTerminate;	// 9 = 0x9
    _Bool _shouldUnenrollDevices;	// 10 = 0xa
    UIWindow *_window;	// 16 = 0x10
    id <DADevice> _device;	// 24 = 0x18
    NSString *_ticketNumber;	// 32 = 0x20
}

@property(nonatomic) _Bool shouldUnenrollDevices; // @synthesize shouldUnenrollDevices=_shouldUnenrollDevices;
@property(nonatomic) _Bool shouldTerminate; // @synthesize shouldTerminate=_shouldTerminate;
@property(nonatomic) _Bool allowApplicationBackgrounding; // @synthesize allowApplicationBackgrounding=_allowApplicationBackgrounding;
@property(readonly, nonatomic) NSString *ticketNumber; // @synthesize ticketNumber=_ticketNumber;
@property(readonly, nonatomic) id <DADevice> device; // @synthesize device=_device;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;	// IMP=0x00000001000157d0
- (void)exitApplication;	// IMP=0x00000001000156f8
- (void)handleCloseApplicationEvent;	// IMP=0x00000001000156e0
- (void)allowApplicationBackgrounding:(_Bool)arg1;	// IMP=0x00000001000156d4
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x0000000100015698
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;	// IMP=0x0000000100015628
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x00000001000154ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

