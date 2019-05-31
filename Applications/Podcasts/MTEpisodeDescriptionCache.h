//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTSingleton.h"

#import "NSCacheDelegate.h"

@class NSCache, NSString;

@interface MTEpisodeDescriptionCache : MTSingleton <NSCacheDelegate>
{
    NSCache *_descriptionCache;	// 8 = 0x8
    NSCache *_episodeCache;	// 16 = 0x10
}

@property(retain, nonatomic) NSCache *episodeCache; // @synthesize episodeCache=_episodeCache;
@property(retain, nonatomic) NSCache *descriptionCache; // @synthesize descriptionCache=_descriptionCache;
- (void).cxx_destruct;	// IMP=0x00000001001a0158
- (id)descriptionPrefixTextForPlayerItem:(id)arg1 options:(unsigned long long)arg2 trailingNewline:(_Bool)arg3;	// IMP=0x000000010019f8c4
- (id)metadataHeaderForPlayerItem:(id)arg1;	// IMP=0x000000010019f8b0
- (id)descriptionBodyTextForEpisode:(id)arg1 html:(_Bool)arg2 withAttributes:(id)arg3;	// IMP=0x000000010019f694
- (id)createVideoGlyphAttributedString;	// IMP=0x000000010019f5ec
- (id)descriptionFooterTextForEpisode:(id)arg1 includesSeasonEpisodeType:(_Bool)arg2 includesDuration:(_Bool)arg3 includesPlayedIfPlayed:(_Bool)arg4 hasBodyText:(_Bool)arg5 unavailableReason:(unsigned long long)arg6;	// IMP=0x000000010019e4e0
- (id)descriptionPrefixTextForEpisode:(id)arg1 options:(unsigned long long)arg2 trailingNewline:(_Bool)arg3;	// IMP=0x000000010019dcc0
- (id)descriptionTextForEpisode:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000010019da28
- (void)updateCacheForEpisode:(id)arg1;	// IMP=0x000000010019d858
- (id)descriptionKeyForOptions:(unsigned long long)arg1 unavailableReason:(unsigned long long)arg2;	// IMP=0x000000010019d7fc
- (id)descriptionCacheForEpisodeUuid:(id)arg1;	// IMP=0x000000010019d6fc
- (id)dependantPropertyKeys;	// IMP=0x000000010019d580
- (void)cache:(id)arg1 willEvictObject:(id)arg2;	// IMP=0x000000010019d1f4
- (void)invalidate;	// IMP=0x000000010019d178
- (id)metadataFooterForEpisode:(id)arg1 includingSeasonEpisodeType:(_Bool)arg2 includingDuration:(_Bool)arg3 includingPlayedIfPlayed:(_Bool)arg4;	// IMP=0x000000010019d144
- (id)metadataFooterForEpisode:(id)arg1 includingDuration:(_Bool)arg2;	// IMP=0x000000010019d128
- (id)metadataFooterForEpisode:(id)arg1;	// IMP=0x000000010019d118
- (id)metadataHeaderForEpisode:(id)arg1;	// IMP=0x000000010019d108
- (id)descriptionForEpisode:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000010019cf80
- (id)episodeDescription:(id)arg1;	// IMP=0x000000010019cf74
- (id)descriptionForEpisode:(id)arg1;	// IMP=0x000000010019ce68
- (void)dealloc;	// IMP=0x000000010019cdf0
- (id)init;	// IMP=0x000000010019cd58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
