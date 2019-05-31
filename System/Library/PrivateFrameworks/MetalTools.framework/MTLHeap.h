/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 3:10:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol MTLHeap <NSObject>
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long storageMode; 
@property (readonly) unsigned long long cpuCacheMode; 
@property (readonly) unsigned long long size; 
@property (readonly) unsigned long long usedSize; 
@property (readonly) unsigned long long currentAllocatedSize; 
@required
-(unsigned long long)usedSize;
-(unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1;
-(id)newTextureWithDescriptor:(id)arg1;
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
-(unsigned long long)currentAllocatedSize;
-(unsigned long long)storageMode;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1;
-(unsigned long long)cpuCacheMode;
-(id<MTLDevice>)device;
-(unsigned long long)size;
-(NSString *)label;
-(void)setLabel:(id)arg1;

@end

