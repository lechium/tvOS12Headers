/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLIndirectCommandBufferDescriptor.h>

@interface MTLIndirectCommandBufferDescriptorInternal : MTLIndirectCommandBufferDescriptor {

	unsigned long long _commandTypes;
	BOOL _inheritPipelineState;
	BOOL _inheritBuffers;
	unsigned long long _maxVertexBufferBindCount;
	unsigned long long _maxFragmentBufferBindCount;
	unsigned long long _maxKernelBufferBindCount;

}
-(unsigned long long)commandTypes;
-(BOOL)inheritBuffers;
-(unsigned long long)maxFragmentBufferBindCount;
-(unsigned long long)maxVertexBufferBindCount;
-(void)setCommandTypes:(unsigned long long)arg1 ;
-(void)setInheritBuffers:(BOOL)arg1 ;
-(void)setMaxVertexBufferBindCount:(unsigned long long)arg1 ;
-(void)setMaxFragmentBufferBindCount:(unsigned long long)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

