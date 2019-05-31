/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLType.h>

@interface MTLPointerType : MTLType

@property (readonly) unsigned long long elementType; 
@property (readonly) unsigned long long access; 
@property (readonly) unsigned long long alignment; 
@property (readonly) unsigned long long dataSize; 
@property (readonly) BOOL elementIsArgumentBuffer; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)elementStructType;
-(id)elementArrayType;
@end
