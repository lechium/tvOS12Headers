/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:05 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSURLRequest, NSURLResponse, NSDate, NSString, NSUUID;

@interface NSURLSessionTaskTransactionMetrics : NSObject

@property (copy) NSURLRequest * request; 
@property (copy) NSURLResponse * response; 
@property (copy) NSDate * fetchStartDate; 
@property (copy) NSDate * domainLookupStartDate; 
@property (copy) NSDate * domainLookupEndDate; 
@property (copy) NSDate * connectStartDate; 
@property (copy) NSDate * connectEndDate; 
@property (copy) NSDate * secureConnectionStartDate; 
@property (copy) NSDate * secureConnectionEndDate; 
@property (copy) NSDate * requestStartDate; 
@property (copy) NSDate * requestEndDate; 
@property (copy) NSDate * responseStartDate; 
@property (copy) NSDate * responseEndDate; 
@property (copy) NSString * networkProtocolName; 
@property (getter=isProxyConnection) BOOL proxyConnection; 
@property (getter=isReusedConnection) BOOL reusedConnection; 
@property (assign) long long resourceFetchType; 
@property (assign) BOOL _secureConnection; 
@property (assign) BOOL _localCache; 
@property (assign) BOOL _serverPush; 
@property (assign) BOOL _connectionRace; 
@property (assign) BOOL _cellular; 
@property (assign) unsigned _redirected; 
@property (copy) NSString * _localAddressAndPort; 
@property (copy) NSString * _remoteAddressAndPort; 
@property (copy) NSUUID * _connectionIdentifier; 
@property (assign) long long _requestHeaderBytesSent; 
@property (assign) long long _responseHeaderBytesReceived; 
@property (assign) long long _responseBodyBytesReceived; 
@property (assign) long long _responseBodyBytesDecoded; 
@property (assign) BOOL _apsRelayAttempted; 
@property (assign) BOOL _apsRelaySucceeded; 
@property (assign) long long _totalBytesSent; 
@property (assign) long long _totalBytesReceived; 
-(id)_initWithPerformanceTiming:(PerformanceTimingRef)arg1 ;
-(id)initWithNoInit;
-(id)init;
-(void)dealloc;
@end

