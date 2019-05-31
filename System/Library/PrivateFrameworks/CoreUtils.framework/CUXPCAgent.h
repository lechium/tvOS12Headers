/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSXPCListener, NSObject, NSString, NSXPCListenerEndpoint, NSXPCInterface;

@interface CUXPCAgent : NSObject <NSXPCListenerDelegate> {

	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	LogCategory* _ucat;
	NSXPCConnection* _xpcCnx;
	NSMutableSet* _xpcCnxSet;
	NSXPCListener* _xpcListener;
	/*^block*/id _connectionStartedHandler;
	/*^block*/id _connectionEndedHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	NSXPCListenerEndpoint* _listenerEndpoint;
	NSXPCInterface* _exportedInterface;
	id _exportedObject;
	NSXPCInterface* _remoteObjectInterface;

}

@property (nonatomic,copy) id connectionStartedHandler;                               //@synthesize connectionStartedHandler=_connectionStartedHandler - In the implementation block
@property (nonatomic,copy) id connectionEndedHandler;                                 //@synthesize connectionEndedHandler=_connectionEndedHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * listenerEndpoint;                //@synthesize listenerEndpoint=_listenerEndpoint - In the implementation block
@property (nonatomic,retain) NSXPCInterface * exportedInterface;                      //@synthesize exportedInterface=_exportedInterface - In the implementation block
@property (nonatomic,retain) id exportedObject;                                       //@synthesize exportedObject=_exportedObject - In the implementation block
@property (nonatomic,retain) NSXPCInterface * remoteObjectInterface;                  //@synthesize remoteObjectInterface=_remoteObjectInterface - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)exportedObject;
-(id)connectionStartedHandler;
-(id)connectionEndedHandler;
-(void)_connectionInvalidated:(id)arg1 ;
-(void)setListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(NSXPCInterface *)remoteObjectInterface;
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(void)_invalidated;
-(void)_interrupted;
-(void)setConnectionStartedHandler:(id)arg1 ;
-(void)setConnectionEndedHandler:(id)arg1 ;
-(BOOL)activateDirectAndReturnError:(id*)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
-(NSString *)label;
-(NSXPCInterface *)exportedInterface;
-(void)setLabel:(NSString *)arg1 ;
-(id)remoteObjectProxy;
-(void)setRemoteObjectInterface:(NSXPCInterface *)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setExportedObject:(id)arg1 ;
-(void)setExportedInterface:(NSXPCInterface *)arg1 ;
-(id)interruptionHandler;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

