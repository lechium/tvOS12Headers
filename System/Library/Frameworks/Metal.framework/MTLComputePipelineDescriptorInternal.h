/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLComputePipelineDescriptor.h>

@interface MTLComputePipelineDescriptorInternal : MTLComputePipelineDescriptor {

	MTLComputePipelineDescriptorPrivate _private;

}
-(id)formattedDescription:(unsigned long long)arg1 ;
-(const MTLComputePipelineDescriptorPrivate*)_descriptorPrivate;
-(BOOL)forceResourceIndex;
-(void)setForceResourceIndex:(BOOL)arg1 ;
-(void)setResourceIndex:(unsigned long long)arg1 ;
-(void)validateWithDevice:(id)arg1 ;
-(void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)arg1 ;
-(id)stageInputDescriptor;
-(void)setPipelineLibrary:(id)arg1 ;
-(void)setDriverCompilerOptions:(id)arg1 ;
-(id)driverCompilerOptions;
-(id)pipelineLibrary;
-(BOOL)threadGroupSizeIsMultipleOfThreadExecutionWidth;
-(id)newSerializedComputeData;
-(unsigned long long)maxTotalThreadsPerThreadgroup;
-(unsigned long long)resourceIndex;
-(id)computeFunction;
-(id)buffers;
-(void)setComputeFunction:(id)arg1 ;
-(void)setThreadGroupSizeIsMultipleOfThreadExecutionWidth:(BOOL)arg1 ;
-(void)setStageInputDescriptor:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reset;
-(id)label;
-(void)setLabel:(id)arg1 ;
@end

