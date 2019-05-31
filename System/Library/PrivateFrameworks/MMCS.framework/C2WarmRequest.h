/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:39 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/C2RequestDelegate.h>

@class NSMutableURLRequest, C2RequestOptions, NSURLSessionTask, NSString;

@interface C2WarmRequest : NSObject <C2RequestDelegate> {

	/*^block*/id _callback;
	NSMutableURLRequest* _warmRequest;
	C2RequestOptions* _warmOptions;
	NSURLSessionTask* _warmTask;

}

@property (nonatomic,copy) id callback;                                      //@synthesize callback=_callback - In the implementation block
@property (nonatomic,retain) NSMutableURLRequest * warmRequest;              //@synthesize warmRequest=_warmRequest - In the implementation block
@property (nonatomic,retain) C2RequestOptions * warmOptions;                 //@synthesize warmOptions=_warmOptions - In the implementation block
@property (nonatomic,retain) NSURLSessionTask * warmTask;                    //@synthesize warmTask=_warmTask - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCallback:(id)arg1 ;
-(id)callback;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithData:(id)arg1 callback:(/*^block*/id)arg2 ;
-(NSMutableURLRequest *)warmRequest;
-(void)setWarmRequest:(NSMutableURLRequest *)arg1 ;
-(C2RequestOptions *)warmOptions;
-(void)setWarmOptions:(C2RequestOptions *)arg1 ;
-(NSURLSessionTask *)warmTask;
-(void)setWarmTask:(NSURLSessionTask *)arg1 ;
-(void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(BOOL)arg3 ;
-(void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3 ;
-(void)send;
@end

