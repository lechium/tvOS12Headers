/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSVoiceTriggerDelegate.h>

@protocol OS_dispatch_queue;
@class NSHashTable, NSObject, NSString;

@interface CSVoiceTriggerEventNotifier : NSObject <CSVoiceTriggerDelegate> {

	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isContinuousRunningMode;

}

@property (assign,nonatomic) BOOL isContinuousRunningMode;              //@synthesize isContinuousRunningMode=_isContinuousRunningMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)voiceTriggerDidDetectKeyword:(id)arg1 ;
-(void)voiceTriggerDidDetectNearMiss:(id)arg1 ;
-(void)voiceTriggerDidDetectSpeakerReject:(id)arg1 ;
-(void)voiceTriggerDidDetectTwoShotAtTime:(double)arg1 ;
-(void)keywordDetectorDidDetectKeyword;
-(void)setIsContinuousRunningMode:(BOOL)arg1 ;
-(void)_notifyTriggerEvent:(id)arg1 ;
-(void)_notifyNearMissEvent:(id)arg1 ;
-(void)_notifySpeakerReject:(id)arg1 ;
-(void)_notifyTwoShotDetectionAt:(double)arg1 ;
-(void)_notifyKeywordDetect;
-(id)_createVoiceTriggerEventInfoString:(id)arg1 ;
-(BOOL)isContinuousRunningMode;
-(id)init;
@end
