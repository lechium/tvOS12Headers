/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:17 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IOAccessoryManager.framework/IOAccessoryManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <IOAccessoryManager/IOAccessoryManager-Structs.h>
@class HalogenLdcmCalc, NSMutableData, NSCondition, NSObject, ResourceArbiterClient;

@interface HalogenMeasurement : NSObject {

	BOOL _isCalibrationDone;
	BOOL _isMeasurementDone;
	BOOL _isPowerAssertionHeld;
	BOOL _arbiterLocked;
	unsigned short _maxOutputAmplitude;
	int _precalibrationSampleOffsetInFrames;
	int _calibrationSampleOffsetInFrames;
	int _measurementSampleOffsetInFrames;
	int _halogenResult;
	int _nInputChannels;
	int _nOutputChannels;
	int _sampleRate;
	int _bitDepth;
	int _inputFrameSizeInBytes;
	int _outputFrameSizeInBytes;
	int _warmupTimeInMs;
	int _hydraSettlingTimeInMs;
	int _nMeasurementSamples;
	int _nWarmupSamples;
	int _nHydraSettlingSamples;
	int _nTotalSamples;
	int _nPaddingSamples;
	int _initalPhaseInDegrees;
	int _pcmInputDataMaxSzInBytes;
	int _pcmInputDataIndexInBytes;
	int _pcmInputDataSampleCnt;
	int _pcmOutputDataMaxSzInBytes;
	int _pcmOutputDataIndexInBytes;
	int _audioTimeoutInSec;
	unsigned _service;
	unsigned _connect;
	int _pinToMeasure;
	unsigned _systemPowerPort;
	unsigned _systemPowerIterator;
	int _powerState;
	unsigned _sleepAssertionID;
	double _precalVoltageSignalLevel;
	double _precalVoltageNoiseLevel;
	double _precalVoltageSNR;
	double _precalCurrentSignalLevel;
	double _precalCurrentNoiseLevel;
	double _precalCurrentSNR;
	double _voltageGainCorrection;
	double _currentGainCorrection;
	double _currentPhaseCompensation;
	double _calVoltageSignalLevel;
	double _calVoltageNoiseLevel;
	double _calVoltageSNR;
	double _calCurrentSignalLevel;
	double _calCurrentNoiseLevel;
	double _calCurrentSNR;
	double _goertzelImpedance;
	double _goertzelPhase;
	double _compensatedImpedance;
	double _compensatedPhase;
	double _resistanceInOhms;
	double _capacitanceInNanoF;
	double _clippingScore;
	double _measurementVoltageSignalLevel;
	double _measurementVoltageNoiseLevel;
	double _measurementVoltageSNR;
	double _measurementCurrentSignalLevel;
	double _measurementCurrentNoiseLevel;
	double _measurementCurrentSNR;
	double _measurementCondetSNR;
	HalogenLdcmCalc* _halogenLdcmCalc;
	OpaqueAudioComponentInstanceRef _audioComponentInst;
	double _signalFreq;
	NSMutableData* _pcmInputData;
	NSMutableData* _pcmOutputData;
	NSMutableData* _currentData;
	NSMutableData* _voltageData;
	NSCondition* _audioTimeoutCond;
	unsigned long long _eisPinToken1;
	unsigned long long _eisPinToken2;
	NSObject*<OS_dispatch_queue> _systemPowerQueue;
	IONotificationPortRef _systemPowerNotifyPortRef;
	NSCondition* _powerStateCond;
	ResourceArbiterClient* _arbiterClient;

}

