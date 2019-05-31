/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/SSURLSessionManagerDelegate.h>

@protocol OS_dispatch_queue, SSVLoadURLOperationDelegate;
@class NSNumber, SSBag, NSData, SSURLRequestProperties, NSString, NSURLCache, AKAppleIDSession, NSMutableData, SSVURLDataConsumer, NSObject, SSMetricsPageEvent, NSMutableSet, NSURL, NSHTTPURLResponse, NSRunLoop, SSVFairPlaySAPSession, SSVSAPSignaturePolicy, SSURLBag, SSVURLBagInterpreter, NSURLRequest, NSCachedURLResponse;

@interface SSVLoadURLOperation : NSOperation <SSURLSessionManagerDelegate> {

	AKAppleIDSession* _authKitSession;
	NSMutableData* _dataBuffer;
	SSVURLDataConsumer* _dataConsumer;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSData* _inputData;
	BOOL _iTunesStoreRequest;
	long long _machineDataRetryCount;
	long long _machineDataStyle;
	SSMetricsPageEvent* _metricsPageEvent;
	/*^block*/id _outputBlock;
	/*^block*/id _prepareRequestBlock;
	NSMutableSet* _protocolRedirectURLs;
	BOOL _recordsMetrics;
	NSURL* _redirectURL;
	NSString* _referrerApplicationName;
	NSString* _referrerURLString;
	NSHTTPURLResponse* _response;
	NSRunLoop* _runLoop;
	SSVFairPlaySAPSession* _sapSession;
	SSVSAPSignaturePolicy* _sapSignaturePolicy;
	BOOL _shouldRetry;
	NSString* _storeFrontSuffix;
	BOOL _stopped;
	SSURLBag* _urlBag;
	SSVURLBagInterpreter* _urlBagInterpreter;
	SSURLRequestProperties* _requestProperties;
	NSURLRequest* _urlRequest;
	BOOL _shouldSuppressCookies;
	BOOL _shouldSuppressUserInfo;
	id<SSVLoadURLOperationDelegate> _delegate;
	SSBag* _bag;

}

