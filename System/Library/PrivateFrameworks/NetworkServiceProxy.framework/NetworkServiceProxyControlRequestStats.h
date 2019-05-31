/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NetworkServiceProxyRespTimeBuckets;

@interface NetworkServiceProxyControlRequestStats : NSObject <NSSecureCoding> {

	int _request_type;
	unsigned _request_count;
	unsigned _result_success_count;
	unsigned _result_network_unavailable_count;
	unsigned _result_server_unreachable_count;
	unsigned _result_send_failure_count;
	unsigned _result_response_timeout_count;
	unsigned _result_connection_reset_count;
	unsigned _result_certificate_failure_count;
	unsigned _result_unknown_error_count;
	long long _interface_type;
	long long _protocol_type;
	NetworkServiceProxyRespTimeBuckets* _response_time_buckets;

}

@property (assign) long long interface_type;                                                //@synthesize interface_type=_interface_type - In the implementation block
@property (assign) long long protocol_type;                                                 //@synthesize protocol_type=_protocol_type - In the implementation block
@property (assign) int request_type;                                                        //@synthesize request_type=_request_type - In the implementation block
@property (assign) unsigned request_count;                                                  //@synthesize request_count=_request_count - In the implementation block
@property (assign) unsigned result_success_count;                                           //@synthesize result_success_count=_result_success_count - In the implementation block
@property (assign) unsigned result_network_unavailable_count;                               //@synthesize result_network_unavailable_count=_result_network_unavailable_count - In the implementation block
@property (assign) unsigned result_server_unreachable_count;                                //@synthesize result_server_unreachable_count=_result_server_unreachable_count - In the implementation block
@property (assign) unsigned result_send_failure_count;                                      //@synthesize result_send_failure_count=_result_send_failure_count - In the implementation block
@property (assign) unsigned result_response_timeout_count;                                  //@synthesize result_response_timeout_count=_result_response_timeout_count - In the implementation block
@property (assign) unsigned result_connection_reset_count;                                  //@synthesize result_connection_reset_count=_result_connection_reset_count - In the implementation block
@property (assign) unsigned result_certificate_failure_count;                               //@synthesize result_certificate_failure_count=_result_certificate_failure_count - In the implementation block
@property (assign) unsigned result_unknown_error_count;                                     //@synthesize result_unknown_error_count=_result_unknown_error_count - In the implementation block
@property (retain) NetworkServiceProxyRespTimeBuckets * response_time_buckets;              //@synthesize response_time_buckets=_response_time_buckets - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)addStats:(id)arg1 ;
-(unsigned)result_response_timeout_count;
-(void)setResult_response_timeout_count:(unsigned)arg1 ;
-(unsigned)result_connection_reset_count;
-(void)setResult_connection_reset_count:(unsigned)arg1 ;
-(unsigned)result_network_unavailable_count;
-(void)setResult_network_unavailable_count:(unsigned)arg1 ;
-(unsigned)result_send_failure_count;
-(void)setResult_send_failure_count:(unsigned)arg1 ;
-(unsigned)result_server_unreachable_count;
-(void)setResult_server_unreachable_count:(unsigned)arg1 ;
-(unsigned)result_certificate_failure_count;
-(void)setResult_certificate_failure_count:(unsigned)arg1 ;
-(unsigned)result_unknown_error_count;
-(void)setResult_unknown_error_count:(unsigned)arg1 ;
-(long long)interface_type;
-(int)request_type;
-(long long)protocol_type;
-(unsigned)request_count;
-(unsigned)result_success_count;
-(NetworkServiceProxyRespTimeBuckets *)response_time_buckets;
-(void)setRequest_count:(unsigned)arg1 ;
-(void)setResult_success_count:(unsigned)arg1 ;
-(void)incrErrorResult:(long long)arg1 ;
-(id)getAWDMetric;
-(void)setInterface_type:(long long)arg1 ;
-(void)setProtocol_type:(long long)arg1 ;
-(void)setRequest_type:(int)arg1 ;
-(void)setResponse_time_buckets:(NetworkServiceProxyRespTimeBuckets *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)clear;
@end

