//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

@class TSKSettingItem;

@interface TVSettingsSecureWiFiViewController : TSKViewController
{
    TSKSettingItem *_secureWiFiItem;	// 8 = 0x8
}

@property(retain, nonatomic) TSKSettingItem *secureWiFiItem; // @synthesize secureWiFiItem=_secureWiFiItem;
- (void).cxx_destruct;	// IMP=0x000000010006c208
- (void)_secureWiFiProfileLoaded:(id)arg1 error:(id)arg2;	// IMP=0x000000010006bba8
- (void)_loadSecureWiFiProfile:(id)arg1;	// IMP=0x000000010006b800
- (_Bool)_isSecureWiFiProfileLoaded;	// IMP=0x000000010006b644
- (void)_updateStatus;	// IMP=0x000000010006b638
- (id)loadSettingGroups;	// IMP=0x000000010006b0a0

@end

