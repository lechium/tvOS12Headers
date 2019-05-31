//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PRRequestDelegate.h"

@class NSString;

@interface PBStorePermissionMonitor : NSObject <PRRequestDelegate>
{
    CDUnknownBlockType _permissionResponseBlock;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000010009aa48
@property(copy, nonatomic) CDUnknownBlockType permissionResponseBlock; // @synthesize permissionResponseBlock=_permissionResponseBlock;
- (void).cxx_destruct;	// IMP=0x000000010009c950
- (id)responseNotificationStringForRequest:(id)arg1 fromFamilyMember:(id)arg2;	// IMP=0x000000010009c91c
- (id)requestNotificationStringForRequest:(id)arg1 fromFamilyMember:(id)arg2;	// IMP=0x000000010009c914
- (id)requestStringForRequest:(id)arg1 fromFamilyMember:(id)arg2 shownInNotification:(_Bool)arg3;	// IMP=0x000000010009c90c
- (void)attemptLocalApprovalForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010009c8e8
- (void)performCancellationForDeclinedRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010009c8c4
- (void)performAuthorizationForApprovedRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010009c8a0
- (void)_shouldDownloadAssetsFromPurchaseWithBuyParameters:(id)arg1 forApprovedRequest:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010009c880
- (void)_willPerformStorePurchaseWithBuyParameters:(id)arg1 forApprovedRequest:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010009c4bc
- (void)permissionRequest:(id)arg1 didChangeStatusTo:(unsigned long long)arg2;	// IMP=0x000000010009c1c4
- (void)didCreateNewPermissionRequest:(id)arg1;	// IMP=0x000000010009c008
- (void)_doPurchaseWithBuyParams:(id)arg1 forRequest:(id)arg2;	// IMP=0x000000010009bdfc
- (_Bool)_shouldDoPurchaseForApprovedRequest:(id)arg1;	// IMP=0x000000010009bd18
- (_Bool)_shouldNotifyUserAboutRequest:(id)arg1;	// IMP=0x000000010009bb60
- (void)_prunePendingRequests;	// IMP=0x000000010009b924
- (void)_updatePendingInfo:(id)arg1 forRequest:(id)arg2;	// IMP=0x000000010009b7d0
- (id)_pendingRequestInfoForRequest:(id)arg1;	// IMP=0x000000010009b660
- (double)_maxTimeIntervalForNotification;	// IMP=0x000000010009b5f4
- (id)_stringForStatus:(unsigned long long)arg1;	// IMP=0x000000010009b560
- (void)_registerDelegate;	// IMP=0x000000010009b514
- (void)fetchFamilyMembersForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010009ad10
- (id)atvRequestQueue;	// IMP=0x000000010009ace0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

