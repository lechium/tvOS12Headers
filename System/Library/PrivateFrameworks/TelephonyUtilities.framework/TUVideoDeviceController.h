/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/TUVideoDeviceControllerProviderDelegate.h>

@protocol OS_dispatch_queue, TUVideoDeviceControllerProviderTUVideoEffectsProvider;
@class NSObject, AVCaptureDevice, NSArray, CALayer, TUVideoEffect;

@interface TUVideoDeviceController : NSObject <TUVideoDeviceControllerProviderDelegate> {

	BOOL _wantsPreview;
	BOOL _hasRefreshedPreviewAfterError;
	NSObject*<OS_dispatch_queue> _serialQueue;
	id<TUVideoDeviceControllerProvider><TUVideoEffectsProvider> _provider;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;                                          //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,readonly) id<TUVideoDeviceControllerProvider><TUVideoEffectsProvider> provider;              //@synthesize provider=_provider - In the implementation block
@property (assign,nonatomic) BOOL wantsPreview;                                                                   //@synthesize wantsPreview=_wantsPreview - In the implementation block
@property (assign,nonatomic) BOOL hasRefreshedPreviewAfterError;                                                  //@synthesize hasRefreshedPreviewAfterError=_hasRefreshedPreviewAfterError - In the implementation block
@property (nonatomic,retain) AVCaptureDevice * currentInputDevice; 
@property (assign,nonatomic) int currentVideoOrientation; 
@property (nonatomic,copy,readonly) NSArray * inputDevices; 
@property (getter=isPreviewRunning,nonatomic,readonly) BOOL previewRunning; 
@property (nonatomic,retain) CALayer * localFrontLayer; 
@property (nonatomic,retain) CALayer * localBackLayer; 
@property (nonatomic,readonly) CGRect localScreenContentsRect; 
@property (nonatomic,retain) TUVideoEffect * currentVideoEffect; 
@property (nonatomic,copy,readonly) NSArray * availableVideoEffects; 
+(int)_tuOrientationForVideoOrientation:(int)arg1 ;
+(int)_videoOrientationForTUOrientation:(int)arg1 ;
-(id<TUVideoDeviceControllerProvider><TUVideoEffectsProvider>)provider;
-(id)initWithProvider:(id)arg1 serialQueue:(id)arg2 ;
-(void)setCurrentVideoEffect:(TUVideoEffect *)arg1 ;
-(TUVideoEffect *)currentVideoEffect;
-(void)setWantsPreview:(BOOL)arg1 ;
-(int)currentVideoOrientation;
-(BOOL)hasRefreshedPreviewAfterError;
-(BOOL)wantsPreview;
-(void)setHasRefreshedPreviewAfterError:(BOOL)arg1 ;
-(void)didStartPreviewForProvider:(id)arg1 ;
-(void)didStopPreviewForProvider:(id)arg1 ;
-(void)captureDevicesChangedForProvider:(id)arg1 ;
-(void)provider:(id)arg1 cameraDidBecomeAvailableForUniqueID:(id)arg2 ;
-(void)provider:(id)arg1 didChangeLocalVideoAttributes:(id)arg2 ;
-(void)provider:(id)arg1 didReceiveErrorFromCameraUniqueID:(id)arg2 error:(id)arg3 ;
-(void)provider:(id)arg1 didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg2 ;
-(void)setCurrentVideoOrientation:(int)arg1 ;
-(CALayer *)localFrontLayer;
-(void)setLocalFrontLayer:(CALayer *)arg1 ;
-(CALayer *)localBackLayer;
-(void)setLocalBackLayer:(CALayer *)arg1 ;
-(NSArray *)availableVideoEffects;
-(void)noteBeginAnimationToPreview;
-(void)noteEndAnimationToPreview;
-(void)noteBeginAnimationToPIP;
-(void)noteEndAnimationToPIP;
-(void)setLocalPortraitAspectRatio:(CGSize)arg1 localLandscapeAspectRatio:(CGSize)arg2 ;
-(CGRect)localScreenContentsRect;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setCurrentInputDevice:(AVCaptureDevice *)arg1 ;
-(AVCaptureDevice *)currentInputDevice;
-(void)startPreview;
-(BOOL)isPreviewRunning;
-(NSArray *)inputDevices;
-(void)pausePreview;
-(void)stopPreview;
-(id)init;
-(id)debugDescription;
-(id)initWithSerialQueue:(id)arg1 ;
@end

