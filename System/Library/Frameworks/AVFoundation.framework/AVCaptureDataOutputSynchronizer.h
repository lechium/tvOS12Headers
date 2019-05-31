/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:40 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureVideoDataOutputSampleBufferDelegate.h>
#import <AVFoundation/AVCaptureAudioDataOutputSampleBufferDelegate.h>
#import <AVFoundation/AVCaptureMetadataOutputObjectsDelegate.h>
#import <AVFoundation/AVCaptureDepthDataOutputDelegate.h>

@class AVCaptureDataOutputSynchronizerInternal, NSArray, NSString;

@interface AVCaptureDataOutputSynchronizer : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate, AVCaptureMetadataOutputObjectsDelegate, AVCaptureDepthDataOutputDelegate> {

	AVCaptureDataOutputSynchronizerInternal* _internal;

}

@property (retain,readonly) NSArray * dataOutputs; 
@property (nonatomic,readonly) id<AVCaptureDataOutputSynchronizerDelegate> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateCallbackQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)depthDataOutput:(id)arg1 didOutputDepthData:(id)arg2 timestamp:(SCD_Struct_AV5)arg3 connection:(id)arg4 ;
-(void)depthDataOutput:(id)arg1 didDropDepthData:(id)arg2 timestamp:(SCD_Struct_AV5)arg3 connection:(id)arg4 reason:(long long)arg5 ;
-(NSObject*<OS_dispatch_queue>)delegateCallbackQueue;
-(void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3 ;
-(int)_computedMasterSynchronizedDataQueueMaxDepthForDataOutputs:(id)arg1 ;
-(void)_assignTimestampAdjustmentQueueToDataOutputStorageWithCommonProvenance;
-(void)_createTimestampHistoryQueuesForMetadataOutputStoragesWithNoTimestampAdjustmentQueues;
-(void)_overrideDataOutputDelegatesForDelegateCallbackQueue:(id)arg1 ;
-(void)_appendSynchronizedData:(id)arg1 forCaptureOutput:(id)arg2 ;
-(void)_dispatchRipenedSynchronizedData;
-(void)_adjustSynchronizedDataTimestamps;
-(SCD_Struct_AV5)_earliestSlaveSynchronizedDataQueueTimestamp;
-(void)_dispatchSynchronizedDataWithTimestamp:(SCD_Struct_AV5)arg1 ;
-(BOOL)_allSlaveSynchronizedDataOutputsContainTimestampEqualToOrGreaterThanMasterTimestamp:(SCD_Struct_AV5)arg1 ;
-(id)initWithDataOutputs:(id)arg1 ;
-(NSArray *)dataOutputs;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)captureOutput:(id)arg1 didDropSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)dealloc;
-(id<AVCaptureDataOutputSynchronizerDelegate>)delegate;
@end

