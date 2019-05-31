/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOResourceManifestServerProxy.h>

@protocol GEOResourceManifestServerProxyDelegate, OS_dispatch_queue, OS_xpc_object;
@class NSObject, GEOResourceManifestConfiguration, NSLock, NSString, GEOActiveTileGroup;

@interface GEOResourceManifestServerRemoteProxy : NSObject <GEOResourceManifestServerProxy> {

	id<GEOResourceManifestServerProxyDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSObject*<OS_xpc_object> _conn;
	BOOL _sentConfigurationMessage;
	BOOL _hasOpenConnection;
	BOOL _isUpdatingManifest;
	BOOL _isLoadingResources;
	NSObject*<OS_dispatch_queue> _serverQueue;
	GEOResourceManifestConfiguration* _configuration;
	NSLock* _authTokenLock;
	NSString* _authToken;
	int _activeTileGroupChangedNotificationToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<GEOResourceManifestServerProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) GEOActiveTileGroup * activeTileGroup; 
-(void)updateIfNecessary:(/*^block*/id)arg1 ;
-(GEOActiveTileGroup *)activeTileGroup;
-(id)authToken;
-(id)initWithDelegate:(id)arg1 configuration:(id)arg2 ;
-(void)openConnection;
-(void)closeConnection;
-(unsigned long long)maximumZoomLevelForStyle:(int)arg1 scale:(int)arg2 ;
-(id)serverQueue;
-(void)setManifestToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)forceUpdate:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)updateProgress;
-(void)cancelCurrentManifestUpdate;
-(void)activateResourceScale:(int)arg1 ;
-(void)activateResourceScenario:(int)arg1 ;
-(void)deactivateResourceScale:(int)arg1 ;
-(void)deactivateResourceScenario:(int)arg1 ;
-(void)getResourceManifestWithHandler:(/*^block*/id)arg1 ;
-(oneway void)setActiveTileGroupIdentifier:(id)arg1 ;
-(oneway void)resetActiveTileGroup;
-(void)performOpportunisticResourceLoading;
-(void)_handleMessage:(id)arg1 xpcMessage:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id<GEOResourceManifestServerProxyDelegate>)arg1 ;
-(id<GEOResourceManifestServerProxyDelegate>)delegate;
-(id)configuration;
-(id)_xpcConnection;
@end

