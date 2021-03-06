/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:10 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface ISFrameCurator : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	Ai _nextRequestID;
	NSMutableDictionary* _requestsByID;
	NSObject*<OS_dispatch_queue> _requestsByIDQueue;

}
+(id)defaultCurator;
-(int)_nextRequestID;
-(id)_removeRequestWithID:(int)arg1 ;
-(void)_storeRequest:(id)arg1 withID:(int)arg2 ;
-(int)requestBestFramesInVideo:(id)arg1 trackID:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)cancelRequestWithID:(int)arg1 ;
-(id)init;
@end

