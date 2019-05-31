/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <libobjc.A.dylib/Endpointer.h>

@class NSString;

@interface SpeexEndpointer : NSObject <Endpointer> {

	double mStartWaitTime;
	double mInterspeechWaitTime;
	double mEndWaitTime;
	int mEndpointMode;
	unsigned mFrameRate;
	int mLastStatus;
	void* _impl;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) int endpointMode; 
@property (assign) double startWaitTime; 
@property (assign) double interspeechWaitTime; 
@property (assign) double endWaitTime; 
-(int)getStatus:(float*)arg1 count:(unsigned)arg2 ;
-(BOOL)configureWithASBD:(AudioStreamBasicDescription*)arg1 andFrameRate:(unsigned)arg2 ;
-(int)getStatus:(AudioQueueBuffer*)arg1 ;
-(int)endpointMode;
-(void)setEndpointMode:(int)arg1 ;
-(double)startWaitTime;
-(void)setStartWaitTime:(double)arg1 ;
-(double)interspeechWaitTime;
-(void)setInterspeechWaitTime:(double)arg1 ;
-(double)endWaitTime;
-(void)setEndWaitTime:(double)arg1 ;
-(BOOL)configureWithSampleRate:(double)arg1 andFrameRate:(unsigned)arg2 ;
-(id)init;
-(void)dealloc;
-(void)reset;
@end

