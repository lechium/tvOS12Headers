/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AMSURLSession;


@protocol AMSURLHandling <NSObject>
@property (assign,nonatomic,__weak) AMSURLSession * session; 
@required
-(void)setSession:(id)arg1;
-(AMSURLSession *)session;
-(id)handleResponse:(id)arg1 task:(id)arg2;
-(void)reconfigureNewRequest:(id)arg1 originalTask:(id)arg2 redirect:(BOOL)arg3 error:(id*)arg4;
-(id)decodeData:(id)arg1 task:(id)arg2 error:(id*)arg3;
-(id)handleCompletionWithTask:(id)arg1 metrics:(id)arg2 decodedObject:(id)arg3;
-(void)didCreateTask:(id)arg1 fromRequest:(id)arg2 error:(id*)arg3;

@end

