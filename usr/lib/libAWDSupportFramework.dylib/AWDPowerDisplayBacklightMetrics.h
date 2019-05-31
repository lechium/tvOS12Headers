/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDPowerDisplayBacklightMetrics : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _alsAutoBrightnessChangeCount;
	int _alsAutoBrightnessCurveE0A;
	int _alsAutoBrightnessCurveE0B;
	int _alsAutoBrightnessCurveE1;
	int _alsAutoBrightnessCurveE2;
	int _alsAutoBrightnessCurveEdynth;
	int _alsAutoBrightnessCurveL0A;
	int _alsAutoBrightnessCurveL0B;
	int _alsAutoBrightnessCurveL1;
	int _alsAutoBrightnessCurveL2;
	unsigned _alsAutoBrightnessLux;
	unsigned _alsAutoBrightnessSlider;
	unsigned _alsBrightnessEnableCnt;
	NSMutableArray* _backlightBuckets;
	unsigned _dispOnCount;
	unsigned _displayIdlePercentage;
	unsigned _frameRateResidencyPercentage;
	unsigned _mieCount;
	unsigned _mieDuration;
	unsigned _pluggedDisplayOnDuration;
	unsigned _residencyPercentage30Hz;
	unsigned _residencyPercentage60Hz;
	unsigned _totalBacklightPower;
	unsigned _totalDisplayPower;
	unsigned _unpluggedDisplayOnDuration;
	SCD_Struct_AW32 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDispOnCount; 
