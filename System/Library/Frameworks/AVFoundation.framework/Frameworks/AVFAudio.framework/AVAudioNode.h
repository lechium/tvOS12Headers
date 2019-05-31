/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <AVFAudio/AVAudioMixing.h>

@class AVAudioEngine, AVAudioTime, AUAudioUnit, NSString;

@interface AVAudioNode : NSObject <AVAudioMixing> {

	void* _impl;

}

@property (nonatomic,readonly) AVAudioNodeImplBase* impl; 
@property (nonatomic,readonly) AVAudioEngine * engine; 
@property (nonatomic,readonly) unsigned long long numberOfInputs; 
@property (nonatomic,readonly) unsigned long long numberOfOutputs; 
@property (nonatomic,readonly) AVAudioTime * lastRenderTime; 
@property (nonatomic,readonly) AUAudioUnit * AUAudioUnit; 
@property (nonatomic,readonly) double latency; 
@property (nonatomic,readonly) double outputPresentationLatency; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float volume; 
-(id)clock;
-(unsigned long long)numberOfOutputs;
-(id)initWithImpl:(AVAudioNodeImplBase*)arg1 ;
-(BOOL)resetImpl:(AVAudioNodeImplBase*)arg1 ;
-(OpaqueAudioComponentInstanceRef)audioUnit;
-(void)didAttachToEngine:(id)arg1 ;
-(void)didDetachFromEngine:(id)arg1 ;
-(id)outputFormatForBus:(unsigned long long)arg1 ;
-(id)destinationForMixer:(id)arg1 bus:(unsigned long long)arg2 ;
-(BOOL)setOutputFormat:(id)arg1 forBus:(unsigned long long)arg2 ;
-(id)inputFormatForBus:(unsigned long long)arg1 ;
-(BOOL)setInputFormat:(id)arg1 forBus:(unsigned long long)arg2 ;
-(id)nameForInputBus:(unsigned long long)arg1 ;
-(id)nameForOutputBus:(unsigned long long)arg1 ;
-(AVAudioTime *)lastRenderTime;
-(double)outputPresentationLatency;
-(unsigned long long)numberOfInputs;
-(void)setNumberOfInputs:(unsigned long long)arg1 ;
-(void)setNumberOfOutputs:(unsigned long long)arg1 ;
-(void)installTapOnBus:(unsigned long long)arg1 bufferSize:(unsigned)arg2 format:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)removeTapOnBus:(unsigned long long)arg1 ;
-(AUAudioUnit *)AUAudioUnit;
-(AVAudioNodeImplBase*)impl;
-(double)latency;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(void)setVolume:(float)arg1 ;
-(long long)renderingAlgorithm;
-(void)setRenderingAlgorithm:(long long)arg1 ;
-(float)reverbBlend;
-(void)setReverbBlend:(float)arg1 ;
-(float)obstruction;
-(void)setObstruction:(float)arg1 ;
-(float)occlusion;
-(void)setOcclusion:(float)arg1 ;
-(float)volume;
-(id)init;
-(void)dealloc;
-(void)reset;
-(void)setPosition:(AVAudio3DPoint)arg1 ;
-(AVAudio3DPoint)position;
-(void)setPan:(float)arg1 ;
-(float)pan;
-(AVAudioEngine *)engine;
@end
