/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:58 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCMediaStream.h>
#import <libobjc.A.dylib/VCMediaStreamSyncSource.h>
#import <libobjc.A.dylib/VCAudioIOSource.h>
#import <libobjc.A.dylib/VCAudioIOSink.h>
#import <libobjc.A.dylib/VCAudioIODelegate.h>

@protocol OS_dispatch_source;
@class NSObject, NSMutableArray, DTMFEventHandler, WRMClient, VCAudioPayload, VCAudioTransmitter, AVTelephonyInterface, VCAudioIO, NSNumber, NSString;

@interface VCAudioStream : VCMediaStream <VCMediaStreamSyncSource, VCAudioIOSource, VCAudioIOSink, VCAudioIODelegate> {

	int _clientPid;
	int numBufferBytesAvailable;
	NSObject*<OS_dispatch_source> pausedAudioHeartBeat;
	double dAudioHostTime;
	BOOL lastVoiceActive;
	unsigned conferenceID;
	unsigned lastInputAudioTimeStamp;
	unsigned lastSentAudioSampleTime;
	unsigned awdTime;
	long long sampleRate;
	long long samplesPerFrame;
	opaque_pthread_rwlock_t stateLock;
	NSMutableArray* audioPayloads;
	AudioStreamBasicDescription vpioFormat;
	int preferredAudioCodec;
	DTMFEventHandler* dtmfEventHandler;
	WRMClient* wrmClient;
	VCAudioPayload* currentAudioPayload;
	VCAudioPayload* currentDTXPayload;
	tagVCAudioReceiver* _audioReceiver;
	VCAudioTransmitter* _audioTransmitter;
	int _reportingModuleID;
	AVTelephonyInterface* _telephonyInterface;
	METER_INFO soundMeter[2];
	BOOL isValid;
	int deviceRole;
	void* _audioMediaControlInfoGenerator;
	id syncSourceDelegate;
	VCAudioIO* _audioIO;
	BOOL _isMuted;
	BOOL _isRemoteMuted;
	unsigned _lastRTPTimestamp;
	unsigned* _reportingSSRCList;
	unsigned _reportingSSRCCount;
	BOOL _sendActiveVoiceOnly;
	BOOL _isRemoteMediaStalled;
	int _packetsSinceStallCount;
	double _lastReceivedAudioTimestamp;
	BOOL _currentDTXEnable;
	NSNumber* _targetStreamID;
	float _volume;
	BOOL _rtpEnabledBeforeInterrupt;
	BOOL _rtcpEnabledBeforeInterrupt;
	unsigned _pullAudioSamplesCount;

}

