/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:17 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MTLBufferLayoutDescriptorArray, MTLAttributeDescriptorArray;

@interface MTLStageInputOutputDescriptor : NSObject <NSCopying>

@property (readonly) MTLBufferLayoutDescriptorArray * layouts; 
@property (readonly) MTLAttributeDescriptorArray * attributes; 
@property (assign,nonatomic) unsigned long long indexType; 
@property (assign,nonatomic) unsigned long long indexBufferIndex; 
+(id)stageInputOutputDescriptor;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reset;
@end
