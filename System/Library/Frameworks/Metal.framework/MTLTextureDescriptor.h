/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:17 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MTLTextureDescriptor : NSObject <NSCopying>

@property (assign,nonatomic) BOOL forceResourceIndex; 
@property (assign,nonatomic) unsigned long long resourceIndex; 
@property (assign,nonatomic) unsigned long long textureType; 
@property (assign,nonatomic) unsigned long long pixelFormat; 
@property (assign,nonatomic) unsigned long long width; 
@property (assign,nonatomic) unsigned long long height; 
@property (assign,nonatomic) unsigned long long depth; 
@property (assign,nonatomic) unsigned long long mipmapLevelCount; 
@property (assign,nonatomic) unsigned long long sampleCount; 
@property (assign,nonatomic) unsigned long long arrayLength; 
@property (assign,nonatomic) unsigned long long resourceOptions; 
@property (assign,nonatomic) unsigned long long cpuCacheMode; 
@property (assign,nonatomic) unsigned long long storageMode; 
@property (assign,nonatomic) unsigned long long usage; 
@property (assign,nonatomic) BOOL allowGPUOptimizedContents; 
+(id)textureBufferDescriptorWithPixelFormat:(unsigned long long)arg1 width:(unsigned long long)arg2 resourceOptions:(unsigned long long)arg3 usage:(unsigned long long)arg4 ;
+(id)texture2DDescriptorWithPixelFormat:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 mipmapped:(BOOL)arg4 ;
+(id)textureCubeDescriptorWithPixelFormat:(unsigned long long)arg1 size:(unsigned long long)arg2 mipmapped:(BOOL)arg3 ;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

