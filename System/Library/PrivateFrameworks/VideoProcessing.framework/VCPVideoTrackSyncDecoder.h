/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoTrackDecoder.h>

@protocol OS_dispatch_group, OS_dispatch_semaphore;
@class AVAssetReader, AVAssetReaderSampleReferenceOutput, NSObject;

@interface VCPVideoTrackSyncDecoder : VCPVideoTrackDecoder {

	AVAssetReader* _assetReader;
	AVAssetReaderSampleReferenceOutput* _trackReader;
	SCD_Struct_VC9 _timerange;
	BOOL _launchOnce;
	NSObject*<OS_dispatch_group> _group;
	NSObject*<OS_dispatch_semaphore> _inputSemaphore;
	NSObject*<OS_dispatch_semaphore> _outputSemaphore;
	BOOL _cancelDecode;
	int _decodeError;
	BOOL _decodeFinished;
	int _decodedFrames;
	int _outputFrameIdx;
	opaqueCMSampleBuffer* _sampleBuffer[2];

}
-(id)initWithTrack:(id)arg1 timerange:(const SCD_Struct_VC9*)arg2 ;
-(int)findNextSample:(BOOL)arg1 timerange:(SCD_Struct_VC9*)arg2 ;
-(int)decodeSample:(SCD_Struct_VC9)arg1 sample:(opaqueCMSampleBuffer*)arg2 ;
-(void)decodeTask;
-(opaqueCMSampleBufferRef)copyNextSampleBuffer;
-(void)dealloc;
-(long long)status;
@end

