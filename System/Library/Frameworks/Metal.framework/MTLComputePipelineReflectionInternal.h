/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLComputePipelineReflection.h>

@class NSArray, NSDictionary;

@interface MTLComputePipelineReflectionInternal : MTLComputePipelineReflection {

	NSArray* _arguments;
	NSArray* _builtInArguments;
	NSDictionary* _performanceStatistics;
	SCD_Struct_MT16 _flags;
	unsigned _traceBufferIndex;
	NSArray* _constantSamplerUniqueIdentifiers;
	NSArray* _constantSamplerDescriptors;

}
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)builtInArguments;
-(id)initWithSerializedData:(id)arg1 serializedStageInputDescriptor:(id)arg2 device:(id)arg3 options:(unsigned long long)arg4 flags:(SCD_Struct_MT16)arg5 ;
-(id)initWithSerializedData:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3 flags:(SCD_Struct_MT16)arg4 ;
-(void)setPerformanceStatistics:(id)arg1 ;
-(unsigned)traceBufferIndex;
-(id)constantSamplerUniqueIdentifiers;
-(id)constantSamplerDescriptors;
-(void)setConstantSamplerUniqueIdentifiers:(id)arg1 ;
-(void)setConstantSamplerDescriptorsFromBitmasks:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(id)performanceStatistics;
-(id)arguments;
-(SCD_Struct_MT16)usageFlags;
-(void)dealloc;
-(id)description;
@end

