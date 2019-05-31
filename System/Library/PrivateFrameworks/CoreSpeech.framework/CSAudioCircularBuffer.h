/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreSpeech/CoreSpeech-Structs.h>
@interface CSAudioCircularBuffer : NSObject {

	unique_ptr<corespeech::CSAudioCircularBufferImpl<unsigned short>, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short> > >* _csAudioCircularBufferImpl;
	unsigned long long _bufferLength;

}

@property (assign,nonatomic) unsigned long long bufferLength;              //@synthesize bufferLength=_bufferLength - In the implementation block
+(id)createAudioCircularBufferWithDefaultSettings;
-(void)addSamples:(const void*)arg1 numSamples:(unsigned long long)arg2 ;
-(id)initWithNumChannels:(unsigned long long)arg1 recordingDuration:(float)arg2 samplingRate:(float)arg3 ;
-(void)addSamples:(const void*)arg1 numSamples:(unsigned long long)arg2 atHostTime:(unsigned long long)arg3 ;
-(unsigned long long)bufferLength;
-(id)copySamplesFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
-(void)saveRecordingBufferFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 toURL:(id)arg3 ;
-(id)copySamplesFromHostTime:(unsigned long long)arg1 ;
-(id)copyBufferWithNumSamplesCopiedIn:(unsigned long long*)arg1 ;
-(void)setBufferLength:(unsigned long long)arg1 ;
-(void)reset;
-(unsigned long long)sampleCount;
@end

