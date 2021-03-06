//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMBaseDiskCache.h"

@class NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSRecursiveLock, NSString;

@interface IMImageDiskCache : IMBaseDiskCache
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    double _maxImageDimensionInPixels;	// 16 = 0x10
    NSString *_onDiskFileType;	// 24 = 0x18
    double _saveCompressionQuality;	// 32 = 0x20
    NSRecursiveLock *_syncLock;	// 40 = 0x28
    NSMutableSet *_proccessingKeys;	// 48 = 0x30
    NSMutableDictionary *_completionHandlers;	// 56 = 0x38
    NSMutableDictionary *_pendingPerformWhenAvailableOnDiskBlocks;	// 64 = 0x40
}

@property(readonly, nonatomic) NSMutableDictionary *pendingPerformWhenAvailableOnDiskBlocks; // @synthesize pendingPerformWhenAvailableOnDiskBlocks=_pendingPerformWhenAvailableOnDiskBlocks;
@property(readonly, nonatomic) NSMutableDictionary *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(readonly, nonatomic) NSMutableSet *proccessingKeys; // @synthesize proccessingKeys=_proccessingKeys;
@property(readonly, nonatomic) NSRecursiveLock *syncLock; // @synthesize syncLock=_syncLock;
@property(readonly, nonatomic) double saveCompressionQuality; // @synthesize saveCompressionQuality=_saveCompressionQuality;
@property(readonly, nonatomic) NSString *onDiskFileType; // @synthesize onDiskFileType=_onDiskFileType;
@property(readonly, nonatomic) double maxImageDimensionInPixels; // @synthesize maxImageDimensionInPixels=_maxImageDimensionInPixels;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;	// IMP=0x00000001002281a8
- (void)performWhenURLAvailableForImageForKey:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000100227de4
- (id)_resizeImageForKey:(id)arg1 maxDimensionInPixels:(double)arg2;	// IMP=0x00000001002279e0
- (_Bool)_isProcessingKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001002276b4
- (void)_finishProcessingKey:(id)arg1 success:(_Bool)arg2;	// IMP=0x0000000100227464
- (void)_startProcessingKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001002271f4
- (void)_performWithSyncLock:(CDUnknownBlockType)arg1;	// IMP=0x000000010022714c
- (id)_onDiskFileExtension;	// IMP=0x00000001002270c8
- (id)pathForKey:(id)arg1;	// IMP=0x0000000100227004
- (id)imageForKey:(id)arg1;	// IMP=0x0000000100226ee8
- (id)imageUrlForKey:(id)arg1;	// IMP=0x0000000100226dc8
- (_Bool)_startProcessingForAddingKey:(id)arg1 originalKey:(id)arg2;	// IMP=0x00000001002269f4
- (_Bool)_addImage:(id)arg1 forKey:(id)arg2 resizeIfTooBig:(_Bool)arg3 manageProcessingState:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100225eac
- (_Bool)addImage:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100225e44
- (_Bool)_needsResizing:(struct CGImageSource *)arg1 maxDimensionInPixels:(double)arg2;	// IMP=0x0000000100225e00
- (_Bool)_usesLessMemoryToConvertThenResizeImageSource:(struct CGImageSource *)arg1 destinationDimensionInPixels:(double)arg2;	// IMP=0x0000000100225d40
- (id)_defaultImageSavingOptions;	// IMP=0x0000000100225bf8
- (id)_defaultImageSavingSourceOptions;	// IMP=0x0000000100225ab4
- (struct CGImageSource *)_copyImageSourceByConvertingImage:(struct CGImageSource *)arg1 toFileType:(id)arg2 destinationUrl:(id)arg3;	// IMP=0x0000000100225880
- (_Bool)copyImageFrom:(id)arg1 to:(id)arg2 discardTransparency:(_Bool)arg3 enforceSquare:(_Bool)arg4 maxDimensionInPixels:(double)arg5;	// IMP=0x00000001002249fc
- (void)copyImageFrom:(id)arg1 to:(id)arg2 discardTransparency:(_Bool)arg3 enforceSquare:(_Bool)arg4 maxDimensionInPixels:(double)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000100224930
- (void)addImage:(id)arg1 forKey:(id)arg2 discardTransparency:(_Bool)arg3 enforceSquare:(_Bool)arg4 maxDimensionInPixels:(double)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000001002246e0
- (void)addImage:(id)arg1 forKey:(id)arg2 enforceSquare:(_Bool)arg3 maxDimensionInPixels:(double)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100224650
- (void)addImagesWithSourceUrl:(id)arg1 forKeys:(id)arg2 discardTransparency:(_Bool)arg3 enforceSquare:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100223b58
- (_Bool)syncAddImage:(id)arg1 forKey:(id)arg2 discardTransparency:(_Bool)arg3 enforceSquare:(_Bool)arg4 maxDimensionInPixels:(double)arg5;	// IMP=0x0000000100223a2c
- (void)addImage:(id)arg1 forKey:(id)arg2 enforceSquare:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001002239a4
- (id)initWithBasePath:(id)arg1 maxImageDimensionInPixels:(double)arg2;	// IMP=0x00000001002237b8
- (id)initWithBasePath:(id)arg1;	// IMP=0x00000001002237a4

@end

