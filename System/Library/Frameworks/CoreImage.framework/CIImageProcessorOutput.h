/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIImageProcessorInOut.h>
#import <libobjc.A.dylib/CIImageProcessorOutput.h>

@protocol CIImageProcessorOutput
@property (nonatomic,readonly) CGRect region; 
@property (nonatomic,readonly) unsigned long long bytesPerRow; 
@property (nonatomic,readonly) int format; 
@property (nonatomic,readonly) void* baseAddress; 
@property (nonatomic,readonly) IOSurfaceRef surface; 
@property (nonatomic,readonly) CVBufferRef pixelBuffer; 
@property (nonatomic,readonly) id<MTLTexture> metalTexture; 
@property (nonatomic,readonly) id<MTLCommandBuffer> metalCommandBuffer; 
@required
-(IOSurfaceRef)surface;
-(id<MTLCommandBuffer>)metalCommandBuffer;
-(CVBufferRef)pixelBuffer;
-(id<MTLTexture>)metalTexture;
-(CGRect)region;
-(int)format;
-(void*)baseAddress;
-(unsigned long long)bytesPerRow;

@end


@protocol MTLCommandBuffer;
@interface CIImageProcessorOutput : CIImageProcessorInOut <CIImageProcessorOutput> {

	id<MTLCommandBuffer> _cmdBuffer;

}

@property (nonatomic,readonly) CGRect region; 
@property (nonatomic,readonly) unsigned long long bytesPerRow; 
@property (nonatomic,readonly) int format; 
@property (nonatomic,readonly) void* baseAddress; 
@property (nonatomic,readonly) IOSurfaceRef surface; 
@property (nonatomic,readonly) CVBufferRef pixelBuffer; 
@property (nonatomic,readonly) id<MTLTexture> metalTexture; 
@property (nonatomic,readonly) id<MTLCommandBuffer> metalCommandBuffer; 
-(CGColorSpaceRef)workingColorSpace;
-(id<MTLCommandBuffer>)metalCommandBuffer;
-(id)initWithSurface:(IOSurfaceRef)arg1 texture:(Texture*)arg2 allowSRGB:(BOOL)arg3 bounds:(CGRect)arg4 context:(Context*)arg5 ;
-(BOOL)metalCommandBufferRequested;
-(id)metalContext;
-(id<MTLTexture>)metalTexture;
-(void)dealloc;
-(unsigned)contextID;
-(void*)baseAddress;
@end

