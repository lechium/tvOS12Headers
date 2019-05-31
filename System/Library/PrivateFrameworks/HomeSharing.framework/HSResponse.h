/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:17 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSData, NSURL, NSError;

@interface HSResponse : NSObject {

	NSString* _MIMEType;
	unsigned long long _responseCode;
	NSDictionary* _responseHeaderFields;
	NSData* _responseData;
	NSURL* _responseDataFileURL;
	NSError* _error;

}

@property (nonatomic,readonly) NSString * MIMEType;                              //@synthesize MIMEType=_MIMEType - In the implementation block
@property (nonatomic,readonly) unsigned long long responseCode;                  //@synthesize responseCode=_responseCode - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseHeaderFields;              //@synthesize responseHeaderFields=_responseHeaderFields - In the implementation block
@property (nonatomic,readonly) NSData * responseData;                            //@synthesize responseData=_responseData - In the implementation block
@property (nonatomic,copy) NSURL * responseDataFileURL;                          //@synthesize responseDataFileURL=_responseDataFileURL - In the implementation block
@property (nonatomic,readonly) NSError * error;                                  //@synthesize error=_error - In the implementation block
+(id)responseWithResponse:(id)arg1 ;
+(id)responseWithCode:(unsigned long long)arg1 headerFields:(id)arg2 data:(id)arg3 MIMEType:(id)arg4 error:(id)arg5 ;
-(NSData *)responseData;
-(id)initWithCode:(unsigned long long)arg1 headerFields:(id)arg2 data:(id)arg3 MIMEType:(id)arg4 error:(id)arg5 ;
-(NSDictionary *)responseHeaderFields;
-(NSURL *)responseDataFileURL;
-(void)setResponseDataFileURL:(NSURL *)arg1 ;
-(unsigned long long)responseCode;
-(id)description;
-(NSError *)error;
-(NSString *)MIMEType;
@end

