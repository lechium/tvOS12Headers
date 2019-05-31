/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:16 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFEndSearchFeedback.h>

@class NSDictionary;

@interface SFEndNetworkSearchFeedback : SFEndSearchFeedback {

	long long _responseSize;
	long long _statusCode;
	NSDictionary* _networkTimingData;

}

@property (assign,nonatomic) long long responseSize;                      //@synthesize responseSize=_responseSize - In the implementation block
@property (assign,nonatomic) long long statusCode;                        //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,copy) NSDictionary * networkTimingData;              //@synthesize networkTimingData=_networkTimingData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setResponseSize:(long long)arg1 ;
-(long long)responseSize;
-(void)setStatusCode:(long long)arg1 ;
-(id)initWithStartSearch:(id)arg1 responseSize:(long long)arg2 statusCode:(long long)arg3 networkTimingData:(id)arg4 ;
-(void)setNetworkTimingData:(NSDictionary *)arg1 ;
-(NSDictionary *)networkTimingData;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)statusCode;
@end
