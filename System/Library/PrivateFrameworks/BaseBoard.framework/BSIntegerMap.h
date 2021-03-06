/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMapTable;

@interface BSIntegerMap : NSObject <NSCopying, NSMutableCopying> {

	NSMapTable* _mapTable;
	id _zeroIndexValue;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)_initWithMapTable:(id)arg1 zeroIndexValue:(id)arg2 ;
-(BOOL)containsObjectForKey:(long long)arg1 ;
-(void)enumerateKeysWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateWithBlock:(/*^block*/id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(id)objectForKey:(long long)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end

