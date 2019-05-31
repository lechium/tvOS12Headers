/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>

@protocol OS_dispatch_source;
@class PHImageManagerSettings, PDImageManager, NSObject, NSString;

@interface PHImageManager : NSObject <PHPhotoLibraryChangeObserver> {

	id _cachedDomain;
	PHImageManagerSettings* _settings;
	PDImageManager* _newImageManager;
	NSObject*<OS_dispatch_source> _memoryEventSource;
	unsigned long long _managerID;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> memoryEventSource;              //@synthesize memoryEventSource=_memoryEventSource - In the implementation block
@property (nonatomic,readonly) unsigned long long managerID;                               //@synthesize managerID=_managerID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)useNewImageManager;
+(CGSize)fullScreenSizeForScreen:(id)arg1 contentMode:(long long*)arg2 ;
+(CGSize)sizeOfBestNonFullscreenThumbnailAndContentMode:(long long*)arg1 ;
+(BOOL)_allowVideoAccessForAsset:(id)arg1 options:(id)arg2 ;
+(CGSize)maximumImageSizeFromProperties:(id)arg1 ;
+(void)initialize;
+(id)defaultManager;
-(id)_domain;
-(void)unregisterRequest:(id)arg1 ;
-(unsigned long long)managerID;
-(id)requestAsynchronousImageForAsset:(id)arg1 chainedToMasterRequest:(id)arg2 targetSize:(CGSize)arg3 contentMode:(long long)arg4 options:(id)arg5 resultHandler:(/*^block*/id)arg6 ;
-(id)requestAsynchronousVideoURLForAsset:(id)arg1 chainedToMasterRequest:(id)arg2 options:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(id)_asyncFetchCloudSharedVideoForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(id)_requestAsynchronousVideoURLForAsset:(id)arg1 chainedToMasterRequest:(id)arg2 options:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(id)_videoAVObjectBuilderFromVideoURL:(id)arg1 info:(id)arg2 playbackOnly:(BOOL)arg3 ;
-(void)unloadImageFilesForAsset:(id)arg1 minimumFormat:(int)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setMemoryEventSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)requestSynchronousImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)localOptionsFromOptions:(id)arg1 ;
-(id)_modernImageManager;
-(CGImageRef)newResizedImageForImage:(CGImageRef)arg1 withSize:(CGSize)arg2 normalizedCropRect:(CGRect)arg3 contentMode:(long long)arg4 ;
-(NSObject*<OS_dispatch_source>)memoryEventSource;
-(void)requestSynchronousImageForImageLoadingAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)requestAsynchronousImageForImageLoadingAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(id)requestAsynchronousVideoURLForImageLoadingAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(int)_requestImagePropertiesFromFileForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(int)requestImagePropertiesForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)cancelImageRequest:(int)arg1 ;
-(int)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)photoLibraryDidChange:(id)arg1 ;
-(id)imageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 outInfo:(id*)arg5 ;
-(int)requestImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(int)requestLivePhotoForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(int)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(int)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(id)requestAsynchronousVideoURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(int)_requestAVAssetForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(id)requestAsynchronousImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(int)requestAVAssetForVideo:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(int)requestExportSessionForVideo:(id)arg1 options:(id)arg2 exportPreset:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)registerRequest:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)hash;
-(NSString *)description;
@end

