/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <MediaMiningKit/CLSInvestigationFeeder.h>

@class PHFetchOptions, PHFetchResult, NSArray, PHAssetCollection;

@interface CLSInvestigationPhotoKitFeeder : CLSInvestigationFeeder {

	PHFetchOptions* _fetchOptions;
	PHFetchResult* _fetchResult;
	NSArray* _allItems;
	unsigned long long _prefetchOptions;
	unsigned long long _numberOfAllPeople;
	PHAssetCollection* _assetCollection;

}

@property (nonatomic,readonly) PHAssetCollection * assetCollection;               //@synthesize assetCollection=_assetCollection - In the implementation block
@property (nonatomic,readonly) BOOL hasPeople; 
@property (nonatomic,readonly) BOOL hasFavoritedAssets; 
@property (nonatomic,readonly) BOOL hasBestScoringAssets; 
@property (nonatomic,readonly) unsigned long long numberOfAllPeople; 
+(id)feederForAssetCollection:(id)arg1 options:(id)arg2 feederPrefetchOptions:(id)arg3 ;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(id)approximateLocation;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(id)allItems;
-(PHAssetCollection *)assetCollection;
-(CGImageRef)itemThumbnailAtIndex:(unsigned long long)arg1 withResolution:(unsigned long long)arg2 ;
-(void)enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)_shouldPrefetchCurationInformation;
-(id)initWithFeederForAssetCollection:(id)arg1 options:(id)arg2 feederPrefetchOptions:(id)arg3 ;
-(BOOL)hasBestScoringAssets;
-(id)universalStartDate;
-(id)universalEndDate;
-(unsigned long long)numberOfAllPeople;
-(BOOL)hasFavoritedAssets;
-(BOOL)hasPeople;
-(id)startDateComponents;
-(id)endDateComponents;
-(unsigned long long)numberOfItems;
@end

