//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SVSStarkCancelButtonGatekeeperHeaderView.h"

@class AVExternalDevice, UIButton, UILabel;

@interface SVSStarkMapsGatekeeperHeaderView : SVSStarkCancelButtonGatekeeperHeaderView
{
    UILabel *_titleLabel;	// 32 = 0x20
    UIButton *_keyboardButton;	// 40 = 0x28
    AVExternalDevice *_externalDevice;	// 48 = 0x30
}

@property(readonly, nonatomic, getter=_externalDevice) AVExternalDevice *externalDevice; // @synthesize externalDevice=_externalDevice;
@property(readonly, nonatomic, getter=_keyboardButton) UIButton *keyboardButton; // @synthesize keyboardButton=_keyboardButton;
@property(readonly, nonatomic, getter=_titleLabel) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;	// IMP=0x000000010003cb20
- (void)_keyboardButtonTapped:(id)arg1;	// IMP=0x000000010003ca40
- (void)_keyboardButtonPressed:(id)arg1;	// IMP=0x000000010003c990
- (void)_cancelButtonTapped:(id)arg1;	// IMP=0x000000010003c8fc
- (void)layoutSubviews;	// IMP=0x000000010003c620
- (void)_updateLimitedUI;	// IMP=0x000000010003c3b8
- (void)_addKeyboardGestureRecognizers;	// IMP=0x000000010003c1c8
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010003c11c
- (void)_updateLimitedUIOnMainThread:(id)arg1;	// IMP=0x000000010003c100
- (_Bool)limitedUIEnabled;	// IMP=0x000000010003c040
- (id)initWithRequestOptions:(id)arg1;	// IMP=0x000000010003be80

@end

