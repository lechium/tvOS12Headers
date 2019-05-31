/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/FlexCloudManager.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSMutableOrderedSet, NSMutableDictionary, NSMutableSet;

@interface FlexMobileAssetManager : FlexCloudManager {

	NSString* _clientID;
	NSString* _mobileAssetTypeIdentifier;
	NSObject* _downloadThrottleLock;
	NSMutableOrderedSet* _pendingDownloadSet;
	NSMutableDictionary* _pendingDownloadMapping;
	NSMutableSet* _processedDownloadSet;
	NSMutableDictionary* _processedDownloadMapping;
	NSObject*<OS_dispatch_queue> _purgeQueue;
	NSObject*<OS_dispatch_queue> _downloadQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> purgeQueue;                 //@synthesize purgeQueue=_purgeQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> downloadQueue;              //@synthesize downloadQueue=_downloadQueue - In the implementation block
+(id)compatibilityFilterPredicate;
+(id)assetWithNewestContentVersionInAssets:(id)arg1 preferInstalled:(BOOL)arg2 ;
-(void)loadAssetWithID:(id)arg1 forSongID:(id)arg2 ;
-(void)setDownloadQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)downloadQueue;
-(id)_queryAssetsWithClientIDForAssetType:(id)arg1 predicates:(id)arg2 ;
-(id)_metadataMappingForUUIDSet:(id)arg1 ;
-(id)filteredResults:(id)arg1 forMetadataMapping:(id)arg2 ;
-(void)_processResults:(id)arg1 metadataMapping:(id)arg2 ;
-(void)_updateWithLocalArtwork;
-(void)_loadBundledArtworkForSongID:(id)arg1 ;
-(void)_makeBundledArtworkCloudBacked;
-(void)_purgeAsset:(id)arg1 ;
-(long long)_responseForError:(id)arg1 ;
-(id)_queryAssetsWithClientIDForAssetType:(id)arg1 songUID:(id)arg2 predicates:(id)arg3 ;
-(void)_runAsyncAssetDownloadQuery:(id)arg1 existingSong:(id)arg2 cloudAsset:(id)arg3 ;
-(id)_newQueryDictForQuery:(id)arg1 songUID:(id)arg2 existingSong:(id)arg3 asset:(id)arg4 ;
-(void)_runNextAsyncAssetDownloadQuery;
-(id)mobileAssetForSongAsset:(id)arg1 ;
-(void)cancelDownloadOfAsset:(id)arg1 ;
-(void)_loadBundledSongForSongID:(id)arg1 ;
-(unsigned long long)_statusForAssetState:(long long)arg1 ;
-(id)initWithLibrary:(id)arg1 options:(id)arg2 ;
-(void)_processArtwork;
-(id)loadCachedSongs;
-(void)fetchAllSongsWithCompletion:(/*^block*/id)arg1 ;
-(id)_queryLocalAssetInformation;
-(BOOL)_isCompatible:(id)arg1 ;
-(void)requestDownloadOfAsset:(id)arg1 ;
-(void)cancelDownloadOfAllAssets;
-(void)requestPurgeOfAsset:(id)arg1 ;
-(unsigned long long)assetStatus:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)purgeQueue;
-(void)setPurgeQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

