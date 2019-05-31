/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:39 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSObject, NSMutableArray;

@interface AVSampleBufferRenderSynchronizerInternal : NSObject {

	AVWeakReference* weakObserver;
	OpaqueCMTimebaseRef readOnlyTimebase;
	NSObject*<OS_dispatch_queue> rateQueue;
	float rate;
	SCD_Struct_AV5 mostRecentlySetTime;
	NSObject*<OS_dispatch_queue> rendererListQueue;
	NSMutableArray* renderers;
	NSMutableArray* timedRenderRemovals;
	NSObject*<OS_dispatch_queue> figSynchronizerAccessQueue;
	OpaqueFigSampleBufferRenderSynchronizerRef figSynchronizer;

}
@end
