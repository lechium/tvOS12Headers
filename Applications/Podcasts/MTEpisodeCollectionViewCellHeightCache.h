//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTSingleton.h"

@class NSCache;

@interface MTEpisodeCollectionViewCellHeightCache : MTSingleton
{
    NSCache *_cachedHeights;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000ad7cc
- (id)_keyForWidth:(double)arg1 style:(unsigned long long)arg2;	// IMP=0x00000001000ad790
- (void)addCachedHeight:(double)arg1 forWidth:(double)arg2 style:(unsigned long long)arg3;	// IMP=0x00000001000ad6f0
- (double)cachedHeightForWidth:(double)arg1 style:(unsigned long long)arg2;	// IMP=0x00000001000ad668
- (void)sizeCategoryChanged:(id)arg1;	// IMP=0x00000001000ad650
- (void)dealloc;	// IMP=0x00000001000ad5c8
- (id)init;	// IMP=0x00000001000ad504

@end

