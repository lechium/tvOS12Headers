/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:42 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary;

@interface CalAccumulatingQueue : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _tags;
	NSMutableDictionary* _context;
	/*^block*/id _block;
	float _delay;
	BOOL _executionPending;

}
-(id)initWithQueue:(id)arg1 andBlock:(/*^block*/id)arg2 ;
-(void)executeBlock;
-(id)initWithQueue:(id)arg1 andBlock:(/*^block*/id)arg2 delay:(float)arg3 ;
-(void)updateTags:(id)arg1 withContext:(id)arg2 ;
-(void)updateTagsAndExecuteBlock:(id)arg1 withContext:(id)arg2 ;
-(void)updateTags:(id)arg1 ;
-(void)updateTagsAndExecuteBlock:(id)arg1 ;
@end

