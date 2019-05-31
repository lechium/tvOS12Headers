/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:26 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <SpringBoardServices/SpringBoardServices-Structs.h>
@class SBSWallpaperClient, NSObject;

@interface SBSWallpaperService : NSObject {

	SBSWallpaperClient* _client;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	BOOL _wasInvalidated;

}
-(void)fetchThumbnailForVariant:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)setWallpaperWithVideo:(id)arg1 cropRect:(CGRect)arg2 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
@end
