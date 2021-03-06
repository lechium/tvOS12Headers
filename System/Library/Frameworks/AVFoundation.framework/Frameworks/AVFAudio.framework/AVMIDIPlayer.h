/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFAudio/AVFAudio-Structs.h>
@interface AVMIDIPlayer : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) double duration; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (assign,nonatomic) float rate; 
@property (assign,nonatomic) double currentPosition; 
-(void)play:(/*^block*/id)arg1 ;
-(void)finalize;
-(id)initBase;
-(void)destroyBase;
-(id)initWithContentsOfURL:(id)arg1 soundBankURL:(id)arg2 error:(id*)arg3 ;
-(id)initWithData:(id)arg1 soundBankURL:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)hostTimeForBeats:(double)arg1 ;
-(double)beatsForHostTime:(unsigned long long)arg1 ;
-(MIDIPlayerImpl*)impl;
-(void)prepareToPlay;
-(BOOL)isPlaying;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(void)setCurrentPosition:(double)arg1 ;
-(double)currentPosition;
-(void)dealloc;
-(void)stop;
-(double)duration;
@end

