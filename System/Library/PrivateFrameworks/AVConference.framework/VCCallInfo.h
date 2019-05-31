/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class NSString, SDPMini;

@interface VCCallInfo : NSObject {

	unsigned callID;
	NSString* participantID;
	unsigned auNumber;
	unsigned maxBandwidth;
	unsigned cellBandwidth;
	BOOL videoIsPaused;
	BOOL isPreLionOS;
	BOOL isVideoQualityDegraded;
	double lastGoodVideoQualityTime;
	double lastBadVideoQualityTime;
	double lastVideoQualityDegradedSwitchTime;
	NSString* sdpString;
	SDPMini* sdp;
	BOOL is4x;
	BOOL isIOS;
	BOOL usesInitialFECImplementation;
	BOOL supportsDynamicMaxBitrate;
	BOOL supportsSpecialAACBundle;
	BOOL supportsSKEOptimization;
	unsigned visibleRectCropping;
	BOOL useNewPLCalc;
	double firstDegradedMeasure;
	double videoDegradedThreshold;
	unsigned char u8Version;
	NSString* _frameworkVersion;
	NSString* _osVersion;
	NSString* _deviceType;

}

@property (assign) unsigned callID; 
@property (assign,nonatomic) unsigned auNumber; 
@property (assign,nonatomic) unsigned maxBandwidth; 
@property (assign,nonatomic) unsigned cellBandwidth; 
@property (nonatomic,copy) NSString * participantID; 
@property (nonatomic,readonly) BOOL isHDVideoSupported; 
@property (assign,nonatomic) BOOL isPreLionOS; 
@property (assign,nonatomic) BOOL isVideoQualityDegraded; 
@property (assign,nonatomic) BOOL videoIsPaused; 
@property (nonatomic,retain) NSString * sdpString; 
@property (nonatomic,retain) SDPMini * sdp; 
@property (nonatomic,readonly) BOOL requiresImplicitFeatureString; 
@property (nonatomic,readonly) BOOL isIOS; 
@property (nonatomic,readonly) BOOL usesInitialFECImplementation; 
@property (assign,nonatomic) BOOL supportsDynamicMaxBitrate; 
@property (assign,nonatomic) BOOL supportsSKEOptimization; 
@property (nonatomic,readonly) BOOL supportsSpecialAACBundle; 
@property (assign,nonatomic) unsigned visibleRectCropping; 
@property (nonatomic,readonly) BOOL useNewPLCalc; 
@property (assign,nonatomic) unsigned char u8Version; 
@property (readonly) BOOL supportsDynamicContentsRectWithAspectPreservation; 
@property (nonatomic,copy) NSString * frameworkVersion;                                   //@synthesize frameworkVersion=_frameworkVersion - In the implementation block
@property (nonatomic,copy) NSString * OSVersion;                                          //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,copy) NSString * deviceType;                                         //@synthesize deviceType=_deviceType - In the implementation block
+(unsigned char)getVCCurrentVersion;
-(void)setCallID:(unsigned)arg1 ;
-(unsigned)callID;
-(void)setUserAgent:(id)arg1 ;
-(unsigned)maxBandwidth;
-(void)setMaxBandwidth:(unsigned)arg1 ;
-(BOOL)isVideoQualityDegraded;
-(NSString *)participantID;
-(void)setParticipantID:(NSString *)arg1 ;
-(void)setSupportsSKEOptimization:(BOOL)arg1 ;
-(BOOL)videoIsPaused;
-(BOOL)updateWithCurrentFramerate:(double)arg1 bitrate:(double)arg2 packetLossRate:(float)arg3 time:(double)arg4 ;
-(BOOL)supportsDynamicMaxBitrate;
-(void)setCellBandwidth:(unsigned)arg1 ;
-(unsigned)cellBandwidth;
-(void)resetLastGoodVideoQualityTime:(double)arg1 ;
-(void)setOSVersion:(NSString *)arg1 ;
-(void)setFrameworkVersion:(NSString *)arg1 ;
-(void)setU8Version:(unsigned char)arg1 ;
-(NSString *)frameworkVersion;
-(VoiceIOFarEndVersionInfo)audioVersionInfo:(BOOL)arg1 ;
-(void)setVideoIsPaused:(BOOL)arg1 ;
-(BOOL)supportsSKEOptimization;
-(void)setIsPreLionOS:(BOOL)arg1 ;
-(BOOL)usesInitialFECImplementation;
-(BOOL)supportSDPCompression;
-(SDPMini *)sdp;
-(void)setSdp:(SDPMini *)arg1 ;
-(void)setSupportsDynamicMaxBitrate:(BOOL)arg1 ;
-(void)setAuNumber:(unsigned)arg1 ;
-(void)setSdpString:(NSString *)arg1 ;
-(BOOL)isHDVideoSupported;
-(BOOL)supportsSpecialAACBundle;
-(NSString *)sdpString;
-(BOOL)useNewPLCalc;
-(BOOL)isIOS;
-(BOOL)requiresImplicitFeatureString;
-(unsigned)auNumber;
-(BOOL)supportsDynamicContentsRectWithAspectPreservation;
-(BOOL)isPreLionOS;
-(void)setIsVideoQualityDegraded:(BOOL)arg1 ;
-(unsigned)visibleRectCropping;
-(void)setVisibleRectCropping:(unsigned)arg1 ;
-(unsigned char)u8Version;
-(NSString *)OSVersion;
-(void)setDeviceType:(NSString *)arg1 ;
-(NSString *)deviceType;
-(id)init;
-(void)dealloc;
@end

