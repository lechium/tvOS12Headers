/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, CKDClientContext, CKDKeyValueDiskCache;

@interface CKDPublicIdentityLookupService : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	CKDClientContext* _context;
	CKDKeyValueDiskCache* _cache;

}

@property (nonatomic,retain) CKDKeyValueDiskCache * cache;                   //@synthesize cache=_cache - In the implementation block
@property (assign,nonatomic,__weak) CKDClientContext * context;              //@synthesize context=_context - In the implementation block
-(id)initWithClientContext:(id)arg1 ;
-(void)removeCacheForLookupInfos:(id)arg1 ;
-(void)scheduleRequest:(id)arg1 forOperation:(id)arg2 ;
-(void)configureRequest:(id)arg1 parentOperation:(id)arg2 ;
-(void)setContext:(CKDClientContext *)arg1 ;
-(CKDClientContext *)context;
-(void)setCache:(CKDKeyValueDiskCache *)arg1 ;
-(CKDKeyValueDiskCache *)cache;
@end

