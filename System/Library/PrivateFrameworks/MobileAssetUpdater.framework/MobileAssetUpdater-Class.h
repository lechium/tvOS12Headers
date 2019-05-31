/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:16 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MobileAssetUpdater.framework/MobileAssetUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ASAsset, ASAssetQuery, NSString;

@interface MobileAssetUpdater : NSObject {

	ASAsset* _asset;
	ASAssetQuery* _query;
	NSString* _assetType;
	NSString* _overrideFile;
	NSString* _purgeOverrideFile;
	BOOL _assetDownloaded;
	BOOL _requireAssetMetadata;
	/*^block*/id _logger;

}

@property (retain) ASAsset * asset;                           //@synthesize asset=_asset - In the implementation block
@property (retain) ASAssetQuery * query;                      //@synthesize query=_query - In the implementation block
@property (retain) NSString * assetType;                      //@synthesize assetType=_assetType - In the implementation block
@property (retain) NSString * overrideFile;                   //@synthesize overrideFile=_overrideFile - In the implementation block
@property (retain) NSString * purgeOverrideFile;              //@synthesize purgeOverrideFile=_purgeOverrideFile - In the implementation block
@property (readonly) BOOL assetAvailable; 
@property (readonly) BOOL assetDownloaded;                    //@synthesize assetDownloaded=_assetDownloaded - In the implementation block
@property (assign) BOOL requireAssetMetadata;                 //@synthesize requireAssetMetadata=_requireAssetMetadata - In the implementation block
@property (copy) id logger;                                   //@synthesize logger=_logger - In the implementation block
-(void)setQuery:(ASAssetQuery *)arg1 ;
-(void)setAssetType:(NSString *)arg1 ;
-(NSString *)assetType;
-(void)setRequireAssetMetadata:(BOOL)arg1 ;
-(NSString *)overrideFile;
-(void)queryComplete:(id)arg1 remote:(BOOL)arg2 error:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)filterFoundAssets:(id)arg1 ;
-(BOOL)requireAssetMetadata;
-(BOOL)filterAsset:(id)arg1 osBuild:(id)arg2 osVersion:(id)arg3 ;
-(void)downloadProgress:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)downloadComplete:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)purgeOverrideFile;
-(id)findAsset:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)assetAvailable;
-(id)downloadAsset:(/*^block*/id)arg1 ;
-(void)setOverrideFile:(NSString *)arg1 ;
-(void)setPurgeOverrideFile:(NSString *)arg1 ;
-(BOOL)assetDownloaded;
-(void)log:(int)arg1 format:(id)arg2 ;
-(void)doneWithAsset;
-(id)overrideQueryPredicateFromDict:(id)arg1 ;
-(id)queryPredicate;
-(id)assetWithMaxVersion:(id)arg1 ;
-(id)validateAssetAttributes:(id)arg1 ;
-(id)validateAsset;
-(id)logger;
-(void)setLogger:(id)arg1 ;
-(void)dealloc;
-(id)initWithAssetType:(id)arg1 ;
-(void)setAsset:(ASAsset *)arg1 ;
-(ASAsset *)asset;
-(ASAssetQuery *)query;
@end

