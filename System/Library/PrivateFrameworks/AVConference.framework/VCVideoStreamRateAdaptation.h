/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:59 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class VCVideoStreamRateController, VCMediaStreamStats;

@interface VCVideoStreamRateAdaptation : NSObject {

	tagHANDLE* _rtpHandle;
	unsigned _sendTmmbrBitrate;
	unsigned _receivedTmmbnBitrate;
	unsigned _operatingBitrate;
	BOOL _rateAdaptationEnabled;
	BOOL _downlinkQualityDidChange;
	BOOL _isOperatingAtMaxBitrate;
	BOOL _isOperatingAtMinBitrate;
	double _tmmbrSendTime;
	double _tmmbnReceiveTime;
	double _tmmbRTT;
	double _packetLossPercentage;
	double _adaptationTime;
	double _maxOWRD;
	double _averageBitrateWindowDuration;
	opaqueRTCReportingRef _reportingAgent;
	int _reportingModuleID;
	VCVideoStreamRateController* _rateController;
	VCMediaStreamStats* _stats;

}

@property (nonatomic,readonly) double packetLossPercentage;               //@synthesize packetLossPercentage=_packetLossPercentage - In the implementation block
@property (nonatomic,readonly) double roundTripTime;                      //@synthesize tmmbRTT=_tmmbRTT - In the implementation block
@property (nonatomic,readonly) double owrd; 
@property (nonatomic,readonly) double nowrd; 
@property (nonatomic,readonly) double nowrdShort; 
@property (nonatomic,readonly) double nowrdAcc; 
@property (nonatomic,readonly) unsigned operatingBitrate;                 //@synthesize operatingBitrate=_operatingBitrate - In the implementation block
@property (nonatomic,readonly) unsigned sendTmmbrBitrate;                 //@synthesize sendTmmbrBitrate=_sendTmmbrBitrate - In the implementation block
@property (nonatomic,readonly) BOOL isOperatingAtMaxBitrate;              //@synthesize isOperatingAtMaxBitrate=_isOperatingAtMaxBitrate - In the implementation block
@property (nonatomic,readonly) BOOL isOperatingAtMinBitrate;              //@synthesize isOperatingAtMinBitrate=_isOperatingAtMinBitrate - In the implementation block
@property (assign,nonatomic) double maxOWRD;                              //@synthesize maxOWRD=_maxOWRD - In the implementation block
-(double)roundTripTime;
-(double)owrd;
-(void)updateRTPReceiveWithTimestamp:(unsigned)arg1 sampleRate:(unsigned)arg2 time:(double)arg3 ;
-(double)nowrd;
-(double)nowrdShort;
-(double)nowrdAcc;
-(void)reportingVideoStreamEvent:(unsigned short)arg1 ;
-(id)initWithRTPHandle:(tagHANDLE*)arg1 reportingAgent:(opaqueRTCReportingRef)arg2 receiverStats:(id)arg3 dumpID:(unsigned)arg4 reportingParentID:(int)arg5 ;
-(void)setEnableRateAdaptation:(BOOL)arg1 maxBitrate:(unsigned)arg2 minBitrate:(unsigned)arg3 adaptationInterval:(double)arg4 ;
-(BOOL)runVideoStreamRateAdaptation;
-(unsigned)operatingBitrate;
-(unsigned)sendTmmbrBitrate;
-(BOOL)isOperatingAtMaxBitrate;
-(BOOL)isOperatingAtMinBitrate;
-(void)receivedTMMBN:(unsigned)arg1 ;
-(void)updateVideoStall:(BOOL)arg1 withStallDuration:(unsigned)arg2 ;
-(double)packetLossPercentage;
-(double)maxOWRD;
-(void)setMaxOWRD:(double)arg1 ;
-(void)scheduleTMMBR:(unsigned)arg1 ;
-(void)setOperatingBitrate:(unsigned)arg1 ;
-(unsigned)averageReceivedBitrate;
-(void)dealloc;
-(id)className;
@end

