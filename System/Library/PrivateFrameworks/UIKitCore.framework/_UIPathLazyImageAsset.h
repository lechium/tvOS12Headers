/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:17 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIImageAsset.h>

@class NSArray;

@interface _UIPathLazyImageAsset : UIImageAsset {

	BOOL _imagesHaveBeenLoaded;
	BOOL _haveCGCacheImages;
	NSArray* _imagePaths;

}

@property (nonatomic,copy) NSArray * imagePaths;                  //@synthesize imagePaths=_imagePaths - In the implementation block
@property (assign,nonatomic) BOOL haveCGCacheImages;              //@synthesize haveCGCacheImages=_haveCGCacheImages - In the implementation block
-(id)imageWithTraitCollection:(id)arg1 ;
-(void)_clearResolvedImageResources;
-(BOOL)_containsImagesInPath:(id)arg1 ;
-(NSArray *)imagePaths;
-(void)setImagePaths:(NSArray *)arg1 ;
-(BOOL)haveCGCacheImages;
-(void)setHaveCGCacheImages:(BOOL)arg1 ;
@end

