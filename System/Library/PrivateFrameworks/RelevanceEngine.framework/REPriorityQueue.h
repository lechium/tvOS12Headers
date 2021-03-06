/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface REPriorityQueue : NSObject <NSCopying> {

	CFBinaryHeapRef _binaryHeap;
	/*^block*/id _comparator;

}

@property (nonatomic,readonly) id comparator;                          //@synthesize comparator=_comparator - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,copy,readonly) NSArray * allObjects; 
@property (nonatomic,readonly) id minimumObject; 
-(id)comparator;
-(void)insertObject:(id)arg1 ;
-(id)initWithComparator:(/*^block*/id)arg1 ;
-(void)enumerateObjects:(/*^block*/id)arg1 ;
-(id)minimumObject;
-(void)removeMinimumObject;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(NSArray *)allObjects;
-(unsigned long long)hash;
-(id)description;
-(void)removeAllObjects;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
@end

