/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSVoiceTriggerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CSAudioCircularBuffer, NSString;

@interface CSVoiceTriggerFidesClient : NSObject <CSVoiceTriggerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	CSAudioCircularBuffer* _audioBuffer;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) CSAudioCircularBuffer * audioBuffer;              //@synthesize audioBuffer=_audioBuffer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(CSAudioCircularBuffer *)audioBuffer;
-(void)setAudioBuffer:(CSAudioCircularBuffer *)arg1 ;
-(void)voiceTriggerDidDetectKeyword:(id)arg1 ;
-(void)voiceTriggerDidDetectNearMiss:(id)arg1 ;
-(void)voiceTriggerDidDetectSpeakerReject:(id)arg1 ;
-(id)initWithAudioBuffer:(id)arg1 ;
-(id)_lastTriggerDataWithResult:(id)arg1 ;
-(void)_logDESRecordWithType:(long long)arg1 result:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
@end