@property (assign) long long machineDataStyle; 
@property (retain) SSVFairPlaySAPSession * SAPSession; 
@property (copy) SSVSAPSignaturePolicy * SAPSignaturePolicy; 
@property (assign,nonatomic,__weak) id<SSVLoadURLOperationDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSURL * URL; 
@property (readonly) NSURLRequest * URLRequest; 
@property (readonly) NSCachedURLResponse * cachedURLResponse; 
@property (retain) SSVURLDataConsumer * dataConsumer; 
@property (getter=isITunesStoreRequest) BOOL ITunesStoreRequest; 
@property (readonly) SSMetricsPageEvent * metricsPageEvent; 
@property (nonatomic,retain) SSBag * bag;                                                               //@synthesize bag=_bag - In the implementation block
@property (assign) BOOL recordsMetrics; 
@property (copy) NSString * referrerApplicationName; 
@property (copy) NSString * referrerURLString; 
@property (copy) NSString * storeFrontSuffix; 
@property (readonly) NSHTTPURLResponse * URLResponse; 
@property (copy) id expiredOutputBlock; 
@property (copy) id outputBlock; 
@property (copy) id prepareRequestBlock; 
@property (assign) BOOL shouldSuppressCookies;                                                          //@synthesize shouldSuppressCookies=_shouldSuppressCookies - In the implementation block
@property (assign) BOOL shouldSuppressUserInfo;                                                         //@synthesize shouldSuppressUserInfo=_shouldSuppressUserInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSessionDuration; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentage; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentageCachedResponses; 
@property (nonatomic,readonly) BOOL isURLBagRequest; 
@property (nonatomic,readonly) NSData * rawResponseData; 
@property (nonatomic,readonly) SSURLRequestProperties * requestProperties; 
@property (nonatomic,readonly) BOOL shouldDisableCellular; 
@property (nonatomic,readonly) BOOL shouldRequireCellular; 
@property (nonatomic,readonly) BOOL shouldSetCookies; 
@property (nonatomic,readonly) NSData * sourceAppAuditTokenData; 
@property (nonatomic,readonly) NSString * sourceAppBundleID; 
@property (nonatomic,readonly) NSURLCache * URLCache; 
@property (nonatomic,readonly) NSString * URLCacheID; 
+(id)currentAcceptLanguage;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(BOOL)isITunesStoreRequest;
-(SSMetricsPageEvent *)metricsPageEvent;
-(id)_initSSVLoadURLOperation;
-(BOOL)shouldSuppressCookies;
-(BOOL)shouldSuppressUserInfo;
-(BOOL)recordsMetrics;
-(long long)machineDataStyle;
-(id)_newURLRequestWithRedirectURL:(id)arg1 ;
-(void)_stopRunLoop;
-(void)_finishWithData:(id)arg1 ;
-(void)_createAuthKitSession;
-(void)_runOnce;
-(NSNumber *)metricsLoadURLSessionDuration;
-(NSNumber *)metricsLoadURLSamplingPercentage;
-(NSNumber *)metricsLoadURLSamplingPercentageCachedResponses;
-(void)_finishWithOutput:(id)arg1 error:(id)arg2 ;
-(BOOL)_shouldRetryAfterMachineDataRequest:(id)arg1 ;
-(void)_applyResponseToMetrics:(id)arg1 ;
-(id)_outputForData:(id)arg1 error:(id*)arg2 ;
-(id)outputBlock;
-(void)_releaseOutputBlocks;
-(SSBag *)bag;
-(void)_configureWithURLBagInterpreter:(id)arg1 ;
-(void)_addMachineDataHeadersToRequest:(id)arg1 withAccountIdentifier:(id)arg2 ;
-(void)_addSAPSignatureToRequest:(id)arg1 ;
-(id)prepareRequestBlock;
-(SSVURLDataConsumer *)dataConsumer;
-(void)_loadURLBagInterpreter;
-(void)_stopIfCancelled;
-(int)_runRunLoopUntilStopped;
-(void)_keepAliveTimer:(id)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithEvent:(id)arg3 error:(id)arg4 ;
-(NSData *)rawResponseData;
-(id)initWithData:(id)arg1 fromOperation:(id)arg2 ;
-(NSCachedURLResponse *)cachedURLResponse;
-(void)configureWithURLBag:(id)arg1 ;
-(id)expiredOutputBlock;
-(NSString *)referrerApplicationName;
-(NSString *)referrerURLString;
-(SSVFairPlaySAPSession *)SAPSession;
-(SSVSAPSignaturePolicy *)SAPSignaturePolicy;
-(void)setExpiredOutputBlock:(id)arg1 ;
-(void)setRecordsMetrics:(BOOL)arg1 ;
-(void)setReferrerApplicationName:(NSString *)arg1 ;
-(void)setReferrerURLString:(NSString *)arg1 ;
-(void)setSAPSession:(SSVFairPlaySAPSession *)arg1 ;
-(id)_dataForCachedResponse:(const CFCachedURLResponseRef)arg1 ;
-(void)setBag:(SSBag *)arg1 ;
-(void)setShouldSuppressCookies:(BOOL)arg1 ;
-(void)setShouldSuppressUserInfo:(BOOL)arg1 ;
-(void)setITunesStoreRequest:(BOOL)arg1 ;
-(id)initWithURLRequestProperties:(id)arg1 ;
-(void)configureWithURLBagDictionary:(id)arg1 ;
-(NSString *)storeFrontSuffix;
-(void)setStoreFrontSuffix:(NSString *)arg1 ;
-(void)setMachineDataStyle:(long long)arg1 ;
-(void)setSAPSignaturePolicy:(SSVSAPSignaturePolicy *)arg1 ;
-(void)setDataConsumer:(SSVURLDataConsumer *)arg1 ;
-(void)setPrepareRequestBlock:(id)arg1 ;
-(void)setOutputBlock:(id)arg1 ;
-(NSHTTPURLResponse *)URLResponse;
-(id)initWithURLRequest:(id)arg1 ;
-(void)dispatchSync:(/*^block*/id)arg1 ;
-(NSURLRequest *)URLRequest;
-(void)dispatchAsync:(/*^block*/id)arg1 ;
-(SSURLRequestProperties *)requestProperties;
-(id)init;
-(void)setDelegate:(id<SSVLoadURLOperationDelegate>)arg1 ;
-(id<SSVLoadURLOperationDelegate>)delegate;
-(void)cancel;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(void)main;
@end

