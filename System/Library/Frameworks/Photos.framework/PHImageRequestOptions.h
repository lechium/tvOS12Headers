/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface PHImageRequestOptions : NSObject <NSCopying> {

	BOOL _networkAccessAllowed;
	BOOL _synchronous;
	BOOL _memoryCachingAllowed;
	BOOL _deliveryFirstResultAsynchronously;
	BOOL _allowPlaceholder;
	BOOL _allowSecondaryOpportunisticImage;
	BOOL _routeToNewImageManager;
	int _requestID;
	long long _version;
	long long _deliveryMode;
	long long _resizeMode;
	/*^block*/id _progressHandler;
	long long _loadingMode;
	long long _rank;
	double _demoteFactor;
	double _aspectRatioHint;
	double _downloadUpdateInterval;
	/*^block*/id _cachingCompletedHandler;
	NSObject*<OS_dispatch_queue> _resultHandlerQueue;
	CGRect _normalizedCropRect;

}

@property (assign,nonatomic) int requestID;                                                        //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic) long long loadingMode;                                                //@synthesize loadingMode=_loadingMode - In the implementation block
@property (assign,getter=isMemoryCachingAllowed,nonatomic) BOOL memoryCachingAllowed;              //@synthesize memoryCachingAllowed=_memoryCachingAllowed - In the implementation block
@property (assign,nonatomic) BOOL deliveryFirstResultAsynchronously;                               //@synthesize deliveryFirstResultAsynchronously=_deliveryFirstResultAsynchronously - In the implementation block
@property (assign,nonatomic) BOOL allowPlaceholder;                                                //@synthesize allowPlaceholder=_allowPlaceholder - In the implementation block
@property (assign,nonatomic) BOOL allowSecondaryOpportunisticImage;                                //@synthesize allowSecondaryOpportunisticImage=_allowSecondaryOpportunisticImage - In the implementation block
@property (assign,nonatomic) long long rank;                                                       //@synthesize rank=_rank - In the implementation block
@property (assign,nonatomic) double demoteFactor;                                                  //@synthesize demoteFactor=_demoteFactor - In the implementation block
@property (assign,nonatomic) double aspectRatioHint;                                               //@synthesize aspectRatioHint=_aspectRatioHint - In the implementation block
@property (assign,nonatomic) double downloadUpdateInterval;                                        //@synthesize downloadUpdateInterval=_downloadUpdateInterval - In the implementation block
@property (nonatomic,copy) id cachingCompletedHandler;                                             //@synthesize cachingCompletedHandler=_cachingCompletedHandler - In the implementation block
@property (assign,nonatomic) BOOL routeToNewImageManager;                                          //@synthesize routeToNewImageManager=_routeToNewImageManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> resultHandlerQueue;                      //@synthesize resultHandlerQueue=_resultHandlerQueue - In the implementation block
@property (assign,nonatomic) long long version;                                                    //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) long long deliveryMode;                                               //@synthesize deliveryMode=_deliveryMode - In the implementation block
@property (assign,nonatomic) long long resizeMode;                                                 //@synthesize resizeMode=_resizeMode - In the implementation block
@property (assign,nonatomic) CGRect normalizedCropRect;                                            //@synthesize normalizedCropRect=_normalizedCropRect - In the implementation block
@property (assign,getter=isNetworkAccessAllowed,nonatomic) BOOL networkAccessAllowed;              //@synthesize networkAccessAllowed=_networkAccessAllowed - In the implementation block
@property (assign,getter=isSynchronous,nonatomic) BOOL synchronous;                                //@synthesize synchronous=_synchronous - In the implementation block
@property (nonatomic,copy) id progressHandler;                                                     //@synthesize progressHandler=_progressHandler - In the implementation block
+(id)defaultOptionsAllowingPlaceholder;
-(long long)rank;
-(void)setRank:(long long)arg1 ;
-(int)requestIDOrNextIfInvalid;
-(void)setAllowPlaceholder:(BOOL)arg1 ;
-(long long)loadingMode;
-(long long)resizeMode;
-(CGRect)normalizedCropRect;
-(void)setNormalizedCropRect:(CGRect)arg1 ;
-(BOOL)isMemoryCachingAllowed;
-(void)setMemoryCachingAllowed:(BOOL)arg1 ;
-(BOOL)deliveryFirstResultAsynchronously;
-(void)setDeliveryFirstResultAsynchronously:(BOOL)arg1 ;
-(BOOL)allowPlaceholder;
-(double)demoteFactor;
-(void)setDemoteFactor:(double)arg1 ;
-(double)aspectRatioHint;
-(void)setAspectRatioHint:(double)arg1 ;
-(double)downloadUpdateInterval;
-(void)setDownloadUpdateInterval:(double)arg1 ;
-(id)cachingCompletedHandler;
-(void)setCachingCompletedHandler:(id)arg1 ;
-(BOOL)allowSecondaryOpportunisticImage;
-(BOOL)routeToNewImageManager;
-(void)setRouteToNewImageManager:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)resultHandlerQueue;
-(void)setResultHandlerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setNetworkAccessAllowed:(BOOL)arg1 ;
-(long long)deliveryMode;
-(id)progressHandler;
-(BOOL)isNetworkAccessAllowed;
-(int)requestID;
-(void)setSynchronous:(BOOL)arg1 ;
-(void)setDeliveryMode:(long long)arg1 ;
-(void)setAllowSecondaryOpportunisticImage:(BOOL)arg1 ;
-(void)setResizeMode:(long long)arg1 ;
-(void)setLoadingMode:(long long)arg1 ;
-(BOOL)isSynchronous;
-(void)setRequestID:(int)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(long long)version;
-(void)setProgressHandler:(id)arg1 ;
@end

