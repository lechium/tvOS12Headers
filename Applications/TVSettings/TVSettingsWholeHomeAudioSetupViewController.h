//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

@class NSArray, TVSiCloudAccountManager, UIActivityIndicatorView, UIImageView, UILabel;

@interface TVSettingsWholeHomeAudioSetupViewController : TSKViewController
{
    id <TVSettingsWholeHomeAudioSetupViewControllerDelegate> _delegate;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_bodyLabel;	// 24 = 0x18
    UILabel *_footerLabel;	// 32 = 0x20
    UIImageView *_imageView;	// 40 = 0x28
    UIActivityIndicatorView *_spinnerView;	// 48 = 0x30
    NSArray *_constraints;	// 56 = 0x38
    TVSiCloudAccountManager *_accountManager;	// 64 = 0x40
    long long _lastHomeConfigurationState;	// 72 = 0x48
}

@property(nonatomic) long long lastHomeConfigurationState; // @synthesize lastHomeConfigurationState=_lastHomeConfigurationState;
@property(readonly, nonatomic) TVSiCloudAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(readonly, copy, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(readonly, nonatomic) UIActivityIndicatorView *spinnerView; // @synthesize spinnerView=_spinnerView;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(readonly, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <TVSettingsWholeHomeAudioSetupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001000c7f2c
- (void)_updateAccount:(id)arg1 error:(id)arg2;	// IMP=0x00000001000c7aac
- (void)_updateActivityIndicator:(_Bool)arg1;	// IMP=0x00000001000c7a2c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000c7944
- (void)_handleHomeConfigurationStateChange;	// IMP=0x00000001000c75a4
- (void)_handleConfigurationInProgressChange;	// IMP=0x00000001000c71bc
- (void)_abortWaitingForConfigurationStateChange;	// IMP=0x00000001000c70fc
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x00000001000c70f4
- (void)viewDidLoad;	// IMP=0x00000001000c5ca4
- (id)footerColor;	// IMP=0x00000001000c5b4c
- (id)textColor;	// IMP=0x00000001000c59fc
- (id)titleTextColor;	// IMP=0x00000001000c58a8
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000c57dc
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000c5650
- (void)dealloc;	// IMP=0x00000001000c559c
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000001000c54a0

@end
