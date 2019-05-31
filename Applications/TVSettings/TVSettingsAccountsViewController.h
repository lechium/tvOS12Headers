//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

#import "TVApplicationControllerDelegate.h"

@class NSString, TSKSettingItem, TVApplicationController;

@interface TVSettingsAccountsViewController : TSKViewController <TVApplicationControllerDelegate>
{
    TVApplicationController *_subscriptionsAppController;	// 8 = 0x8
    TSKSettingItem *_appleConnectSettingsItem;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000b2e74
- (void)_updateManageSubscriptionsItem:(id)arg1;	// IMP=0x00000001000b2d68
- (id)_manageSubscriptionsViewController;	// IMP=0x00000001000b2c38
- (void)_handleSeedRecognizer:(id)arg1;	// IMP=0x00000001000b2be0
- (void)appController:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000001000b294c
- (void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;	// IMP=0x00000001000b2894
- (id)loadSettingGroups;	// IMP=0x00000001000b1b44
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000b1ae0
- (void)viewDidLoad;	// IMP=0x00000001000b1978
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000001000b1824

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

