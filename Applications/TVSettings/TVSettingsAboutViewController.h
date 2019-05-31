//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

@class TSKSettingItem, TVSettingsDiagnosticsController, UIAlertController, UIGestureRecognizer, UIViewController<TSKSettingItemEditingController>;

@interface TVSettingsAboutViewController : TSKViewController
{
    _Bool _showPartNumberAndFirmwareVersion;	// 8 = 0x8
    TSKSettingItem *_wifiSignalStrengthItem;	// 16 = 0x10
    unsigned long long _currentMoreInfoItemType;	// 24 = 0x18
    UIGestureRecognizer *_downButtonRecognizer;	// 32 = 0x20
    UIGestureRecognizer *_playPauseButtonRecognizer;	// 40 = 0x28
    UIAlertController *_diagnosticsTicketController;	// 48 = 0x30
    TVSettingsDiagnosticsController *_diagnostics;	// 56 = 0x38
    UIViewController<TSKSettingItemEditingController> *_nameViewController;	// 64 = 0x40
}

@property(nonatomic) __weak UIViewController<TSKSettingItemEditingController> *nameViewController; // @synthesize nameViewController=_nameViewController;
@property(retain, nonatomic) TVSettingsDiagnosticsController *diagnostics; // @synthesize diagnostics=_diagnostics;
@property(retain, nonatomic) UIAlertController *diagnosticsTicketController; // @synthesize diagnosticsTicketController=_diagnosticsTicketController;
@property(retain, nonatomic) UIGestureRecognizer *playPauseButtonRecognizer; // @synthesize playPauseButtonRecognizer=_playPauseButtonRecognizer;
@property(retain, nonatomic) UIGestureRecognizer *downButtonRecognizer; // @synthesize downButtonRecognizer=_downButtonRecognizer;
@property(nonatomic) unsigned long long currentMoreInfoItemType; // @synthesize currentMoreInfoItemType=_currentMoreInfoItemType;
@property(retain, nonatomic) TSKSettingItem *wifiSignalStrengthItem; // @synthesize wifiSignalStrengthItem=_wifiSignalStrengthItem;
@property(nonatomic) _Bool showPartNumberAndFirmwareVersion; // @synthesize showPartNumberAndFirmwareVersion=_showPartNumberAndFirmwareVersion;
- (void).cxx_destruct;	// IMP=0x0000000100044efc
- (void)_presentSetAccessoryNameFailedViewControllerWithError:(id)arg1;	// IMP=0x0000000100044c4c
- (void)_setDeviceName:(id)arg1;	// IMP=0x000000010004473c
- (id)_nameViewControllerForItem:(id)arg1;	// IMP=0x0000000100044580
- (void)_advanceMoreInfoItem;	// IMP=0x00000001000444e0
- (_Bool)_hasTiltID;	// IMP=0x000000010004447c
- (_Bool)_showWiFiSettings;	// IMP=0x0000000100044428
- (void)_updateDiagnosticsItem:(id)arg1;	// IMP=0x0000000100044274
- (void)_handlePlayPauseGesture:(id)arg1;	// IMP=0x0000000100043b20
- (void)_handleUpGesture:(id)arg1;	// IMP=0x0000000100043aec
- (void)_handleDownGesture:(id)arg1;	// IMP=0x0000000100043aa4
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000439ec
- (void)networkUpdated:(id)arg1;	// IMP=0x00000001000439e0
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x0000000100043798
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100043568
- (_Bool)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;	// IMP=0x0000000100043508
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x0000000100043318
- (void)editingController:(id)arg1 didProvideValue:(id)arg2 forSettingItem:(id)arg3;	// IMP=0x0000000100043238
- (id)loadSettingGroups;	// IMP=0x00000001000410ac
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010004103c
- (void)viewDidLoad;	// IMP=0x0000000100040c68
- (void)dealloc;	// IMP=0x0000000100040b7c
- (id)initWithStyle:(long long)arg1;	// IMP=0x0000000100040a28

@end

