//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

#import "TVSettingsScreenSaverRadioSettingGroupDelegate.h"

@class NSString, TVPhotoCollectionGroup, TVSettingsPhotoCollectionPreviewViewController, UIVisualEffectView;

@interface TVSettingsScreenSaverPhotoCollectionsViewController : TSKViewController <TVSettingsScreenSaverRadioSettingGroupDelegate>
{
    UIVisualEffectView *_backdropView;	// 8 = 0x8
    TVPhotoCollectionGroup *_photoCollectionsGroup;	// 16 = 0x10
    TVSettingsPhotoCollectionPreviewViewController *_photoPreviewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000b5cdc
- (void)_updatePhotoCollectionWithIndexPath:(id)arg1;	// IMP=0x00000001000b5bc4
- (id)_photoCollectionTitleFormatter;	// IMP=0x00000001000b5a40
- (void)radioSettingsGroup:(id)arg1 didSelectItem:(id)arg2;	// IMP=0x00000001000b5970
- (_Bool)hasFullscreenPreview;	// IMP=0x00000001000b5968
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x00000001000b58cc
- (id)title;	// IMP=0x00000001000b58c4
- (id)loadSettingGroups;	// IMP=0x00000001000b53d0
- (void)viewDidLoad;	// IMP=0x00000001000b4c00
- (id)initWithPhotoCollectionGroup:(id)arg1;	// IMP=0x00000001000b4b0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
