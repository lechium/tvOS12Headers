//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

@class UIViewController<TSKSettingItemEditingController>;

@interface TVSettingsAirPlayAccessViewController : TSKViewController
{
    UIViewController<TSKSettingItemEditingController> *_passwordViewController;	// 8 = 0x8
}

@property(nonatomic) __weak UIViewController<TSKSettingItemEditingController> *passwordViewController; // @synthesize passwordViewController=_passwordViewController;
- (void).cxx_destruct;	// IMP=0x00000001000c969c
- (void)_setAirPlayPassword:(id)arg1;	// IMP=0x00000001000c9244
- (void)editingController:(id)arg1 didProvideValue:(id)arg2 forSettingItem:(id)arg3;	// IMP=0x00000001000c9164
- (id)loadSettingGroups;	// IMP=0x00000001000c828c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000c81d4
- (void)dealloc;	// IMP=0x00000001000c814c
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000001000c80b8

@end

