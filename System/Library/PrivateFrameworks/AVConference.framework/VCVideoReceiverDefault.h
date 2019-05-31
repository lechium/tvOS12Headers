/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:59 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCVideoReceiverBase.h>

@class VideoAttributes;

@interface VCVideoReceiverDefault : VCVideoReceiverBase {

	tagHANDLE* _videoReceiverHandle;
	long long _streamToken;
	void* _controlInfoGenerator;
	unsigned remoteFrameWidth;
	unsigned remoteFrameHeight;
	VideoAttributes* remoteVideoAttributes;
	BOOL receivedFirstRemoteFrame;
	BOOL _shouldEnableFaceZoom;
	double _lastKeyFrameRequestTime;
	unsigned short _lastKeyFrameRequestStreamID;

}

@property (retain) VideoAttributes * remoteVideoAttributes; 
@property (assign,nonatomic) BOOL shouldEnableFaceZoom;                  //@synthesize shouldEnableFaceZoom=_shouldEnableFaceZoom - In the implementation block
-(double)roundTripTime;
-(void)startVideo;
-(void)stopVideo;
-(void)handleActiveConnectionChange:(id)arg1 ;
-(void)setTargetStreamID:(unsigned short)arg1 ;
-(void)setEnableRateAdaptation:(BOOL)arg1 maxBitrate:(unsigned)arg2 minBitrate:(unsigned)arg3 adaptationInterval:(double)arg4 ;
-(void)setRoundTripTime:(double)arg1 ;
-(void)setEnableCVO:(BOOL)arg1 cvoExtensionID:(unsigned long long)arg2 ;
-(void)pauseVideo;
-(void)updateSourcePlayoutTimestamp:(SCD_Struct_AV54*)arg1 ;
-(void)rtcpSendIntervalElapsed;
-(void)setShouldEnableFaceZoom:(BOOL)arg1 ;
-(void)collectChannelMetrics:(SCD_Struct_AV15*)arg1 interval:(float)arg2 ;
-(double)lastReceivedVideoRTPPacketTime;
-(double)lastReceivedVideoRTCPPacketTime;
-(void)setRemoteVideoAttributes:(VideoAttributes *)arg1 ;
-(id)initWithConfig:(tagVCVideoReceiverConfig*)arg1 delegate:(id)arg2 reportingAgent:(opaqueRTCReportingRef)arg3 statisticsCollector:(id)arg4 ;
-(void)handleRemoteFrame:(CVBufferRef)arg1 timestamp:(SCD_Struct_AV54)arg2 cameraStatusBits:(unsigned char)arg3 ;
-(void)handleRequestingKeyFrameGenerationWithStreamID:(unsigned short)arg1 ;
-(void)handleKeyFrameRequestWithSizeAndFistMBs:(unsigned short*)arg1 count:(int)arg2 didReceiveRTCPFB:(BOOL)arg3 didReceiveFIR:(BOOL)arg4 ;
-(void)didSwitchFromStreamID:(unsigned short)arg1 toStreamID:(unsigned short)arg2 ;
-(BOOL)shouldEnableFaceZoom;
-(VideoAttributes *)remoteVideoAttributes;
-(void)dealloc;
@end

