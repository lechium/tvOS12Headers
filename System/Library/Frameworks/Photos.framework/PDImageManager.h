/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:26 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PHMediaRequestContextDelegate.h>

@class NSMapTable, NSString;

@interface PDImageManager : NSObject <PHMediaRequestContextDelegate> {

	NSMapTable* _requestContextsByID;
	Ai _lastUsedRequestID;
	os_unfair_lock_s _lock;
	unsigned long long _managerID;

}

@property (nonatomic,readonly) unsigned long long managerID;              //@synthesize managerID=_managerID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_setupContentEditing;
+(id)_requestResultInfoForImageInfo:(id)arg1 videoInfo:(id)arg2 adjustmentInfo:(id)arg3 renderingError:(id)arg4 ;
+(BOOL)_allowVideoAccessForAsset:(id)arg1 options:(id)arg2 ;
+(unsigned long long)_nextManagerID;
+(unsigned long long)_nextRequestID;
+(id)defaultManager;
-(void)_renderTemporaryVideoForObjectBuilder:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(unsigned long long)managerID;
-(id)_adjustmentRequestOptionsFromFullOptions:(id)arg1 ;
-(id)_videoRequestOptionsForBaseVersion:(long long)arg1 asset:(id)arg2 options:(id)arg3 progressEstimateForVideoProgress:(/*^block*/id)arg4 ;
-(void)_renderVideoFromVideoURL:(id)arg1 asset:(id)arg2 adjustmentData:(id)arg3 canHandleAdjustmentData:(BOOL)arg4 resultHandler:(/*^block*/id)arg5 ;
-(int)requestURLForVideo:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(id)_imageRequestOptionsForAsset:(id)arg1 baseVersion:(long long)arg2 options:(id)arg3 progressEstimateForImageProgress:(/*^block*/id)arg4 ;
-(unsigned long long)requestContentEditingInputForAsset:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_videoAVObjectBuilderFromVideoURL:(id)arg1 info:(id)arg2 playbackOnly:(BOOL)arg3 ;
-(void)handleImageResult:(id)arg1 forRequest:(id)arg2 options:(id)arg3 info:(id)arg4 error:(id)arg5 resultHandler:(/*^block*/id)arg6 ;
-(int)nextID;
-(int)requestImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 requestID:(int)arg5 resultHandler:(/*^block*/id)arg6 ;
-(void)mediaRequestContext:(id)arg1 isQueryingCacheForRequest:(id)arg2 didWait:(BOOL*)arg3 didFindImage:(BOOL*)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)buildAVPlayerItemFromVideoURL:(id)arg1 infoDictionary:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)buildAVAssetFromVideoURL:(id)arg1 infoDictionary:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)mediaRequestContextDidFinish:(id)arg1 ;
-(void)mediaRequestContext:(id)arg1 spawnedNewRequest:(id)arg2 ;
-(int)_runRequestWithContext:(id)arg1 ;
-(id)_infoDictionary:(id)arg1 withError:(id)arg2 ;
-(void)cancelImageRequest:(int)arg1 ;
-(int)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(int)requestImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(int)requestLivePhotoForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(int)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(int)requestAVAssetForVideo:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)cancelContentEditingInputRequest:(unsigned long long)arg1 ;
-(int)requestExportSessionForVideo:(id)arg1 options:(id)arg2 exportPreset:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(id)init;
@end

