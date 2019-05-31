//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVPCachingManager.h"

@class NSSet, TVPOneupView;

@interface TVPOneupViewCachingManager : TVPCachingManager
{
    TVPOneupView *_oneupView;	// 8 = 0x8
    id <TVPOneupViewCachingManagerDataSource> _dataSource;	// 16 = 0x10
    NSSet *_previousPreheatAssets;	// 24 = 0x18
}

@property(retain, nonatomic) NSSet *previousPreheatAssets; // @synthesize previousPreheatAssets=_previousPreheatAssets;
@property(nonatomic) __weak id <TVPOneupViewCachingManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) TVPOneupView *oneupView; // @synthesize oneupView=_oneupView;
- (void).cxx_destruct;	// IMP=0x000000010002a184
- (void)_updateCachedAssets;	// IMP=0x0000000100029c40
- (void)updatePrefetchedAssets;	// IMP=0x0000000100029c34
- (id)autoloopVideoRequestOptions;	// IMP=0x0000000100029ba0
- (id)animatedImageRequestOptions;	// IMP=0x0000000100029af8
- (id)livePhotoRequestOptions;	// IMP=0x0000000100029a6c
- (id)requestOptions;	// IMP=0x00000001000299c4
- (CDUnknownBlockType)currentProgressHandler;	// IMP=0x0000000100029778
- (long long)contentMode;	// IMP=0x0000000100029770
- (struct CGSize)targetSize;	// IMP=0x00000001000296f4
- (void)startPrefetchingAssets;	// IMP=0x00000001000296e8

@end

