//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAlertController.h"

@class HSCloudClient, MPModelGenericObject, MPModelLibraryRequest, MPModelPlaylist, NSArray, UIActivityIndicatorView;

@interface TVMusicAddToPlaylistViewController : UIAlertController
{
    _Bool _alertControllerIsConfigured;	// 8 = 0x8
    HSCloudClient *_hsCloudClient;	// 16 = 0x10
    UIActivityIndicatorView *_spinner;	// 24 = 0x18
    MPModelLibraryRequest *_mpRequest;	// 32 = 0x20
    MPModelPlaylist *_folderPlaylist;	// 40 = 0x28
    MPModelGenericObject *_objectToAdd;	// 48 = 0x30
    NSArray *_collectionTracks;	// 56 = 0x38
}

+ (void)_presentAddToPlaylistBehaviorDialogFromViewController:(id)arg1 forSingleTrackAddition:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010001f4c4
@property(retain, nonatomic) NSArray *collectionTracks; // @synthesize collectionTracks=_collectionTracks;
@property(retain, nonatomic) MPModelGenericObject *objectToAdd; // @synthesize objectToAdd=_objectToAdd;
@property(retain, nonatomic) MPModelPlaylist *folderPlaylist; // @synthesize folderPlaylist=_folderPlaylist;
@property(retain, nonatomic) MPModelLibraryRequest *mpRequest; // @synthesize mpRequest=_mpRequest;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
- (void).cxx_destruct;	// IMP=0x000000010001f9d8
- (_Bool)_isTopLevelMenu;	// IMP=0x000000010001f488
- (void)_addToNewPlaylistNamed:(id)arg1 parentPlaylist:(id)arg2;	// IMP=0x000000010001f09c
- (void)_configureViewWithMPResponse:(id)arg1;	// IMP=0x000000010001e8e0
- (void)_presentViewController:(id)arg1;	// IMP=0x000000010001e8c4
- (id)hsCloudClient;	// IMP=0x000000010001e864
- (void)_getSongsForAlbum:(id)arg1;	// IMP=0x000000010001e598
- (void)_getSongsForPlaylist:(id)arg1;	// IMP=0x000000010001e2cc
- (id)_nameOfObjectToAdd;	// IMP=0x000000010001e144
- (void)_addToPlaylist:(id)arg1 objectToAdd:(id)arg2 songsToAdd:(id)arg3;	// IMP=0x000000010001d3d4
- (void)_addToPlaylist:(id)arg1 objectToAdd:(id)arg2;	// IMP=0x000000010001d200
- (void)_addToPlaylist:(id)arg1;	// IMP=0x000000010001ccf8
- (void)_addToPlaylist:(id)arg1 requestConfirmation:(_Bool)arg2;	// IMP=0x000000010001c824
- (void)didSelectPlaylist:(id)arg1;	// IMP=0x000000010001c73c
- (void)viewWillLayoutSubviews;	// IMP=0x000000010001c5b8
- (void)viewDidLoad;	// IMP=0x000000010001c140
- (id)initWithObjectToAdd:(id)arg1;	// IMP=0x000000010001c014

@end
