//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVHJSObject.h"

#import "TVHJSMediaEntityFetchRequest.h"

@class TVHKMediaEntityFetchRequest;

@interface TVHJSMediaEntityFetchRequest : TVHJSObject <TVHJSMediaEntityFetchRequest>
{
    TVHKMediaEntityFetchRequest *_wrappedRequest;	// 8 = 0x8
}

+ (id)_mediaCategoryTypesForMediaCategoryTypeStrings:(id)arg1;	// IMP=0x0000000100018a94
+ (id)_fetchRequestWithRequest:(id)arg1;	// IMP=0x00000001000189f8
+ (id)paradeMediaEntitiesWithMediaCategoryType:(id)arg1:(unsigned long long)arg2;	// IMP=0x000000010001890c
+ (id)playlistItemsFetchRequestWithPlaylistIdentifier:(id)arg1;	// IMP=0x0000000100018870
+ (id)playlistItemsFetchRequestWithPlaylist:(id)arg1;	// IMP=0x00000001000187d4
+ (id)playlistsFetchRequest:(id)arg1:(id)arg2:(id)arg3;	// IMP=0x00000001000184bc
+ (id)photoItemsFetchRequest;	// IMP=0x0000000100018454
+ (id)musicVideosFetchRequest;	// IMP=0x00000001000183ec
+ (id)musicSongsFetchRequest;	// IMP=0x0000000100018384
+ (id)musicPlaylistsFetchRequest;	// IMP=0x000000010001831c
+ (id)musicItemFetchRequestWithIdentifier:(id)arg1;	// IMP=0x0000000100018280
+ (id)musicItemsFetchRequestWithComposer:(id)arg1;	// IMP=0x00000001000181e4
+ (id)musicItemsFetchRequestWithGenre:(id)arg1;	// IMP=0x0000000100018148
+ (id)musicItemsFetchRequestWithGeniusMix:(id)arg1;	// IMP=0x00000001000180ac
+ (id)musicItemsFetchRequestWithAlbumArtistIdentifier:(id)arg1;	// IMP=0x0000000100018010
+ (id)musicItemsFetchRequestWithAlbumArtist:(id)arg1;	// IMP=0x0000000100017f70
+ (id)musicItemsFetchRequestWithAlbumIdentifier:(id)arg1;	// IMP=0x0000000100017ed4
+ (id)musicItemsFetchRequestWithAlbum:(id)arg1;	// IMP=0x0000000100017e38
+ (id)musicItemsFetchRequest;	// IMP=0x0000000100017dd0
+ (id)musicGeniusMixPlaylistsFetchRequest;	// IMP=0x0000000100017d68
+ (id)musicGenresFetchRequest;	// IMP=0x0000000100017d00
+ (id)musicComposersFetchRequest;	// IMP=0x0000000100017c98
+ (id)musicCompilationAlbumsFetchRequest;	// IMP=0x0000000100017c30
+ (id)musicAlbumArtistFetchRequestWithIdentifier:(id)arg1;	// IMP=0x0000000100017b94
+ (id)musicAlbumArtistsFetchRequest;	// IMP=0x0000000100017b2c
+ (id)musicAlbumFetchRequestWithIdentifier:(id)arg1;	// IMP=0x0000000100017a90
+ (id)musicAlbumsFetchRequestWithGenre:(id)arg1;	// IMP=0x00000001000179f4
+ (id)musicAlbumsFetchRequestWithComposer:(id)arg1;	// IMP=0x0000000100017958
+ (id)musicAlbumsFetchRequestWithAlbumArtist:(id)arg1;	// IMP=0x00000001000178bc
+ (id)musicAlbumsFetchRequest;	// IMP=0x0000000100017854
+ (id)unplayedITunesUEpisodesFetchRequest;	// IMP=0x00000001000177ec
+ (id)iTunesUEpisodeFetchRequestWithIdentifier:(id)arg1;	// IMP=0x0000000100017750
+ (id)iTunesUEpisodesFetchRequestWithCourseIdentifier:(id)arg1;	// IMP=0x00000001000176b4
+ (id)iTunesUEpisodesFetchRequestWithCourse:(id)arg1;	// IMP=0x0000000100017618
+ (id)iTunesUCourseFetchRequestWithIdentifier:(id)arg1;	// IMP=0x000000010001757c
+ (id)iTunesUCoursesFetchRequest;	// IMP=0x0000000100017514
+ (id)unplayedPodcastEpisodesFetchRequest;	// IMP=0x00000001000174ac
+ (id)podcastEpisodeFetchRequestWithIdentifier:(id)arg1;	// IMP=0x0000000100017410
+ (id)podcastEpisodesFetchRequestWithPodcastIdentifier:(id)arg1;	// IMP=0x0000000100017374
+ (id)podcastEpisodesFetchRequestWithPodcast:(id)arg1;	// IMP=0x00000001000172d8
+ (id)podcastFetchRequestWithIdentifier:(id)arg1;	// IMP=0x000000010001723c
+ (id)podcastsFetchRequest;	// IMP=0x00000001000171d4
+ (id)unplayedAudiobookChaptersFetchRequest;	// IMP=0x000000010001716c
+ (id)audiobookChapterFetchRequestWithIdentifier:(id)arg1;	// IMP=0x00000001000170d0
+ (id)audiobookChaptersFetchRequestWithAudiobookIdentifier:(id)arg1;	// IMP=0x0000000100017034
+ (id)audiobookChaptersFetchRequestWithAudiobook:(id)arg1;	// IMP=0x0000000100016f98
+ (id)audiobookFetchRequestWithIdentifier:(id)arg1;	// IMP=0x0000000100016efc
+ (id)audiobooksFetchRequest;	// IMP=0x0000000100016e94
+ (id)unplayedShowEpisodesFetchRequest;	// IMP=0x0000000100016e2c
+ (id)showEpisodeFetchRequestWithIdentifier:(id)arg1;	// IMP=0x0000000100016d90
+ (id)showEpisodesFetchRequestWithSeason:(id)arg1;	// IMP=0x0000000100016cf4
+ (id)showSeasonsFetchRequestWithShow:(id)arg1;	// IMP=0x0000000100016c58
+ (id)showFetchRequestWithIdentifier:(id)arg1;	// IMP=0x0000000100016bbc
+ (id)showsFetchRequest;	// IMP=0x0000000100016b54
+ (id)movieRentalFetchRequestWithIdentifier:(id)arg1;	// IMP=0x0000000100016ab8
+ (id)movieRentalsFetchRequest;	// IMP=0x0000000100016a50
+ (id)movieFetchRequestWithIdentifier:(id)arg1;	// IMP=0x00000001000169b4
+ (id)moviesFetchRequest;	// IMP=0x000000010001694c
+ (id)homeVideoFetchRequestWithIdentifier:(id)arg1;	// IMP=0x00000001000168b0
+ (id)homeVideosFetchRequest;	// IMP=0x0000000100016848
@property(retain, nonatomic) TVHKMediaEntityFetchRequest *wrappedRequest; // @synthesize wrappedRequest=_wrappedRequest;
- (void).cxx_destruct;	// IMP=0x0000000100018c70
- (id)initWithMediaEntityFetchRequest:(id)arg1 appContext:(id)arg2;	// IMP=0x00000001000167c0
- (id)initWithAppContext:(id)arg1;	// IMP=0x0000000100016738

@end

