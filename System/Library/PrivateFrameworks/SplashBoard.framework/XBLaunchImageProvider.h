/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, BSInvalidatable;
@class NSObject, NSMutableSet;

@interface XBLaunchImageProvider : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableSet* _blacklistedBundleIdentifiers;
	id<BSInvalidatable> _stateCaptureAssertion;

}
+(id)sharedInstance;
-(void)captureLaunchImageForManifest:(id)arg1 withCompatibilityInfo:(id)arg2 launchRequests:(id)arg3 firstImageIsReady:(/*^block*/id)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(/*^block*/id)createLaunchImageGeneratorWithContext:(id)arg1 ;
-(void)_addStateCaptureHandler;
-(void)preheatServiceWithTimeout:(double)arg1 ;
-(BOOL)_isAppBlacklisted:(id)arg1 ;
-(void)_generateImageForSnapshot:(id)arg1 inManifest:(id)arg2 withContext:(id)arg3 dataProvider:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_blacklistApp:(id)arg1 forError:(id)arg2 ;
-(void)_clearBlacklistForApp:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

