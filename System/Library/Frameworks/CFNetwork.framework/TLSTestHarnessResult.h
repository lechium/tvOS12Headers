/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSURLSessionTask, NSHTTPURLResponse, NSMutableData, NSError, NSObject;

@interface TLSTestHarnessResult : NSObject {

	NSURLSessionTask* _task;
	NSHTTPURLResponse* _response;
	NSMutableData* _data;
	NSError* _error;
	NSObject*<OS_dispatch_semaphore> _sema;

}

@property (retain) NSURLSessionTask * task;                            //@synthesize task=_task - In the implementation block
@property (retain) NSHTTPURLResponse * response;                       //@synthesize response=_response - In the implementation block
@property (retain) NSMutableData * data;                               //@synthesize data=_data - In the implementation block
@property (retain) NSError * error;                                    //@synthesize error=_error - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> sema;              //@synthesize sema=_sema - In the implementation block
-(void)appendResponseData:(id)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)sema;
-(void)setSema:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setResponse:(NSHTTPURLResponse *)arg1 ;
-(void)setTask:(NSURLSessionTask *)arg1 ;
-(void)dealloc;
-(NSMutableData *)data;
-(NSHTTPURLResponse *)response;
-(void)setData:(NSMutableData *)arg1 ;
-(NSURLSessionTask *)task;
-(id)initWithTask:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

