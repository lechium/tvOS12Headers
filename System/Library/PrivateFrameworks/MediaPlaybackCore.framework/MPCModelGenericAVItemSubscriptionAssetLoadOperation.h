/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, MPCModelGenericAVItemAssetLoadProperties, ICStoreRequestContext, ICMusicSubscriptionLeaseSession;

@interface MPCModelGenericAVItemSubscriptionAssetLoadOperation : MPAsyncOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	/*^block*/id _cancellationHandler;
	MPCModelGenericAVItemAssetLoadProperties* _assetLoadProperties;
	long long _operationType;
	ICStoreRequestContext* _requestContext;
	/*^block*/id _responseHandler;
	ICMusicSubscriptionLeaseSession* _subscriptionLeaseSession;

}

@property (nonatomic,retain) MPCModelGenericAVItemAssetLoadProperties * assetLoadProperties;              //@synthesize assetLoadProperties=_assetLoadProperties - In the implementation block
@property (assign,nonatomic) long long operationType;                                                     //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,copy) ICStoreRequestContext * requestContext;                                        //@synthesize requestContext=_requestContext - In the implementation block
@property (nonatomic,copy) id responseHandler;                                                            //@synthesize responseHandler=_responseHandler - In the implementation block
@property (nonatomic,retain) ICMusicSubscriptionLeaseSession * subscriptionLeaseSession;                  //@synthesize subscriptionLeaseSession=_subscriptionLeaseSession - In the implementation block
-(void)execute;
-(void)setRequestContext:(ICStoreRequestContext *)arg1 ;
-(void)setAssetLoadProperties:(MPCModelGenericAVItemAssetLoadProperties *)arg1 ;
-(void)setSubscriptionLeaseSession:(ICMusicSubscriptionLeaseSession *)arg1 ;
-(ICStoreRequestContext *)requestContext;
-(MPCModelGenericAVItemAssetLoadProperties *)assetLoadProperties;
-(ICMusicSubscriptionLeaseSession *)subscriptionLeaseSession;
-(id)_handlePlaybackResponse:(id)arg1 withPlaybackCacheRequest:(id)arg2 error:(id*)arg3 ;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(long long)operationType;
-(void)setOperationType:(long long)arg1 ;
-(id)init;
-(void)cancel;
-(void)setCancellationHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)cancellationHandler;
@end

