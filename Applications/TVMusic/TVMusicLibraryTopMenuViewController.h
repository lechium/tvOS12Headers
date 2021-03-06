//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVMusicTableViewController.h"

@class MPModelResponse, NSArray, NSDictionary, NSMutableDictionary, TVMusicParadeViewController;

@interface TVMusicLibraryTopMenuViewController : TVMusicTableViewController
{
    unsigned long long _viewControllerUIContext;	// 8 = 0x8
    _Bool _menuSelectionIsDisplayed;	// 16 = 0x10
    long long _currentPreviewType;	// 24 = 0x18
    NSMutableDictionary *_previewArtworkCatalogMap;	// 32 = 0x20
    long long _currentMenuIndex;	// 40 = 0x28
    NSDictionary *_mapMenuItemToName;	// 48 = 0x30
    MPModelResponse *_currentPreviewLibraryResponse;	// 56 = 0x38
    TVMusicParadeViewController *_previewViewController;	// 64 = 0x40
    _Bool _didSetPreviewArtwork;	// 72 = 0x48
    _Bool _artworkNeedsUpdate;	// 73 = 0x49
    long long _lastSetMenuIndex;	// 80 = 0x50
    NSArray *_menuItems;	// 88 = 0x58
    unsigned long long _currentMenuContext;	// 96 = 0x60
}

+ (id)_shuffleArray:(id)arg1 maxCount:(long long)arg2;	// IMP=0x00000001000b3cfc
+ (id)currentTopMenu;	// IMP=0x00000001000b1764
@property(readonly, nonatomic) unsigned long long currentMenuContext; // @synthesize currentMenuContext=_currentMenuContext;
@property(readonly, copy, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
- (void).cxx_destruct;	// IMP=0x00000001000b42f4
- (void)_libraryDidUpdate:(id)arg1;	// IMP=0x00000001000b40bc
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000b40b0
- (void)_updateArtworkIfNeeded;	// IMP=0x00000001000b4030
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000b3e40
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001000b3df4
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000001000b3dec
- (void)_setColorsForCell:(id)arg1 indexPath:(id)arg2 isFocused:(_Bool)arg3 withAnimationCoordinator:(id)arg4;	// IMP=0x00000001000b39cc
- (id)_textColor;	// IMP=0x00000001000b3938
- (void)_setHeadingSizeWithStartingSize:(double)arg1 minimumSize:(double)arg2;	// IMP=0x00000001000b3548
- (void)_setHeadingAttributes;	// IMP=0x00000001000b3484
- (unsigned long long)_menuItemForRowIndex:(long long)arg1;	// IMP=0x00000001000b3408
- (id)_artworkCatalogForMPObject:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00000001000b3228
- (void)_setPreviewArtworkForPreviewType:(long long)arg1;	// IMP=0x00000001000b2b10
- (void)_setPreviewArtworkForBrowseSectionRowAtIndex:(long long)arg1;	// IMP=0x00000001000b29a8
- (void)_setPreviewArtworkForMenuIndexNumber:(id)arg1;	// IMP=0x00000001000b296c
- (long long)_previewTypeForMenuItem:(unsigned long long)arg1;	// IMP=0x00000001000b2948
- (id)_noResultsViewWithTitle:(id)arg1 subtitle:(id)arg2;	// IMP=0x00000001000b250c
- (id)_viewControllerForBrowseSectionRowAtIndex:(long long)arg1;	// IMP=0x00000001000b22b8
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001000b214c
- (id)_nameForMenuItem:(unsigned long long)arg1;	// IMP=0x00000001000b1df8
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000b1d38
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000001000b1cac
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00000001000b1970
- (void)didReceiveMemoryWarning;	// IMP=0x00000001000b1958
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000001000b18bc
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000b1820
- (void)viewDidLoad;	// IMP=0x00000001000b1770
- (void)dealloc;	// IMP=0x00000001000b16ec
- (id)initWithMenuItems:(id)arg1;	// IMP=0x00000001000b1558

@end

