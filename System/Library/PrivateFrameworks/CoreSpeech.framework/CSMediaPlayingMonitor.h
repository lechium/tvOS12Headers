/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface CSMediaPlayingMonitor : CSEventMonitor {

	long long _mediaIsPlaying;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
-(void)_stopMonitoring;
-(void)_notifyObserver:(id)arg1 mediaIsPlayingState:(long long)arg2 ;
-(void)_notePossiblePlayPausedStateChange:(id)arg1 ;
-(void)initializeMediaPlayingState;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(long long)mediaPlayingState;
-(id)init;
@end
