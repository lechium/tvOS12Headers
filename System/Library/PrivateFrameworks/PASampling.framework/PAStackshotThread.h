/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PASampling/PASampling-Structs.h>
@class PAStackshotTask;

@interface PAStackshotThread : NSObject {

	thread_snapshot* thread_snap;
	PAStackshotTask* _task;
	const void* _kernelFrames;
	const void* _userFrames;
	unsigned long long _kernelFrameSize;
	unsigned long long _userFrameSize;
	unsigned long long _bytesUsed;
	unsigned long long _bytesBeforeThread;

}

@property (readonly) BOOL isFromMicrostackshot; 
-(BOOL)isFromMicrostackshot;
-(const void*)firstFrame;
-(BOOL)setBufferPosition:(const char*)arg1 withRemainingBytes:(unsigned long long)arg2 withBytesAlreadyUsed:(unsigned long long)arg3 ;
-(void)_calculateOffsets;
-(id)frameIterator;
-(unsigned long long)_frameSize:(BOOL)arg1 ;
-(unsigned)powerstatsFlags;
-(unsigned long long)kernelFrameSize;
-(unsigned long long)userFrameSize;
-(BOOL)hasKernelContinuation;
-(BOOL)setBufferPosition:(const char*)arg1 withRemainingBytes:(unsigned long long)arg2 ;
-(unsigned long long)bytesUsedInBuffer;
-(void)iterateFrames:(/*^block*/id)arg1 ;
-(BOOL)isDarwinBG;
-(unsigned long long)dispatchQueueId;
-(BOOL)hasDispatchQueue;
-(id)initWithTask:(id)arg1 ;
@end

