//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSTimer;

@interface TVSettingsAppsFacade : NSObject
{
    unsigned long long _knockCount;	// 8 = 0x8
    _Bool _needsUpdate;	// 16 = 0x10
    NSArray *_installedThirdPartyApps;	// 24 = 0x18
    NSArray *_installedSystemApps;	// 32 = 0x20
    NSArray *_provisionedThirdPartyApps;	// 40 = 0x28
    NSArray *_provisionedSystemApps;	// 48 = 0x30
    NSTimer *_knockTimer;	// 56 = 0x38
}

+ (id)_allowedSystemApps;	// IMP=0x000000010009bbc8
+ (_Bool)isAppEnabledForBundleID:(id)arg1;	// IMP=0x000000010009bb28
+ (_Bool)photosSettingsNeededForBundleID:(id)arg1;	// IMP=0x000000010009ba94
+ (_Bool)MSOSettingsNeededForBundleID:(id)arg1;	// IMP=0x000000010009ba00
+ (_Bool)homeKitSettingsNeededForBundleID:(id)arg1;	// IMP=0x000000010009b96c
+ (_Bool)backgroundAppRefreshSettingsNeededForBundleID:(id)arg1;	// IMP=0x000000010009b8d8
+ (_Bool)notificationSettingsNeededForBundleID:(id)arg1;	// IMP=0x000000010009b844
+ (_Bool)locationSettingsNeededForBundleID:(id)arg1;	// IMP=0x000000010009b7a0
+ (_Bool)settingsNeededForBundleID:(id)arg1;	// IMP=0x000000010009b60c
@property(retain, nonatomic) NSTimer *knockTimer; // @synthesize knockTimer=_knockTimer;
@property(nonatomic) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(copy, nonatomic) NSArray *provisionedSystemApps; // @synthesize provisionedSystemApps=_provisionedSystemApps;
@property(copy, nonatomic) NSArray *provisionedThirdPartyApps; // @synthesize provisionedThirdPartyApps=_provisionedThirdPartyApps;
@property(copy, nonatomic) NSArray *installedSystemApps; // @synthesize installedSystemApps=_installedSystemApps;
@property(copy, nonatomic) NSArray *installedThirdPartyApps; // @synthesize installedThirdPartyApps=_installedThirdPartyApps;
- (void).cxx_destruct;	// IMP=0x000000010009ce3c
- (void)_updateProvisionedApps;	// IMP=0x000000010009c9d0
- (void)_appDepotDidChange:(id)arg1;	// IMP=0x000000010009c9c4
- (void)_updateAppsCoalesced;	// IMP=0x000000010009c8a8
- (void)_updateApps;	// IMP=0x000000010009c4a8
- (void)_trySomeStuffWithURLString:(id)arg1;	// IMP=0x000000010009c1ac
- (void)_cancelKnockTimer:(id)arg1;	// IMP=0x000000010009c174
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010009c080
- (void)knockForEntry;	// IMP=0x000000010009bc58
- (void)dealloc;	// IMP=0x000000010009b3c4
- (id)init;	// IMP=0x000000010009b0d8

@end
