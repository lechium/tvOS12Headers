/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:26 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, FMReadWriteLock;

@interface FMConcurrentMutableArray : NSObject {

	NSMutableArray* _underlyingArray;
	FMReadWriteLock* _lock;

}

@property (nonatomic,retain) NSMutableArray * underlyingArray;              //@synthesize underlyingArray=_underlyingArray - In the implementation block
@property (nonatomic,retain) FMReadWriteLock * lock;                        //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(NSMutableArray *)underlyingArray;
-(id)nativeArray;
-(void)setUnderlyingArray:(NSMutableArray *)arg1 ;
-(void)setLock:(FMReadWriteLock *)arg1 ;
-(void)addObject:(id)arg1 ;
-(id)init;
-(unsigned long long)count;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithArray:(id)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(FMReadWriteLock *)lock;
@end

