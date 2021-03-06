/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLRequest, NSURLSessionDataTask, NSURLSession;

@interface RUIHTTPRequest : NSObject {

	NSURLRequest* _request;
	NSURLSessionDataTask* _dataTask;
	NSURLSession* _urlSession;
	id _delegate;

}

@property (assign,nonatomic,__weak) id delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)errorWithCode:(unsigned long long)arg1 ;
+(id)invalidResponseErrorWithResponse:(id)arg1 ;
+(id)serviceUnavailableError;
+(id)nonSecureConnectionNotAllowedError;
+(BOOL)anyRequestLoading;
+(id)safeBaseURL;
-(void)_finishedLoading;
-(void)failWithError:(id)arg1 ;
-(BOOL)receivedValidResponse:(id)arg1 ;
-(void)loadStatusChanged;
-(void)_preLoadCancel;
-(id)urlSessionDelegate;
-(void)willParseData;
-(void)_startedLoading;
-(void)shouldLoadRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_loadRequestMain:(id)arg1 ;
-(id)handleWillLoadRequest:(id)arg1 ;
-(id)sessionConfiguration;
-(void)parseData:(id)arg1 ;
-(void)didParseData;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)cancel;
-(id)request;
-(void)loadRequest:(id)arg1 ;
-(BOOL)isLoading;
@end

