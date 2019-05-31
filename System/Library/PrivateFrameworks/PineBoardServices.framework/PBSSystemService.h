/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PBSSystemService : NSObject
+(id)sharedInstance;
-(void)setAirPlayActive:(BOOL)arg1 ;
-(void)presentSystemRoutingUIWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)wakeSystemForReason:(id)arg1 ;
-(void)sleepSystemForReason:(id)arg1 ;
-(void)deactivateApplication;
-(void)registerServiceProviderEndpoint:(id)arg1 forProviderType:(id)arg2 ;
-(void)launchKioskApp;
-(void)relaunchBackboardd;
-(void)relaunch;
-(void)reboot;
-(void)activateScreenSaver;
-(void)deactivateScreenSaver;
-(void)launchCRDApp;
-(void)presentNowPlayingWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSleepTimeout:(double)arg1 ;
-(void)setNextVoiceRecognitionAudioInputPaths:(id)arg1 ;
-(void)setNextAssistantRecognitionStrings:(id)arg1 ;
-(void)sendMenuButtonEvent;
-(void)sendEventData:(id)arg1 ;
-(void)systemAppearanceWithReply:(/*^block*/id)arg1 ;
-(void)setSystemAppearance:(long long)arg1 ;
-(void)setKioskAppBundleIdentifier:(id)arg1 ;
-(void)setIconName:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)setWantsPlayPauseButtonEvents:(BOOL)arg1 ;
-(void)endpointForProviderType:(id)arg1 withIdentifier:(id)arg2 responseBlock:(/*^block*/id)arg3 ;
-(void)listen;
-(void)sleepTimeoutWithCompletion:(/*^block*/id)arg1 ;
-(void)presentSystemRoutingUI:(/*^block*/id)arg1 ;
-(void)recentApplicationBundleIdentifiersWithCompletion:(/*^block*/id)arg1 ;
-(void)topActiveOrActivatingApplicationIdentifierWithCompletion:(/*^block*/id)arg1 ;
-(void)performScreenActionWithName:(id)arg1 forItemIdentifier:(id)arg2 parameters:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)kioskAppBundleIdentifierWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchPairedAppleRemoteStateWithCompletion:(/*^block*/id)arg1 ;
-(void)pairAppleRemote:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)infoForProvidersWithType:(id)arg1 ;
-(void)setMinimumBackgroundFetchInterval:(double)arg1 ;
-(void)setWantsVolumeButtonEvents:(BOOL)arg1 ;
@end

