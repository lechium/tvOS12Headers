/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:26 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FMQueueingStrategy;
@class NSMutableArray, NSArray;

@interface FMQueue : NSObject {

	NSMutableArray* _buffer;
	id<FMQueueingStrategy> _strategy;

}

@property (readonly) unsigned long long count; 
@property (readonly) NSArray * allObjects; 
+(id)priorityQueueWithComparator:(/*^block*/id)arg1 ;
+(id)boundedQueueWithCapacity:(unsigned long long)arg1 ;
+(id)boundedQueueWithCapacity:(unsigned long long)arg1 overflowHandler:(/*^block*/id)arg2 ;
-(id)peek;
-(id)dequeue;
-(void)dequeueObject:(id)arg1 ;
-(void)enqueue:(id)arg1 ;
-(id)initWithStrategy:(id)arg1 ;
-(id)init;
-(unsigned long long)count;
-(NSArray *)allObjects;
-(id)drain;
@end

