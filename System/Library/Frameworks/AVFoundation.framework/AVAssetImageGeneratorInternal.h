/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, AVAsset, NSString, NSMutableArray, NSObject, AVVideoComposition, AVCustomVideoCompositorSession;

@interface AVAssetImageGeneratorInternal : NSObject {

	AVWeakReference* weakReference;
	OpaqueFigAssetImageGeneratorRef generator;
	AVAsset* asset;
	BOOL appliesPreferredTrackTransform;
	CGSize maximumSize;
	NSString* apertureMode;
	SCD_Struct_AV5 requestedTimeToleranceBefore;
	SCD_Struct_AV5 requestedTimeToleranceAfter;
	NSMutableArray* requests;
	NSObject*<OS_dispatch_queue> requestsQueue;
	int nextRequestID;
	AVVideoComposition* videoComposition;
	AVCustomVideoCompositorSession* customVideoCompositorSession;
	NSObject*<OS_dispatch_queue> imageRequestQueue;
	int cancelledRequestIDThreshold;

}
@end

