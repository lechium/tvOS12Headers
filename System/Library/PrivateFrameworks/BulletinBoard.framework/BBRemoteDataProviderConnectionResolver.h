/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BBDataProviderConnectionCheckinServer.h>
#import <libobjc.A.dylib/BBRemoteDataProviderStoreDelegate.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/BBDataProviderStore.h>

@protocol OS_dispatch_queue, BBDataProviderStoreDelegate;
@class NSXPCListener, NSObject, NSMutableDictionary, BKSApplicationStateMonitor, NSString;

@interface BBRemoteDataProviderConnectionResolver : NSObject <BBDataProviderConnectionCheckinServer, BBRemoteDataProviderStoreDelegate, NSXPCListenerDelegate, BBDataProviderStore> {

	NSXPCListener* _listener;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _registerQueue;
	NSMutableDictionary* _dataProviderConnectionsByService;
	NSMutableDictionary* _dataProviderConnectionsBySectionID;
	NSMutableDictionary* _dataProviderConnectionsByUniversalSectionID;
	NSMutableDictionary* _xpcConnectionsByService;
	id<BBDataProviderStoreDelegate> _delegate;
	int _listeningToken;
	BKSApplicationStateMonitor* _appStateMonitor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)xpcInterface;
+(id)resolverWithDelegate:(id)arg1 ;
-(void)registerServiceName:(id)arg1 appBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)dataProviderForSectionID:(id)arg1 ;
-(void)performBlockOnDataProviders:(/*^block*/id)arg1 ;
-(void)_registerForPublicationNotification;
-(id)debugDescriptionWithChildren:(unsigned long long)arg1 ;
-(void)_registerServiceName:(id)arg1 appBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)wakeService:(id)arg1 bundleID:(id)arg2 ;
-(id)dataProviderForUniversalSectionID:(id)arg1 ;
-(void)removeDataProvider:(id)arg1 ;
-(void)dataProviderStore:(id)arg1 didAddDataProvider:(id)arg2 performMigration:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)dataProviderStore:(id)arg1 didRemoveDataProvider:(id)arg2 ;
-(void)dataProviderStore:(id)arg1 didAddParentSectionFactory:(id)arg2 ;
-(void)remoteDataProviderNeedsToWakeClient:(id)arg1 ;
-(void)loadAllDataProviders;
-(void)dealloc;
-(NSString *)debugDescription;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end
