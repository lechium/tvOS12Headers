/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Memories/Memories-Structs.h>
@class NSArray;

@interface MiroAnalysisAudioHelpers : NSObject {

	OpaqueAudioComponentInstanceRef _audioUnitEPVAD;
	CAStreamBasicDescription* _processFormat;
	AUOutputBL* _intAudioBufferList;
	AUOutputBL* _floatAudioBufferList;
	AUTimestampGenerator* _timeGenerator;
	SCD_Struct_TV2 _currentRangeStartTime;
	SCD_Struct_TV2 _recordingStartTime;
	SCD_Struct_TV2 _recordingEndTime;
	BOOL _initializedAudioUnit;
	unsigned _numberOfSamplesPerBuffer;
	LkFsMeasure* _loudnessAnalyzer;
	vector<double, std::__1::allocator<double> >* _momentaryEnergyValues;
	vector<float, std::__1::allocator<float> >* _loudnessSampleBuffer;
	float _peakValue;
	long long projectNaturalFrameRate;
	NSArray* _timeRanges;

}

@property (assign,nonatomic) long long projectNaturalFrameRate; 
@property (assign,nonatomic) NSArray * timeRanges;                           //@synthesize timeRanges=_timeRanges - In the implementation block
-(NSArray *)timeRanges;
-(void)setTimeRanges:(NSArray *)arg1 ;
-(void)processAVAsset:(id)arg1 options:(unsigned long long)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setProjectNaturalFrameRate:(long long)arg1 ;
-(long long)projectNaturalFrameRate;
-(void)_processSamplesForPeaksAndLoudness:(float*)arg1 numberOfFrames:(unsigned)arg2 sampleRate:(float)arg3 ;
-(id)_outputVoiceRangeWithDetectionTime:(SCD_Struct_TV2)arg1 ;
-(int)_setPropertiesWithNumberOfSamplesPerBuffer:(unsigned)arg1 ;
-(BOOL)_processFloatBufferWithNumberOfFrames:(long long)arg1 options:(unsigned long long)arg2 voiceRange:(id*)arg3 ;
-(id)_outputLoudnessRangeWithDetectionTime:(SCD_Struct_Mi11)arg1 ;
-(BOOL)_setupAndStartReadingTrack:(id)arg1 usingTimeRange:(SCD_Struct_Mi11)arg2 outputSettings:(id)arg3 assetReader:(id*)arg4 trackOutput:(id*)arg5 error:(id*)arg6 ;
-(BOOL)_startProcessingWithStartTime:(SCD_Struct_TV2)arg1 audioStreamDescription:(AudioStreamBasicDescription)arg2 numberOfSamplesPerBuffer:(unsigned)arg3 ;
-(BOOL)_startVoiceDetection;
-(BOOL)_startLoudnessDetection;
-(BOOL)_processAudioSampleBuffer:(opaqueCMSampleBufferRef)arg1 options:(unsigned long long)arg2 voiceRange:(id*)arg3 ;
-(void)_stopDetectingVoiceWithEndTime:(SCD_Struct_TV2)arg1 lastVoiceRanges:(id*)arg2 ;
-(void)_stopDetectingLoudnessWithTimeRange:(SCD_Struct_Mi11)arg1 loudnessRanges:(id*)arg2 ;
-(void)_stopProcessing;
-(id)init;
-(void)dealloc;
@end

