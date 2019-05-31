/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:39 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AVOutputDeviceDiscoverySession, AVAudioSession, AVOutputDeviceDiscoverySessionAvailableOutputDevices;


@protocol AVOutputDeviceDiscoverySessionImpl <NSObject>
@property (__weak) AVOutputDeviceDiscoverySession * parentOutputDeviceDiscoverySession; 
@property (nonatomic,retain) AVAudioSession * targetAudioSession; 
@property (nonatomic,readonly) AVOutputDeviceDiscoverySessionAvailableOutputDevices * availableOutputDevicesObject; 
@property (nonatomic,readonly) BOOL devicePresenceDetected; 
@required
-(void)setParentOutputDeviceDiscoverySession:(id)arg1;
-(AVAudioSession *)targetAudioSession;
-(void)setTargetAudioSession:(id)arg1;
-(void)outputDeviceDiscoverySessionDidChangeDiscoveryMode:(id)arg1;
-(AVOutputDeviceDiscoverySessionAvailableOutputDevices *)availableOutputDevicesObject;
-(AVOutputDeviceDiscoverySession *)parentOutputDeviceDiscoverySession;
-(BOOL)devicePresenceDetected;

@end

