/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaPlaybackItemMetadata.h>

@protocol OS_dispatch_queue, MPModelObjectPlaybackItemMetadataDelegate;
@class NSObject, MPModelPlaybackPosition, MPModelFileAsset, MPModelHomeSharingAsset, MPModelStoreAsset;

@interface MPModelObjectPlaybackItemMetadata : MPMediaPlaybackItemMetadata {

	NSObject*<OS_dispatch_queue> _writeQueue;
	id<MPModelObjectPlaybackItemMetadataDelegate> _modelObjectDelegate;
	MPModelPlaybackPosition* _playbackPosition;

}

@property (nonatomic,readonly) MPModelFileAsset * localFileAsset; 
@property (nonatomic,readonly) MPModelHomeSharingAsset * homeSharingAsset; 
@property (nonatomic,readonly) MPModelPlaybackPosition * playbackPosition;                                          //@synthesize playbackPosition=_playbackPosition - In the implementation block
@property (nonatomic,readonly) MPModelStoreAsset * storeAsset; 
@property (assign,nonatomic,__weak) id<MPModelObjectPlaybackItemMetadataDelegate> modelObjectDelegate;              //@synthesize modelObjectDelegate=_modelObjectDelegate - In the implementation block
+(id)requiredLocalFileAssetProperties;
+(id)requiredPlaybackPositionProperties;
+(id)requiredStoreAssetProperties;
+(id)requiredProperties;
+(BOOL)_shouldRespectMusicCellularDataSetting;
+(BOOL)_shouldRespectStoreCellularDataSetting;
+(id)requiredHomeSharingAssetProperties;
-(double)bookmarkTime;
-(MPModelStoreAsset *)storeAsset;
-(BOOL)isSubscriptionRequired;
-(MPModelFileAsset *)localFileAsset;
-(long long)endpointType;
-(MPModelPlaybackPosition *)playbackPosition;
-(BOOL)shouldRememberBookmarkTime;
-(void)_invalidateModelObjectPlaybackItemMetadata;
-(id)buyParameters;
-(id)_cachedLocalPlaybackAssetFilePathWithIntegrityCheck:(BOOL)arg1 returningAssetQuality:(unsigned long long*)arg2 protectionType:(unsigned long long*)arg3 usesPurchaseBundle:(BOOL*)arg4 ;
-(unsigned long long)storeAccountID;
-(BOOL)shouldReportPlayEventsToStore;
-(id)localNetworkContentURL;
-(id)protectedContentSupportStorageURL;
-(void)loadMediaItemWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)mediaLibraryPersistentID;
-(void)setCachedLocalPlaybackAssetFilePath:(id)arg1 protectionType:(unsigned long long)arg2 assetQuality:(unsigned long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(id)cachedLocalPlaybackAssetFilePathReturningAssetQuality:(unsigned long long*)arg1 protectionType:(unsigned long long*)arg2 usesPurchaseBundle:(BOOL*)arg3 ;
-(long long)downloadIdentifier;
-(id)iTunesStoreContentID;
-(id)iTunesStoreContentDSID;
-(void)clearLocalPlaybackAssetFilePathWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)storeUbiquitousIdentifier;
-(id)streamingPlaybackAssetDestinationFilePathForAssetQuality:(unsigned long long)arg1 assetFlavor:(id)arg2 protectionType:(unsigned long long)arg3 pathExtension:(id)arg4 ;
-(BOOL)allowsAssetCaching;
-(MPModelHomeSharingAsset *)homeSharingAsset;
-(id<MPModelObjectPlaybackItemMetadataDelegate>)modelObjectDelegate;
-(void)setModelObjectDelegate:(id<MPModelObjectPlaybackItemMetadataDelegate>)arg1 ;
-(id)init;
-(void)dealloc;
@end

