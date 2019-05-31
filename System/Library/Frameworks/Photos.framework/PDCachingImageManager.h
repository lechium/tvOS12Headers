/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PDImageManager.h>
#import <libobjc.A.dylib/PHImageCacheDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, PHImageCache, NSObject, NSString;

@interface PDCachingImageManager : PDImageManager <PHImageCacheDelegate> {

	NSMutableSet* _cachingRequestIDs;
	os_unfair_lock_s _cachingLock;
	PHImageCache* _imageCache;
	NSObject*<OS_dispatch_queue> _serialQueue;
	BOOL _allowsCachingHighQualityImages;

}

@property (assign,nonatomic) BOOL allowsCachingHighQualityImages;              //@synthesize allowsCachingHighQualityImages=_allowsCachingHighQualityImages - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)imageCache:(id)arg1 didEvictCacheEntry:(id)arg2 ;
-(void)setAllowsCachingHighQualityImages:(BOOL)arg1 ;
-(BOOL)allowsCachingHighQualityImages;
-(id)_tableFormats;
-(id)_cacheFailReasonFromInfo:(id)arg1 ;
-(void)handleImageResult:(id)arg1 forRequest:(id)arg2 options:(id)arg3 info:(id)arg4 error:(id)arg5 resultHandler:(/*^block*/id)arg6 ;
-(id)_imageTableForPreheatingTargetSize:(CGSize)arg1 ;
-(void)_preheatImageTable:(id)arg1 forAssets:(id)arg2 ;
-(id)_imageTableForPreheatingDegradedOpportunisticRequests;
-(void)mediaRequestContext:(id)arg1 isQueryingCacheForRequest:(id)arg2 didWait:(BOOL*)arg3 didFindImage:(BOOL*)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)startCachingImagesForAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 ;
-(void)stopCachingImagesForAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 ;
-(void)stopCachingImagesForAllAssets;
-(id)init;
@end

