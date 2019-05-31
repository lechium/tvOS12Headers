/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPArtworkDataSource.h>

@class NSCache, MPArtworkResizeUtility, NSString;

@interface MPMediaLibraryArtworkDataSource : NSObject <MPArtworkDataSource> {

	BOOL _usesFallbackCache;
	NSCache* _fallbackCache;
	MPArtworkResizeUtility* _artworkResizeUtility;

}

@property (nonatomic,retain) NSCache * fallbackCache;                                    //@synthesize fallbackCache=_fallbackCache - In the implementation block
@property (nonatomic,retain) MPArtworkResizeUtility * artworkResizeUtility;              //@synthesize artworkResizeUtility=_artworkResizeUtility - In the implementation block
@property (assign,nonatomic) BOOL usesFallbackCache;                                     //@synthesize usesFallbackCache=_usesFallbackCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)existingArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3 ;
-(void)loadArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3 systemEffectHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg1 ;
-(BOOL)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2 ;
-(id)existingRepresentationForArtworkCatalog:(id)arg1 ;
-(void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1 ;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg1 ;
-(BOOL)hasExistingRepresentationOnDiskForArtworkCatalog:(id)arg1 ;
-(void)getExportableArtworkPropertiesForCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_existingRepresentationForArtworkCatalog:(id)arg1 fromCacheOnly:(BOOL)arg2 ;
-(id)_cachedRepresentationForCatalog:(id)arg1 ;
-(BOOL)_isRepresentation:(id)arg1 validForCatalog:(id)arg2 ;
-(id)_representationAtSize:(CGSize)arg1 forCatalog:(id)arg2 ;
-(void)_cacheRepresentation:(id)arg1 forCatalog:(id)arg2 ;
-(id)_resizeArtwork:(id)arg1 forCatalog:(id)arg2 toSize:(CGSize)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_resizeOriginalArtworkForArtworkCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)usesFallbackCache;
-(NSCache *)fallbackCache;
-(BOOL)_isRepresentationSize:(CGSize)arg1 validForFittingSize:(CGSize)arg2 ;
-(MPArtworkResizeUtility *)artworkResizeUtility;
-(void)setUsesFallbackCache:(BOOL)arg1 ;
-(void)setFallbackCache:(NSCache *)arg1 ;
-(void)setArtworkResizeUtility:(MPArtworkResizeUtility *)arg1 ;
-(id)init;
@end

