/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKMediaFeeder.h>
#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>

@class PHFetchResult, PHAssetCollection, PHFetchOptions, NSString, NSDictionary, NSArray;

@interface OKMediaFeederPhotoKit : OKMediaFeeder <PHPhotoLibraryChangeObserver> {

	unsigned long long _type;
	PHFetchResult* _fetchResult;
	PHAssetCollection* _assetCollection;
	PHFetchOptions* _options;
	NSString* _collectionIdentifier;
	NSDictionary* _predicate;
	NSArray* _sortDescriptors;

}

@property (retain) PHFetchResult * fetchResult;                      //@synthesize fetchResult=_fetchResult - In the implementation block
@property (retain) PHAssetCollection * assetCollection;              //@synthesize assetCollection=_assetCollection - In the implementation block
@property (retain) PHFetchOptions * options;                         //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mediaFeederWithAssetCollection:(id)arg1 andOptions:(id)arg2 ;
+(id)supportedSettings;
+(BOOL)supportLiveUpdates;
+(id)mediaFeederWithAllAssetsWithOptions:(id)arg1 ;
+(id)mediaFeederWithFetchResult:(id)arg1 ;
+(BOOL)isRemote;
-(PHAssetCollection *)assetCollection;
-(void)photoLibraryDidChange:(id)arg1 ;
-(void)setAssetCollection:(PHAssetCollection *)arg1 ;
-(PHFetchResult *)fetchResult;
-(void)setFetchResult:(PHFetchResult *)arg1 ;
-(id)initWithFetchResult:(id)arg1 ;
-(id)feederSettings;
-(BOOL)canBePersisted;
-(id)reloadMediaObjectsWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfMediaObjects;
-(id)mediaObjectsAtIndexes:(id)arg1 ;
-(id)mediaObjectURLsAtIndexes:(id)arg1 ;
-(id)indexesForMediaObjects:(id)arg1 ;
-(id)initWithAssetCollection:(id)arg1 andOptions:(id)arg2 ;
-(id)initWithAllAssetsWithOptions:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithSettings:(id)arg1 ;
-(PHFetchOptions *)options;
-(void)setOptions:(PHFetchOptions *)arg1 ;
@end

