//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

@interface TVSettingsVPNViewController : TSKViewController
{
    _Bool _loadingProfile;	// 8 = 0x8
    unsigned long long _configurationCheckState;	// 16 = 0x10
}

@property(nonatomic) _Bool loadingProfile; // @synthesize loadingProfile=_loadingProfile;
@property(nonatomic) unsigned long long configurationCheckState; // @synthesize configurationCheckState=_configurationCheckState;
- (void)_warnAboutVPNOnInternalNetwork;	// IMP=0x0000000100024f10
- (void)_warnAboutMissingAppleConnectCredentials;	// IMP=0x0000000100024d68
- (void)_checkVPNConfiguration;	// IMP=0x00000001000248f4
- (void)_VPNProfileLoaded:(id)arg1 error:(id)arg2;	// IMP=0x00000001000242e4
- (void)_loadVPNProfile;	// IMP=0x0000000100023e0c
- (void)_updateCheckVPNItem:(id)arg1;	// IMP=0x0000000100023a28
- (void)_updateLoadVPNItem:(id)arg1;	// IMP=0x0000000100023610
- (id)loadSettingGroups;	// IMP=0x00000001000230f0
- (void)viewDidLoad;	// IMP=0x000000010002308c

@end
