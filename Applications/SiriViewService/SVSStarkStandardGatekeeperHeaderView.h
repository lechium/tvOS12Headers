//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SVSStarkGatekeeperHeaderView.h"

@class SVSStarkGatekeeperButton, UILabel;

@interface SVSStarkStandardGatekeeperHeaderView : SVSStarkGatekeeperHeaderView
{
    UILabel *_appNameLabel;	// 24 = 0x18
    SVSStarkGatekeeperButton *_dismissalButton;	// 32 = 0x20
}

@property(readonly, nonatomic, getter=_dismissalButton) SVSStarkGatekeeperButton *dismissalButton; // @synthesize dismissalButton=_dismissalButton;
@property(readonly, nonatomic, getter=_appNameLabel) UILabel *appNameLabel; // @synthesize appNameLabel=_appNameLabel;
- (void).cxx_destruct;	// IMP=0x000000010003be40
- (id)preferredFocusEnvironments;	// IMP=0x000000010003bd98
- (void)layoutSubviews;	// IMP=0x000000010003ba90
- (id)_starkGatekeeperDismissalTextForBundleId:(id)arg1;	// IMP=0x000000010003b8c0
- (id)_iconImageForBundleIdentifier:(id)arg1;	// IMP=0x000000010003b814
- (void)_updateForAppBundleIdentifier;	// IMP=0x000000010003b640
- (id)initWithRequestOptions:(id)arg1;	// IMP=0x000000010003b410

@end
