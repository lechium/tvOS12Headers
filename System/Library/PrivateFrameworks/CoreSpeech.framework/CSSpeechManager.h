/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSAudioRecorderDelegate.h>
#import <libobjc.A.dylib/CSStateMachineDelegate.h>
#import <libobjc.A.dylib/CSVoiceTriggerDelegate.h>
#import <libobjc.A.dylib/CSSiriEnabledMonitorDelegate.h>
#import <libobjc.A.dylib/CSAudioServerCrashMonitorGibraltarDelegate.h>
#import <libobjc.A.dylib/CSSmartSiriVolumeDelegate.h>
#import <libobjc.A.dylib/CSAudioRouteChangeMonitorDelegate.h>
#import <libobjc.A.dylib/CSVoiceTriggerAssetDownloadMonitorDelegate.h>
#import <libobjc.A.dylib/CSLanguageCodeUpdateMonitorDelegate.h>

@protocol OS_dispatch_queue, CSSpeechManagerDelegate, OS_dispatch_source;
@class CSAudioRecorder, NSObject, CSStateMachine, CSAudioCircularBuffer, CSAsset, CSVoiceTriggerFirstPass, CSVoiceTriggerSecondPass, CSVoiceTriggerEventNotifier, CSVoiceTriggerFileLogger, CSSelfTriggerDetector, CSContinuousVoiceTrigger, CSKeywordDetector, CSMyriadPHash, CSVoiceTriggerFidesClient, NSDictionary, CSSmartSiriVolume, NSHashTable, NSUUID, NSString;

@interface CSSpeechManager : NSObject <CSAudioRecorderDelegate, CSStateMachineDelegate, CSVoiceTriggerDelegate, CSSiriEnabledMonitorDelegate, CSAudioServerCrashMonitorGibraltarDelegate, CSSmartSiriVolumeDelegate, CSAudioRouteChangeMonitorDelegate, CSVoiceTriggerAssetDownloadMonitorDelegate, CSLanguageCodeUpdateMonitorDelegate> {