@property (assign) HalogenLdcmCalc * halogenLdcmCalc;                                     //@synthesize halogenLdcmCalc=_halogenLdcmCalc - In the implementation block
@property (assign) int nInputChannels;                                                    //@synthesize nInputChannels=_nInputChannels - In the implementation block
@property (assign) int nOutputChannels;                                                   //@synthesize nOutputChannels=_nOutputChannels - In the implementation block
@property (assign) int sampleRate;                                                        //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign) int bitDepth;                                                          //@synthesize bitDepth=_bitDepth - In the implementation block
@property (assign) int inputFrameSizeInBytes;                                             //@synthesize inputFrameSizeInBytes=_inputFrameSizeInBytes - In the implementation block
@property (assign) int outputFrameSizeInBytes;                                            //@synthesize outputFrameSizeInBytes=_outputFrameSizeInBytes - In the implementation block
@property (assign) OpaqueAudioComponentInstanceRef audioComponentInst;                    //@synthesize audioComponentInst=_audioComponentInst - In the implementation block
@property (assign) int warmupTimeInMs;                                                    //@synthesize warmupTimeInMs=_warmupTimeInMs - In the implementation block
@property (assign) int hydraSettlingTimeInMs;                                             //@synthesize hydraSettlingTimeInMs=_hydraSettlingTimeInMs - In the implementation block
@property (assign) int nMeasurementSamples;                                               //@synthesize nMeasurementSamples=_nMeasurementSamples - In the implementation block
@property (assign) int nWarmupSamples;                                                    //@synthesize nWarmupSamples=_nWarmupSamples - In the implementation block
@property (assign) int nHydraSettlingSamples;                                             //@synthesize nHydraSettlingSamples=_nHydraSettlingSamples - In the implementation block
@property (assign) int nTotalSamples;                                                     //@synthesize nTotalSamples=_nTotalSamples - In the implementation block
@property (assign) int nPaddingSamples;                                                   //@synthesize nPaddingSamples=_nPaddingSamples - In the implementation block
@property (assign) double signalFreq;                                                     //@synthesize signalFreq=_signalFreq - In the implementation block
@property (assign) int initalPhaseInDegrees;                                              //@synthesize initalPhaseInDegrees=_initalPhaseInDegrees - In the implementation block
@property (assign) unsigned short maxOutputAmplitude;                                     //@synthesize maxOutputAmplitude=_maxOutputAmplitude - In the implementation block
@property (assign) NSMutableData * pcmInputData;                                          //@synthesize pcmInputData=_pcmInputData - In the implementation block
@property (assign) int pcmInputDataMaxSzInBytes;                                          //@synthesize pcmInputDataMaxSzInBytes=_pcmInputDataMaxSzInBytes - In the implementation block
@property (assign) int pcmInputDataIndexInBytes;                                          //@synthesize pcmInputDataIndexInBytes=_pcmInputDataIndexInBytes - In the implementation block
@property (assign) int pcmInputDataSampleCnt;                                             //@synthesize pcmInputDataSampleCnt=_pcmInputDataSampleCnt - In the implementation block
@property (assign) BOOL isCalibrationDone;                                                //@synthesize isCalibrationDone=_isCalibrationDone - In the implementation block
@property (assign) BOOL isMeasurementDone;                                                //@synthesize isMeasurementDone=_isMeasurementDone - In the implementation block
@property (assign) NSMutableData * pcmOutputData;                                         //@synthesize pcmOutputData=_pcmOutputData - In the implementation block
@property (assign) int pcmOutputDataMaxSzInBytes;                                         //@synthesize pcmOutputDataMaxSzInBytes=_pcmOutputDataMaxSzInBytes - In the implementation block
@property (assign) int pcmOutputDataIndexInBytes;                                         //@synthesize pcmOutputDataIndexInBytes=_pcmOutputDataIndexInBytes - In the implementation block
@property (assign) NSMutableData * currentData;                                           //@synthesize currentData=_currentData - In the implementation block
@property (assign) NSMutableData * voltageData;                                           //@synthesize voltageData=_voltageData - In the implementation block
@property (assign) int audioTimeoutInSec;                                                 //@synthesize audioTimeoutInSec=_audioTimeoutInSec - In the implementation block
@property (assign) NSCondition * audioTimeoutCond;                                        //@synthesize audioTimeoutCond=_audioTimeoutCond - In the implementation block
@property (assign) int measurementSampleOffsetInFrames;                                   //@synthesize measurementSampleOffsetInFrames=_measurementSampleOffsetInFrames - In the implementation block
@property (assign) unsigned service;                                                      //@synthesize service=_service - In the implementation block
@property (assign) unsigned connect;                                                      //@synthesize connect=_connect - In the implementation block
@property (assign) int pinToMeasure;                                                      //@synthesize pinToMeasure=_pinToMeasure - In the implementation block
@property (assign) unsigned long long eisPinToken1;                                       //@synthesize eisPinToken1=_eisPinToken1 - In the implementation block
@property (assign) unsigned long long eisPinToken2;                                       //@synthesize eisPinToken2=_eisPinToken2 - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> systemPowerQueue;               //@synthesize systemPowerQueue=_systemPowerQueue - In the implementation block
@property (assign,nonatomic) unsigned systemPowerPort;                                    //@synthesize systemPowerPort=_systemPowerPort - In the implementation block
@property (assign,nonatomic) IONotificationPortRef systemPowerNotifyPortRef;              //@synthesize systemPowerNotifyPortRef=_systemPowerNotifyPortRef - In the implementation block
@property (assign,nonatomic) unsigned systemPowerIterator;                                //@synthesize systemPowerIterator=_systemPowerIterator - In the implementation block
@property (assign,nonatomic) int powerState;                                              //@synthesize powerState=_powerState - In the implementation block
@property (assign) NSCondition * powerStateCond;                                          //@synthesize powerStateCond=_powerStateCond - In the implementation block
@property (assign) BOOL isPowerAssertionHeld;                                             //@synthesize isPowerAssertionHeld=_isPowerAssertionHeld - In the implementation block
@property (assign) unsigned sleepAssertionID;                                             //@synthesize sleepAssertionID=_sleepAssertionID - In the implementation block
@property (nonatomic,readonly) ResourceArbiterClient * arbiterClient;                     //@synthesize arbiterClient=_arbiterClient - In the implementation block
@property (nonatomic,readonly) BOOL arbiterLocked;                                        //@synthesize arbiterLocked=_arbiterLocked - In the implementation block
@property (readonly) int precalibrationSampleOffsetInFrames;                              //@synthesize precalibrationSampleOffsetInFrames=_precalibrationSampleOffsetInFrames - In the implementation block
@property (readonly) double precalVoltageSignalLevel;                                     //@synthesize precalVoltageSignalLevel=_precalVoltageSignalLevel - In the implementation block
@property (readonly) double precalVoltageNoiseLevel;                                      //@synthesize precalVoltageNoiseLevel=_precalVoltageNoiseLevel - In the implementation block
@property (readonly) double precalVoltageSNR;                                             //@synthesize precalVoltageSNR=_precalVoltageSNR - In the implementation block
@property (readonly) double precalCurrentSignalLevel;                                     //@synthesize precalCurrentSignalLevel=_precalCurrentSignalLevel - In the implementation block
@property (readonly) double precalCurrentNoiseLevel;                                      //@synthesize precalCurrentNoiseLevel=_precalCurrentNoiseLevel - In the implementation block
@property (readonly) double precalCurrentSNR;                                             //@synthesize precalCurrentSNR=_precalCurrentSNR - In the implementation block
@property (readonly) int calibrationSampleOffsetInFrames;                                 //@synthesize calibrationSampleOffsetInFrames=_calibrationSampleOffsetInFrames - In the implementation block
@property (readonly) double voltageGainCorrection;                                        //@synthesize voltageGainCorrection=_voltageGainCorrection - In the implementation block
@property (readonly) double currentGainCorrection;                                        //@synthesize currentGainCorrection=_currentGainCorrection - In the implementation block
@property (readonly) double currentPhaseCompensation;                                     //@synthesize currentPhaseCompensation=_currentPhaseCompensation - In the implementation block
@property (readonly) double calVoltageSignalLevel;                                        //@synthesize calVoltageSignalLevel=_calVoltageSignalLevel - In the implementation block
@property (readonly) double calVoltageNoiseLevel;                                         //@synthesize calVoltageNoiseLevel=_calVoltageNoiseLevel - In the implementation block
@property (readonly) double calVoltageSNR;                                                //@synthesize calVoltageSNR=_calVoltageSNR - In the implementation block
@property (readonly) double calCurrentSignalLevel;                                        //@synthesize calCurrentSignalLevel=_calCurrentSignalLevel - In the implementation block
@property (readonly) double calCurrentNoiseLevel;                                         //@synthesize calCurrentNoiseLevel=_calCurrentNoiseLevel - In the implementation block
@property (readonly) double calCurrentSNR;                                                //@synthesize calCurrentSNR=_calCurrentSNR - In the implementation block
@property (readonly) double goertzelImpedance;                                            //@synthesize goertzelImpedance=_goertzelImpedance - In the implementation block
@property (readonly) double goertzelPhase;                                                //@synthesize goertzelPhase=_goertzelPhase - In the implementation block
@property (readonly) double compensatedImpedance;                                         //@synthesize compensatedImpedance=_compensatedImpedance - In the implementation block
@property (readonly) double compensatedPhase;                                             //@synthesize compensatedPhase=_compensatedPhase - In the implementation block
@property (readonly) double resistanceInOhms;                                             //@synthesize resistanceInOhms=_resistanceInOhms - In the implementation block
@property (readonly) double capacitanceInNanoF;                                           //@synthesize capacitanceInNanoF=_capacitanceInNanoF - In the implementation block
@property (readonly) double clippingScore;                                                //@synthesize clippingScore=_clippingScore - In the implementation block
@property (readonly) double measurementVoltageSignalLevel;                                //@synthesize measurementVoltageSignalLevel=_measurementVoltageSignalLevel - In the implementation block
@property (readonly) double measurementVoltageNoiseLevel;                                 //@synthesize measurementVoltageNoiseLevel=_measurementVoltageNoiseLevel - In the implementation block
@property (readonly) double measurementVoltageSNR;                                        //@synthesize measurementVoltageSNR=_measurementVoltageSNR - In the implementation block
@property (readonly) double measurementCurrentSignalLevel;                                //@synthesize measurementCurrentSignalLevel=_measurementCurrentSignalLevel - In the implementation block
@property (readonly) double measurementCurrentNoiseLevel;                                 //@synthesize measurementCurrentNoiseLevel=_measurementCurrentNoiseLevel - In the implementation block
@property (readonly) double measurementCurrentSNR;                                        //@synthesize measurementCurrentSNR=_measurementCurrentSNR - In the implementation block
@property (readonly) double measurementCondetSNR;                                         //@synthesize measurementCondetSNR=_measurementCondetSNR - In the implementation block
@property (readonly) int halogenResult;                                                   //@synthesize halogenResult=_halogenResult - In the implementation block
-(void)setPowerState:(int)arg1 ;
-(int)powerState;
-(unsigned)service;
-(void)setService:(unsigned)arg1 ;
-(BOOL)_allocBuffers;
-(BOOL)isBoundViolation_voltageGainCorrection;
-(BOOL)isBoundViolation_currentGainCorrection;
-(BOOL)isBoundViolation_currentPhaseCompensation;
-(BOOL)isLowerBoundViolation_goertzelImpedance;
-(BOOL)isUpperBoundViolation_goertzelImpedance;
-(BOOL)isLowerBoundViolation_goertzelPhase;
-(BOOL)isUpperBoundViolation_goertzelPhase;
-(BOOL)isBoundViolation_measurementCondetSNR;
-(double)precalVoltageSignalLevel;
-(double)precalVoltageNoiseLevel;
-(double)precalVoltageSNR;
-(double)precalCurrentSignalLevel;
-(double)precalCurrentNoiseLevel;
-(double)precalCurrentSNR;
-(double)voltageGainCorrection;
-(double)currentGainCorrection;
-(double)currentPhaseCompensation;
-(double)calVoltageSignalLevel;
-(double)calVoltageNoiseLevel;
-(double)calVoltageSNR;
-(double)calCurrentSignalLevel;
-(double)calCurrentNoiseLevel;
-(double)calCurrentSNR;
-(double)goertzelImpedance;
-(double)goertzelPhase;
-(double)compensatedImpedance;
-(double)compensatedPhase;
-(double)clippingScore;
-(double)resistanceInOhms;
-(double)capacitanceInNanoF;
-(double)measurementVoltageSignalLevel;
-(double)measurementVoltageNoiseLevel;
-(double)measurementVoltageSNR;
-(double)measurementCurrentSignalLevel;
-(double)measurementCurrentNoiseLevel;
-(double)measurementCurrentSNR;
-(double)measurementCondetSNR;
-(void)_generateSineWave;
-(BOOL)_connectToAccessoryManager:(int)arg1 ;
-(BOOL)_createSleepWakeNotifier;
-(void)_destroySleepWakeNotifier;
-(void)_disconnectFromAccessoryManager;
-(void)setSystemPowerPort:(unsigned)arg1 ;
-(void)setSystemPowerIterator:(unsigned)arg1 ;
-(void)setSystemPowerNotifyPortRef:(IONotificationPortRef)arg1 ;
-(void)setSystemPowerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)systemPowerQueue;
-(unsigned)systemPowerPort;
-(void)setPowerStateCond:(NSCondition *)arg1 ;
-(NSCondition *)powerStateCond;
-(IONotificationPortRef)systemPowerNotifyPortRef;
-(unsigned)systemPowerIterator;
-(BOOL)_holdPowerAssertion:(BOOL)arg1 ;
-(BOOL)_initAudioPath;
-(BOOL)_doHalogenLdcmCalc:(BOOL)arg1 ;
-(void)_deinitAudioPath;
-(void)_resetCalcValues;
-(id)initWithSize:(int)arg1 onPort:(int)arg2 ;
-(int)doMeasurement:(BOOL)arg1 onPin:(int)arg2 isReceptacleEmpty:(BOOL)arg3 ;
-(int)saveAsWav:(id)arg1 ;
-(id)getResultString;
-(int)precalibrationSampleOffsetInFrames;
-(int)calibrationSampleOffsetInFrames;
-(int)measurementSampleOffsetInFrames;
-(void)setMeasurementSampleOffsetInFrames:(int)arg1 ;
-(int)halogenResult;
-(HalogenLdcmCalc *)halogenLdcmCalc;
-(void)setHalogenLdcmCalc:(HalogenLdcmCalc *)arg1 ;
-(int)nInputChannels;
-(void)setNInputChannels:(int)arg1 ;
-(int)nOutputChannels;
-(void)setNOutputChannels:(int)arg1 ;
-(int)bitDepth;
-(void)setBitDepth:(int)arg1 ;
-(int)inputFrameSizeInBytes;
-(void)setInputFrameSizeInBytes:(int)arg1 ;
-(int)outputFrameSizeInBytes;
-(void)setOutputFrameSizeInBytes:(int)arg1 ;
-(OpaqueAudioComponentInstanceRef)audioComponentInst;
-(void)setAudioComponentInst:(OpaqueAudioComponentInstanceRef)arg1 ;
-(int)warmupTimeInMs;
-(void)setWarmupTimeInMs:(int)arg1 ;
-(int)hydraSettlingTimeInMs;
-(void)setHydraSettlingTimeInMs:(int)arg1 ;
-(int)nMeasurementSamples;
-(void)setNMeasurementSamples:(int)arg1 ;
-(int)nWarmupSamples;
-(void)setNWarmupSamples:(int)arg1 ;
-(int)nHydraSettlingSamples;
-(void)setNHydraSettlingSamples:(int)arg1 ;
-(int)nTotalSamples;
-(void)setNTotalSamples:(int)arg1 ;
-(int)nPaddingSamples;
-(void)setNPaddingSamples:(int)arg1 ;
-(double)signalFreq;
-(void)setSignalFreq:(double)arg1 ;
-(int)initalPhaseInDegrees;
-(void)setInitalPhaseInDegrees:(int)arg1 ;
-(unsigned short)maxOutputAmplitude;
-(void)setMaxOutputAmplitude:(unsigned short)arg1 ;
-(NSMutableData *)pcmInputData;
-(void)setPcmInputData:(NSMutableData *)arg1 ;
-(int)pcmInputDataMaxSzInBytes;
-(void)setPcmInputDataMaxSzInBytes:(int)arg1 ;
-(int)pcmInputDataIndexInBytes;
-(void)setPcmInputDataIndexInBytes:(int)arg1 ;
-(int)pcmInputDataSampleCnt;
-(void)setPcmInputDataSampleCnt:(int)arg1 ;
-(BOOL)isCalibrationDone;
-(void)setIsCalibrationDone:(BOOL)arg1 ;
-(BOOL)isMeasurementDone;
-(void)setIsMeasurementDone:(BOOL)arg1 ;
-(NSMutableData *)pcmOutputData;
-(void)setPcmOutputData:(NSMutableData *)arg1 ;
-(int)pcmOutputDataMaxSzInBytes;
-(void)setPcmOutputDataMaxSzInBytes:(int)arg1 ;
-(int)pcmOutputDataIndexInBytes;
-(void)setPcmOutputDataIndexInBytes:(int)arg1 ;
-(void)setCurrentData:(NSMutableData *)arg1 ;
-(NSMutableData *)voltageData;
-(void)setVoltageData:(NSMutableData *)arg1 ;
-(int)audioTimeoutInSec;
-(void)setAudioTimeoutInSec:(int)arg1 ;
-(NSCondition *)audioTimeoutCond;
-(void)setAudioTimeoutCond:(NSCondition *)arg1 ;
-(void)setConnect:(unsigned)arg1 ;
-(int)pinToMeasure;
-(void)setPinToMeasure:(int)arg1 ;
-(unsigned long long)eisPinToken1;
-(void)setEisPinToken1:(unsigned long long)arg1 ;
-(unsigned long long)eisPinToken2;
-(void)setEisPinToken2:(unsigned long long)arg1 ;
-(BOOL)isPowerAssertionHeld;
-(void)setIsPowerAssertionHeld:(BOOL)arg1 ;
-(unsigned)sleepAssertionID;
-(void)setSleepAssertionID:(unsigned)arg1 ;
-(ResourceArbiterClient *)arbiterClient;
-(BOOL)arbiterLocked;
-(void)_freeBuffers;
-(void)dealloc;
-(void)setSampleRate:(int)arg1 ;
-(unsigned)connect;
-(NSMutableData *)currentData;
-(int)sampleRate;
@end

