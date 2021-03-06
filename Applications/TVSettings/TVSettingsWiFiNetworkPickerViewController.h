//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKTableViewController.h"

#import "TSKSettingItemEditingControllerDelegate.h"
#import "TVSWiFiNetworkConnectionOperationDelegate.h"

@class NSString, TSKPreviewViewController, TSKTextInputViewController, TSKWiFiNetworkDataSource;

@interface TVSettingsWiFiNetworkPickerViewController : TSKTableViewController <TSKSettingItemEditingControllerDelegate, TVSWiFiNetworkConnectionOperationDelegate>
{
    TSKPreviewViewController *_previewController;	// 8 = 0x8
    CDUnknownBlockType _passwordEntryBlock;	// 16 = 0x10
    TSKWiFiNetworkDataSource *_dataSource;	// 24 = 0x18
    TSKTextInputViewController *_networkNameController;	// 32 = 0x20
    TSKTextInputViewController *_passwordController;	// 40 = 0x28
}

@property(nonatomic) __weak TSKTextInputViewController *passwordController; // @synthesize passwordController=_passwordController;
@property(nonatomic) __weak TSKTextInputViewController *networkNameController; // @synthesize networkNameController=_networkNameController;
@property(retain, nonatomic) TSKWiFiNetworkDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;	// IMP=0x0000000100047858
- (void)_cancelOperation;	// IMP=0x0000000100047764
- (void)_showScanningActivityIndicator;	// IMP=0x0000000100047550
- (void)_showConnectingActivityIndicator;	// IMP=0x000000010004733c
- (void)_showErrorMessageWithError:(id)arg1;	// IMP=0x0000000100046d64
- (void)_showNetworkDetail;	// IMP=0x0000000100046ca8
- (void)_showPasswordInputControllerForNetwork:(id)arg1;	// IMP=0x00000001000469f8
- (void)_showNetworkNameInputController;	// IMP=0x00000001000467fc
- (void)operation:(id)arg1 stateDidChange:(unsigned long long)arg2;	// IMP=0x0000000100046798
- (void)operation:(id)arg1 didFailToConnectToNetwork:(id)arg2 error:(id)arg3;	// IMP=0x0000000100046788
- (void)operation:(id)arg1 didConnectToNetwork:(id)arg2;	// IMP=0x000000010004672c
- (void)operation:(id)arg1 didRequestPasswordForNetwork:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000466b8
- (void)operation:(id)arg1 didFailToFindNetworkWithName:(id)arg2 error:(id)arg3;	// IMP=0x00000001000466a8
- (void)editingController:(id)arg1 didCancelForSettingItem:(id)arg2;	// IMP=0x00000001000465ec
- (void)editingController:(id)arg1 didProvideValue:(id)arg2 forSettingItem:(id)arg3;	// IMP=0x0000000100046524
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;	// IMP=0x00000001000464cc
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001000463b0
- (id)title;	// IMP=0x0000000100046340
- (void)viewDidLoad;	// IMP=0x0000000100046130
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000001000460f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

