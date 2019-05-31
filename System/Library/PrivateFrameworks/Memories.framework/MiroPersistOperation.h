/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class MiroMemory;

@interface MiroPersistOperation : NSOperation {

	BOOL _isFinished;
	BOOL _isExecuting;
	MiroMemory* _memory;

}

@property (retain) MiroMemory * memory;              //@synthesize memory=_memory - In the implementation block
-(MiroMemory *)memory;
-(void)setMemory:(MiroMemory *)arg1 ;
-(BOOL)isAsynchronous;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
@end

