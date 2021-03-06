/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSOperationQueue, NSObject, NSMutableDictionary;

@interface PLAssetResourceManager : NSObject {

	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _requestIsolationQueue;
	os_unfair_lock_s _lock;
	NSMutableDictionary* _requestById;
	int _currentRequestId;

}
+(id)defaultManager;
-(void)cancelRequest:(int)arg1 ;
-(int)requestCloudResourceType:(unsigned long long)arg1 assetObjectID:(id)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_setRequest:(id)arg1 forRequestID:(int)arg2 ;
-(id)_requestWithID:(int)arg1 ;
-(id)init;
@end

