//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TVPScreenSaverPickerViewDelegate.h"

@class NSString, TVPPhotoCollectionPreviewViewController, TVPScreenSaverPickerView;

@interface TVPScreenSaverViewController : UIViewController <TVPScreenSaverPickerViewDelegate>
{
    TVPPhotoCollectionPreviewViewController *_previewSlideshow;	// 8 = 0x8
    TVPScreenSaverPickerView *_pickerView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010007b614
- (void)highlightedAlbumChanged;	// IMP=0x000000010007b1c0
- (void)viewDidLoad;	// IMP=0x000000010007ae64
- (id)preferredFocusEnvironments;	// IMP=0x000000010007add4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
