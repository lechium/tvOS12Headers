/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:58 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RPDaemonProtocol <NSObject>
@required
-(oneway void)pauseRecording;
-(oneway void)synchronousIsBroadcastingWithPreferredExtension:(id)arg1 handler:(/*^block*/id)arg2;
-(oneway void)synchronousGetCurrentState:(/*^block*/id)arg1;
-(oneway void)setHasUserConsentForCamera:(BOOL)arg1;
-(oneway void)setHasUserConsentForMicrophone:(BOOL)arg1;
-(oneway void)setBroadcastURL:(id)arg1;
-(oneway void)setMicrophoneEnabledPersistent:(BOOL)arg1;
-(oneway void)clientDidBecomeActive;
-(oneway void)startRecordingWindowLayerContextIDs:(id)arg1 windowSize:(CGSize)arg2 microphoneEnabled:(BOOL)arg3 cameraEnabled:(BOOL)arg4 broadcast:(BOOL)arg5 systemRecording:(BOOL)arg6 captureEnabled:(BOOL)arg7 listenerEndpoint:(id)arg8 withHandler:(/*^block*/id)arg9;
-(oneway void)stopRecordingWithHandler:(/*^block*/id)arg1;
-(oneway void)saveVideoToCameraRoll:(id)arg1 handler:(/*^block*/id)arg2;
-(oneway void)stopRecordingWithStartClipDuration:(double)arg1 endClipDuration:(double)arg2 handler:(/*^block*/id)arg3;
-(oneway void)discardRecordingWithHandler:(/*^block*/id)arg1;
-(oneway void)clientDidResignActive;
-(oneway void)resumeRecordingWithWindowLayerContextID:(unsigned)arg1;
-(oneway void)setMicrophoneEnabled:(BOOL)arg1;
-(oneway void)updateProcessIDForAudioCaptureWithPID:(int)arg1;
-(oneway void)setupBroadcastWithHostBundleID:(id)arg1 broadcastExtensionBundleID:(id)arg2 broadcastConfigurationData:(id)arg3 userInfo:(id)arg4 handler:(/*^block*/id)arg5;
-(oneway void)getCurrentBroadcastImages:(/*^block*/id)arg1;
-(oneway void)getSystemBroadcastExtensionInfo:(/*^block*/id)arg1;
-(oneway void)reportCameraUsage:(int)arg1;

@end

