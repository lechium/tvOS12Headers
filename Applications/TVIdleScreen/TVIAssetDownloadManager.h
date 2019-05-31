//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSObject<OS_dispatch_semaphore>, NSURLSession;

@interface TVIAssetDownloadManager : NSObject
{
    NSObject<OS_dispatch_semaphore> *_concurrentDownloadsSemaphore;	// 8 = 0x8
    NSURLSession *_downloadSession;	// 16 = 0x10
    NSHashTable *_downloadTasks;	// 24 = 0x18
}

@property(retain, nonatomic) NSHashTable *downloadTasks; // @synthesize downloadTasks=_downloadTasks;
@property(retain, nonatomic) NSURLSession *downloadSession; // @synthesize downloadSession=_downloadSession;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *concurrentDownloadsSemaphore; // @synthesize concurrentDownloadsSemaphore=_concurrentDownloadsSemaphore;
- (void).cxx_destruct;	// IMP=0x0000000100014f0c
- (void)downloadAssetAtURL:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000143d4
- (void)cancelDownloads;	// IMP=0x00000001000142b8
- (id)mostRecentDownloadDate;	// IMP=0x0000000100014230
- (long long)assetDownloadInterval;	// IMP=0x000000010001414c
- (id)init;	// IMP=0x0000000100014014

@end

