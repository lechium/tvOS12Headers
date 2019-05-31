/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSPredicate;

@interface OSLogEventStreamBase : NSObject {

	unsigned _invalidated;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _target;
	unsigned long long _flags;
	NSPredicate* _filterPredicate;
	/*^block*/id _streamHandler;
	/*^block*/id _invalidationHandler;

}

@property (assign,nonatomic) unsigned long long flags;                         //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) NSPredicate * filterPredicate;                      //@synthesize filterPredicate=_filterPredicate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id streamHandler;                                   //@synthesize streamHandler=_streamHandler - In the implementation block
@property (assign,nonatomic) unsigned invalidated;                             //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                             //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(unsigned long long)flags;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setFlags:(unsigned long long)arg1 ;
-(NSPredicate *)filterPredicate;
-(void)setFilterPredicate:(NSPredicate *)arg1 ;
-(void)setEventHandler:(/*^block*/id)arg1 ;
-(id)streamHandler;
-(void)setStreamHandler:(id)arg1 ;
-(id)init;
-(void)setTarget:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)target;
-(void)invalidate;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(unsigned)invalidated;
-(void)setInvalidated:(unsigned)arg1 ;
@end
