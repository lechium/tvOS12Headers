//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

@interface TVSettingsRestrictionsViewController : TSKViewController
{
}

- (void)_updateGuardedState;	// IMP=0x000000010007b8b4
- (void)_changePasscode:(id)arg1;	// IMP=0x000000010007b3f8
- (void)_disableRestrictions;	// IMP=0x000000010007b048
- (void)_enableRestrictions;	// IMP=0x000000010007af64
- (void)_restrictionSettingsDidChange:(id)arg1;	// IMP=0x000000010007af58
- (id)_ratingLongFormatter;	// IMP=0x000000010007ae8c
- (id)_ratingFormatter;	// IMP=0x000000010007ae38
- (id)_contentFilterRegionFormatter;	// IMP=0x000000010007ad70
- (id)_yesNoFormatter;	// IMP=0x000000010007aae4
- (id)_allowRestrictFormatter;	// IMP=0x000000010007a858
- (id)_booksRatingFormatter;	// IMP=0x000000010007a650
- (id)_explicitMusicFormatter;	// IMP=0x000000010007a448
- (void)_toggleRestrictions:(id)arg1;	// IMP=0x000000010007a3d0
- (void)dealloc;	// IMP=0x000000010007a358
- (id)loadSettingGroups;	// IMP=0x0000000100077b10
- (id)initWithStyle:(long long)arg1;	// IMP=0x0000000100077920

@end
