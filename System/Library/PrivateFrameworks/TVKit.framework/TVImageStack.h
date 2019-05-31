/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject, TVArchivedLayeredImageProxy, NSMutableSet;

@interface TVImageStack : NSObject <NSCopying> {

	int _blendMode;
	double _flatImageCornerRadius;
	NSArray* _imageRepresentations;
	NSObject*<OS_dispatch_queue> _layeredImageLoadingQueue;
	TVArchivedLayeredImageProxy* _layeredImageProxy;
	NSArray* _imageProxies;
	NSMutableSet* _loadingOperations;
	CGSize _naturalSize;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _topLayerIsFixedFrame;
	BOOL _legacy;
	id _placeholderImage;
	id _flatImage;

}

@property (nonatomic,retain) id placeholderImage;              //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (nonatomic,retain) id flatImage;                     //@synthesize flatImage=_flatImage - In the implementation block
@property (assign,nonatomic) BOOL legacy;                      //@synthesize legacy=_legacy - In the implementation block
+(id)_imageRepresentationsForUIImage:(id)arg1 outFlatImage:(out id*)arg2 outFlatImageCornerRadius:(out double*)arg3 ;
+(CGSize)_naturalSizeForImageStackSpecification:(id)arg1 ;
+(id)_imageRepresentationsForImageStackSpecification:(id)arg1 fromURL:(id)arg2 ;
+(id)_loadingOperationQueue;
-(CGSize)naturalSize;
-(id)imageProxies;
-(double)flatImageCornerRadius;
-(void)_loadImagesAtSize:(CGSize)arg1 scaledSize:(CGSize)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)topLayerIsFixedFrame;
-(id)layeredImageProxy;
-(id)initWithImageProxies:(id)arg1 ;
-(id)initWithArchivedLayeredImageProxy:(id)arg1 ;
-(void)_loadLayeredImageProxy;
-(void)setTopLayerIsFixedFrame:(BOOL)arg1 ;
-(id)initWithImageURLs:(id)arg1 ;
-(id)initWithImages:(id)arg1 ;
-(void)setFlatImageCornerRadius:(double)arg1 ;
-(void)loadImagesAtSize:(CGSize)arg1 completion:(/*^block*/id)arg2 ;
-(id)flatImage;
-(void)setFlatImage:(id)arg1 ;
-(BOOL)legacy;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)cancel;
-(id)initWithURL:(id)arg1 ;
-(id)placeholderImage;
-(void)setPlaceholderImage:(id)arg1 ;
-(void)setLegacy:(BOOL)arg1 ;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
@end

