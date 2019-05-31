//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVHJSObject.h"

#import "TVHJSMediaEntitySearchController.h"
#import "TVHKMediaEntitySearchControllerDelegate.h"

@class NSMutableArray, NSString, TVHCollectionChangesToJSCollectionChangesValueTransformer, TVHKMediaEntitySearchController, TVHKMediaEntitySearchRequest;

@interface TVHJSMediaEntitySearchController : TVHJSObject <TVHKMediaEntitySearchControllerDelegate, TVHJSMediaEntitySearchController>
{
    NSMutableArray *_jsMovies;	// 8 = 0x8
    NSMutableArray *_jsMovieRentals;	// 16 = 0x10
    NSMutableArray *_jsShows;	// 24 = 0x18
    NSMutableArray *_jsShowEpisodes;	// 32 = 0x20
    NSMutableArray *_jsMusicAlbums;	// 40 = 0x28
    NSMutableArray *_jsMusicAlbumArtists;	// 48 = 0x30
    NSMutableArray *_jsMusicSongs;	// 56 = 0x38
    NSMutableArray *_jsMusicVideos;	// 64 = 0x40
    NSMutableArray *_jsPodcasts;	// 72 = 0x48
    NSMutableArray *_jsPodcastEpisodes;	// 80 = 0x50
    NSMutableArray *_jsITunesUCourses;	// 88 = 0x58
    NSMutableArray *_jsITunesUEpisodes;	// 96 = 0x60
    NSMutableArray *_jsAudiobooks;	// 104 = 0x68
    NSMutableArray *_jsAudiobookChapters;	// 112 = 0x70
    NSMutableArray *_jsHomeVideos;	// 120 = 0x78
    TVHKMediaEntitySearchRequest *_searchRequest;	// 128 = 0x80
    TVHKMediaEntitySearchController *_wrappedFetchController;	// 136 = 0x88
    TVHCollectionChangesToJSCollectionChangesValueTransformer *_collectionChangesValueTransformer;	// 144 = 0x90
}

+ (id)create:(id)arg1;	// IMP=0x0000000100024fdc
@property(retain, nonatomic) TVHCollectionChangesToJSCollectionChangesValueTransformer *collectionChangesValueTransformer; // @synthesize collectionChangesValueTransformer=_collectionChangesValueTransformer;
@property(retain, nonatomic) TVHKMediaEntitySearchController *wrappedFetchController; // @synthesize wrappedFetchController=_wrappedFetchController;
@property(retain, nonatomic) TVHKMediaEntitySearchRequest *searchRequest; // @synthesize searchRequest=_searchRequest;
@property(retain, nonatomic, setter=setJSHomeVideos:) NSMutableArray *jsHomeVideos; // @synthesize jsHomeVideos=_jsHomeVideos;
@property(retain, nonatomic, setter=setJSAudiobookChapters:) NSMutableArray *jsAudiobookChapters; // @synthesize jsAudiobookChapters=_jsAudiobookChapters;
@property(retain, nonatomic, setter=setJSAudiobooks:) NSMutableArray *jsAudiobooks; // @synthesize jsAudiobooks=_jsAudiobooks;
@property(retain, nonatomic, setter=setJSITunesUEpisodes:) NSMutableArray *jsITunesUEpisodes; // @synthesize jsITunesUEpisodes=_jsITunesUEpisodes;
@property(retain, nonatomic, setter=setJSITunesUCourses:) NSMutableArray *jsITunesUCourses; // @synthesize jsITunesUCourses=_jsITunesUCourses;
@property(retain, nonatomic, setter=setJSPodcastEpisodes:) NSMutableArray *jsPodcastEpisodes; // @synthesize jsPodcastEpisodes=_jsPodcastEpisodes;
@property(retain, nonatomic, setter=setJSPodcasts:) NSMutableArray *jsPodcasts; // @synthesize jsPodcasts=_jsPodcasts;
@property(retain, nonatomic, setter=setJSMusicVideos:) NSMutableArray *jsMusicVideos; // @synthesize jsMusicVideos=_jsMusicVideos;
@property(retain, nonatomic, setter=setJSMusicSongs:) NSMutableArray *jsMusicSongs; // @synthesize jsMusicSongs=_jsMusicSongs;
@property(retain, nonatomic, setter=setJSMusicAlbumArtists:) NSMutableArray *jsMusicAlbumArtists; // @synthesize jsMusicAlbumArtists=_jsMusicAlbumArtists;
@property(retain, nonatomic, setter=setJSMusicAlbums:) NSMutableArray *jsMusicAlbums; // @synthesize jsMusicAlbums=_jsMusicAlbums;
@property(retain, nonatomic, setter=setJSShowEpisodes:) NSMutableArray *jsShowEpisodes; // @synthesize jsShowEpisodes=_jsShowEpisodes;
@property(retain, nonatomic, setter=setJSShows:) NSMutableArray *jsShows; // @synthesize jsShows=_jsShows;
@property(retain, nonatomic, setter=setJSMovieRentals:) NSMutableArray *jsMovieRentals; // @synthesize jsMovieRentals=_jsMovieRentals;
@property(retain, nonatomic, setter=setJSMovies:) NSMutableArray *jsMovies; // @synthesize jsMovies=_jsMovies;
- (void).cxx_destruct;	// IMP=0x0000000100026ec4
- (void)_updateJSMediaQueryResult:(id)arg1 withJSMediaEntities:(id)arg2 andChanges:(id)arg3;	// IMP=0x0000000100026b50
- (void)_updateMutableArraysWithResult:(id)arg1;	// IMP=0x00000001000265a0
- (void)_updateMutableArray:(id)arg1 withResult:(id)arg2;	// IMP=0x0000000100026310
- (void)controller:(id)arg1 searchRequest:(id)arg2 didFailWithError:(id)arg3;	// IMP=0x0000000100025ff4
- (void)controller:(id)arg1 searchRequest:(id)arg2 didCompleteWithResult:(id)arg3;	// IMP=0x0000000100025290
- (void)resume;	// IMP=0x0000000100025250
- (void)pause;	// IMP=0x0000000100025210
@property(copy, nonatomic) NSString *searchText;
- (id)initWithMediaServer:(id)arg1 appContext:(id)arg2;	// IMP=0x0000000100024bf0
- (id)initWithAppContext:(id)arg1;	// IMP=0x0000000100024b68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
