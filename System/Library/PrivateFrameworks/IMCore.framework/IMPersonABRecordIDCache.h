/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface IMPersonABRecordIDCache : NSObject {

	NSMutableDictionary* _cache;
	NSObject*<OS_dispatch_queue> _cacheDiskQueue;
	double _coalescingPeriod;

}

@property (assign,nonatomic) double coalescingPeriod;              //@synthesize coalescingPeriod=_coalescingPeriod - In the implementation block
+(id)sharedInstance;
-(unsigned long long)versionNumber;
-(id)cachedRecordResultForQuery:(id)arg1 sequenceNumber:(long long)arg2 ;
-(void)setCachedRecordResult:(int)arg1 identifier:(int)arg2 forQuery:(id)arg3 sequenceNumber:(long long)arg4 ;
-(void)clearExistingPreferencesCache;
-(id)abUniqueID;
-(void)_persistCache;
-(id)_abCache;
-(void)_persistCache:(BOOL)arg1 ;
-(long long)cacheSequenceNumber;
-(void)setCacheSequenceNumber:(long long)arg1 ;
-(double)coalescingPeriod;
-(void)setCoalescingPeriod:(double)arg1 ;
-(void)_forceCachePersist;
-(void)clearInMemoryCache;
-(void)setParentPath:(id)arg1 ;
-(id)description;
-(id)filePath;
@end

