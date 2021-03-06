/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSMutableArray, AVCaptureDevice, AVWeakReference, AVCaptureInputPort, NSArray, NSString;

@interface AVCaptureConnectionInternal : NSObject {

	NSMutableArray* inputPorts;
	AVCaptureDevice* sourceDevice;
	AVWeakReference* outputWeakReference;
	AVWeakReference* videoPreviewLayerWeakReference;
	BOOL hasActiveObservers;
	BOOL active;
	BOOL enabled;
	int changeSeed;
	AVCaptureInputPort* audioInputPort;
	NSMutableArray* audioChannels;
	NSArray* audioChannelLevels;
	long long lastGetAudioLevelsTime;
	AVCaptureInputPort* videoInputPort;
	AVCaptureInputPort* metadataInputPort;
	AVCaptureInputPort* metadataItemInputPort;
	AVCaptureInputPort* depthDataInputPort;
	BOOL videoMirroringSupported;
	BOOL automaticallyAdjustsVideoMirroring;
	BOOL videoMirrored;
	BOOL videoOrientationSupported;
	long long videoOrientation;
	SCD_Struct_AV5 videoMinFrameDuration;
	SCD_Struct_AV5 videoMaxFrameDuration;
	double videoMaxScaleAndCropFactor;
	double videoScaleAndCropFactor;
	int videoRetainedBufferCountHint;
	long long preferredVideoStabilizationMode;
	BOOL videoStabilizationEnabled;
	long long activeVideoStabilizationMode;
	BOOL hasVideoMinFrameDurationObserver;
	NSString* connectionID;
	BOOL cameraIntrinsicMatrixDeliverySupported;
	BOOL cameraIntrinsicMatrixDeliveryEnabled;
	BOOL debugMetadataSidecarFileEnabled;

}
@end

