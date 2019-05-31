//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PHPhotoLibraryChangeObserver.h"

@class NSArray, NSString, PHAssetCollection, PLCloudSharedAlbum, TVPSharedPSSubscribersView, UITapGestureRecognizer;

@interface TVPSharedPSSubscriberListViewController : UIViewController <PHPhotoLibraryChangeObserver>
{
    int _buttonIdentifier;	// 8 = 0x8
    PHAssetCollection *_cloudSharedAlbum;	// 16 = 0x10
    UITapGestureRecognizer *_menuGestureRecognizer;	// 24 = 0x18
    TVPSharedPSSubscribersView *_subscribersView;	// 32 = 0x20
    NSArray *_subscribersList;	// 40 = 0x28
    PLCloudSharedAlbum *_pl_cloudSharedAlbum;	// 48 = 0x30
}

+ (id)_sharedAlbumSubscribersFromAlbum:(id)arg1;	// IMP=0x0000000100043204
@property(retain, nonatomic) PLCloudSharedAlbum *pl_cloudSharedAlbum; // @synthesize pl_cloudSharedAlbum=_pl_cloudSharedAlbum;
@property(nonatomic) int buttonIdentifier; // @synthesize buttonIdentifier=_buttonIdentifier;
@property(retain, nonatomic) NSArray *subscribersList; // @synthesize subscribersList=_subscribersList;
@property(retain, nonatomic) TVPSharedPSSubscribersView *subscribersView; // @synthesize subscribersView=_subscribersView;
@property(retain, nonatomic) UITapGestureRecognizer *menuGestureRecognizer; // @synthesize menuGestureRecognizer=_menuGestureRecognizer;
@property(retain, nonatomic) PHAssetCollection *cloudSharedAlbum; // @synthesize cloudSharedAlbum=_cloudSharedAlbum;
- (void).cxx_destruct;	// IMP=0x00000001000434fc
- (void)_onSelectActionButton:(id)arg1;	// IMP=0x0000000100042d2c
- (void)photoLibraryDidChange:(id)arg1;	// IMP=0x0000000100042ae0
- (struct CGSize)formSize;	// IMP=0x0000000100042acc
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000429b4
- (void)viewDidLoad;	// IMP=0x0000000100042544
- (void)setMenuGestureRcognizer:(id)arg1;	// IMP=0x0000000100042430

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