@property (retain) VCAudioTransmitter * audioTransmitter;                                                //@synthesize audioTransmitter=_audioTransmitter - In the implementation block
@property (retain) VCAudioIO * audioIO;                                                                  //@synthesize audioIO=_audioIO - In the implementation block
@property (assign,nonatomic) NSObject*<VCMediaStreamSyncSourceDelegate> syncSourceDelegate; 
@property (readonly) unsigned conferenceID; 
@property (assign,nonatomic) BOOL isValid; 
@property (assign,nonatomic) int deviceRole; 
@property (assign,getter=isMuted,nonatomic) BOOL muted;                                                  //@synthesize isMuted=_isMuted - In the implementation block
@property (assign,getter=isRemoteMuted,nonatomic) BOOL remoteMuted;                                      //@synthesize isRemoteMuted=_isRemoteMuted - In the implementation block
@property (assign,nonatomic) BOOL sendActiveVoiceOnly; 
@property (assign,getter=isCurrentDTXEnabled,nonatomic) BOOL currentDTXEnable;                           //@synthesize currentDTXEnable=_currentDTXEnable - In the implementation block
@property (nonatomic,retain) NSNumber * targetStreamID;                                                  //@synthesize targetStreamID=_targetStreamID - In the implementation block
@property (assign,nonatomic) float volume;                                                               //@synthesize volume=_volume - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedAudioPayloads;
+(unsigned char)audioIODirectionWithMediaStreamDirection:(long long)arg1 ;
+(id)capabilities;
-(void)setVolume:(float)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(int)deviceRole;
-(void)setDeviceRole:(int)arg1 ;
-(void)pushAudioSamples:(opaqueVCAudioBufferListRef)arg1 ;
-(void)pullAudioSamples:(opaqueVCAudioBufferListRef)arg1 ;
-(id)initWithClientPid:(int)arg1 ;
-(void)stateExit;
-(void)stateEnter;
-(id)supportedPayloads;
-(id)createTransport;
-(double)lastReceivedRTPPacketTime;
-(double)lastReceivedRTCPPacketTime;
-(void)onCallIDChanged;
-(BOOL)onConfigureStreamWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(void)onStartWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)onStopWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)onPauseWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)onResumeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)onSendRTCPPacket;
-(void)onRTPTimeout;
-(void)onRTCPTimeout;
-(double)rtcpHeartbeatLeeway;
-(void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned)arg2 ;
-(void)handleActiveConnectionChange:(id)arg1 ;
-(VCAudioTransmitter *)audioTransmitter;
-(unsigned)internalSampleRateForCodecType:(long long)arg1 ;
-(unsigned)computePacketTimestampWithInputTimestamp:(unsigned)arg1 numSamples:(int)arg2 hostTime:(double)arg3 ;
-(BOOL)isCurrentDTXEnabled;
-(void)setCurrentDTXEnable:(BOOL)arg1 ;
-(void)setInputTimestamp:(unsigned)arg1 packetTimestamp:(int)arg2 hostTime:(double)arg3 ;
-(NSObject*<VCMediaStreamSyncSourceDelegate>)syncSourceDelegate;
-(void)updateRemoteMediaStallState:(double)arg1 ;
-(void)processPulledSamples:(opaqueVCAudioBufferListRef)arg1 rtpTimestamp:(unsigned)arg2 ;
-(unsigned)codecTypeFromAudioPayload:(int)arg1 ;
-(id)getSupportedPayloads;
-(id)addAudioPayload:(int)arg1 ;
-(unsigned)preferredAudioBitrateForPayload:(int)arg1 ;
-(void)getCodecConfigForPayload:(int)arg1 block:(/*^block*/id)arg2 ;
-(id)configForPayloadType:(int)arg1 ;
-(int)bundlingSchemeForOperatingMode:(int)arg1 payloadType:(int)arg2 ;
-(BOOL)setupAudioStreamWithClientPid:(int)arg1 ;
-(void)setFrequencyMeteringEnabled:(BOOL)arg1 meterType:(int)arg2 ;
-(BOOL)setReceiverPayloads;
-(void)registerCodecRateModeChangeNotifications;
-(void)registerActiveAudioStreamChangeNotifications;
-(int)getPacketsPerBundleForStreamConfig:(id)arg1 ;
-(void)setSendActiveVoiceOnly:(BOOL)arg1 ;
-(BOOL)generateReceptionReportList:(RTCP_RECEPTION_REPORT*)arg1 reportCount:(char*)arg2 ;
-(void)setStreamDirection:(long long)arg1 ;
-(void)setAudioTransmitter:(VCAudioTransmitter *)arg1 ;
-(void)createReportSSRCListWithStreamConfigs:(id)arg1 ;
-(BOOL)validateAudioStreamConfigurations:(id)arg1 ;
-(void)cleanupBeforeReconfigure:(id)arg1 ;
-(int)operatingModeForAudioStreamMode:(long long)arg1 ;
-(int)getReportingClientType;
-(CFStringRef)getReportingClientName;
-(id)getReportingServiceID;
-(CFDictionaryRef)getClientSpecificUserInfo:(id)arg1 ;
-(void)_computeInternalFormatForAudioConfig:(id)arg1 ;
-(BOOL)setupPayloads;
-(void)setDTXPayload:(id)arg1 ;
-(void)setAudioIO:(VCAudioIO *)arg1 ;
-(BOOL)createAudioReceiver;
-(id)streamIDsFromTransport;
-(BOOL)createAudioTransmitter:(long long)arg1 streamIDs:(id)arg2 ;
-(void)prepareAudio;
-(void)cleanupAudio;
-(void)startAudioWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)reportingAudioStreamEvent:(unsigned short)arg1 ;
-(void)stopAudioWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)pullDecodedMeshMode:(opaqueVCAudioBufferListRef)arg1 ;
-(void)updateSoundMeter:(int)arg1 sampleBuffer:(opaqueVCAudioBufferListRef)arg2 ;
-(int)captureMeshMode:(opaqueVCAudioBufferListRef)arg1 ;
-(void)setIsValid:(BOOL)arg1 ;
-(void)collectRxChannelMetrics:(SCD_Struct_AV15*)arg1 ;
-(void)setSyncSourceDelegate:(NSObject*<VCMediaStreamSyncSourceDelegate>)arg1 ;
-(long long)getSyncSourceSampleRate;
-(void)didSuspendAudioIO:(id)arg1 ;
-(void)didResumeAudioIO:(id)arg1 ;
-(id)initWithClientPid:(int)arg1 ssrc:(unsigned)arg2 ;
-(id)initWithClientPid:(int)arg1 ssrc:(unsigned)arg2 transportSessionID:(unsigned)arg3 ;
-(void)sendDTMFEvent:(id)arg1 ;
-(void)stopSendDTMFEvent;
-(BOOL)isFrequencyMeteringEnabled:(int)arg1 ;
-(BOOL)sendActiveVoiceOnly;
-(void)setStreamIDs:(id)arg1 repairStreamIDs:(id)arg2 ;
-(void)setTargetStreamID:(NSNumber *)arg1 ;
-(BOOL)canProcessAudio;
-(void)setCanProcessAudio:(BOOL)arg1 ;
-(void)vcMediaStreamTransport:(id)arg1 updateSourceNTPTime:(double)arg2 rtpTimeStamp:(unsigned)arg3 ;
-(void)unregisterCodecRateModeChangeNotifications;
-(void)handleCodecRateModeChange:(int)arg1 payload:(int)arg2 ;
-(void)collectRxChannelMetrics:(SCD_Struct_AV15*)arg1 interval:(float)arg2 ;
-(void)collectTxChannelMetrics:(SCD_Struct_AV15*)arg1 ;
-(unsigned)conferenceID;
-(VCAudioIO *)audioIO;
-(BOOL)isRemoteMuted;
-(void)setRemoteMuted:(BOOL)arg1 ;
-(NSNumber *)targetStreamID;
-(float)volume;
-(BOOL)isMuted;
-(void)dealloc;
-(void)setState:(int)arg1 ;
-(BOOL)isValid;
@end

