//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOperationQueue, QuotaInfoResponse;

@interface QuotaRequestManager : NSObject
{
    NSOperationQueue *_requestQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_quota_info_queue;	// 16 = 0x10
    QuotaInfoResponse *_quotaInfo;	// 24 = 0x18
    NSMutableDictionary *_appDetailsCache;	// 32 = 0x20
}

+ (id)noAccountError;	// IMP=0x00000001000593b8
+ (id)sharedManager;	// IMP=0x0000000100059338
- (void).cxx_destruct;	// IMP=0x000000010005a5e4
- (void)getAppDetailsForBundleIDs:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010005a32c
- (id)appDetailsForBundleIDs:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100059e50
- (void)clearCachedAppDetails;	// IMP=0x0000000100059de0
- (void)getQuotaInfoForHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100059b68
- (id)quotaInfoError:(id *)arg1;	// IMP=0x0000000100059848
- (id)_sendSynchronousAARequest:(id)arg1;	// IMP=0x0000000100059610
- (void)noteQuotaInfoChanged;	// IMP=0x00000001000595b0
- (void)clearCachedQuotaInfo;	// IMP=0x0000000100059528
- (id)init;	// IMP=0x0000000100059444

@end

