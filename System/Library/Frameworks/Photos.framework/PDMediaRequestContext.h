/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:26 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PHImageRequestDelegate.h>
#import <libobjc.A.dylib/PHResourceAvailabilityChangeRequestDelegate.h>
#import <libobjc.A.dylib/PHVideoRequestDelegate.h>
#import <libobjc.A.dylib/PHAdjustmentDataRequestDelegate.h>
#import <libobjc.A.dylib/PHVideoChoosingAndAvailabilityRequestDelegate.h>
#import <libobjc.A.dylib/PHRecyclableObject.h>

@protocol PHMediaRequestContextDelegate;
@class PHMediaRequest, NSMutableArray, NSMutableDictionary, PDVideoRequest, PHImageResult, NSError, NSDictionary, NSArray, NSProgress, PHAsset, PHImageDisplaySpec, PHImageRequestOptions, PHVideoRequestOptions, PHLivePhotoRequestOptions, NSString;

@interface PDMediaRequestContext : NSObject <PHImageRequestDelegate, PHResourceAvailabilityChangeRequestDelegate, PHVideoRequestDelegate, PHAdjustmentDataRequestDelegate, PHVideoChoosingAndAvailabilityRequestDelegate, PHRecyclableObject> {

	unsigned long long _nextID;
	os_unfair_lock_s _lock;
	PHMediaRequest* _initialRequest;
	NSMutableArray* _requests;
	NSMutableArray* _jobs;
	NSMutableDictionary* _requestedResourcesByTaskIdentifier;
	/*^block*/id _resultHandler;
	BOOL _isCancelled;
	PDVideoRequest* _outboundVideoRequest;
	BOOL _finalImageReceived;
	BOOL _finalVideoReceived;
	PHImageResult* _result;
	NSError* _error;
	NSDictionary* _info;
	NSMutableDictionary* _progressByTaskIdentifier;
	NSArray* _allProgresses;
	NSProgress* _totalProgress;
	int _requestID;
	id<PHMediaRequestContextDelegate> _delegate;
	long long _type;
	unsigned long long _managerID;
	PHAsset* _asset;
	PHImageDisplaySpec* _displaySpec;
	PHImageRequestOptions* _imageOptions;
	PHVideoRequestOptions* _videoOptions;
	PHLivePhotoRequestOptions* _livePhotoOptions;

}

@property (assign,nonatomic) long long type;                                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) PHImageRequestOptions * imageOptions;                           //@synthesize imageOptions=_imageOptions - In the implementation block
@property (nonatomic,retain) PHVideoRequestOptions * videoOptions;                           //@synthesize videoOptions=_videoOptions - In the implementation block
@property (nonatomic,retain) PHLivePhotoRequestOptions * livePhotoOptions;                   //@synthesize livePhotoOptions=_livePhotoOptions - In the implementation block
@property (assign,nonatomic,__weak) id<PHMediaRequestContextDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int requestID;                                                //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,readonly) unsigned long long managerID;                                 //@synthesize managerID=_managerID - In the implementation block
@property (nonatomic,readonly) PHAsset * asset;                                              //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) PHImageDisplaySpec * displaySpec;                             //@synthesize displaySpec=_displaySpec - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)imageRequestContextWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 imageRequestOptions:(id)arg4 displaySpec:(id)arg5 resultHandler:(/*^block*/id)arg6 ;
+(id)videoRequestContextWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 videoRequestOptions:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
+(id)livePhotoRequestContextWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 livePhotoRequestOptions:(id)arg4 displaySpec:(id)arg5 resultHandler:(/*^block*/id)arg6 ;
+(void)initialize;
-(/*^block*/id)_progressHandler;
-(unsigned long long)managerID;
-(void)videoChoosingAndAvailabilityRequest:(id)arg1 didFinishWithVideoURL:(id)arg2 info:(id)arg3 error:(id)arg4 ;
-(void)videoChoosingAndAvailabilityRequest:(id)arg1 didReportProgress:(double)arg2 completed:(BOOL)arg3 error:(id)arg4 ;
-(void)adjustmentDataRequest:(id)arg1 didFinishWithResultInfo:(id)arg2 error:(id)arg3 ;
-(void)adjustmentDataRequest:(id)arg1 didReportProgress:(double)arg2 completed:(BOOL)arg3 error:(id)arg4 ;
-(PHImageDisplaySpec *)displaySpec;
-(void)resourceAvailabilityChangeRequest:(id)arg1 didReportProgress:(double)arg2 completed:(BOOL)arg3 error:(id)arg4 ;
-(void)resourceAvailabilityChangeRequest:(id)arg1 didFinishWithSuccess:(BOOL)arg2 url:(id)arg3 data:(id)arg4 info:(id)arg5 error:(id)arg6 ;
-(void)imageRequest:(id)arg1 didProcessHintsWithLocallyAvailable:(BOOL)arg2 isDegraded:(BOOL)arg3 ;
-(void)imageRequest:(id)arg1 isRequestingScheduledWorkBlock:(/*^block*/id)arg2 ;
-(BOOL)imageRequestIsInitialRequestOfMultistageRequest:(id)arg1 ;
-(void)mediaRequest:(id)arg1 isRequestingLocalAvailabilityChangeForResource:(id)arg2 ;
-(void)imageRequest:(id)arg1 isQueryingCacheAndDidWait:(BOOL*)arg2 didFindImage:(BOOL*)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)imageRequest:(id)arg1 didFinishLoadingImageResult:(id)arg2 info:(id)arg3 error:(id)arg4 ;
-(id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 displaySpec:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)setImageOptions:(PHImageRequestOptions *)arg1 ;
-(void)setVideoOptions:(PHVideoRequestOptions *)arg1 ;
-(void)setLivePhotoOptions:(PHLivePhotoRequestOptions *)arg1 ;
-(void)_startRequest:(id)arg1 ;
-(BOOL)_isNetworkAccessAllowed;
-(long long)_imageVersion;
-(long long)_imageDeliveryMode;
-(void)_setupProgressIfNeeded;
-(void)_availabilityRequest:(id)arg1 didReportProgress:(double)arg2 completed:(BOOL)arg3 error:(id)arg4 ;
-(id)_requestWithIdentifier:(id)arg1 ;
-(void)_makeAvailabilityRequest:(id)arg1 forResource:(id)arg2 mediaRequest:(id)arg3 ;
-(void)_spawnNewImageRequestWithBehaviorSpec:(id)arg1 ;
-(BOOL)_isSynchronous;
-(id)_initialImageRequest;
-(id)_initialVideoRequest;
-(id)_adjustmentRequest;
-(void)videoRequest:(id)arg1 isRequestingVideoChoosingForSize:(CGSize)arg2 ;
-(void)videoRequest:(id)arg1 didFinishLoadingVideoURL:(id)arg2 info:(id)arg3 error:(id)arg4 ;
-(void)resourceAvailabilityChangeRequest:(id)arg1 didLoadData:(id)arg2 ;
-(void)recycleRequests;
-(PHImageRequestOptions *)imageOptions;
-(PHVideoRequestOptions *)videoOptions;
-(PHLivePhotoRequestOptions *)livePhotoOptions;
-(int)requestID;
-(void)setDelegate:(id<PHMediaRequestContextDelegate>)arg1 ;
-(id<PHMediaRequestContextDelegate>)delegate;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)prepareForReuse;
-(void)cancel;
-(void)start;
-(PHAsset *)asset;
@end

