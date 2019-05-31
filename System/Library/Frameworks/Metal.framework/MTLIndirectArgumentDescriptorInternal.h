/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:17 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLIndirectArgumentDescriptor.h>

@interface MTLIndirectArgumentDescriptorInternal : MTLIndirectArgumentDescriptor {

	MTLArgumentDescriptorPrivate _private;

}
+(id)indirectArgumentDescriptor;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)setAccess:(unsigned long long)arg1 ;
-(unsigned long long)constantBlockAlignment;
-(void)setConstantBlockAlignment:(unsigned long long)arg1 ;
-(unsigned long long)dataType;
-(unsigned long long)textureType;
-(void)setDataType:(unsigned long long)arg1 ;
-(unsigned long long)arrayLength;
-(void)setTextureType:(unsigned long long)arg1 ;
-(void)setArrayLength:(unsigned long long)arg1 ;
-(unsigned long long)access;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
@end
