/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCVideoCapture.h>
#import <libobjc.A.dylib/VideoCaptureProtocol.h>
#import <AVConference/AVCaptureVideoDataOutputSampleBufferDelegate.h>
#import <libobjc.A.dylib/VCEffectsManagerDelegate.h>
#import <AVConference/AVCaptureDataOutputSynchronizerDelegate.h>

@protocol OS_dispatch_queue;
@class AVCaptureDeviceInput, AVCaptureVideoDataOutput, NSObject, AVCaptureSession, AVCaptureDataOutputSynchronizer, NSMutableArray, AVCaptureMetadataOutput, AVCaptureDepthDataOutput, AVCaptureDevice, NSString;

@interface VCAVFoundationCapture : VCVideoCapture <VideoCaptureProtocol, AVCaptureVideoDataOutputSampleBufferDelegate, VCEffectsManagerDelegate, AVCaptureDataOutputSynchronizerDelegate> {

	AVCaptureDeviceInput* _videoDeviceInput;
	AVCaptureVideoDataOutput* _videoCaptureOutput;
	NSObject*<OS_dispatch_queue> _captureSessionQueue;
	AVCaptureSession* _captureSession;
	AVCaptureDataOutputSynchronizer* _outputSynchronizer;
	NSMutableArray* _outputSynchronizerOutputs;
	AVCaptureMetadataOutput* _metadataOutput;
	AVCaptureDepthDataOutput* _depthDataOutput;
	AVCaptureDevice* _captureDevice;
	BOOL _faceMeshTrackingEnabled;
	BOOL _effectsApplied;
	int _lastRequestedWidth;
	int _lastRequestedHeight;
	int _lastRequestedFrameRate;
	int _lastClientRequestedFrameRate;
	CGSize _requestSize;
	CGSize _captureSize;
	BOOL _resize;
	BOOL _isPreviewing;
	BOOL _isCapturing;
	BOOL _forceMirrorCapture;
	BOOL _forceDynamicEffectsFramerate;
	BOOL _forcePearlCamera;
	int _previewFrameCount;
	int _captureFrameCount;
	float _processTimeSum;
	float _depthFrameRateMultplier;
	NSMutableArray* _renderFrameTimes;
	CVPixelBufferPoolRef _bufferPool;
	OpaqueVTPixelTransferSessionRef _transferSession;
	CVPixelBufferPoolRef _resizeBufferPool;
	OpaqueVTPixelTransferSessionRef _resizeTransferSession;
	CVPixelBufferPoolRef _rotateBufferPool;
	OpaqueVTImageRotationSessionRef _rotationSession;
	CVPixelBufferPoolRef _mirrorBufferPool;
	OpaqueVTImageRotationSessionRef _mirrorSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) BOOL faceMeshTrackingEnabled;                    //@synthesize faceMeshTrackingEnabled=_faceMeshTrackingEnabled - In the implementation block
