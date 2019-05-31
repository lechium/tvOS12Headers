/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>

@interface SSVDownloadQueueRequest : SSRequest {

	long long _queueType;

}

@property (nonatomic,readonly) long long queueType;              //@synthesize queueType=_queueType - In the implementation block
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithQueueType:(long long)arg1 ;
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
-(long long)queueType;
@end
