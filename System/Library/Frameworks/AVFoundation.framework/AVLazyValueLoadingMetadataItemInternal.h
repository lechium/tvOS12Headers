/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObjectNSCopying, OS_dispatch_queue;
@class NSString, AVMetadataItemValueRequest, NSError, NSMutableArray, NSObject;

@interface AVLazyValueLoadingMetadataItemInternal : NSObject {

	id<NSObject><NSCopying> value;
	NSString* dataType;
	AVMetadataItemValueRequest* valueRequest;
	/*^block*/id valueLoadingHandler;
	long long valueStatus;
	NSError* valueLoadingError;
	NSMutableArray* loadingCompletionHandlers;
	NSObject*<OS_dispatch_queue> readWriteQueue;

}
@end

