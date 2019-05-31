/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue, WLKServerConfigurationResponse, NSArray, NSDictionary, NSMutableDictionary, NSString, WLKUserEnvironment, NSXPCConnection, NSDate;

@interface WLKServerConfiguration : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSOperationQueue* _fetchQueue;
	NSOperationQueue* _operationQueue;
	WLKServerConfigurationResponse* _response;
	NSArray* _orderedChannels;
	NSDictionary* _channelsByID;
	long long _vppaStatus;
	int _didChangeNotificationToken;
	NSMutableDictionary* _completions;
	NSString* _nextEK;
	WLKUserEnvironment* _inFlightEnvironment;
	NSXPCConnection* _connection;
	BOOL _loaded;
	BOOL _isFetching;
	/*^block*/id _fetchCompletionHandler;
	NSDictionary* _requiredRequestKeyValuePairsDictionary;

}

@property (assign) BOOL isFetching;                                                              //@synthesize isFetching=_isFetching - In the implementation block
@property (nonatomic,copy) id fetchCompletionHandler;                                            //@synthesize fetchCompletionHandler=_fetchCompletionHandler - In the implementation block
@property (nonatomic,retain) NSDictionary * requiredRequestKeyValuePairsDictionary;              //@synthesize requiredRequestKeyValuePairsDictionary=_requiredRequestKeyValuePairsDictionary - In the implementation block
@property (getter=isLoaded,nonatomic,readonly) BOOL loaded;                                      //@synthesize loaded=_loaded - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionary; 
@property (nonatomic,copy,readonly) NSDictionary * channels; 
@property (nonatomic,copy,readonly) NSArray * orderedChannels; 
@property (nonatomic,copy,readonly) NSDictionary * serverRoutesDictionary; 
@property (nonatomic,copy,readonly) NSDate * expirationDate; 
@property (nonatomic,readonly) long long vppaStatus; 
+(id)sharedInstance;
-(BOOL)_writeToDisk:(id)arg1 ;
-(NSDictionary *)channels;
-(NSDate *)expirationDate;
-(id)_operationQueue;
-(BOOL)isFetching;
-(void)setIsFetching:(BOOL)arg1 ;
-(id)_connection;
-(NSDictionary *)serverRoutesDictionary;
-(NSDictionary *)requiredRequestKeyValuePairsDictionary;
-(void)_synchronizeWithCacheAndNotifySelf:(BOOL)arg1 others:(BOOL)arg2 validate:(BOOL)arg3 ;
-(void)_handleLibraryDidChangeNotification:(id)arg1 ;
-(void)_fetchConfigurationCache:(/*^block*/id)arg1 ;
-(void)_reloadFromCache:(id)arg1 ;
-(void)_fetchConfigurationInProcess:(/*^block*/id)arg1 ;
-(void)_synchronizeWithCache:(id)arg1 notifySelf:(BOOL)arg2 others:(BOOL)arg3 validate:(BOOL)arg4 ;
-(id)_readFromDisk;
-(void)_addCompletion:(/*^block*/id)arg1 forEnvironment:(id)arg2 ;
-(id)_nextEK;
-(void)_setNextEK:(id)arg1 ;
-(id)_completionsForEnvironment:(id)arg1 ;
-(void)_clearCompletionsForEnvironment:(id)arg1 ;
-(id)_cacheDir;
-(id)initOffline;
-(BOOL)isTVEnabled;
-(id)utsc;
-(id)endpointForKey:(id)arg1 ;
-(id)APIBaseURL;
-(id)serverRouteForKey:(id)arg1 ;
-(void)setRequiredRequestKeyValuePairsDictionary:(NSDictionary *)arg1 ;
-(void)setFetchCompletionHandler:(id)arg1 ;
-(id)fetchCompletionHandler;
-(NSArray *)orderedChannels;
-(long long)vppaStatus;
-(BOOL)_needCacheRefresh;
-(void)fetchConfiguration:(/*^block*/id)arg1 ;
-(id)_cachePath;
-(id)init;
-(NSDictionary *)dictionary;
-(void)dealloc;
-(BOOL)isLoaded;
-(void)_commonInit;
-(id)_init;
-(void)_invalidateCache;
@end