@property (assign) BOOL effectsApplied;                             //@synthesize effectsApplied=_effectsApplied - In the implementation block
-(int)stop:(BOOL)arg1 ;
-(int)setFrameRate:(int)arg1 ;
-(CGSize)getBestCaptureSizeForEncodingSize:(CGSize)arg1 ;
-(void)captureSessionNotification:(id)arg1 ;
-(int)setCamera:(id)arg1 width:(int)arg2 height:(int)arg3 frameRate:(int)arg4 ;
-(void)initializeOutputs;
-(void)setFaceMeshTrackingEnabled:(BOOL)arg1 ;
-(void)setEffectsApplied:(BOOL)arg1 ;
-(void)setupRotationBufferPoolWithWidth:(int)arg1 height:(int)arg2 ;
-(void)setupMirrorBufferPoolWithWidth:(int)arg1 height:(int)arg2 ;
-(void)initializeVideoCaptureOutput;
-(void)initializeMetadataOutput;
-(void)initializeDepthDataOutput;
-(void)initializeSynchronizedOutputs;
-(void)configureCaptureDeviceDepthFormat;
-(void)prepareSynchronizedOutputs:(id)arg1 ;
-(void)updateDepthFrameRate;
-(int)setFrameRateInternal:(int)arg1 ;
-(void)updateRenderProcessFrameRate:(id)arg1 ;
-(BOOL)isFrontCamera;
-(void)updateVideoCaptureServerWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 time:(SCD_Struct_AV54)arg2 frontCamera:(BOOL)arg3 shouldMirrorFrontPreview:(BOOL)arg4 isFromEffects:(BOOL)arg5 ;
-(void)processSampleBuffer:(opaqueCMSampleBufferRef)arg1 depthData:(id)arg2 faceData:(id)arg3 captureDevice:(id)arg4 ;
-(opaqueCMSampleBufferRef)newResizedFrame:(opaqueCMSampleBufferRef)arg1 time:(SCD_Struct_AV54)arg2 ;
-(void)sendImageDataForSampleBuffer:(opaqueCMSampleBufferRef)arg1 depthData:(id)arg2 faceData:(id)arg3 captureDevice:(id)arg4 originalSize:(CGSize)arg5 ;
-(opaqueCMSampleBufferRef)copySampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)attachMetadata:(id)arg1 toCVPixelBuffer:(CVBufferRef)arg2 ;
-(void)ensureRotationBufferPoolSupportsWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(void)ensureMirroredBufferPoolSupportsWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(opaqueCMSampleBufferRef)newMirroredVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 time:(SCD_Struct_AV54)arg2 ;
-(opaqueCMSampleBufferRef)newRotatedVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 time:(SCD_Struct_AV54)arg2 shouldMirror:(BOOL)arg3 ;
-(BOOL)shouldResizeWithCaptureSize:(CGSize)arg1 requestSize:(CGSize)arg2 ;
-(int)setVideoDeviceToWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 ;
-(BOOL)cameraSupportsNoQueueFormatWidth:(int)arg1 height:(int)arg2 ;
-(SCD_Struct_AV54)frameDurationForVideoDeviceFormat:(id)arg1 frameRate:(int)arg2 ;
-(int)getMaxAllowedFrameRate:(int)arg1 ;
-(id)cameraFormatForWidth:(int)arg1 height:(int)arg2 ;
-(int)setVideoDeviceToSelectedDevice:(id)arg1 ;
-(void)setVideoOrientationAndMirroredForDevice:(id)arg1 ;
-(BOOL)isFormatMaxFrameRateSupported:(id)arg1 ;
-(CVBufferRef)copyPixelBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)startPreview;
-(int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 ;
-(int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 ;
-(int)copyColorInfo:(const _CFDictionary*)arg1 ;
-(BOOL)isPreviewRunning;
-(int)setCameraWithUID:(id)arg1 ;
-(id)getCameraUID;
-(int)getPreviewFrameCount:(int*)arg1 captureFrameCount:(int*)arg2 reset:(BOOL)arg3 ;
-(int)frameBecameAvailableCount:(int*)arg1 figBufferQueueEmptyCount:(int*)arg2 figBufferQueueErrorCount:(int*)arg3 ;
-(BOOL)cameraSupportsFormatWidth:(int)arg1 height:(int)arg2 ;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)encodeProcessedPixelBuffer:(CVBufferRef)arg1 time:(SCD_Struct_AV54)arg2 imageData:(id)arg3 processTime:(id)arg4 ;
-(BOOL)faceMeshTrackingEnabled;
-(BOOL)effectsApplied;
-(void)dataOutputSynchronizer:(id)arg1 didOutputSynchronizedDataCollection:(id)arg2 ;
-(id)initWithCaptureServer:(id)arg1 width:(int)arg2 height:(int)arg3 frameRate:(int)arg4 cameraUID:(id)arg5 ;
-(void)setVideoStabilizationTo:(BOOL)arg1 ;
-(void)dealloc;
@end

