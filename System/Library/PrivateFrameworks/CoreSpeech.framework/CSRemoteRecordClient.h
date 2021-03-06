/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, CSRemoteRecordClientDelegate;
@class NSObject;

@interface CSRemoteRecordClient : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<CSRemoteRecordClientDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSRemoteRecordClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)isRecording;
-(BOOL)isConnected;
-(id)voiceTriggerEventInfo;
-(BOOL)waitingForConnection:(double)arg1 error:(id*)arg2 ;
-(BOOL)startRecordingWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)stopRecording:(id*)arg1 ;
-(BOOL)didPlayEndpointBeep;
-(BOOL)hasPendingTwoShotBeep;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<CSRemoteRecordClientDelegate>)arg1 ;
-(id<CSRemoteRecordClientDelegate>)delegate;
@end

