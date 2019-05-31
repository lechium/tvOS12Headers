/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDownloadDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSString;

@interface MultiplePauseResumeDataDownloadDelegate : NSObject <NSURLSessionDownloadDelegate, NSURLSessionDelegate> {

	BOOL _expectDirectory;
	long long _sizeOfEntity;
	NSObject*<OS_dispatch_semaphore> _wait;
	BOOL _retryingWithResumeData;
	BOOL _result;
	long long _totalBytesWritten;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)getWaiter;
-(BOOL)isExpectingDirectory;
-(long long)getSizeOfEntity;
-(BOOL)isRetryingWithResumeData;
-(id)initExpectingDirectory:(BOOL)arg1 ;
-(BOOL)didTestPass;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4 ;
-(void)dealloc;
@end

