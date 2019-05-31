/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>
#import <libobjc.A.dylib/MPCPlayerQueueRequestOperation.h>

@class MPCPlayerQueueRequest, NSString;

@interface MPCMediaPlayerLegacyQueueRequestOperation : MPAsyncOperation <MPCPlayerQueueRequestOperation> {

	MPCPlayerQueueRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) MPCPlayerQueueRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                           //@synthesize responseHandler=_responseHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRequest:(MPCPlayerQueueRequest *)arg1 ;
-(void)execute;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(MPCPlayerQueueRequest *)request;
@end

