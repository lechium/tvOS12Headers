//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSMutableSet, NSObject<OS_dispatch_queue>, TVArchivedLayeredImageProxy;

@interface TVPImageStack : NSObject <NSCopying>
{
    int _blendMode;	// 8 = 0x8
    double _flatImageCornerRadius;	// 16 = 0x10
    NSArray *_imageRepresentations;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_layeredImageLoadingQueue;	// 32 = 0x20
    TVArchivedLayeredImageProxy *_layeredImageProxy;	// 40 = 0x28
    NSArray *_imageProxies;	// 48 = 0x30
    NSMutableSet *_loadingOperations;	// 56 = 0x38
    struct CGSize _naturalSize;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 80 = 0x50
    _Bool _topLayerIsFixedFrame;	// 88 = 0x58
    _Bool _legacy;	// 89 = 0x59
    id _placeholderImage;	// 96 = 0x60
    id _flatImage;	// 104 = 0x68
}

+ (struct CGSize)_naturalSizeForImageStackSpecification:(id)arg1;	// IMP=0x00000001000452ac
+ (id)_loadingOperationQueue;	// IMP=0x00000001000451bc
+ (id)_imageRepresentationsForImageStackSpecification:(id)arg1 fromURL:(id)arg2;	// IMP=0x000000010004466c
+ (id)_imageRepresentationsForUIImage:(id)arg1 outFlatImage:(out id *)arg2 outFlatImageCornerRadius:(out double *)arg3;	// IMP=0x0000000100044350
@property(nonatomic) _Bool legacy; // @synthesize legacy=_legacy;
@property(retain, nonatomic) id flatImage; // @synthesize flatImage=_flatImage;
@property(retain, nonatomic) id placeholderImage; // @synthesize placeholderImage=_placeholderImage;
- (void).cxx_destruct;	// IMP=0x0000000100046960
- (void)_loadImagesAtSize:(struct CGSize)arg1 scaledSize:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100045780
- (void)_loadLayeredImageProxy;	// IMP=0x0000000100045430
- (void)loadImagesAtSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004433c
- (void)setTopLayerIsFixedFrame:(_Bool)arg1;	// IMP=0x000000010004432c
- (_Bool)topLayerIsFixedFrame;	// IMP=0x000000010004431c
- (void)setBlendMode:(int)arg1;	// IMP=0x000000010004430c
- (int)blendMode;	// IMP=0x00000001000442fc
- (void)setFlatImageCornerRadius:(double)arg1;	// IMP=0x00000001000442ec
- (struct CGSize)naturalSize;	// IMP=0x00000001000442d8
- (double)flatImageCornerRadius;	// IMP=0x00000001000442c8
- (id)imageProxies;	// IMP=0x00000001000442b8
- (id)layeredImageProxy;	// IMP=0x00000001000442a8
- (void)cancel;	// IMP=0x00000001000441e8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000440f8
- (id)initWithArchivedLayeredImageProxy:(id)arg1;	// IMP=0x0000000100044068
- (id)initWithURL:(id)arg1;	// IMP=0x0000000100043e84
- (id)initWithImageProxies:(id)arg1;	// IMP=0x0000000100043c70
- (id)initWithImages:(id)arg1;	// IMP=0x00000001000438e4
- (id)initWithImageURLs:(id)arg1;	// IMP=0x0000000100043654
- (id)init;	// IMP=0x0000000100043578

@end

