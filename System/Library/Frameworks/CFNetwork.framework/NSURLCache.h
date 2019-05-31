/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSURLCacheInternal;

@interface NSURLCache : NSObject {

	NSURLCacheInternal* _internal;

}

@property (assign) unsigned long long memoryCapacity; 
@property (assign) unsigned long long diskCapacity; 
@property (readonly) unsigned long long currentMemoryUsage; 
@property (readonly) unsigned long long currentDiskUsage; 
+(void)_setVaryHeaderSupport;
+(void)setSharedURLCache:(id)arg1 ;
+(id)sharedURLCache;
-(BOOL)_isVaryHeaderSupportEnabled;
-(id)_varyStateForURL:(id)arg1 ;
-(unsigned long long)currentDiskUsage;
-(void)storeCachedResponse:(id)arg1 forDataTask:(id)arg2 ;
-(void)removeCachedResponseForRequest:(id)arg1 ;
-(unsigned long long)currentMemoryUsage;
-(void)getCachedResponseForDataTask:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeCachedResponseForDataTask:(id)arg1 ;
-(id)_initWithExistingCFURLCache:(CFURLCache*)arg1 ;
-(id)_diskCacheDefaultPath;
-(id)_cacheDirectory;
-(CFCachedURLResponse*)_nscfBridgeURLCacheCopyResponseForRequest:(CFURLRequestRef)arg1 ;
-(void)_nscfBridgeURLCacheStoreCachedResponse:(CFCachedURLResponse*)arg1 forRequest:(CFURLRequestRef)arg2 ;
-(long long)_nscfBridgeURLCacheDiskCapacity;
-(void)_nscfBridgeURLCacheSetMemoryCapacity:(long long)arg1 ;
-(void)_nscfBridgeURLCacheSetDiskCapacity:(long long)arg1 ;
-(void)_nscfBridgeURLCacheRemoveCachedResponseForRequest:(id)arg1 ;
-(void)_nscfBridgeURLCacheRemoveAllCachedResponses;
-(long long)_nscfBridgeURLCacheMemoryCapacity;
-(long long)_nscfBridgeURLCacheCurrentMemoryUsage;
-(long long)_nscfBridgeURLCacheCurrentDiskUsage;
-(id)_initWithIdentifier:(id)arg1 memoryCapacity:(long long)arg2 diskCapacity:(long long)arg3 private:(BOOL)arg4 ;
-(id)_initVaryHeaderEnabledWithPath:(id)arg1 ;
-(id)initWithExistingSharedCFURLCache:(CFURLCache*)arg1 ;
-(id)_initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 relativePath:(id)arg3 ;
-(void)removeCachedResponsesSinceDate:(id)arg1 ;
-(void)_updateVaryState:(id)arg1 forURL:(id)arg2 ;
-(id)initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 diskPath:(id)arg3 ;
-(unsigned long long)memoryCapacity;
-(void)removeAllCachedResponses;
-(unsigned long long)diskCapacity;
-(void)flushWithCompletion:(/*^block*/id)arg1 ;
-(const CFURLCache*)_CFURLCache;
-(void)setMemoryCapacity:(unsigned long long)arg1 ;
-(void)setDiskCapacity:(unsigned long long)arg1 ;
-(void)storeCachedResponse:(id)arg1 forRequest:(id)arg2 ;
-(id)cachedResponseForRequest:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

