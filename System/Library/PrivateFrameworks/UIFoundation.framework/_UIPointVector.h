/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _UIPointVector : NSObject {

	unsigned long long _count;
	unsigned long long _capacity;
	* _vectors;

}

@property (assign,nonatomic) unsigned long long capacity;              //@synthesize capacity=_capacity - In the implementation block
@property (assign,nonatomic) unsigned long long count;                 //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) * vectors;                                //@synthesize vectors=_vectors - In the implementation block
-(void)setVectors:(*)arg1 ;
-(void)removeVectorAtIndex:(unsigned long long)arg1 ;
-(2)vectorAtIndex:(unsigned long long)arg1 ;
-(1)lastVector;
-(*)vectors;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(void)reset;
-(void)clear;
-(unsigned long long)capacity;
-(void)setCapacity:(unsigned long long)arg1 ;
-(void)setCount:(unsigned long long)arg1 ;
-(void)addVector:;
@end
