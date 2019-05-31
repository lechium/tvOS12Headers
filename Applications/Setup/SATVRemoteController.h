//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SATVStepViewController.h"

#import "SATVActionStep.h"

@class NSArray, NSDictionary, NSString, NSTimer, SATVCyclingFooterView, SATVCyclingHeaderView, UIActivityIndicatorView, UIView;

@interface SATVRemoteController : SATVStepViewController <SATVActionStep>
{
    _Bool _proximityPairingActive;	// 8 = 0x8
    _Bool _bluetoothScanningActivate;	// 9 = 0x9
    _Bool _ignoreDisplayConnection;	// 10 = 0xa
    CDUnknownBlockType completionHandler;	// 16 = 0x10
    SATVCyclingHeaderView *_bannerView;	// 24 = 0x18
    SATVCyclingFooterView *_footerView;	// 32 = 0x20
    UIActivityIndicatorView *_activityIndicator;	// 40 = 0x28
    UIView *_activityIndicatorContainer;	// 48 = 0x30
    struct __IOHIDServiceClient *_appleTVIRService;	// 56 = 0x38
    struct __IOHIDEventSystemClient *_remoteHIDClient;	// 64 = 0x40
    NSDictionary *_matchingDict;	// 72 = 0x48
    NSArray *_sortedSupportedLanguages;	// 80 = 0x50
    NSTimer *_pairingHelpTimer;	// 88 = 0x58
}

+ (id)stableKey;	// IMP=0x0000000100072e9c
@property(nonatomic) _Bool ignoreDisplayConnection; // @synthesize ignoreDisplayConnection=_ignoreDisplayConnection;
@property(retain, nonatomic) NSTimer *pairingHelpTimer; // @synthesize pairingHelpTimer=_pairingHelpTimer;
@property(retain, nonatomic) NSArray *sortedSupportedLanguages; // @synthesize sortedSupportedLanguages=_sortedSupportedLanguages;
@property(nonatomic) _Bool bluetoothScanningActivate; // @synthesize bluetoothScanningActivate=_bluetoothScanningActivate;
@property(nonatomic) _Bool proximityPairingActive; // @synthesize proximityPairingActive=_proximityPairingActive;
@property(retain, nonatomic) NSDictionary *matchingDict; // @synthesize matchingDict=_matchingDict;
@property(nonatomic) struct __IOHIDEventSystemClient *remoteHIDClient; // @synthesize remoteHIDClient=_remoteHIDClient;
@property(nonatomic) struct __IOHIDServiceClient *appleTVIRService; // @synthesize appleTVIRService=_appleTVIRService;
@property(retain, nonatomic) UIView *activityIndicatorContainer; // @synthesize activityIndicatorContainer=_activityIndicatorContainer;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) SATVCyclingFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) SATVCyclingHeaderView *bannerView; // @synthesize bannerView=_bannerView;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler;
- (void).cxx_destruct;	// IMP=0x0000000100076070
- (_Bool)_performStealthStartup;	// IMP=0x0000000100075d6c
- (void)_startClickAnimation;	// IMP=0x0000000100075c14
- (void)_processHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000100075abc
- (void)_destroyRemoteHIDClient;	// IMP=0x00000001000759cc
- (void)_setupRemoteHIDClient;	// IMP=0x00000001000757b8
- (void)_bluetoothRemoteDidConnect;	// IMP=0x0000000100075710
- (void)_stopBluetoothScanning;	// IMP=0x0000000100075600
- (void)_handlePeripheralStateChange:(id)arg1;	// IMP=0x0000000100075218
- (void)_stopProximityPairing;	// IMP=0x0000000100075030
- (void)_startProximityPairing;	// IMP=0x0000000100074cf8
- (_Bool)_isDisplayAvailable;	// IMP=0x0000000100074c5c
- (void)_animateAppearance;	// IMP=0x00000001000749b4
- (void)_showPairingSpinner:(_Bool)arg1;	// IMP=0x000000010007446c
- (void)_onSelectRecognizer:(id)arg1;	// IMP=0x00000001000743d8
- (void)_controllerDone;	// IMP=0x000000010007411c
- (void)_showPairingHelp:(id)arg1;	// IMP=0x00000001000740a8
- (void)autoAdvance;	// IMP=0x0000000100074000
- (void)addConstraintsToBannerView:(id)arg1;	// IMP=0x0000000100073d9c
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100073c2c
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100073b84
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100073af4
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000736bc
- (void)tvs_bindDisplayModeToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;	// IMP=0x00000001000735c8
- (id)DisplayMode;	// IMP=0x0000000100073574
- (void)viewDidLoad;	// IMP=0x0000000100072fe4
- (void)dealloc;	// IMP=0x0000000100072f40
- (id)init;	// IMP=0x0000000100072ec8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isConfigured;
@property(copy, nonatomic) CDUnknownBlockType menuHandler;
@property(readonly) Class superclass;

@end

