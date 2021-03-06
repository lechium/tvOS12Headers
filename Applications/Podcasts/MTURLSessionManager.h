//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTSingleton.h"

#import "NSURLSessionDownloadDelegate.h"
#import "NSURLSessionTaskDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString, NSURLSession;

@interface MTURLSessionManager : MTSingleton <NSURLSessionTaskDelegate, NSURLSessionDownloadDelegate>
{
    CDUnknownBlockType _sessionCompletionHandler;	// 8 = 0x8
    NSURLSession *_sessionForForegroundDownloads;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_startQueue;	// 24 = 0x18
    NSURLSession *_sessionForBackgroundDownloads;	// 32 = 0x20
}

+ (id)originalURLForTask:(id)arg1;	// IMP=0x00000001001685c8
+ (long long)statusCodeForTask:(id)arg1;	// IMP=0x0000000100168578
@property(retain, nonatomic) NSURLSession *sessionForBackgroundDownloads; // @synthesize sessionForBackgroundDownloads=_sessionForBackgroundDownloads;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *startQueue; // @synthesize startQueue=_startQueue;
@property(retain, nonatomic) NSURLSession *sessionForForegroundDownloads; // @synthesize sessionForForegroundDownloads=_sessionForForegroundDownloads;
@property(copy, nonatomic) CDUnknownBlockType sessionCompletionHandler; // @synthesize sessionCompletionHandler=_sessionCompletionHandler;
- (void).cxx_destruct;	// IMP=0x00000001001686f8
- (_Bool)_subclassImplementsInstanceMethod:(SEL)arg1;	// IMP=0x0000000100168620
- (_Bool)_subclassImplementsDidFailWithError;	// IMP=0x0000000100168564
- (void)task:(id)arg1 didFailWithError:(id)arg2 orStatusCode:(long long)arg3;	// IMP=0x0000000100168560
- (_Bool)_subclassImplementsDataDidDownload;	// IMP=0x000000010016854c
- (void)task:(id)arg1 didCompleteWithData:(id)arg2;	// IMP=0x0000000100168548
- (_Bool)_subclassImplementsURLDidDownload;	// IMP=0x0000000100168534
- (void)task:(id)arg1 didCompleteWithDownloadedContentUrl:(id)arg2;	// IMP=0x0000000100168530
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;	// IMP=0x000000010016843c
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;	// IMP=0x000000010016832c
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0000000100167f80
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100167a14
- (void)_showCredentialsActionControllerForHost:(id)arg1 signIn:(CDUnknownBlockType)arg2 cancel:(CDUnknownBlockType)arg3;	// IMP=0x00000001001672a4
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001001665fc
- (void)startDownloadTaskForURL:(id)arg1 userInitiated:(_Bool)arg2 useBackgroundFetch:(_Bool)arg3;	// IMP=0x00000001001661a8
- (_Bool)_subclassImplementsConfigureSession;	// IMP=0x0000000100166194
- (void)configureSession:(id)arg1;	// IMP=0x0000000100166190
- (id)sessionForConfiguration:(id)arg1;	// IMP=0x0000000100165fbc
- (void)loadSessionsIfNeeded;	// IMP=0x0000000100165d9c
- (void)_assertSubclassRequirements;	// IMP=0x0000000100165c3c
- (id)init;	// IMP=0x0000000100165b5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

