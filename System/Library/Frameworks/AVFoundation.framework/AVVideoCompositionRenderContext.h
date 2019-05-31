/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:40 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVVideoCompositionRenderContextInternal, AVVideoComposition;

@interface AVVideoCompositionRenderContext : NSObject {

	AVVideoCompositionRenderContextInternal* _internal;

}

@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) CGAffineTransform renderTransform; 
@property (nonatomic,readonly) float renderScale; 
@property (nonatomic,readonly) SCD_Struct_AV79 pixelAspectRatio; 
@property (nonatomic,readonly) SCD_Struct_AV80 edgeWidths; 
@property (nonatomic,readonly) BOOL highQualityRendering; 
@property (nonatomic,readonly) AVVideoComposition * videoComposition; 
+(id)renderContextPropertiesFromFigCompositor:(OpaqueFigVideoCompositorRef)arg1 ;
-(CVBufferRef)newPixelBuffer;
-(void)finalize;
-(CVPixelBufferPoolRef)pixelBufferPool;
-(void)_willDeallocOrFinalize;
-(CGAffineTransform)renderTransform;
-(id)initWithFigVideoCompositor:(OpaqueFigVideoCompositorRef)arg1 clientRequiredPixelBufferAttributes:(id)arg2 videoComposition:(id)arg3 pixelBufferPool:(CVPixelBufferPoolRef)arg4 ;
-(BOOL)hasEqualPropertiesToFigVideoCompositor:(OpaqueFigVideoCompositorRef)arg1 ;
-(BOOL)isBufferYCbCr:(CVBufferRef)arg1 ;
-(SCD_Struct_AV80)edgeWidths;
-(BOOL)highQualityRendering;
-(AVVideoComposition *)videoComposition;
-(float)renderScale;
-(CGSize)size;
-(void)dealloc;
-(SCD_Struct_AV79)pixelAspectRatio;
@end
