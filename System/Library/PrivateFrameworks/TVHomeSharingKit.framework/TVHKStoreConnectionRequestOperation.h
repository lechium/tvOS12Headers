/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingServices/TVHSAsynchronousOperation.h>

@class SSURLConnectionResponse, NSError, SSURLConnectionRequest;

@interface TVHKStoreConnectionRequestOperation : TVHSAsynchronousOperation {

	SSURLConnectionResponse* _response;
	NSError* _error;
	SSURLConnectionRequest* _request;

}

@property (nonatomic,retain) SSURLConnectionRequest * request;                //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) SSURLConnectionResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSError * error;                                 //@synthesize error=_error - In the implementation block
-(void)setRequest:(SSURLConnectionRequest *)arg1 ;
-(void)setResponse:(SSURLConnectionResponse *)arg1 ;
-(void)executionDidBegin;
-(id)init;
-(void)cancel;
-(SSURLConnectionRequest *)request;
-(id)initWithRequest:(id)arg1 ;
-(SSURLConnectionResponse *)response;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

