//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVPCachingManager.h"

@class NSSet, UICollectionView;

@interface TVPCollectionViewCachingManager : TVPCachingManager
{
    _Bool _allowsHorizontalScrolling;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    id <TVPCollectionViewCachingManagerDataSource> _dataSource;	// 24 = 0x18
    NSSet *_previousPreheatIndexPaths;	// 32 = 0x20
    struct CGRect _previousPreheatRect;	// 40 = 0x28
}

@property(retain, nonatomic) NSSet *previousPreheatIndexPaths; // @synthesize previousPreheatIndexPaths=_previousPreheatIndexPaths;
@property(nonatomic) struct CGRect previousPreheatRect; // @synthesize previousPreheatRect=_previousPreheatRect;
@property(nonatomic) __weak id <TVPCollectionViewCachingManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool allowsHorizontalScrolling; // @synthesize allowsHorizontalScrolling=_allowsHorizontalScrolling;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;	// IMP=0x00000001000085ec
- (void)_updateCachedAssets;	// IMP=0x0000000100007a18
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100007908
- (id)requestOptions;	// IMP=0x000000010000789c
- (long long)contentMode;	// IMP=0x0000000100007894
- (struct CGSize)targetSize;	// IMP=0x00000001000077f0
- (void)stopPrefetchingAssets;	// IMP=0x000000010000777c
- (void)startPrefetchingAssets;	// IMP=0x0000000100007770
- (void)dealloc;	// IMP=0x00000001000075ec

@end

