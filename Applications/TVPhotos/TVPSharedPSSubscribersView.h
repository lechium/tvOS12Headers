//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TVPTableViewDelegate.h"
#import "UITableViewDataSource.h"

@class NSArray, NSString, TVPTableView, UIButton, UILabel;

@interface TVPSharedPSSubscribersView : UIView <UITableViewDataSource, TVPTableViewDelegate>
{
    NSString *_title;	// 8 = 0x8
    NSString *_subtitle;	// 16 = 0x10
    NSString *_actionButtonMessage;	// 24 = 0x18
    NSArray *_subscribers;	// 32 = 0x20
    UIButton *_actionButton;	// 40 = 0x28
    UILabel *_titleLabel;	// 48 = 0x30
    UILabel *_subtitleLabel;	// 56 = 0x38
    UIView *_dividerView;	// 64 = 0x40
    UIView *_subscribersView;	// 72 = 0x48
    UILabel *_subscribersLabel;	// 80 = 0x50
    TVPTableView *_subscribersListView;	// 88 = 0x58
}

@property(retain, nonatomic) TVPTableView *subscribersListView; // @synthesize subscribersListView=_subscribersListView;
@property(retain, nonatomic) UILabel *subscribersLabel; // @synthesize subscribersLabel=_subscribersLabel;
@property(retain, nonatomic) UIView *subscribersView; // @synthesize subscribersView=_subscribersView;
@property(retain, nonatomic) UIView *dividerView; // @synthesize dividerView=_dividerView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) NSArray *subscribers; // @synthesize subscribers=_subscribers;
@property(retain, nonatomic) NSString *actionButtonMessage; // @synthesize actionButtonMessage=_actionButtonMessage;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;	// IMP=0x0000000100030578
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001000303ec
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000010003024c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000300a8
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100030090
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010002febc
- (void)layoutSubviews;	// IMP=0x000000010002f9fc
- (id)preferredFocusEnvironments;	// IMP=0x000000010002f838

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
