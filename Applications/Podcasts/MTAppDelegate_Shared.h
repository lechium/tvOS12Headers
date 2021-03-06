//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIApplicationDelegate.h"

@class MTMediaRemoteController, NSString, RTRoutineManager, UIViewController, UIWindow;

@interface MTAppDelegate_Shared : NSObject <UIApplicationDelegate>
{
    UIWindow *_window;	// 8 = 0x8
    id <MTAppController> _appController;	// 16 = 0x10
    MTMediaRemoteController *_mediaRemoteController;	// 24 = 0x18
    RTRoutineManager *_routineManager;	// 32 = 0x20
}

+ (id)createWindow;	// IMP=0x0000000100008234
@property(retain, nonatomic) RTRoutineManager *routineManager; // @synthesize routineManager=_routineManager;
@property(retain, nonatomic) MTMediaRemoteController *mediaRemoteController; // @synthesize mediaRemoteController=_mediaRemoteController;
@property(retain, nonatomic) id <MTAppController> appController; // @synthesize appController=_appController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;	// IMP=0x000000010000877c
- (void)_startMonitoringForPredictedApplicationLaunch;	// IMP=0x0000000100008510
- (void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;	// IMP=0x00000001000084cc
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000083d0
- (_Bool)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;	// IMP=0x000000010000832c
- (void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000081ac
- (void)application:(id)arg1 performFetchWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000815c
- (void)_performBackgroundLaunchFeedUpdatesForApplication:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007d6c
@property(readonly, nonatomic) UIViewController *rootViewController;
- (_Bool)openURL:(id)arg1;	// IMP=0x0000000100007d5c
- (void)setupAfterBecomingActive;	// IMP=0x000000010000793c
- (void)_setupPlayer;	// IMP=0x0000000100007818
- (_Bool)_isApplicationActive;	// IMP=0x00000001000077c0
- (void)application:(id)arg1 didChangeStatusBarOrientation:(long long)arg2;	// IMP=0x000000010000773c
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000772c
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;	// IMP=0x0000000100007728
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;	// IMP=0x0000000100007724
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x00000001000076dc
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x00000001000076a0
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x00000001000075e4
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x0000000100007588
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x00000001000074dc
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0000000100007224
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x0000000100006d00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

