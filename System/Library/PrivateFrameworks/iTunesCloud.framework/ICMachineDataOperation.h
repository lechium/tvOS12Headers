/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:17 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICAsyncOperation.h>

@class NSData, ICStoreRequestContext;

@interface ICMachineDataOperation : ICAsyncOperation {

	NSData* _data;
	ICStoreRequestContext* _requestContext;
	long long _protocolVersion;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) NSData * data;                                       //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) ICStoreRequestContext * requestContext;              //@synthesize requestContext=_requestContext - In the implementation block
@property (assign,nonatomic) long long protocolVersion;                           //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,copy) id completionHandler;                                  //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)setProtocolVersion:(long long)arg1 ;
-(long long)protocolVersion;
-(void)setRequestContext:(ICStoreRequestContext *)arg1 ;
-(ICStoreRequestContext *)requestContext;
-(id)completionHandler;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
@end