	BOOL _isSiriEnabled;
	BOOL _deviceRoleIsStereo;
	BOOL _isAudioSessionActive;
	CSAudioRecorder* _audioRecorder;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _assetQueryQueue;
	CSStateMachine* _stateMachine;
	CSAudioCircularBuffer* _audioBuffer;
	id<CSSpeechManagerDelegate> _clientController;
	CSAsset* _currentVoiceTriggerAsset;
	CSVoiceTriggerFirstPass* _voiceTriggerFirstPass;
	CSVoiceTriggerSecondPass* _voiceTriggerSecondPass;
	CSVoiceTriggerEventNotifier* _voiceTriggerEventNotifier;
	CSVoiceTriggerFileLogger* _voiceTriggerFileLogger;
	CSSelfTriggerDetector* _selfTriggerDetector;
	CSContinuousVoiceTrigger* _continuousVoiceTrigger;
	CSKeywordDetector* _keywordDetector;
	CSMyriadPHash* _myriad;
	CSVoiceTriggerFidesClient* _voiceTriggerFidesClient;
	unsigned long long _secondPassStartSampleCount;
	NSDictionary* _lastVoiceTriggerEventInfo;
	CSSmartSiriVolume* _smartSiriVolume;
	NSHashTable* _activeAudioProcessors;
	NSHashTable* _continuousAudioProcessors;
	unsigned long long _lastForwardedSampleCount;
	unsigned long long _clientStartSampleCount;
	NSObject*<OS_dispatch_source> _listenPollingTimer;
	NSObject*<OS_dispatch_source> _clearLoggingFileTimer;
	long long _listenPollingTimerCount;
	long long _clearLoggingFileTimerCount;
	NSUUID* _pendingSetRecordModeToRecordingToken;
	/*^block*/id _pendingSetRecordModeToRecordingCompletion;
	double _audioSessionActivationDelay;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> assetQueryQueue;                         //@synthesize assetQueryQueue=_assetQueryQueue - In the implementation block
@property (nonatomic,retain) CSStateMachine * stateMachine;                                        //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) CSAudioCircularBuffer * audioBuffer;                                  //@synthesize audioBuffer=_audioBuffer - In the implementation block
@property (assign,nonatomic,__weak) id<CSSpeechManagerDelegate> clientController;                  //@synthesize clientController=_clientController - In the implementation block
@property (nonatomic,retain) CSAsset * currentVoiceTriggerAsset;                                   //@synthesize currentVoiceTriggerAsset=_currentVoiceTriggerAsset - In the implementation block
@property (nonatomic,retain) CSVoiceTriggerFirstPass * voiceTriggerFirstPass;                      //@synthesize voiceTriggerFirstPass=_voiceTriggerFirstPass - In the implementation block
@property (nonatomic,retain) CSVoiceTriggerSecondPass * voiceTriggerSecondPass;                    //@synthesize voiceTriggerSecondPass=_voiceTriggerSecondPass - In the implementation block
@property (nonatomic,retain) CSVoiceTriggerEventNotifier * voiceTriggerEventNotifier;              //@synthesize voiceTriggerEventNotifier=_voiceTriggerEventNotifier - In the implementation block
@property (nonatomic,retain) CSVoiceTriggerFileLogger * voiceTriggerFileLogger;                    //@synthesize voiceTriggerFileLogger=_voiceTriggerFileLogger - In the implementation block
@property (nonatomic,retain) CSSelfTriggerDetector * selfTriggerDetector;                          //@synthesize selfTriggerDetector=_selfTriggerDetector - In the implementation block
@property (nonatomic,retain) CSContinuousVoiceTrigger * continuousVoiceTrigger;                    //@synthesize continuousVoiceTrigger=_continuousVoiceTrigger - In the implementation block
@property (nonatomic,retain) CSKeywordDetector * keywordDetector;                                  //@synthesize keywordDetector=_keywordDetector - In the implementation block
@property (nonatomic,retain) CSMyriadPHash * myriad;                                               //@synthesize myriad=_myriad - In the implementation block
@property (nonatomic,retain) CSVoiceTriggerFidesClient * voiceTriggerFidesClient;                  //@synthesize voiceTriggerFidesClient=_voiceTriggerFidesClient - In the implementation block
@property (assign,nonatomic) unsigned long long secondPassStartSampleCount;                        //@synthesize secondPassStartSampleCount=_secondPassStartSampleCount - In the implementation block
@property (nonatomic,retain) NSDictionary * lastVoiceTriggerEventInfo;                             //@synthesize lastVoiceTriggerEventInfo=_lastVoiceTriggerEventInfo - In the implementation block
@property (nonatomic,retain) CSSmartSiriVolume * smartSiriVolume;                                  //@synthesize smartSiriVolume=_smartSiriVolume - In the implementation block
@property (nonatomic,retain) NSHashTable * activeAudioProcessors;                                  //@synthesize activeAudioProcessors=_activeAudioProcessors - In the implementation block
@property (nonatomic,retain) NSHashTable * continuousAudioProcessors;                              //@synthesize continuousAudioProcessors=_continuousAudioProcessors - In the implementation block
@property (assign,nonatomic) unsigned long long lastForwardedSampleCount;                          //@synthesize lastForwardedSampleCount=_lastForwardedSampleCount - In the implementation block
@property (assign,nonatomic) unsigned long long clientStartSampleCount;                            //@synthesize clientStartSampleCount=_clientStartSampleCount - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> listenPollingTimer;                     //@synthesize listenPollingTimer=_listenPollingTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> clearLoggingFileTimer;                  //@synthesize clearLoggingFileTimer=_clearLoggingFileTimer - In the implementation block
@property (assign,nonatomic) long long listenPollingTimerCount;                                    //@synthesize listenPollingTimerCount=_listenPollingTimerCount - In the implementation block
@property (assign,nonatomic) long long clearLoggingFileTimerCount;                                 //@synthesize clearLoggingFileTimerCount=_clearLoggingFileTimerCount - In the implementation block
@property (nonatomic,retain) NSUUID * pendingSetRecordModeToRecordingToken;                        //@synthesize pendingSetRecordModeToRecordingToken=_pendingSetRecordModeToRecordingToken - In the implementation block
@property (nonatomic,copy) id pendingSetRecordModeToRecordingCompletion;                           //@synthesize pendingSetRecordModeToRecordingCompletion=_pendingSetRecordModeToRecordingCompletion - In the implementation block
@property (assign,nonatomic) BOOL isSiriEnabled;                                                   //@synthesize isSiriEnabled=_isSiriEnabled - In the implementation block
@property (assign,nonatomic) BOOL deviceRoleIsStereo;                                              //@synthesize deviceRoleIsStereo=_deviceRoleIsStereo - In the implementation block
@property (assign,nonatomic) BOOL isAudioSessionActive;                                            //@synthesize isAudioSessionActive=_isAudioSessionActive - In the implementation block
@property (assign,nonatomic) double audioSessionActivationDelay;                                   //@synthesize audioSessionActivationDelay=_audioSessionActivationDelay - In the implementation block
@property (nonatomic,retain) CSAudioRecorder * audioRecorder;                                      //@synthesize audioRecorder=_audioRecorder - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                   //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_startListening:(id*)arg1 ;
-(void)_setupStateMachine;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(CSAudioCircularBuffer *)audioBuffer;
-(void)setAudioBuffer:(CSAudioCircularBuffer *)arg1 ;
-(BOOL)isAudioSessionActive;
-(void)setIsAudioSessionActive:(BOOL)arg1 ;
-(void)CSVoiceTriggerAssetDownloadMonitor:(id)arg1 didInstallNewAsset:(BOOL)arg2 ;
-(void)CSSmartSiriVolumeDidReceiveAlarmChanged:(long long)arg1 ;
-(void)CSSmartSiriVolumeDidReceiveTimerChanged:(long long)arg1 ;
-(void)CSSmartSiriVolumeDidReceiveMusicVolumeChanged:(float)arg1 ;
-(void)voiceTriggerDidDetectKeyword:(id)arg1 ;
-(void)voiceTriggerDidDetectTwoShotAtTime:(double)arg1 ;
-(void)startRecordingAsyncWithSetting:(id)arg1 event:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)stopRecordingWithEvent:(unsigned long long)arg1 ;
-(void)didTransitFrom:(long long)arg1 to:(long long)arg2 by:(long long)arg3 ;
-(void)didIgnoreEvent:(long long)arg1 from:(long long)arg2 ;
-(void)_setupCircularBuffer;
-(void)_createListenPollingTimer;
-(void)_createClearLoggingFileTimer;
-(double)audioSessionActivationDelay;
-(void)_notifyEvent:(unsigned long long)arg1 ;
-(void)_startVoiceTrigger;
-(void)_setupVoiceTriggerWithCompletion:(/*^block*/id)arg1 ;
-(void)mediaserverdDidRestart;
-(void)_startClearLoggingFilesTimer;
-(id)_voiceTriggerEventNotifierCreateIfNeeded:(BOOL)arg1 ;
-(id)_myriadCreateIfNeeded:(BOOL)arg1 ;
-(void)_getVoiceTriggerAsset:(/*^block*/id)arg1 ;
-(void)_startForwardingToSmartSiriVolume;
-(void)_createCircularBuffer;
-(id)_eventName:(unsigned long long)arg1 ;
-(CSAudioRecorder *)audioRecorder;
-(void)setAudioRecorder:(CSAudioRecorder *)arg1 ;
-(id)_getClientRecordContext;
-(void)_scheduleSetRecordModeToRecordingWithDelay:(double)arg1 forReason:(id)arg2 validator:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_setRecordMode:(long long)arg1 error:(id*)arg2 ;
-(void)prewarmAudioSession;
-(id)recordRoute;
-(id)recordDeviceInfo;
-(id)recordSettings;
-(BOOL)isNarrowBand;
-(BOOL)_createRecorderWithContextIfNeeded:(id)arg1 error:(id*)arg2 ;
-(void)_enableMiniDucking:(BOOL)arg1 ;
-(BOOL)_prepareRecorderWithSettings:(id)arg1 error:(id*)arg2 ;
-(void)_cancelPendingSetRecordModeToRecordingForReason:(id)arg1 ;
-(BOOL)_setRecordMode:(long long)arg1 withDelay:(double)arg2 error:(id*)arg3 ;
-(void)releaseClientAudioSession:(unsigned long long)arg1 ;
-(BOOL)_releaseAudioSessionForListening:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)_releaseClientAudioSession:(unsigned long long)arg1 ;
-(id)_stateName:(long long)arg1 ;
-(BOOL)_startRecordingWithSettings:(id)arg1 event:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)_handleAOPFirstPassTriggerEvent:(unsigned long long)arg1 settings:(id)arg2 error:(id*)arg3 ;
-(BOOL)_handleVoiceTriggerSwitchAOP2APEvent:(unsigned long long)arg1 settings:(id)arg2 error:(id*)arg3 ;
-(BOOL)_startRecordingWithSettings:(id)arg1 error:(id*)arg2 ;
-(void)_startRecordingForClient:(id)arg1 error:(id*)arg2 ;
-(void)notifyEvent:(unsigned long long)arg1 ;
-(void)_reinitializeVoiceTriggerIfNeeded;
-(void)_stopRecordingWithEvent:(unsigned long long)arg1 ;
-(void)handleLostServerConnection;
-(void)handleServerDidRestart;
-(void)_stopForwardingToFirstPassVoiceTrigger;
-(void)_stopForwardingToSelfTriggerDetector;
-(void)_stopForwardingToSecondPassVoiceTrigger;
-(void)_stopForwardingToClient;
-(void)_stopForwardingToContinuousVoiceTrigger;
-(void)_stopForwardingToKeywordDetector;
-(void)_startForwardingToFirstPassVoiceTrigger;
-(void)_startForwardingToSelfTriggerDetector;
-(void)_startForwardingToSecondPassVoiceTrigger;
-(void)_startForwardingToClient;
-(void)_startForwardingToContinuousVoiceTrigger;
-(void)_startForwardingToKeywordDetector;
-(void)_startListenPolling;
-(void)_destroyAudioRecorderIfNeeded;
-(BOOL)_prepareListenWithSettings:(id)arg1 error:(id*)arg2 ;
-(void)_stopListenPolling;
-(void)_performPendingSetRecordModeToRecordingForReason:(id)arg1 ;
-(void)_reinitializeVoiceTriggerWithAsset:(id)arg1 ;
-(void)_reinitializeSmartSiriVolumeWithAsset:(id)arg1 ;
-(void)audioRecorderBufferAvailable:(id)arg1 buffer:(id)arg2 atTime:(unsigned long long)arg3 ;
-(void)audioRecorderBufferAvailable:(id)arg1 buffer:(id)arg2 ;
-(void)audioRecorderDidStartRecording:(id)arg1 successfully:(BOOL)arg2 error:(id)arg3 ;
-(void)audioRecorderDidStopRecording:(id)arg1 forReason:(long long)arg2 ;
-(void)audioRecorderRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(long long)arg2 ;
-(void)audioRecorderDidFinishAlertPlayback:(id)arg1 ofType:(long long)arg2 error:(id)arg3 ;
-(void)audioRecorderBeginRecordInterruption:(id)arg1 ;
-(void)audioRecorderBeginRecordInterruption:(id)arg1 withContext:(id)arg2 ;
-(void)audioRecorderEndRecordInterruption:(id)arg1 ;
-(void)audioRecorder:(id)arg1 willSetAudioSessionActive:(BOOL)arg2 ;
-(void)audioRecorder:(id)arg1 didSetAudioSessionActive:(BOOL)arg2 ;
-(void)audioRecorderDisconnected:(id)arg1 ;
-(void)audioRecorderLostMediaserverd:(id)arg1 ;
-(void)CSSiriEnabledMonitor:(id)arg1 didReceiveEnabled:(BOOL)arg2 ;
-(void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2 ;
-(id)initWithVoiceTriggerFirstPass:(id)arg1 voicetriggerSecondPass:(id)arg2 voicetriggerEventNotifier:(id)arg3 audioRecorder:(id)arg4 ;
-(void)startManager;
-(void)_destroyCircularBuffer;
-(void)registerSpeechController:(id)arg1 ;
-(long long)getCurrentState;
-(BOOL)isClientRecording;
-(BOOL)setClientContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)prepareRecordingForClient:(id)arg1 error:(id*)arg2 ;
-(BOOL)_setCurrentContext:(id)arg1 error:(id*)arg2 ;
-(void)releaseClientAudioSession;
-(BOOL)startRecordingWithSetting:(id)arg1 event:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)_startRecordingForAOPFirstPassTriggerWithSettings:(id)arg1 error:(id*)arg2 ;
-(float)getEstimatedTTSVolume;
-(NSObject*<OS_dispatch_queue>)assetQueryQueue;
-(void)setAssetQueryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<CSSpeechManagerDelegate>)clientController;
-(void)setClientController:(id<CSSpeechManagerDelegate>)arg1 ;
-(CSAsset *)currentVoiceTriggerAsset;
-(void)setCurrentVoiceTriggerAsset:(CSAsset *)arg1 ;
-(CSVoiceTriggerFirstPass *)voiceTriggerFirstPass;
-(void)setVoiceTriggerFirstPass:(CSVoiceTriggerFirstPass *)arg1 ;
-(CSVoiceTriggerSecondPass *)voiceTriggerSecondPass;
-(void)setVoiceTriggerSecondPass:(CSVoiceTriggerSecondPass *)arg1 ;
-(CSVoiceTriggerEventNotifier *)voiceTriggerEventNotifier;
-(void)setVoiceTriggerEventNotifier:(CSVoiceTriggerEventNotifier *)arg1 ;
-(CSVoiceTriggerFileLogger *)voiceTriggerFileLogger;
-(void)setVoiceTriggerFileLogger:(CSVoiceTriggerFileLogger *)arg1 ;
-(CSSelfTriggerDetector *)selfTriggerDetector;
-(void)setSelfTriggerDetector:(CSSelfTriggerDetector *)arg1 ;
-(CSContinuousVoiceTrigger *)continuousVoiceTrigger;
-(void)setContinuousVoiceTrigger:(CSContinuousVoiceTrigger *)arg1 ;
-(CSKeywordDetector *)keywordDetector;
-(void)setKeywordDetector:(CSKeywordDetector *)arg1 ;
-(CSMyriadPHash *)myriad;
-(void)setMyriad:(CSMyriadPHash *)arg1 ;
-(CSVoiceTriggerFidesClient *)voiceTriggerFidesClient;
-(void)setVoiceTriggerFidesClient:(CSVoiceTriggerFidesClient *)arg1 ;
-(unsigned long long)secondPassStartSampleCount;
-(void)setSecondPassStartSampleCount:(unsigned long long)arg1 ;
-(NSDictionary *)lastVoiceTriggerEventInfo;
-(void)setLastVoiceTriggerEventInfo:(NSDictionary *)arg1 ;
-(CSSmartSiriVolume *)smartSiriVolume;
-(void)setSmartSiriVolume:(CSSmartSiriVolume *)arg1 ;
-(NSHashTable *)activeAudioProcessors;
-(void)setActiveAudioProcessors:(NSHashTable *)arg1 ;
-(NSHashTable *)continuousAudioProcessors;
-(void)setContinuousAudioProcessors:(NSHashTable *)arg1 ;
-(unsigned long long)lastForwardedSampleCount;
-(void)setLastForwardedSampleCount:(unsigned long long)arg1 ;
-(unsigned long long)clientStartSampleCount;
-(void)setClientStartSampleCount:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_source>)listenPollingTimer;
-(void)setListenPollingTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)clearLoggingFileTimer;
-(void)setClearLoggingFileTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(long long)listenPollingTimerCount;
-(void)setListenPollingTimerCount:(long long)arg1 ;
-(long long)clearLoggingFileTimerCount;
-(void)setClearLoggingFileTimerCount:(long long)arg1 ;
-(NSUUID *)pendingSetRecordModeToRecordingToken;
-(void)setPendingSetRecordModeToRecordingToken:(NSUUID *)arg1 ;
-(id)pendingSetRecordModeToRecordingCompletion;
-(void)setPendingSetRecordModeToRecordingCompletion:(id)arg1 ;
-(BOOL)isSiriEnabled;
-(void)setIsSiriEnabled:(BOOL)arg1 ;
-(BOOL)deviceRoleIsStereo;
-(void)setDeviceRoleIsStereo:(BOOL)arg1 ;
-(void)setAudioSessionActivationDelay:(double)arg1 ;
-(void)updateMeters;
-(BOOL)duckOthersOption;
-(void)setDuckOthersOption:(BOOL)arg1 ;
-(BOOL)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2 ;
-(BOOL)playAlertSoundForType:(long long)arg1 ;
-(unsigned long long)alertStartTime;
-(BOOL)playRecordStartingAlertAndResetEndpointer;
-(void)setMeteringEnabled:(BOOL)arg1 ;
-(float)peakPowerForChannel:(unsigned long long)arg1 ;
-(float)averagePowerForChannel:(unsigned long long)arg1 ;
-(id)passThruVoiceTriggerInfo;
-(void)setStateMachine:(CSStateMachine *)arg1 ;
-(CSStateMachine *)stateMachine;
-(id)init;
-(void)dealloc;
-(void)reset;
-(void)_reset;
-(id)metrics;
-(NSObject*<OS_dispatch_queue>)queue;
@end

