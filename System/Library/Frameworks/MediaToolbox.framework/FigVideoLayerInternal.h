/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MediaToolbox/MediaToolbox-Structs.h>
@class NSObject;

@interface FigVideoLayerInternal : NSObject {

	BOOL isPresentationLayer;
	BOOL visible;
	OpaqueFigSimpleMutexRef serializationMutex;
	NSObject*<OS_dispatch_queue> notificationSerialQueue;

}
@end

