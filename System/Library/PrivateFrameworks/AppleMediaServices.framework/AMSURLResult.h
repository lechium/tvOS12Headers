/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:12 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString, NSURLSessionTaskMetrics, NSURLResponse, NSURLSessionTask, NSDictionary;

@interface AMSURLResult : NSObject {

	NSData* _data;
	NSString* _logUUID;
	NSURLSessionTaskMetrics* _taskMetrics;
	NSURLResponse* _response;
	NSURLSessionTask* _task;
	id _object;

}

@property (nonatomic,retain) NSData * data;                                        //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * logUUID;                                   //@synthesize logUUID=_logUUID - In the implementation block
@property (nonatomic,readonly) NSURLSessionTaskMetrics * taskMetrics;              //@synthesize taskMetrics=_taskMetrics - In the implementation block
@property (nonatomic,retain) NSURLResponse * response;                             //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSURLSessionTask * task;                              //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) id object;                                            //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) NSString * responseCorrelationId; 
@property (nonatomic,readonly) long long responseStatusCode; 
@property (nonatomic,readonly) NSDictionary * responseHeaders; 
-(void)setResponse:(NSURLResponse *)arg1 ;
-(void)setTask:(NSURLSessionTask *)arg1 ;
-(NSURLSessionTaskMetrics *)taskMetrics;
-(NSString *)logUUID;
-(id)initWithResult:(id)arg1 ;
-(NSDictionary *)responseHeaders;
-(long long)responseStatusCode;
-(void)setLogUUID:(NSString *)arg1 ;
-(id)initWithTaskInfo:(id)arg1 object:(id)arg2 ;
-(id)initWithTask:(id)arg1 response:(id)arg2 data:(id)arg3 object:(id)arg4 ;
-(NSString *)responseCorrelationId;
-(id)object;
-(NSData *)data;
-(NSURLResponse *)response;
-(void)setData:(NSData *)arg1 ;
-(void)setObject:(id)arg1 ;
-(NSURLSessionTask *)task;
@end

