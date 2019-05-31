/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
@class AirPlayControllerServer;

@interface AirPlayReceiverPlatform : NSObject {

	AirPlayReceiverUIPrivateRef _ui;
	AirPlayReceiverServerPrivate* _server;
	int _uiErrorNotifyToken;
	int _lockDownActivationStateToken;
	unsigned char _playbackPrevented;
	int _playbackAllowNotifyToken;
	int _playbackPreventNotifyToken;
	int _prefChangedNotifyToken;
	int _managedDefaultsChangedNotificationToken;
	int _systemBufferSamples;
	int _systemSampleRate;
	unsigned char _voiceForSiri;
	unsigned char _voiceForTelephony;
	AirPlayControllerServer* _controllerServer;
	float _volumeSliderValue;
	int _volumeControlType;
	unsigned char _isMuted;
	float _volumeSliderValueBeforeMute;

}
-(void)_avSystemControllerVolumeConfigChanged:(id)arg1 ;
-(void)_avSystemControllerVolumeChanged:(id)arg1 ;
-(void)_setupVolumeNotificationHandlers;
-(void)_handleVolumeControlTypeChange;
-(void)_handleAVAudioSessionInterruption:(id)arg1 ;
-(void)_handleAVAudioSessionServicesReset:(id)arg1 ;
@end
