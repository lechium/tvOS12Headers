/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSAudioSessionMonitor : CSEventMonitor {

	unsigned long long _audioSessionState;

}

@property (assign,getter=getAudioSessionState,nonatomic) unsigned long long audioSessionState;              //@synthesize audioSessionState=_audioSessionState - In the implementation block
+(id)sharedInstance;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(unsigned long long)getAudioSessionState;
-(void)notifyAduioSessionStateChange:(unsigned long long)arg1 ;
-(void)setAudioSessionState:(unsigned long long)arg1 ;
-(id)init;
@end
