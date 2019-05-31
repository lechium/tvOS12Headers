/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVPlayerItemOutputPullDelegate, OS_dispatch_queue, OS_dispatch_source;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSObject, AVVideoOutputSettings;

@interface AVPlayerItemVideoOutputInternal : NSObject {

	OpaqueCMTimebaseRef timebase;
	double currentRate;
	OpaqueFigVisualContextRef vc;
	AVWeakReference* playerItemWeakReference;
	OpaqueVTPixelBufferConformerRef pixelBufferConformer;
	id<AVPlayerItemOutputPullDelegate> delegate;
	NSObject*<OS_dispatch_queue> stateQueue;
	NSObject*<OS_dispatch_queue> delegateQueue;
	NSObject*<OS_dispatch_source> delegateWakeupSource;
	double advanceWakeUpInterval;
	BOOL advanceWakeUpIntervalIsValid;
	SCD_Struct_AV5 wakeUpImageTime;
	BOOL immediateWakeUp;
	long long clientStateOnRequestedMediaDataChangeNotification;
	BOOL suppressesPlayerRendering;
	BOOL shouldTagBuffersWithInfo;
	AVVideoOutputSettings* videoSettings;

}
@end

