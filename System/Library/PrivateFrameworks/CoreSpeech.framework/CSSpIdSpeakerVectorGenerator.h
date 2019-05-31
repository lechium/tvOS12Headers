/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EARPSRAudioProcessorDelegate.h>

@protocol CSSpIdSpeakerVectorGeneratorDelegate, OS_dispatch_queue;
@class NSString, EARPSRAudioProcessor, NSObject;

@interface CSSpIdSpeakerVectorGenerator : NSObject <EARPSRAudioProcessorDelegate> {

	unsigned long long _spIdType;
	NSString* _spIdTypeStr;
	id<CSSpIdSpeakerVectorGeneratorDelegate> _delegate;
	EARPSRAudioProcessor* _psrAudioProcessor;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic) unsigned long long spIdType;                                           //@synthesize spIdType=_spIdType - In the implementation block
@property (nonatomic,retain) NSString * spIdTypeStr;                                                //@synthesize spIdTypeStr=_spIdTypeStr - In the implementation block
@property (assign,nonatomic,__weak) id<CSSpIdSpeakerVectorGeneratorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) EARPSRAudioProcessor * psrAudioProcessor;                              //@synthesize psrAudioProcessor=_psrAudioProcessor - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                    //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithCSSpIdType:(unsigned long long)arg1 withSysConfigFilepath:(id)arg2 sysConfigRoot:(id)arg3 delegate:(id)arg4 ;
-(void)processAudioData:(id)arg1 ;
-(void)endAudio;
-(unsigned long long)spIdType;
-(void)setSpIdType:(unsigned long long)arg1 ;
-(NSString *)spIdTypeStr;
-(void)setSpIdTypeStr:(NSString *)arg1 ;
-(BOOL)_isSpeakerVectorValid:(id)arg1 speakerVectorSize:(unsigned long long)arg2 fromPsrAudioProcessor:(id)arg3 ;
-(void)psrAudioProcessor:(id)arg1 hasSpeakerVector:(id)arg2 speakerVectorSize:(unsigned long long)arg3 processedAudioDurationMs:(unsigned long long)arg4 ;
-(void)psrAudioProcessor:(id)arg1 finishedWithFinalSpeakerVector:(id)arg2 speakerVectorSize:(unsigned long long)arg3 processedAudioDurationMs:(unsigned long long)arg4 ;
-(EARPSRAudioProcessor *)psrAudioProcessor;
-(void)setPsrAudioProcessor:(EARPSRAudioProcessor *)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)setDelegate:(id<CSSpIdSpeakerVectorGeneratorDelegate>)arg1 ;
-(id<CSSpIdSpeakerVectorGeneratorDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)queue;
@end

