/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@class WebCoreNSURLSession, NSURLRequest, NSError, NSString, NSURLResponse;

@interface WebCoreNSURLSessionDataTask : NSObject {

	WebCoreNSURLSession* _session;
	RefPtr<WebCore::PlatformMediaResource, WTF::DumbPtrTraits<WebCore::PlatformMediaResource> >* _resource;
	RetainPtr<NSURLResponse>* _response;
	unsigned long long _taskIdentifier;
	NSURLRequest* _originalRequest;
	NSURLRequest* _currentRequest;
	long long _countOfBytesReceived;
	long long _countOfBytesSent;
	long long _countOfBytesExpectedToSend;
	long long _countOfBytesExpectedToReceive;
	long long _state;
	NSError* _error;
	NSString* _taskDescription;
	float _priority;

}

@property (assign) WebCoreNSURLSession * session;                        //@synthesize session=_session - In the implementation block
@property (assign) unsigned long long taskIdentifier;                    //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (copy) NSURLRequest * originalRequest;                         //@synthesize originalRequest=_originalRequest - In the implementation block
@property (copy) NSURLRequest * currentRequest;                          //@synthesize currentRequest=_currentRequest - In the implementation block
@property (copy,readonly) NSURLResponse * response; 
@property (assign) long long countOfBytesReceived;                       //@synthesize countOfBytesReceived=_countOfBytesReceived - In the implementation block
@property (assign) long long countOfBytesSent;                           //@synthesize countOfBytesSent=_countOfBytesSent - In the implementation block
@property (assign) long long countOfBytesExpectedToSend;                 //@synthesize countOfBytesExpectedToSend=_countOfBytesExpectedToSend - In the implementation block
@property (assign) long long countOfBytesExpectedToReceive;              //@synthesize countOfBytesExpectedToReceive=_countOfBytesExpectedToReceive - In the implementation block
@property (assign) long long state;                                      //@synthesize state=_state - In the implementation block
@property (copy) NSError * error;                                        //@synthesize error=_error - In the implementation block
@property (copy) NSString * taskDescription;                             //@synthesize taskDescription=_taskDescription - In the implementation block
@property (assign) float priority;                                       //@synthesize priority=_priority - In the implementation block
-(void)setCountOfBytesExpectedToReceive:(long long)arg1 ;
-(void)setCountOfBytesReceived:(long long)arg1 ;
-(void)setOriginalRequest:(NSURLRequest *)arg1 ;
-(void)setSession:(WebCoreNSURLSession *)arg1 ;
-(unsigned long long)taskIdentifier;
-(WebCoreNSURLSession *)session;
-(NSURLRequest *)originalRequest;
-(NSURLRequest *)currentRequest;
-(long long)countOfBytesReceived;
-(long long)countOfBytesSent;
-(long long)countOfBytesExpectedToSend;
-(long long)countOfBytesExpectedToReceive;
-(NSString *)taskDescription;
-(void)setTaskDescription:(NSString *)arg1 ;
-(void)setCurrentRequest:(NSURLRequest *)arg1 ;
-(id)initWithSession:(id)arg1 identifier:(unsigned long long)arg2 request:(id)arg3 ;
-(id)initWithSession:(id)arg1 identifier:(unsigned long long)arg2 URL:(id)arg3 ;
-(void)resource:(PlatformMediaResource*)arg1 sentBytes:(unsigned long long)arg2 totalBytesToBeSent:(unsigned long long)arg3 ;
-(void)resource:(PlatformMediaResource*)arg1 receivedResponse:(const ResourceResponse*)arg2 ;
-(BOOL)resource:(PlatformMediaResource*)arg1 shouldCacheResponse:(const ResourceResponse*)arg2 ;
-(void)resource:(PlatformMediaResource*)arg1 receivedData:(const char*)arg2 length:(int)arg3 ;
-(void)resource:(PlatformMediaResource*)arg1 receivedRedirect:(const ResourceResponse*)arg2 request:(ResourceRequest*)arg3 completionHandler:(CompletionHandler<void (WebCore::ResourceRequest &&)>*)arg4 ;
-(void)resource:(PlatformMediaResource*)arg1 accessControlCheckFailedWithError:(const ResourceError*)arg2 ;
-(void)resource:(PlatformMediaResource*)arg1 loadFailedWithError:(const ResourceError*)arg2 ;
-(void)resourceFinished:(PlatformMediaResource*)arg1 ;
-(void)_resource:(PlatformMediaResource*)arg1 loadFinishedWithError:(id)arg2 ;
-(void)setCountOfBytesExpectedToSend:(long long)arg1 ;
-(void)setCountOfBytesSent:(long long)arg1 ;
-(void)setTaskIdentifier:(unsigned long long)arg1 ;
-(void)_setDefersLoading:(BOOL)arg1 ;
-(id)_timingData;
-(void)_restart;
-(void)dealloc;
-(long long)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPriority:(float)arg1 ;
-(float)priority;
-(void)setState:(long long)arg1 ;
-(void)cancel;
-(void)_cancel;
-(NSURLResponse *)response;
-(void)resume;
-(void)suspend;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)_finish;
@end

