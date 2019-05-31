/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelLibraryHasPurchasesRequest;

@interface MPModelLibraryHasPurchasesRequestOperation : MPAsyncOperation {

	MPModelLibraryHasPurchasesRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) MPModelLibraryHasPurchasesRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                                       //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)setRequest:(MPModelLibraryHasPurchasesRequest *)arg1 ;
-(void)execute;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(MPModelLibraryHasPurchasesRequest *)request;
@end

