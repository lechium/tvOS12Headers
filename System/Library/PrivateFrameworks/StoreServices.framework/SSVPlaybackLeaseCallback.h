/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSVPlaybackLeaseResponse, NSError;

@interface SSVPlaybackLeaseCallback : NSObject {

	/*^block*/id _block;
	SSVPlaybackLeaseResponse* _response;
	NSError* _error;

}

@property (nonatomic,copy) id block;                                           //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) SSVPlaybackLeaseResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSError * error;                                  //@synthesize error=_error - In the implementation block
-(void)setResponse:(SSVPlaybackLeaseResponse *)arg1 ;
-(id)block;
-(SSVPlaybackLeaseResponse *)response;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setBlock:(id)arg1 ;
@end
