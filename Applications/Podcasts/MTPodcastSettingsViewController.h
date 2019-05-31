//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTTVGenericSettingsViewController.h"

#import "MTPodcastInfoViewDelegate.h"
#import "UIPopoverPresentationControllerDelegate.h"

@class MTDefaultsChangeNotifier, MTOptionSetting, MTSetting, MTSettingsGroup, NSString;

@interface MTPodcastSettingsViewController : MTTVGenericSettingsViewController <MTPodcastInfoViewDelegate, UIPopoverPresentationControllerDelegate>
{
    NSString *_uuid;	// 8 = 0x8
    _Bool _descriptionViewIsExpanded;	// 16 = 0x10
    id <MTPodcastSettingsViewControllerDelegate> _delegate;	// 24 = 0x18
    MTSettingsGroup *_syncedSettingsGroup;	// 32 = 0x20
    MTSetting *_playOrderSetting;	// 40 = 0x28
    MTSetting *_sortOrderSetting;	// 48 = 0x30
    MTSetting *_subscribedSetting;	// 56 = 0x38
    MTSettingsGroup *_localSettingsGroup;	// 64 = 0x40
    MTOptionSetting *_refreshIntervalSetting;	// 72 = 0x48
    MTOptionSetting *_limitUnplayedSetting;	// 80 = 0x50
    MTOptionSetting *_deletePlayedEpisodesSetting;	// 88 = 0x58
    MTDefaultsChangeNotifier *_defaultsNotifier;	// 96 = 0x60
}

+ (void)promptToTurnOnRemovePlayedEpisodesForPodcast:(id)arg1 presentingViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100152018
@property(retain, nonatomic) MTDefaultsChangeNotifier *defaultsNotifier; // @synthesize defaultsNotifier=_defaultsNotifier;
@property(retain, nonatomic) MTOptionSetting *deletePlayedEpisodesSetting; // @synthesize deletePlayedEpisodesSetting=_deletePlayedEpisodesSetting;
@property(retain, nonatomic) MTOptionSetting *limitUnplayedSetting; // @synthesize limitUnplayedSetting=_limitUnplayedSetting;
@property(retain, nonatomic) MTOptionSetting *refreshIntervalSetting; // @synthesize refreshIntervalSetting=_refreshIntervalSetting;
@property(retain, nonatomic) MTSettingsGroup *localSettingsGroup; // @synthesize localSettingsGroup=_localSettingsGroup;
@property(retain, nonatomic) MTSetting *subscribedSetting; // @synthesize subscribedSetting=_subscribedSetting;
@property(retain, nonatomic) MTSetting *sortOrderSetting; // @synthesize sortOrderSetting=_sortOrderSetting;
@property(retain, nonatomic) MTSetting *playOrderSetting; // @synthesize playOrderSetting=_playOrderSetting;
@property(retain, nonatomic) MTSettingsGroup *syncedSettingsGroup; // @synthesize syncedSettingsGroup=_syncedSettingsGroup;
@property(nonatomic) __weak id <MTPodcastSettingsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001001539f0
- (void)syncControllerOperationCompleted:(id)arg1;	// IMP=0x0000000100153824
- (void)addPodcastInfoViewHeader;	// IMP=0x0000000100153820
- (void)podcastInfoViewWasTapped:(id)arg1;	// IMP=0x000000010015380c
- (void)podcastInfoViewDidExpand:(id)arg1;	// IMP=0x000000010015377c
- (id)metricDataSource;	// IMP=0x00000001001536e4
- (id)metricsName;	// IMP=0x00000001001536b8
- (void)updateSort:(_Bool)arg1;	// IMP=0x00000001001534fc
- (void)updateIntervalSettingChanged:(unsigned long long)arg1;	// IMP=0x000000010015337c
- (void)updatePlayOrder:(_Bool)arg1;	// IMP=0x00000001001531c0
- (void)updateNotifications:(_Bool)arg1;	// IMP=0x0000000100152fec
- (void)updateNotificationSettingsToMatchSubscription:(_Bool)arg1;	// IMP=0x0000000100152fe8
- (void)updateSubscription:(_Bool)arg1;	// IMP=0x0000000100152c84
- (void)updateDeletePlayedEpisodes:(long long)arg1;	// IMP=0x0000000100152b10
- (void)updateEpisodeLimit:(long long)arg1;	// IMP=0x0000000100151e48
- (id)updateIntervalOptionValues;	// IMP=0x0000000100151c90
- (id)updateIntervalOptionArray:(_Bool)arg1 defaultValue:(long long)arg2;	// IMP=0x0000000100151ac8
- (id)stringForUpdateInterval:(long long)arg1 short:(_Bool)arg2 defaultValue:(long long)arg3;	// IMP=0x0000000100151810
- (id)optionsForDownloadEpisodes;	// IMP=0x0000000100151238
- (id)deletePlayedText:(long long)arg1;	// IMP=0x0000000100151170
- (id)optionsForDeletePlayedEpisodes;	// IMP=0x0000000100150cf4
- (id)optionsForLimitSetting;	// IMP=0x0000000100150490
- (id)optionsForRefreshInterval;	// IMP=0x0000000100150394
- (id)headerForOnThisDevice;	// IMP=0x0000000100150324
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0000000100150318
- (void)refreshSettings;	// IMP=0x000000010014f884
- (id)settingsForLocalSettingsGroup;	// IMP=0x000000010014f78c
- (id)settingsForSyncedSettingsGroup;	// IMP=0x000000010014f694
- (void)setupView;	// IMP=0x000000010014e3c8
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000010014e294
- (void)viewDidLoad;	// IMP=0x000000010014e244
- (void)dealloc;	// IMP=0x000000010014e1c4
- (id)initWithPodcastUuid:(id)arg1 delegate:(id)arg2;	// IMP=0x000000010014e118
- (id)initWithPodcastUuid:(id)arg1;	// IMP=0x000000010014e108
- (id)init;	// IMP=0x000000010014e0c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
