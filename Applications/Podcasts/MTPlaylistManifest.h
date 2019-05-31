//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTPredicateManifest.h"

@class NSString;

@interface MTPlaylistManifest : MTPredicateManifest
{
    NSString *_playlistUuid;	// 8 = 0x8
}

+ (id)activityTypeSuffix;	// IMP=0x000000010019b7b8
+ (id)createManifestForActivity:(id)arg1;	// IMP=0x000000010019b6bc
@property(readonly, nonatomic) NSString *playlistUuid; // @synthesize playlistUuid=_playlistUuid;
- (void).cxx_destruct;	// IMP=0x000000010019bc44
- (void)_propertyDidChange;	// IMP=0x000000010019bbf0
- (_Bool)_updatePlaylistEpisodes;	// IMP=0x000000010019b830
- (void)_load;	// IMP=0x000000010019b7e4
- (id)activitySpotlightIdentifier;	// IMP=0x000000010019b648
- (id)initWithPlaylistUuid:(id)arg1 initialEpisodeUuid:(id)arg2;	// IMP=0x000000010019b340

@end
