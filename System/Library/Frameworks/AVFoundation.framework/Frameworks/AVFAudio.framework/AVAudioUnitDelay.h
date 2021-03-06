/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVAudioUnitEffect.h>

@interface AVAudioUnitDelay : AVAudioUnitEffect

@property (assign,nonatomic) double delayTime; 
@property (assign,nonatomic) float feedback; 
@property (assign,nonatomic) float lowPassCutoff; 
@property (assign,nonatomic) float wetDryMix; 
-(void)setWetDryMix:(float)arg1 ;
-(void)setDelayTime:(double)arg1 ;
-(void)setLowPassCutoff:(float)arg1 ;
-(float)wetDryMix;
-(double)delayTime;
-(float)lowPassCutoff;
-(void)setFeedback:(float)arg1 ;
-(float)feedback;
-(id)init;
@end

