//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

@class TVSettingsOSUpdateConfiguration;

@interface TVSettingsOSUpdateConfigurationViewController : TSKViewController
{
    TVSettingsOSUpdateConfiguration *_currentConfiguration;	// 8 = 0x8
    unsigned long long _configurationCheckState;	// 16 = 0x10
    unsigned long long _configurationLoadingState;	// 24 = 0x18
}

@property(nonatomic) unsigned long long configurationLoadingState; // @synthesize configurationLoadingState=_configurationLoadingState;
@property(nonatomic) unsigned long long configurationCheckState; // @synthesize configurationCheckState=_configurationCheckState;
@property(retain, nonatomic) TVSettingsOSUpdateConfiguration *currentConfiguration; // @synthesize currentConfiguration=_currentConfiguration;
- (void).cxx_destruct;	// IMP=0x00000001000715bc
- (void)_warnAboutWrongURLs;	// IMP=0x0000000100071260
- (void)_warnAboutMissingCarryProfile;	// IMP=0x00000001000710b8
- (void)_warnAboutMissingVPNProfile;	// IMP=0x0000000100070f10
- (void)_warnAboutMissingAppleConnectCredentials;	// IMP=0x0000000100070d68
- (void)_configurationDidChange:(id)arg1;	// IMP=0x00000001000709f8
- (void)_configurationWillChange:(id)arg1;	// IMP=0x00000001000709ac
- (void)_clearTextSettingItem:(id)arg1;	// IMP=0x000000010007098c
- (void)_checkConfiguration:(id)arg1;	// IMP=0x0000000100070444
- (void)_updateCheckConfigurationItem:(id)arg1;	// IMP=0x00000001000700c0
- (void)_updateConfigurationItem:(id)arg1 withValue:(id)arg2;	// IMP=0x000000010006ff90
- (id)loadSettingGroups;	// IMP=0x000000010006e954
- (void)viewDidLoad;	// IMP=0x000000010006e73c
- (void)dealloc;	// IMP=0x000000010006e6c4

@end

