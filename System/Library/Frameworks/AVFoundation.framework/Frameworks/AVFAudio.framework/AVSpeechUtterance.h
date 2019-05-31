/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AVSpeechSynthesisVoice, NSString, NSAttributedString;

@interface AVSpeechUtterance : NSObject <NSCopying, NSSecureCoding> {

	AVSpeechSynthesisVoice* _voice;
	float _rate;
	float _pitchMultiplier;
	float _volume;
	NSString* _speechString;
	NSAttributedString* _attributedSpeechString;
	double _preUtteranceDelay;
	double _postUtteranceDelay;

}

@property (assign,nonatomic) BOOL useMonarchStyleSpeechRate; 
@property (assign,nonatomic) BOOL processEmoticons; 
@property (nonatomic,retain) NSString * speechString;                                  //@synthesize speechString=_speechString - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedSpeechString;              //@synthesize attributedSpeechString=_attributedSpeechString - In the implementation block
@property (nonatomic,retain) AVSpeechSynthesisVoice * voice;                           //@synthesize voice=_voice - In the implementation block
@property (assign,nonatomic) float rate;                                               //@synthesize rate=_rate - In the implementation block
@property (assign,nonatomic) float pitchMultiplier;                                    //@synthesize pitchMultiplier=_pitchMultiplier - In the implementation block
@property (assign,nonatomic) float volume;                                             //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) double preUtteranceDelay;                                 //@synthesize preUtteranceDelay=_preUtteranceDelay - In the implementation block
@property (assign,nonatomic) double postUtteranceDelay;                                //@synthesize postUtteranceDelay=_postUtteranceDelay - In the implementation block
+(id)speechUtteranceWithString:(id)arg1 ;
+(id)speechUtteranceWithAttributedString:(id)arg1 ;
+(id)speechUtteranceWithString:(id)arg1 ;
+(id)speechUtteranceWithAttributedString:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(void)initialize;
-(id)initWithString:(id)arg1 ;
-(id)description;
-(id)initWithAttributedString:(id)arg1 ;
-(void)setUseMonarchStyleSpeechRate:(BOOL)arg1 ;
-(BOOL)useMonarchStyleSpeechRate;
-(id)action;
-(void)setAction:(id)arg1 ;
-(void)setUseMonarchStyleSpeechRate:(BOOL)arg1 ;
-(BOOL)useMonarchStyleSpeechRate;
-(void)setProcessEmoticons:(BOOL)arg1 ;
-(BOOL)processEmoticons;
-(NSString *)speechString;
-(float)pitchMultiplier;
-(double)preUtteranceDelay;
-(double)postUtteranceDelay;
-(void)setSpeechString:(NSString *)arg1 ;
-(void)setAttributedSpeechString:(NSAttributedString *)arg1 ;
-(void)setPreUtteranceDelay:(double)arg1 ;
-(void)setPostUtteranceDelay:(double)arg1 ;
-(void)setPitchMultiplier:(float)arg1 ;
-(AVSpeechSynthesisVoice *)voice;
-(void)setVoice:(AVSpeechSynthesisVoice *)arg1 ;
-(NSAttributedString *)attributedSpeechString;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(void)setVolume:(float)arg1 ;
-(float)volume;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAttributedString:(id)arg1 ;
@end

