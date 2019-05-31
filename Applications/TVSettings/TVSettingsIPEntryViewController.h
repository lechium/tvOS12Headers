//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TVSettingsIPEntryViewDelegate.h"

@class NSString, TVSettingsHeaderView, TVSettingsIPEntryView, UILabel;

@interface TVSettingsIPEntryViewController : UIViewController <TVSettingsIPEntryViewDelegate>
{
    TVSettingsHeaderView *_titleView;	// 8 = 0x8
    UILabel *_promptLabel;	// 16 = 0x10
    TVSettingsIPEntryView *_ipEntryView;	// 24 = 0x18
    NSString *_prompt;	// 32 = 0x20
    id <TVSettingsIPEntryViewControllerDelegate> _delegate;	// 40 = 0x28
}

@property(nonatomic) __weak id <TVSettingsIPEntryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
- (void).cxx_destruct;	// IMP=0x00000001000bc96c
- (id)_ipEntryView;	// IMP=0x00000001000bc8b0
- (void)ipEntryViewDidFinishEditing:(id)arg1;	// IMP=0x00000001000bc804
@property(copy, nonatomic) NSString *ipAddress;
- (void)setTitle:(id)arg1;	// IMP=0x00000001000bc678
- (id)preferredFocusEnvironments;	// IMP=0x00000001000bc5a4
- (_Bool)becomeFirstResponder;	// IMP=0x00000001000bc58c
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000bc39c
- (void)loadView;	// IMP=0x00000001000bc0f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
