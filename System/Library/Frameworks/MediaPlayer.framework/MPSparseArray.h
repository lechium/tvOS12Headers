/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface MPSparseArray : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _maximumIndex;
	NSMutableArray* _nodes;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) unsigned long long firstEmptyIndex; 
@property (nonatomic,readonly) unsigned long long maximumIndex; 
+(BOOL)supportsSecureCoding;
-(void)_enumerateNodesWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 returningExistingObject:(id*)arg3 ;
-(id)_removeObjectAtIndex:(unsigned long long)arg1 shouldSlide:(BOOL)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 returningRemovedObject:(id*)arg2 ;
-(unsigned long long)firstEmptyIndex;
-(unsigned long long)maximumIndex;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)removeAllObjects;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
@end
