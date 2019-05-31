/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:43 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOTileLoader.h>
#import <libobjc.A.dylib/GEOPListStateCapturing.h>
#import <libobjc.A.dylib/GEOTileServerProxyDelegate.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>
#import <libobjc.A.dylib/GEOExperimentConfigurationObserver.h>

@protocol OS_dispatch_queue, GEOTileLoaderInternalDelegate, OS_dispatch_source;
@class NSObject, GEOTilePool, NSMutableSet, GEOTileServerProxy, NSMutableArray, GEOTileLoaderConfiguration, GEOTileLoaderUsage, NSString;

@interface GEOTileLoaderInternal : GEOTileLoader <GEOPListStateCapturing, GEOTileServerProxyDelegate, GEOResourceManifestTileGroupObserver, GEOExperimentConfigurationObserver> {

	list<LoadItem, std::__1::allocator<LoadItem> >* _loadItems;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	GEOTilePool* _cache;
	GEOTilePool* _expiringCache;
	unique_ptr<geo::DispatchTimer, std::__1::default_delete<geo::DispatchTimer> >* _timer;
	NSObject*<OS_dispatch_queue> _loadQ;
	NSMutableSet* _openers;
	NSObject*<OS_dispatch_queue> _openersIsolation;
	SCD_Struct_GE30 _sortPoint;
	GEOTileServerProxy* _proxy;
	Ai _memoryHits;
	Ai _diskHits;
	Ai _networkHits;
	list<_CacheRequester<void ()(unsigned long long)>, std::__1::allocator<_CacheRequester<void ()(unsigned long long)> > >* _shrinkCacheRequesters;
	list<_CacheRequester<void ()(unsigned long long)>, std::__1::allocator<_CacheRequester<void ()(unsigned long long)> > >* _freeableSizeRequesters;
	NSMutableArray* _tileDecoders;
	NSObject*<OS_dispatch_queue> _tileDecodersIsolation;
	BOOL _networkActive;
	id<GEOTileLoaderInternalDelegate> _internalDelegate;
	NSObject*<OS_dispatch_queue> _internalDelegateQ;
	GEOTileLoaderConfiguration* _config;
	int _rollingBatchId;
	deque<ErrorInfo, std::__1::allocator<ErrorInfo> >* _recentErrors;
	GEOTileLoaderUsage* _usage;
	NSObject*<OS_dispatch_source> _memoryNotificationEventSource;
	unsigned long long _stateCaptureHandle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConfiguration:(id)arg1 serverProxy:(id)arg2 ;
-(void)openForClient:(id)arg1 ;
-(void)closeForClient:(id)arg1 ;
-(void)loadKey:(const GEOTileKey*)arg1 priority:(unsigned)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 callbackQ:(id)arg6 beginNetwork:(/*^block*/id)arg7 callback:(/*^block*/id)arg8 ;
-(void)loadKey:(const GEOTileKey*)arg1 priority:(unsigned)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 qos:(unsigned)arg6 callbackQ:(id)arg7 beginNetwork:(/*^block*/id)arg8 callback:(/*^block*/id)arg9 ;
-(void)loadKey:(const GEOTileKey*)arg1 additionalInfo:(const SCD_Struct_GE24*)arg2 priority:(unsigned)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 callbackQ:(id)arg7 beginNetwork:(/*^block*/id)arg8 callback:(/*^block*/id)arg9 ;
-(void)loadKey:(const GEOTileKey*)arg1 additionalInfo:(const SCD_Struct_GE24*)arg2 priority:(unsigned)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 signpostID:(unsigned long long)arg7 callbackQ:(id)arg8 beginNetwork:(/*^block*/id)arg9 callback:(/*^block*/id)arg10 ;
-(void)loadKey:(const GEOTileKey*)arg1 additionalInfo:(const SCD_Struct_GE24*)arg2 priority:(unsigned)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 qos:(unsigned)arg7 callbackQ:(id)arg8 beginNetwork:(/*^block*/id)arg9 callback:(/*^block*/id)arg10 ;
-(void)loadKey:(const GEOTileKey*)arg1 priority:(unsigned)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 qos:(unsigned)arg6 signpostID:(unsigned long long)arg7 callbackQ:(id)arg8 beginNetwork:(/*^block*/id)arg9 callback:(/*^block*/id)arg10 ;
-(void)loadKey:(const GEOTileKey*)arg1 additionalInfo:(const SCD_Struct_GE24*)arg2 priority:(unsigned)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 qos:(unsigned)arg7 signpostID:(unsigned long long)arg8 callbackQ:(id)arg9 beginNetwork:(/*^block*/id)arg10 callback:(/*^block*/id)arg11 ;
-(BOOL)reprioritizeKey:(const GEOTileKey*)arg1 forClient:(id)arg2 newPriority:(unsigned)arg3 ;
-(void)cancelKey:(const GEOTileKey*)arg1 forClient:(id)arg2 ;
-(void)cancelAllForClient:(id)arg1 ;
-(void)beginPreloadSessionOfSize:(unsigned long long)arg1 forClient:(id)arg2 exclusive:(BOOL)arg3 ;
-(void)endPreloadSessionForClient:(id)arg1 ;
-(void)expireTilesWithPredicate:(/*^block*/id)arg1 ;
-(void)reportCorruptTile:(const GEOTileKey*)arg1 ;
-(void)setSortPoint:(const SCD_Struct_GE30*)arg1 ;
-(void)registerTileDecoder:(id)arg1 ;
-(int)memoryHits;
-(int)diskHits;
-(int)networkHits;
-(void)calculateFreeableSizeWithCallbackQ:(id)arg1 finished:(/*^block*/id)arg2 ;
-(void)shrinkDiskCacheToSize:(unsigned long long)arg1 callbackQ:(id)arg2 finished:(/*^block*/id)arg3 ;
-(void)registerTileLoader:(Class)arg1 ;
-(void)setInternalDelegate:(id)arg1 ;
-(id)internalDelegate;
-(void)setInternalDelegateQ:(id)arg1 ;
-(id)internalDelegateQ;
-(id)cachedTileForKey:(const GEOTileKey*)arg1 ;
-(id)descriptionDictionaryRepresentation;
-(void)_tileEditionChanged:(id)arg1 ;
-(void)_localeChanged:(id)arg1 ;
-(void)_receivedMemoryWarningNotification;
-(void)_cancel:(_list_iterator<LoadItem, void *>*)arg1 err:(id)arg2 ;
-(BOOL)_cancelIfNeeded:(_list_iterator<LoadItem, void *>*)arg1 ;
-(id)_tileDecoderForTileKey:(const GEOTileKey*)arg1 quickly:(BOOL*)arg2 ;
-(void)_loadedTileForLocalKey:(GEOTileKey)arg1 preliminary:(BOOL)arg2 quickly:(BOOL)arg3 tileDecoder:(id)arg4 data:(id)arg5 disburseTile:(/*^block*/id)arg6 ;
-(void)loadKey:(const GEOTileKey*)arg1 additionalInfo:(const SCD_Struct_GE24*)arg2 priority:(unsigned)arg3 forClient:(id)arg4 proxyClient:(id)arg5 options:(unsigned long long)arg6 reason:(unsigned char)arg7 qos:(unsigned)arg8 signpostID:(unsigned long long)arg9 callbackQ:(id)arg10 beginNetwork:(/*^block*/id)arg11 callback:(/*^block*/id)arg12 ;
-(void)_requestOnlineTiles;
-(void)_removeUsageDataForKey:(const GEOTileKey*)arg1 ;
-(void)_loadedTile:(id)arg1 forKey:(const GEOTileKey*)arg2 info:(id)arg3 ;
-(id)_findInCache:(const GEOTileKey*)arg1 ;
-(void)proxy:(id)arg1 loadedTile:(id)arg2 forKey:(const GEOTileKey*)arg3 info:(id)arg4 ;
-(void)proxy:(id)arg1 failedToLoadTiles:(id)arg2 error:(id)arg3 ;
-(void)proxy:(id)arg1 failedToLoadAllPendingTilesWithError:(id)arg2 ;
-(void)proxy:(id)arg1 willGoToNetworkForTiles:(id)arg2 ;
-(void)proxy:(id)arg1 canShrinkDiskCacheByAmount:(unsigned long long)arg2 ;
-(void)proxy:(id)arg1 didShrinkDiskCacheByAmount:(unsigned long long)arg2 ;
-(void)proxyDidDownloadRegionalResources:(id)arg1 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)experimentConfigurationDidChange:(id)arg1 ;
-(void)_timerFired;
-(id)captureStatePlistWithHints:(os_state_hints_s*)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)initWithConfiguration:(id)arg1 ;
-(id)proxy;
-(void)clearAllCaches;
@end
