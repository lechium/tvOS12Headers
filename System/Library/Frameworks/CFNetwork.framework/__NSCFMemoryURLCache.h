/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLCache.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableArray, NSObject;

@interface __NSCFMemoryURLCache : NSURLCache {

	id _internal;
	unsigned long long _memoryCapacity;
	unsigned long long _currentLength;
	NSMutableDictionary* _memoryStorage;
	NSMutableArray* _memoryStorageLRU;
	NSObject*<OS_dispatch_queue> _memoryQueue;

}
+(void)initialize;
-(unsigned long long)currentDiskUsage;
-(id)initByCallingSuperSuperInit;
-(id)initEmptyCache;
-(id)initMemoryCache;
-(void)removeCachedResponseForRequest:(id)arg1 ;
-(unsigned long long)currentMemoryUsage;
-(id)initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 diskPath:(id)arg3 ;
-(unsigned long long)memoryCapacity;
-(void)removeAllCachedResponses;
-(unsigned long long)diskCapacity;
-(void)setMemoryCapacity:(unsigned long long)arg1 ;
-(void)setDiskCapacity:(unsigned long long)arg1 ;
-(void)storeCachedResponse:(id)arg1 forRequest:(id)arg2 ;
-(id)cachedResponseForRequest:(id)arg1 ;
-(void)dealloc;
-(id)description;
@end

