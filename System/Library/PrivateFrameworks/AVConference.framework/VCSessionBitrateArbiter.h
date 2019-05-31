/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface VCSessionBitrateArbiter : NSObject {

	unsigned _maxBitrate2GUplink;
	unsigned _maxBitrate2GDownlink;
	unsigned _maxBitrate3GUplink;
	unsigned _maxBitrate3GDownlink;
	unsigned _maxBitrateLTEUplink;
	unsigned _maxBitrateLTEDownlink;
	unsigned _maxBitrateWiFiUplink;
	unsigned _maxBitrateWiFiDownlink;
	NSDictionary* _currentSettings;

}

@property (readonly) unsigned maxBitrate2GUplink;                  //@synthesize maxBitrate2GUplink=_maxBitrate2GUplink - In the implementation block
@property (readonly) unsigned maxBitrate3GUplink;                  //@synthesize maxBitrate3GUplink=_maxBitrate3GUplink - In the implementation block
@property (readonly) unsigned maxBitrateLTEUplink;                 //@synthesize maxBitrateLTEUplink=_maxBitrateLTEUplink - In the implementation block
@property (readonly) unsigned maxBitrateWiFiUplink;                //@synthesize maxBitrateWiFiUplink=_maxBitrateWiFiUplink - In the implementation block
@property (readonly) unsigned maxBitrate2GDownlink;                //@synthesize maxBitrate2GDownlink=_maxBitrate2GDownlink - In the implementation block
@property (readonly) unsigned maxBitrate3GDownlink;                //@synthesize maxBitrate3GDownlink=_maxBitrate3GDownlink - In the implementation block
@property (readonly) unsigned maxBitrateLTEDownlink;               //@synthesize maxBitrateLTEDownlink=_maxBitrateLTEDownlink - In the implementation block
@property (readonly) unsigned maxBitrateWiFiDownlink;              //@synthesize maxBitrateWiFiDownlink=_maxBitrateWiFiDownlink - In the implementation block
-(unsigned)maxBitrateWiFiUplink;
-(unsigned)maxBitrateLTEUplink;
-(void)readHardwareValues;
-(void)readStoreBagValues;
-(BOOL)rangeCheck:(unsigned)arg1 ;
-(unsigned)bitrateForStoreBagKey:(id)arg1 connectionType:(int)arg2 currentBitrate:(unsigned)arg3 ;
-(unsigned)maxBitrate2GUplink;
-(unsigned)maxBitrate3GUplink;
-(unsigned)maxBitrate2GDownlink;
-(unsigned)maxBitrate3GDownlink;
-(unsigned)maxBitrateLTEDownlink;
-(unsigned)maxBitrateWiFiDownlink;
-(id)init;
-(void)dealloc;
@end

