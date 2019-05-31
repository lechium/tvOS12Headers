/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GKCache.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, GKLinkedList, NSObject, NSString;

@interface GKThreadsafeCache : NSObject <GKCache> {

	NSMutableDictionary* _dictionary;
	NSMutableDictionary* _missingEntryQueues;
	GKLinkedList* _cacheList;
	unsigned long long _maxCount;
	unsigned long long _count;
	NSObject*<OS_dispatch_queue> _syncQueue;

}

@property (nonatomic,retain) NSMutableDictionary * dictionary;                      //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,retain) GKLinkedList * cacheList;                              //@synthesize cacheList=_cacheList - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * missingEntryQueues;              //@synthesize missingEntryQueues=_missingEntryQueues - In the implementation block
@property (assign,nonatomic) unsigned long long maxCount;                           //@synthesize maxCount=_maxCount - In the implementation block
@property (assign,nonatomic) unsigned long long count;                              //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;                //@synthesize syncQueue=_syncQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMaxCount:(unsigned long long)arg1 ;
-(unsigned long long)maxCount;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(id)internalObjectForKey:(id)arg1 ;
-(void)internalSetObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithName:(id)arg1 maxCount:(unsigned long long)arg2 ;
-(id)objectForKey:(id)arg1 withMissingHandler:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)missingEntryQueues;
-(void)setMissingEntryQueues:(NSMutableDictionary *)arg1 ;
-(GKLinkedList *)cacheList;
-(void)setCacheList:(GKLinkedList *)arg1 ;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)dictionary;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
-(void)setCount:(unsigned long long)arg1 ;
@end

