/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOStateCapturing.h>
#import <libobjc.A.dylib/GEODataSessionTask.h>
#import <libobjc.A.dylib/GEODataSessionUpdatableTask.h>

@protocol GEODataSessionTaskDelegate, OS_dispatch_queue, OS_os_activity, OS_voucher, NSObject;
@class NSError, GEODataRequest, NSObject, NSURLSessionDataTask, NSData, NSMutableData, NSURLSessionTaskMetrics, NSString, NSURL, NSHTTPURLResponse, NSURLRequest, GEOClientMetrics;

@interface GEODataURLSessionTask : NSObject <GEOStateCapturing, GEODataSessionTask, GEODataSessionUpdatableTask> {

	id<GEODataSessionTaskDelegate> _delegate;
	GEODataRequest* _request;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _sessionIsolation;
	NSURLSessionDataTask* _backingTask;
	NSError* _nonBackingTaskError;
	NSData* _cachedData;
	NSMutableData* _receivedData;
	NSURLSessionTaskMetrics* _urlTaskMetrics;
	double _startTime;
	double _endTime;
	int _requestKind;
	unsigned _taskIdentifier;
	unsigned long long _stateCaptureHandle;
	float _priority;
	unsigned _sessionIdentifier;
	BOOL _backingTaskNeedsResume;
	BOOL _finished;
	unsigned _qos;
	NSObject*<OS_os_activity> _activity;
	NSObject*<OS_voucher> _voucher;
	id<NSObject> _parsedResponse;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) double elapsedTime; 
@property (nonatomic,readonly) NSString * entityTag; 
@property (nonatomic,readonly) NSString * contentLengthString; 
@property (nonatomic,readonly) unsigned long long contentLength; 
@property (nonatomic,readonly) BOOL failedDueToCancel; 
@property (nonatomic,readonly) long long HTTPStatusCode; 
@property (nonatomic,readonly) NSURL * originalRequestURL; 
@property (readonly) NSObject*<OS_os_activity> activity;                                      //@synthesize activity=_activity - In the implementation block
@property (nonatomic,__weak,readonly) id<GEODataSessionTaskDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                    //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,copy) NSData * cachedData;                                               //@synthesize cachedData=_cachedData - In the implementation block
@property (nonatomic,readonly) GEODataRequest * request;                                      //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) double startTime;                                              //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) BOOL finished;                                                 //@synthesize finished=_finished - In the implementation block
@property (nonatomic,readonly) NSURLSessionDataTask * backingTask;                            //@synthesize backingTask=_backingTask - In the implementation block
@property (assign,nonatomic) unsigned sessionIdentifier;                                      //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * receivedData; 
@property (nonatomic,readonly) NSHTTPURLResponse * response; 
@property (nonatomic,retain) NSError * error; 
@property (nonatomic,readonly) NSURLRequest * originalURLRequest; 
@property (nonatomic,readonly) int requestKind;                                               //@synthesize requestKind=_requestKind - In the implementation block
@property (assign) float priority; 
@property (nonatomic,readonly) BOOL protocolBufferHasPreamble; 
@property (nonatomic,readonly) unsigned taskIdentifier;                                       //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (nonatomic,readonly) NSURLSessionTaskMetrics * urlTaskMetrics;                      //@synthesize urlTaskMetrics=_urlTaskMetrics - In the implementation block
@property (nonatomic,readonly) NSString * remoteAddressAndPort; 
@property (nonatomic,readonly) unsigned long long outgoingPayloadSize; 
@property (nonatomic,readonly) unsigned long long incomingPayloadSize; 
@property (readonly) BOOL failedDueToCancel; 
@property (nonatomic,readonly) id<GEORequestCounterTicket> requestCounterTicket; 
@property (nonatomic,readonly) GEOClientMetrics * clientMetrics; 
@property (nonatomic,readonly) id<NSObject> parsedResponse; 
-(NSData *)cachedData;
-(BOOL)finished;
-(unsigned long long)contentLength;
-(GEOClientMetrics *)clientMetrics;
-(unsigned long long)outgoingPayloadSize;
-(BOOL)validateTileResponseWithError:(id*)arg1 ;
-(BOOL)validateNonEmptyResponseWithError:(id*)arg1 ;
-(NSData *)receivedData;
-(NSURL *)originalRequestURL;
-(BOOL)validateContentLengthWithError:(id*)arg1 ;
-(id<GEORequestCounterTicket>)requestCounterTicket;
-(unsigned)taskIdentifier;
-(int)requestKind;
-(id<NSObject>)parsedResponse;
-(BOOL)protocolBufferHasPreamble;
-(unsigned long long)incomingPayloadSize;
-(NSString *)remoteAddressAndPort;
-(BOOL)failedDueToCancel;
-(NSURLSessionTaskMetrics *)urlTaskMetrics;
-(BOOL)didValidateEntityTagForData:(id*)arg1 entityTag:(id*)arg2 ;
-(long long)HTTPStatusCode;
-(NSString *)entityTag;
-(void)setCachedData:(NSData *)arg1 ;
-(id)captureStateWithHints:(os_state_hints_s*)arg1 ;
-(id)initWithSession:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 requestKind:(int)arg4 priority:(float)arg5 ;
-(id)createURLSessionTaskWithSession:(id)arg1 request:(id)arg2 ;
-(void)setSessionIdentifier:(unsigned)arg1 ;
-(void)dataSession:(id)arg1 willSendRequestForEstablishedConnection:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)didReceiveResponse:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)didReceiveData:(id)arg1 ;
-(void)dataSession:(id)arg1 taskDidCompleteWithError:(id)arg2 ;
-(void)didCollectMetrics:(id)arg1 ;
-(void)setParsedResponse:(id<NSObject>)arg1 ;
-(void)_prepareForRestart;
-(NSURLRequest *)originalURLRequest;
-(void)notifyDelegateWithSession:(id)arg1 ;
-(NSURLSessionDataTask *)backingTask;
-(id)createURLRequest;
-(void)updateRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)contentLengthString;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id<GEODataSessionTaskDelegate>)delegate;
-(void)setPriority:(float)arg1 ;
-(float)priority;
-(double)startTime;
-(void)cancel;
-(void)start;
-(double)elapsedTime;
-(void)_start;
-(GEODataRequest *)request;
-(unsigned)sessionIdentifier;
-(NSHTTPURLResponse *)response;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSObject*<OS_os_activity>)activity;
@end

