//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PBOSUpdateAssetManager : NSObject
{
    _Bool processingSpaceRequest;	// 8 = 0x8
    _Bool processingAssetRequest;	// 9 = 0x9
}

+ (long long)_compareOSVersion:(id)arg1 andBuild:(id)arg2 withOSVersion:(id)arg3 andBuild:(id)arg4;	// IMP=0x000000010008a474
+ (id)sharedManager;	// IMP=0x0000000100085fe8
@property(nonatomic) _Bool processingAssetRequest; // @synthesize processingAssetRequest;
@property(nonatomic) _Bool processingSpaceRequest; // @synthesize processingSpaceRequest;
- (long long)_purgeAsset:(id)arg1;	// IMP=0x000000010008a240
- (void)_reportAssetCatalogDownloadWithResult:(long long)arg1 forAttempt:(long long)arg2;	// IMP=0x000000010008a1c0
- (void)_refreshAssetCatalogWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100089e0c
- (long long)_purgeableSizeFor:(id)arg1;	// IMP=0x0000000100089abc
- (id)_postedDateForQuery:(id)arg1;	// IMP=0x0000000100089948
- (_Bool)_isDelayingUpdatesWithPeriodInDays:(double *)arg1;	// IMP=0x000000010008993c
- (long long)_refreshMetadataForQuery:(id)arg1;	// IMP=0x0000000100089840
- (id)_queryForLocalAssetSearch;	// IMP=0x0000000100089770
- (id)_queryForAssetDownload;	// IMP=0x00000001000896b0
- (id)_queryForAssetPurge;	// IMP=0x00000001000895e0
- (_Bool)_asset:(id)arg1 withReleaseDate:(id)arg2 matchesUpdate:(id)arg3;	// IMP=0x0000000100089524
- (long long)_compareAsset:(id)arg1 withAsset:(id)arg2;	// IMP=0x00000001000891c4
- (_Bool)_isAsset:(id)arg1 eligibleForAction:(unsigned long long)arg2 delayingUpdates:(_Bool)arg3;	// IMP=0x0000000100088d20
- (void)_finishAssetForUpdate:(id)arg1 checkOnlyInstalled:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100087e94
- (void)dateAtWhichDelayedUpdatesExpireWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100087c2c
- (void)descriptorForCurrentlyInstalledAssetWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010008785c
- (id)descriptorForAsset:(id)arg1 withReleaseDate:(id)arg2;	// IMP=0x00000001000872f8
- (void)assetForUpdate:(id)arg1 checkOnlyInstalled:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100086f84
- (void)purgeLocalAssetsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000867ec
- (void)purgeableAssetSpaceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010008609c

@end

