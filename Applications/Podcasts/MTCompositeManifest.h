//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTPlayerManifest.h"

@interface MTCompositeManifest : MTPlayerManifest
{
    _Bool _isPlayingFromUpNext;	// 8 = 0x8
    MTPlayerManifest *_currentManifest;	// 16 = 0x10
    MTPlayerManifest *_upNextManifest;	// 24 = 0x18
    MTPlayerManifest *_userManifest;	// 32 = 0x20
}

@property(retain, nonatomic) MTPlayerManifest *userManifest; // @synthesize userManifest=_userManifest;
@property(retain, nonatomic) MTPlayerManifest *upNextManifest; // @synthesize upNextManifest=_upNextManifest;
@property(readonly, nonatomic) _Bool isPlayingFromUpNext; // @synthesize isPlayingFromUpNext=_isPlayingFromUpNext;
@property(retain, nonatomic) MTPlayerManifest *currentManifest; // @synthesize currentManifest=_currentManifest;
- (void).cxx_destruct;	// IMP=0x00000001001c550c
- (id)metricsAdditionalData;	// IMP=0x00000001001c543c
- (id)metricsContentIdentifier;	// IMP=0x00000001001c53e8
- (void)notifyCurrentItemDidChange;	// IMP=0x00000001001c538c
- (void)_currentItemDidChange:(id)arg1;	// IMP=0x00000001001c52c8
- (void)_playerManifestDidChangeContent:(id)arg1;	// IMP=0x00000001001c52bc
- (void)_setupManifestDefaults;	// IMP=0x00000001001c520c
- (void)_determineManifest:(id *)arg1 scalledIndex:(unsigned long long *)arg2 forIndex:(unsigned long long)arg3;	// IMP=0x00000001001c5008
- (unsigned long long)determineCompositeIndexWithIndex:(unsigned long long)arg1 fromManifest:(id)arg2;	// IMP=0x00000001001c4eb0
- (id)activity;	// IMP=0x00000001001c4d68
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001c4cc8
- (unsigned long long)count;	// IMP=0x00000001001c4c6c
- (id)currentItem;	// IMP=0x00000001001c4be0
- (unsigned long long)currentIndex;	// IMP=0x00000001001c4a10
- (void)setCurrentIndex:(unsigned long long)arg1;	// IMP=0x00000001001c489c
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000001001c4828
- (void)_load;	// IMP=0x00000001001c469c
- (_Bool)isIndexFromUpNext:(unsigned long long)arg1;	// IMP=0x00000001001c460c
- (_Bool)isPlayingFromManifest:(id)arg1;	// IMP=0x00000001001c45a0
- (void)dealloc;	// IMP=0x00000001001c4528
- (id)initWithUpNextManifest:(id)arg1 userManifest:(id)arg2;	// IMP=0x00000001001c4330

@end
