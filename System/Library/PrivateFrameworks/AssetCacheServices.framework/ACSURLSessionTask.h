/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AssetCacheServices.framework/AssetCacheServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetCacheServices/AssetCacheServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSProgressReporting.h>

@class NSProgress, NSURLSessionTask, ACSURLSession, NSURLRequest, NSURLResponse, NSString, NSError;

@interface ACSURLSessionTask : NSObject <NSCopying, NSProgressReporting> {

	BOOL __tryCachingServer;
	BOOL __failBackToOrigin;
	BOOL __suspended;
	/*^block*/id __nsurlTaskCreator;
	NSURLSessionTask* __nsurlTaskToOrigin;
	NSURLSessionTask* __nsurlTaskToCachingServer;
	ACSURLSession* __weakSession;

}

@property (copy) id _nsurlTaskCreator;                                        //@synthesize _nsurlTaskCreator=__nsurlTaskCreator - In the implementation block
@property (retain) NSURLSessionTask * _nsurlTaskToOrigin;                     //@synthesize _nsurlTaskToOrigin=__nsurlTaskToOrigin - In the implementation block
@property (retain) NSURLSessionTask * _nsurlTaskToCachingServer;              //@synthesize _nsurlTaskToCachingServer=__nsurlTaskToCachingServer - In the implementation block
@property (__weak) ACSURLSession * _weakSession;                              //@synthesize _weakSession=__weakSession - In the implementation block
@property (readonly) BOOL _isUpload; 
@property (assign) BOOL _tryCachingServer;                                    //@synthesize _tryCachingServer=__tryCachingServer - In the implementation block
@property (assign) BOOL _failBackToOrigin;                                    //@synthesize _failBackToOrigin=__failBackToOrigin - In the implementation block
@property (assign) BOOL _suspended;                                           //@synthesize _suspended=__suspended - In the implementation block
@property (readonly) unsigned long long taskIdentifier; 
@property (copy,readonly) NSURLRequest * originalRequest; 
@property (copy,readonly) NSURLRequest * currentRequest; 
@property (copy,readonly) NSURLResponse * response; 
@property (readonly) NSProgress * progress; 
@property (assign) long long countOfBytesClientExpectsToSend; 
@property (assign) long long countOfBytesClientExpectsToReceive; 
@property (readonly) long long countOfBytesReceived; 
@property (readonly) long long countOfBytesSent; 
@property (readonly) long long countOfBytesExpectedToSend; 
@property (readonly) long long countOfBytesExpectedToReceive; 
@property (copy) NSString * taskDescription; 
@property (readonly) long long state; 
@property (copy,readonly) NSError * error; 
@property (assign) float priority; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)countOfBytesClientExpectsToSend;
-(void)setCountOfBytesClientExpectsToSend:(long long)arg1 ;
-(long long)countOfBytesClientExpectsToReceive;
-(void)setCountOfBytesClientExpectsToReceive:(long long)arg1 ;
-(unsigned long long)taskIdentifier;
-(NSURLRequest *)originalRequest;
-(NSURLRequest *)currentRequest;
-(long long)countOfBytesReceived;
-(long long)countOfBytesSent;
-(long long)countOfBytesExpectedToSend;
-(long long)countOfBytesExpectedToReceive;
-(NSString *)taskDescription;
-(void)setTaskDescription:(NSString *)arg1 ;
-(NSURLSessionTask *)_nsurlTaskToOrigin;
-(NSURLSessionTask *)_nsurlTaskToCachingServer;
-(BOOL)_tryCachingServer;
-(void)set_failBackToOrigin:(BOOL)arg1 ;
-(id)_nsurlTaskForRequest:(id)arg1 ;
-(void)set_nsurlTaskToCachingServer:(NSURLSessionTask *)arg1 ;
-(void)set_tryCachingServer:(BOOL)arg1 ;
-(void)set_suspended:(BOOL)arg1 ;
-(BOOL)_suspended;
-(BOOL)_isUpload;
-(BOOL)_failBackToOrigin;
-(id)initWithNSURLTaskCreator:(/*^block*/id)arg1 initialRequest:(id)arg2 forSession:(id)arg3 ;
-(ACSURLSession *)_weakSession;
-(void)set_nsurlTaskCreator:(id)arg1 ;
-(void)set_nsurlTaskToOrigin:(NSURLSessionTask *)arg1 ;
-(void)set_weakSession:(ACSURLSession *)arg1 ;
-(id)_nsurlTaskCreator;
-(NSString *)description;
-(long long)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPriority:(float)arg1 ;
-(float)priority;
-(void)cancel;
-(NSProgress *)progress;
-(NSURLResponse *)response;
-(void)resume;
-(void)suspend;
-(NSError *)error;
@end

