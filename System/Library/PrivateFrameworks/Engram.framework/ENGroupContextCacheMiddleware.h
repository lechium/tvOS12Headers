/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Engram.framework/Engram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ENGroupContextCacheMiddleware <ENGroupContextMiddleware>
@required
-(long long)middlewareCacheCostForContext:(id)arg1;
-(void)groupContext:(id)arg1 cacheGroup:(id)arg2 completion:(/*^block*/id)arg3;
-(void)groupContext:(id)arg1 cachedGroupWithID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)groupContext:(id)arg1 latestCachedGroupWithStableID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)groupContext:(id)arg1 fetchAllKnownGroups:(/*^block*/id)arg2;
-(void)deleteAllKnownGroupsForGroupContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)deleteCachedValueForForGroupContext:(id)arg1 withGroupID:(id)arg2 completion:(/*^block*/id)arg3;

@end

