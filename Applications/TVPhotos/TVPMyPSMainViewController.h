//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVPPhotoLibraryFeedCollectionViewController.h"

#import "TVPPhotoLibraryOneUpViewControllerDelegate.h"

@class NSString;

@interface TVPMyPSMainViewController : TVPPhotoLibraryFeedCollectionViewController <TVPPhotoLibraryOneUpViewControllerDelegate>
{
    long long _selectedItemIndex;	// 8 = 0x8
}

@property(nonatomic) long long selectedItemIndex; // @synthesize selectedItemIndex=_selectedItemIndex;
- (void)_updateFeedInfoAndUI;	// IMP=0x000000010004762c
- (id)_feedCollection;	// IMP=0x00000001000475a8
- (id)_photoStreamHeaderSubtitle;	// IMP=0x0000000100047534
- (id)_photoStreamHeaderTitle;	// IMP=0x00000001000474c4
- (void)_onSelectSlideshowButton:(id)arg1;	// IMP=0x000000010004741c
- (void)_onSelectScreenSaverButton:(id)arg1;	// IMP=0x00000001000472a0
- (void)photoLibraryOneUpControllerWillPop:(id)arg1;	// IMP=0x0000000100047250
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100046fe4
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000100046db0
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100046a18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

