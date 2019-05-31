/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _SCRCStackNode;

@interface SCRCStackQueue : NSObject {

	_SCRCStackNode* _firstNode;
	_SCRCStackNode* _lastNode;
	unsigned long long _count;

}
-(void)pushObject:(id)arg1 ;
-(id)popObject;
-(void)enqueueObject:(id)arg1 ;
-(id)dequeueObject;
-(id)popObjectRetained;
-(id)dequeueObjectRetained;
-(void)pushArray:(id)arg1 ;
-(id)topObject;
-(void)dealloc;
-(unsigned long long)count;
-(id)description;
-(void)removeAllObjects;
-(id)objectEnumerator;
-(BOOL)isEmpty;
@end