@property (assign,nonatomic) unsigned dispOnCount;                               //@synthesize dispOnCount=_dispOnCount - In the implementation block
@property (assign,nonatomic) BOOL hasUnpluggedDisplayOnDuration; 
@property (assign,nonatomic) unsigned unpluggedDisplayOnDuration;                //@synthesize unpluggedDisplayOnDuration=_unpluggedDisplayOnDuration - In the implementation block
@property (assign,nonatomic) BOOL hasPluggedDisplayOnDuration; 
@property (assign,nonatomic) unsigned pluggedDisplayOnDuration;                  //@synthesize pluggedDisplayOnDuration=_pluggedDisplayOnDuration - In the implementation block
@property (assign,nonatomic) BOOL hasMieDuration; 
@property (assign,nonatomic) unsigned mieDuration;                               //@synthesize mieDuration=_mieDuration - In the implementation block
@property (assign,nonatomic) BOOL hasMieCount; 
@property (assign,nonatomic) unsigned mieCount;                                  //@synthesize mieCount=_mieCount - In the implementation block
@property (assign,nonatomic) BOOL hasDisplayIdlePercentage; 
@property (assign,nonatomic) unsigned displayIdlePercentage;                     //@synthesize displayIdlePercentage=_displayIdlePercentage - In the implementation block
@property (assign,nonatomic) BOOL hasAlsAutoBrightnessCurveE1; 
@property (assign,nonatomic) int alsAutoBrightnessCurveE1;                       //@synthesize alsAutoBrightnessCurveE1=_alsAutoBrightnessCurveE1 - In the implementation block
@property (assign,nonatomic) BOOL hasAlsAutoBrightnessCurveL1; 
@property (assign,nonatomic) int alsAutoBrightnessCurveL1;                       //@synthesize alsAutoBrightnessCurveL1=_alsAutoBrightnessCurveL1 - In the implementation block
@property (assign,nonatomic) BOOL hasAlsAutoBrightnessCurveE2; 
@property (assign,nonatomic) int alsAutoBrightnessCurveE2;                       //@synthesize alsAutoBrightnessCurveE2=_alsAutoBrightnessCurveE2 - In the implementation block
@property (assign,nonatomic) BOOL hasAlsAutoBrightnessCurveL2; 
@property (assign,nonatomic) int alsAutoBrightnessCurveL2;                       //@synthesize alsAutoBrightnessCurveL2=_alsAutoBrightnessCurveL2 - In the implementation block
@property (assign,nonatomic) BOOL hasAlsAutoBrightnessCurveE0A; 
@property (assign,nonatomic) int alsAutoBrightnessCurveE0A;                      //@synthesize alsAutoBrightnessCurveE0A=_alsAutoBrightnessCurveE0A - In the implementation block
@property (assign,nonatomic) BOOL hasAlsAutoBrightnessCurveL0A; 
@property (assign,nonatomic) int alsAutoBrightnessCurveL0A;                      //@synthesize alsAutoBrightnessCurveL0A=_alsAutoBrightnessCurveL0A - In the implementation block
@property (assign,nonatomic) BOOL hasAlsAutoBrightnessCurveE0B; 
@property (assign,nonatomic) int alsAutoBrightnessCurveE0B;                      //@synthesize alsAutoBrightnessCurveE0B=_alsAutoBrightnessCurveE0B - In the implementation block
@property (assign,nonatomic) BOOL hasAlsAutoBrightnessCurveL0B; 
@property (assign,nonatomic) int alsAutoBrightnessCurveL0B;                      //@synthesize alsAutoBrightnessCurveL0B=_alsAutoBrightnessCurveL0B - In the implementation block
@property (assign,nonatomic) BOOL hasAlsAutoBrightnessCurveEdynth; 
@property (assign,nonatomic) int alsAutoBrightnessCurveEdynth;                   //@synthesize alsAutoBrightnessCurveEdynth=_alsAutoBrightnessCurveEdynth - In the implementation block
@property (assign,nonatomic) BOOL hasAlsAutoBrightnessSlider; 
@property (assign,nonatomic) unsigned alsAutoBrightnessSlider;                   //@synthesize alsAutoBrightnessSlider=_alsAutoBrightnessSlider - In the implementation block
@property (assign,nonatomic) BOOL hasAlsAutoBrightnessLux; 
@property (assign,nonatomic) unsigned alsAutoBrightnessLux;                      //@synthesize alsAutoBrightnessLux=_alsAutoBrightnessLux - In the implementation block
@property (assign,nonatomic) BOOL hasAlsAutoBrightnessChangeCount; 
@property (assign,nonatomic) unsigned alsAutoBrightnessChangeCount;              //@synthesize alsAutoBrightnessChangeCount=_alsAutoBrightnessChangeCount - In the implementation block
@property (assign,nonatomic) BOOL hasAlsBrightnessEnableCnt; 
@property (assign,nonatomic) unsigned alsBrightnessEnableCnt;                    //@synthesize alsBrightnessEnableCnt=_alsBrightnessEnableCnt - In the implementation block
@property (nonatomic,retain) NSMutableArray * backlightBuckets;                  //@synthesize backlightBuckets=_backlightBuckets - In the implementation block
@property (assign,nonatomic) BOOL hasTotalDisplayPower; 
@property (assign,nonatomic) unsigned totalDisplayPower;                         //@synthesize totalDisplayPower=_totalDisplayPower - In the implementation block
@property (assign,nonatomic) BOOL hasTotalBacklightPower; 
@property (assign,nonatomic) unsigned totalBacklightPower;                       //@synthesize totalBacklightPower=_totalBacklightPower - In the implementation block
@property (assign,nonatomic) BOOL hasFrameRateResidencyPercentage; 
@property (assign,nonatomic) unsigned frameRateResidencyPercentage;              //@synthesize frameRateResidencyPercentage=_frameRateResidencyPercentage - In the implementation block
@property (assign,nonatomic) BOOL hasResidencyPercentage60Hz; 
@property (assign,nonatomic) unsigned residencyPercentage60Hz;                   //@synthesize residencyPercentage60Hz=_residencyPercentage60Hz - In the implementation block
@property (assign,nonatomic) BOOL hasResidencyPercentage30Hz; 
@property (assign,nonatomic) unsigned residencyPercentage30Hz;                   //@synthesize residencyPercentage30Hz=_residencyPercentage30Hz - In the implementation block
+(Class)backlightBucketType;
-(void)setBacklightBuckets:(NSMutableArray *)arg1 ;
-(void)addBacklightBucket:(id)arg1 ;
-(unsigned long long)backlightBucketsCount;
-(void)clearBacklightBuckets;
-(id)backlightBucketAtIndex:(unsigned long long)arg1 ;
-(void)setDispOnCount:(unsigned)arg1 ;
-(void)setHasDispOnCount:(BOOL)arg1 ;
-(BOOL)hasDispOnCount;
-(void)setUnpluggedDisplayOnDuration:(unsigned)arg1 ;
-(void)setHasUnpluggedDisplayOnDuration:(BOOL)arg1 ;
-(BOOL)hasUnpluggedDisplayOnDuration;
-(void)setPluggedDisplayOnDuration:(unsigned)arg1 ;
-(void)setHasPluggedDisplayOnDuration:(BOOL)arg1 ;
-(BOOL)hasPluggedDisplayOnDuration;
-(void)setMieDuration:(unsigned)arg1 ;
-(void)setHasMieDuration:(BOOL)arg1 ;
-(BOOL)hasMieDuration;
-(void)setMieCount:(unsigned)arg1 ;
-(void)setHasMieCount:(BOOL)arg1 ;
-(BOOL)hasMieCount;
-(void)setDisplayIdlePercentage:(unsigned)arg1 ;
-(void)setHasDisplayIdlePercentage:(BOOL)arg1 ;
-(BOOL)hasDisplayIdlePercentage;
-(void)setAlsAutoBrightnessCurveE1:(int)arg1 ;
-(void)setHasAlsAutoBrightnessCurveE1:(BOOL)arg1 ;
-(BOOL)hasAlsAutoBrightnessCurveE1;
-(void)setAlsAutoBrightnessCurveL1:(int)arg1 ;
-(void)setHasAlsAutoBrightnessCurveL1:(BOOL)arg1 ;
-(BOOL)hasAlsAutoBrightnessCurveL1;
-(void)setAlsAutoBrightnessCurveE2:(int)arg1 ;
-(void)setHasAlsAutoBrightnessCurveE2:(BOOL)arg1 ;
-(BOOL)hasAlsAutoBrightnessCurveE2;
-(void)setAlsAutoBrightnessCurveL2:(int)arg1 ;
-(void)setHasAlsAutoBrightnessCurveL2:(BOOL)arg1 ;
-(BOOL)hasAlsAutoBrightnessCurveL2;
-(void)setAlsAutoBrightnessCurveE0A:(int)arg1 ;
-(void)setHasAlsAutoBrightnessCurveE0A:(BOOL)arg1 ;
-(BOOL)hasAlsAutoBrightnessCurveE0A;
-(void)setAlsAutoBrightnessCurveL0A:(int)arg1 ;
-(void)setHasAlsAutoBrightnessCurveL0A:(BOOL)arg1 ;
-(BOOL)hasAlsAutoBrightnessCurveL0A;
-(void)setAlsAutoBrightnessCurveE0B:(int)arg1 ;
-(void)setHasAlsAutoBrightnessCurveE0B:(BOOL)arg1 ;
-(BOOL)hasAlsAutoBrightnessCurveE0B;
-(void)setAlsAutoBrightnessCurveL0B:(int)arg1 ;
-(void)setHasAlsAutoBrightnessCurveL0B:(BOOL)arg1 ;
-(BOOL)hasAlsAutoBrightnessCurveL0B;
-(void)setAlsAutoBrightnessCurveEdynth:(int)arg1 ;
-(void)setHasAlsAutoBrightnessCurveEdynth:(BOOL)arg1 ;
-(BOOL)hasAlsAutoBrightnessCurveEdynth;
-(void)setAlsAutoBrightnessSlider:(unsigned)arg1 ;
-(void)setHasAlsAutoBrightnessSlider:(BOOL)arg1 ;
-(BOOL)hasAlsAutoBrightnessSlider;
-(void)setAlsAutoBrightnessLux:(unsigned)arg1 ;
-(void)setHasAlsAutoBrightnessLux:(BOOL)arg1 ;
-(BOOL)hasAlsAutoBrightnessLux;
-(void)setAlsAutoBrightnessChangeCount:(unsigned)arg1 ;
-(void)setHasAlsAutoBrightnessChangeCount:(BOOL)arg1 ;
-(BOOL)hasAlsAutoBrightnessChangeCount;
-(void)setAlsBrightnessEnableCnt:(unsigned)arg1 ;
-(void)setHasAlsBrightnessEnableCnt:(BOOL)arg1 ;
-(BOOL)hasAlsBrightnessEnableCnt;
-(void)setTotalDisplayPower:(unsigned)arg1 ;
-(void)setHasTotalDisplayPower:(BOOL)arg1 ;
-(BOOL)hasTotalDisplayPower;
-(void)setTotalBacklightPower:(unsigned)arg1 ;
-(void)setHasTotalBacklightPower:(BOOL)arg1 ;
-(BOOL)hasTotalBacklightPower;
-(void)setFrameRateResidencyPercentage:(unsigned)arg1 ;
-(void)setHasFrameRateResidencyPercentage:(BOOL)arg1 ;
-(BOOL)hasFrameRateResidencyPercentage;
-(void)setResidencyPercentage60Hz:(unsigned)arg1 ;
-(void)setHasResidencyPercentage60Hz:(BOOL)arg1 ;
-(BOOL)hasResidencyPercentage60Hz;
-(void)setResidencyPercentage30Hz:(unsigned)arg1 ;
-(void)setHasResidencyPercentage30Hz:(BOOL)arg1 ;
-(BOOL)hasResidencyPercentage30Hz;
-(unsigned)dispOnCount;
-(unsigned)unpluggedDisplayOnDuration;
-(unsigned)pluggedDisplayOnDuration;
-(unsigned)mieDuration;
-(unsigned)mieCount;
-(unsigned)displayIdlePercentage;
-(int)alsAutoBrightnessCurveE1;
-(int)alsAutoBrightnessCurveL1;
-(int)alsAutoBrightnessCurveE2;
-(int)alsAutoBrightnessCurveL2;
-(int)alsAutoBrightnessCurveE0A;
-(int)alsAutoBrightnessCurveL0A;
-(int)alsAutoBrightnessCurveE0B;
-(int)alsAutoBrightnessCurveL0B;
-(int)alsAutoBrightnessCurveEdynth;
-(unsigned)alsAutoBrightnessSlider;
-(unsigned)alsAutoBrightnessLux;
-(unsigned)alsAutoBrightnessChangeCount;
-(unsigned)alsBrightnessEnableCnt;
-(NSMutableArray *)backlightBuckets;
-(unsigned)totalDisplayPower;
-(unsigned)totalBacklightPower;
-(unsigned)frameRateResidencyPercentage;
-(unsigned)residencyPercentage60Hz;
-(unsigned)residencyPercentage30Hz;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

