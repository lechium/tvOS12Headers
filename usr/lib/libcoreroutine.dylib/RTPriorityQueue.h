/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
@interface RTPriorityQueue : NSObject {

	CFBinaryHeapRef _heap;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)peek;
-(id)dequeue;
-(void)enqueue:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)initWithObjects:(id)arg1 ;
@end

