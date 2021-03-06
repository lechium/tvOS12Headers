//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SATVTableViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, TVSEthernetInterface;

@interface SATVNetworkConfigurationWizardViewController : SATVTableViewController <UITableViewDataSource, UITableViewDelegate>
{
    id <SATVNetworkConfigurationWizardDelegate> _wizardDelegate;	// 8 = 0x8
    TVSEthernetInterface *_interface;	// 16 = 0x10
    unsigned long long _mode;	// 24 = 0x18
}

@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) TVSEthernetInterface *interface; // @synthesize interface=_interface;
@property(nonatomic) __weak id <SATVNetworkConfigurationWizardDelegate> wizardDelegate; // @synthesize wizardDelegate=_wizardDelegate;
- (void).cxx_destruct;	// IMP=0x0000000100051728
- (void)_beginWizardFlowForOption:(unsigned long long)arg1;	// IMP=0x0000000100051470
- (void)_beginWizardFlowFromCurrentMode;	// IMP=0x00000001000513e0
- (void)_wizardCanceled;	// IMP=0x0000000100051398
- (void)_wizardComplete;	// IMP=0x0000000100051350
- (void)_didSelectMenu;	// IMP=0x0000000100051344
- (void)_updateHeaderForMode;	// IMP=0x0000000100051074
- (void)_disableDNS;	// IMP=0x0000000100051030
- (void)_disableDHCP;	// IMP=0x0000000100050fd8
- (void)_enableDHCP;	// IMP=0x0000000100050e64
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100050ddc
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100050dd0
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100050dc8
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100050dc0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100050bb0
- (void)loadView;	// IMP=0x0000000100050900
- (id)initWithInitialMode:(unsigned long long)arg1 networkInterface:(id)arg2;	// IMP=0x0000000100050870

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

