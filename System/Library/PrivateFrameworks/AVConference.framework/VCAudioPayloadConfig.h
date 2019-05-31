/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface VCAudioPayloadConfig : NSObject {

	int _payload;
	int _format;
	unsigned _blockSize;
	unsigned _codecSampleRate;
	unsigned _inputSampleRate;
	unsigned _codecSamplesPerFrame;
	unsigned _inputSamplesPerFrame;
	unsigned _internalBundleFactor;
	unsigned _bundleHeaderBytes;
	NSArray* _supportedBitrates;
	unsigned _bitrate;
	BOOL _forcingBitrate;
	BOOL _useSBR;
	BOOL _isDTXEnabled;
	unsigned _evsSIDPeriod;
	unsigned short _evsChannelAwareOffset;
	BOOL _evsHeaderFullOnly;
	BOOL _payloadOctetAligned;

}

@property (nonatomic,readonly) int payload;                                       //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) unsigned flags; 
@property (nonatomic,readonly) unsigned samplesPerFrame;                          //@synthesize inputSamplesPerFrame=_inputSamplesPerFrame - In the implementation block
@property (nonatomic,readonly) unsigned codecSampleRate;                          //@synthesize codecSampleRate=_codecSampleRate - In the implementation block
@property (nonatomic,readonly) unsigned bitrate;                                  //@synthesize bitrate=_bitrate - In the implementation block
@property (nonatomic,readonly) int format;                                        //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) unsigned internalBundleFactor;                     //@synthesize internalBundleFactor=_internalBundleFactor - In the implementation block
@property (nonatomic,readonly) BOOL payloadOctetAligned;                          //@synthesize payloadOctetAligned=_payloadOctetAligned - In the implementation block
@property (nonatomic,readonly) BOOL forcingBitrate;                               //@synthesize forcingBitrate=_forcingBitrate - In the implementation block
@property (nonatomic,readonly) NSArray * supportedBitrates;                       //@synthesize supportedBitrates=_supportedBitrates - In the implementation block
@property (nonatomic,readonly) unsigned inputSampleRate;                          //@synthesize inputSampleRate=_inputSampleRate - In the implementation block
@property (nonatomic,readonly) BOOL isDTXEnabled;                                 //@synthesize isDTXEnabled=_isDTXEnabled - In the implementation block
@property (nonatomic,readonly) unsigned evsSIDPeriod;                             //@synthesize evsSIDPeriod=_evsSIDPeriod - In the implementation block
@property (nonatomic,readonly) unsigned blockSize;                                //@synthesize blockSize=_blockSize - In the implementation block
@property (nonatomic,readonly) unsigned bundleHeaderBytes;                        //@synthesize bundleHeaderBytes=_bundleHeaderBytes - In the implementation block
@property (nonatomic,readonly) unsigned short evsChannelAwareOffset;              //@synthesize evsChannelAwareOffset=_evsChannelAwareOffset - In the implementation block
@property (nonatomic,readonly) BOOL evsHeaderFullOnly;                            //@synthesize evsHeaderFullOnly=_evsHeaderFullOnly - In the implementation block
-(unsigned)flags;
-(unsigned)samplesPerFrame;
-(unsigned short)evsChannelAwareOffset;
-(BOOL)evsHeaderFullOnly;
-(void)setUseSBR:(BOOL)arg1 ;
-(unsigned)codecSampleRate;
-(id)initWithConfigDict:(id)arg1 ;
-(unsigned)bitrate;
-(unsigned)inputSampleRate;
-(NSArray *)supportedBitrates;
-(float)qualityForBitRate:(unsigned)arg1 ;
-(unsigned)blockSize;
-(unsigned)internalBundleFactor;
-(unsigned)evsSIDPeriod;
-(BOOL)payloadOctetAligned;
-(BOOL)forcingBitrate;
-(unsigned)bundleHeaderBytes;
-(void)setupEncodeProperties:(id)arg1 ;
-(void)createSupportedBitrates;
-(unsigned)aacBitrate;
-(void)createSupportedBitratesForAACELD;
-(void)createSupportedBitratesForOpus;
-(void)createSupportedBitratesForAMR8k;
-(void)createSupportedBitratesForAMR16k;
-(void)createSupportedBitratesForEVS;
-(BOOL)configure:(id)arg1 ;
-(BOOL)isDTXEnabled;
-(void)dealloc;
-(id)description;
-(int)payload;
-(int)format;
-(id)className;
@end

