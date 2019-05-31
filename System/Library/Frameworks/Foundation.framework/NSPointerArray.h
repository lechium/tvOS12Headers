/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:05 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPointerFunctions;

@interface NSPointerArray : NSObject <NSFastEnumeration, NSCopying, NSSecureCoding>

@property (copy,readonly) NSPointerFunctions * pointerFunctions; 
@property (assign) unsigned long long count; 
+(id)pointerArrayWithPointerFunctions:(id)arg1 ;
+(id)pointerArrayWithStrongObjects;
+(id)pointerArrayWithWeakObjects;
+(id)strongObjectsPointerArray;
+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)weakObjectsPointerArray;
+(id)pointerArrayWithOptions:(unsigned long long)arg1 ;
-(NSPointerFunctions *)pointerFunctions;
-(id)mutableArray;
-(id)initWithPointerFunctions:(id)arg1 ;
-(void)replacePointerAtIndex:(unsigned long long)arg1 withPointer:(void*)arg2 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS6*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)allObjects;
-(void)addPointer:(void*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)compact;
-(void)removePointerAtIndex:(unsigned long long)arg1 ;
-(void*)pointerAtIndex:(unsigned long long)arg1 ;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)insertPointer:(void*)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setCount:(unsigned long long)arg1 ;
@end

