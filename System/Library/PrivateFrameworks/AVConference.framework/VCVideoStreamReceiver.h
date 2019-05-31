/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:59 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCVideoReceiverBase.h>
#import <libobjc.A.dylib/VCMediaStreamSyncDestination.h>

@protocol OS_dispatch_queue;
@class VCVideoStreamRateAdaptation, NSObject, VideoAttributes, VCMediaStreamSynchronizer, VCMediaStreamStats, NSString;

@interface VCVideoStreamReceiver : VCVideoReceiverBase <VCMediaStreamSyncDestination> {

	tagHANDLE* _hRTP;
	OpaqueCMMemoryPoolRef _blockBufferMemoryPool;
	CFAllocatorRef _blockBufferMemoryPoolAllocator;
	OpaqueVTDecompressionSessionRef _decompressionSession;
	BOOL _receivedFirstPacket;
	BOOL _receivedFirstRemoteFrame;
	unsigned short _lastSequenceNumber;
	int _sequenceNumberOutOfOrder;
	unsigned char _firSequenceNumber;
	double _lastFIRArrivalTime;
	VCVideoStreamRateAdaptation* _rateAdaptation;
	opaqueCMBufferQueueRef _videoQueue;
	unsigned _mostRecentTimestamp;
	unsigned _lastVideoTimestamp;
	unsigned _videoTimestampWrapCount;
	opaqueCMFormatDescriptionRef _formatDescription;
	NSObject*<OS_dispatch_queue> _videoStreamReceiverQueue;
	OpaqueFigThreadRef _networkReceiveThread;
	BOOL _runNetworkReceiveThread;
	int _sRecvReset;
	VideoPacketBuffer_tRef _videoPacketBuffer;
	VideoAttributes* _remoteVideoAttributes;
	VCMediaStreamSynchronizer* _mediaStreamSynchronizer;
	int _remoteVideoCamera;
	BOOL _remoteVideoMirrored;
	BOOL _enableCVO;
	unsigned long long _cvoExtensionID;
	unsigned long long _lastKeyFrameSampleBufferSize;
	SCD_Struct_AV54 _lastFrameTime;
	SCD_Struct_AV54 _lastDisplayTime;
	VCMediaStreamStats* _stats;
	double _reportingIntervalStartTime;
	double _reportingLastUpdateTime;
	unsigned _receivedBytes;
	unsigned _videoStallDurationMillis;
	double _videoStallStartTime;
	opaqueRTCReportingRef _reportingAgent;
	int _reportingModuleID;
	BOOL _enableReceiveBitstreamDump;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)gatherRealtimeStats:(CFDictionaryRef)arg1 ;
-(void)reportingVideoStreamEvent:(unsigned short)arg1 ;
-(void)startVideo;
-(void)stopVideo;
-(void)handleActiveConnectionChange:(id)arg1 ;
-(BOOL)startSynchronization:(id)arg1 ;
-(void)stopSynchronization;
-(int)stopNetworkReceiveThread;
-(void)teardownDecodeSession:(BOOL)arg1 ;
-(void)setEnableRateAdaptation:(BOOL)arg1 maxBitrate:(unsigned)arg2 minBitrate:(unsigned)arg3 adaptationInterval:(double)arg4 ;
-(int)startNetworkReceiveThread;
-(void)setSyncSource:(id)arg1 ;
-(void)handleAlarmForTimeStamp:(unsigned)arg1 ;
-(int)processVideoRTP;
-(int)processVideoRTCP;
-(void)updateVideoStallStatus:(BOOL)arg1 ;
-(int)scheduleDecodeForFrameWithBuffer:(char*)arg1 size:(unsigned long long)arg2 timestamp:(unsigned)arg3 hostTime:(double)arg4 showFrame:(BOOL)arg5 ;
-(void)scheduleDecodeForTimestamp:(unsigned)arg1 ;
-(void)scheduleVideoDecode:(unsigned*)arg1 schedule_n:(int)arg2 ;
-(void)updateSequenceNumber:(unsigned short)arg1 ;
-(void)processReceptionReportBlock:(tagRTCP_RRB*)arg1 arrivalNTPTime:(tagNTP)arg2 ;
-(int)decodeFrame:(opaqueCMSampleBufferRef)arg1 showFrame:(BOOL)arg2 ;
-(void)createDecodeSession:(opaqueCMFormatDescriptionRef)arg1 ;
-(BOOL)canDequeue:(opaqueCMBufferQueueRef)arg1 forTimestamp:(unsigned)arg2 ;
-(void)dequeueAndDecodeForTimestamp:(unsigned)arg1 ;
-(BOOL)handleRemoteVideoAttributesChange:(CVBufferRef)arg1 ;
-(id)initWithRTP:(tagHANDLE*)arg1 delegate:(id)arg2 reportingAgent:(opaqueRTCReportingRef)arg3 dumpID:(unsigned)arg4 reportingParentID:(int)arg5 ;
-(void)setEnableCVO:(BOOL)arg1 cvoExtensionID:(unsigned long long)arg2 ;
-(void)pauseVideo;
-(void)updateSourcePlayoutTimestamp:(SCD_Struct_AV54*)arg1 ;
-(void*)networkReceivePackets;
-(void)rtcpSendIntervalElapsed;
-(int)showDecodedFrame:(CVBufferRef)arg1 atTime:(SCD_Struct_AV54)arg2 ;
-(id)syncSource;
-(void)dealloc;
@end

