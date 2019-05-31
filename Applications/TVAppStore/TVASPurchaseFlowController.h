//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SSPurchaseManagerDelegate.h"

@class NSMutableSet, NSSet, NSString, SSPurchaseManager;

@interface TVASPurchaseFlowController : NSObject <SSPurchaseManagerDelegate>
{
    id <TVASPurchaseFlowControllerDelegate> _delegate;	// 8 = 0x8
    SSPurchaseManager *_purchaseManager;	// 16 = 0x10
    NSMutableSet *_mutableActivePurchases;	// 24 = 0x18
}

@property(retain, nonatomic) NSMutableSet *mutableActivePurchases; // @synthesize mutableActivePurchases=_mutableActivePurchases;
@property(retain, nonatomic) SSPurchaseManager *purchaseManager; // @synthesize purchaseManager=_purchaseManager;
@property(nonatomic) __weak id <TVASPurchaseFlowControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100010e00
- (void)purchaseManager:(id)arg1 didFinishPurchasesWithResponses:(id)arg2;	// IMP=0x0000000100010544
- (void)_updatePurchase:(id)arg1 withInfo:(id)arg2;	// IMP=0x0000000100010320
- (void)_presentViewController:(id)arg1;	// IMP=0x0000000100010244
- (void)_doPurchaseWithBuyParams:(id)arg1 adamID:(id)arg2 tvBuyInfo:(id)arg3;	// IMP=0x000000010000f8e8
- (void)_applyContentRestrictionsWithContentRating:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000f5fc
- (_Bool)_isDiskSpaceAvailable;	// IMP=0x000000010000f5a4
- (void)_showOutOfSpaceAlert;	// IMP=0x000000010000f36c
- (void)requestUpdateWithBuyButtonInfo:(id)arg1;	// IMP=0x000000010000e7e4
- (void)requestPurchaseWithBuyButtonInfo:(id)arg1;	// IMP=0x000000010000dc38
@property(readonly, nonatomic) NSSet *activePurchases;
- (void)removeActivePurchases:(id)arg1;	// IMP=0x000000010000db0c
- (void)addActivePurchases:(id)arg1;	// IMP=0x000000010000da2c
- (void)removeActivePurchase:(id)arg1;	// IMP=0x000000010000d9d8
- (void)addActivePurchase:(id)arg1;	// IMP=0x000000010000d984
- (id)init;	// IMP=0x000000010000d460

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

