//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

#import "TVSettingsWholeHomeAudioHomePickerViewControllerDelegate.h"
#import "TVSettingsWholeHomeAudioRoomPickerViewControllerDelegate.h"
#import "TVSettingsWholeHomeAudioSetupViewControllerDelegate.h"

@class TSKSettingItem;

@interface TVSettingsAirPlayViewController : TSKViewController <TVSettingsWholeHomeAudioSetupViewControllerDelegate, TVSettingsWholeHomeAudioRoomPickerViewControllerDelegate, TVSettingsWholeHomeAudioHomePickerViewControllerDelegate>
{
    TSKSettingItem *_nameItem;	// 8 = 0x8
}

@property(readonly, nonatomic) TSKSettingItem *nameItem; // @synthesize nameItem=_nameItem;
- (void).cxx_destruct;	// IMP=0x00000001000af8cc
- (void)editingController:(id)arg1 didProvideValue:(id)arg2 forSettingItem:(id)arg3;	// IMP=0x00000001000af80c
- (void)homePickerViewController:(id)arg1 didSelectHome:(id)arg2;	// IMP=0x00000001000af798
- (void)roomPickerViewControllerDidFinish:(id)arg1;	// IMP=0x00000001000af740
- (void)wholeHomeAudioSetupViewControllerDidTransitionToUnconfiguredWithLocalAccessoryState:(id)arg1;	// IMP=0x00000001000af4dc
- (void)wholeHomeAudioSetupViewControllerDidTransitionToConfiguredState:(id)arg1;	// IMP=0x00000001000af484
- (void)_presentSetAccessoryNameFailedViewControllerWithError:(id)arg1;	// IMP=0x00000001000af2fc
- (void)_setDeviceName:(id)arg1;	// IMP=0x00000001000aedec
- (id)_makeDeviceNameChildViewControllerWithItem:(id)arg1;	// IMP=0x00000001000aec44
- (id)__makeRoomPickerViewControllerWithHome:(id)arg1;	// IMP=0x00000001000aebc4
- (id)__makeHomePickerViewController;	// IMP=0x00000001000aeb70
- (id)_makeRoomPickerViewController;	// IMP=0x00000001000ae810
- (id)_homeNoiCloudAccountAlertViewController;	// IMP=0x00000001000ae654
- (id)_homeNeedsUserInterentionAlertViewController;	// IMP=0x00000001000ae498
- (id)_configureWHAKeyTransferViewController;	// IMP=0x00000001000ae444
- (id)_crdViewController;	// IMP=0x00000001000ae2ec
- (id)_overscanAdjustmentFormatter;	// IMP=0x00000001000ae060
- (void)_updateCRDItem:(id)arg1;	// IMP=0x00000001000adfd0
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000adc88
- (id)loadSettingGroups;	// IMP=0x00000001000abe2c
- (void)dealloc;	// IMP=0x00000001000abd34
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000001000abc18

@end
