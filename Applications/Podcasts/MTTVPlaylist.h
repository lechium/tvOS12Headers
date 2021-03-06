//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVPPlaylist.h"

@class IMPlayerManifest, NSArray;

@interface MTTVPlaylist : TVPPlaylist
{
    _Bool _dummyTrackList;	// 8 = 0x8
    _Bool _dummyTrackCreatedButNotInList;	// 9 = 0x9
    NSArray *_trackList;	// 16 = 0x10
    IMPlayerManifest *_manifest;	// 24 = 0x18
}

@property(nonatomic) _Bool dummyTrackCreatedButNotInList; // @synthesize dummyTrackCreatedButNotInList=_dummyTrackCreatedButNotInList;
@property(nonatomic) _Bool dummyTrackList; // @synthesize dummyTrackList=_dummyTrackList;
@property(retain, nonatomic) IMPlayerManifest *manifest; // @synthesize manifest=_manifest;
@property(retain, nonatomic) NSArray *trackList; // @synthesize trackList=_trackList;
- (void).cxx_destruct;	// IMP=0x000000010001fae8
- (unsigned long long)currentManifestIndex;	// IMP=0x000000010001fa24
- (void)_reloadManifest;	// IMP=0x000000010001f960
- (void)_currentItemDidChange;	// IMP=0x000000010001f95c
- (long long)repeatMode;	// IMP=0x000000010001f954
- (_Bool)supportsRepeat;	// IMP=0x000000010001f94c
- (_Bool)supportsShuffle;	// IMP=0x000000010001f944
- (_Bool)shuffleEnabled;	// IMP=0x000000010001f93c
- (id)name;	// IMP=0x000000010001f8e8
- (id)upcomingItems;	// IMP=0x000000010001f514
- (unsigned long long)activeListIndex;	// IMP=0x000000010001f4ec
@property(readonly, nonatomic) NSArray *activeList;
- (unsigned long long)count;	// IMP=0x000000010001f494
- (unsigned long long)currentIndex;	// IMP=0x000000010001f474
- (id)previousMediaItem;	// IMP=0x000000010001f420
- (id)nextMediaItem;	// IMP=0x000000010001f3cc
- (id)currentMediaItem;	// IMP=0x000000010001f308
- (_Bool)moreItemsAvailable:(long long)arg1;	// IMP=0x000000010001f280
- (void)dealloc;	// IMP=0x000000010001f208
- (id)initWithManifest:(id)arg1;	// IMP=0x000000010001f058

@end

