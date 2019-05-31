/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSMutableArray;

@interface RESortedDictionary : NSObject <NSCopying> {

	NSMutableDictionary* _values;
	NSMutableArray* _order;

}

@property (readonly) unsigned long long count; 
-(id)init;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(unsigned long long)hash;
-(void)removeAllObjects;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
@end

