/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:17 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLAttributeDescriptor.h>

@interface MTLAttributeDescriptorInternal : MTLAttributeDescriptor {

	unsigned long long _vertexFormat;
	unsigned long long _offset;
	unsigned long long _bufferIndex;

}
-(void)setBufferIndex:(unsigned long long)arg1 ;
-(void)setFormat:(unsigned long long)arg1 ;
-(unsigned long long)bufferIndex;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)offset;
-(void)setOffset:(unsigned long long)arg1 ;
-(unsigned long long)format;
@end
