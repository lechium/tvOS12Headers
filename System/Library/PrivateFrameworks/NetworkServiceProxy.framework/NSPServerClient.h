/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSPServerCommands.h>

@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, NSString;

@interface NSPServerClient : NSObject <NSPServerCommands> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _connection;

}

@property (readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (retain) NSObject*<OS_xpc_object> connection;               //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCurrentLatitude:(double)arg1 longitude:(double)arg2 timestamp:(id)arg3 forClient:(id)arg4 ;
-(void)setEdgeSet:(id)arg1 forIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setAppRule:(id)arg1 forLabel:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchAppRuleForLabel:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)getConnection;
-(void)fetchCurrentConfigurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setCurrentConfiguration:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)fetchEdgeSetForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)establishTrustWithEdgeSetForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchCurrentMetricsWithCompletionHandler:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resetCurrentMetricsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)reportMetricsNowWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)refreshWaldoNowWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateKeyBagData:(id)arg1 usageData:(id)arg2 fromClient:(id)arg3 ;
-(void)addRequestMetrics:(id)arg1 ;
-(void)addConnectionMetrics:(id)arg1 ;
-(void)fetchStateForClient:(id)arg1 withPeerEndpoint:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setTestLatencyMap:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithCallbackQueue:(id)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
@end

