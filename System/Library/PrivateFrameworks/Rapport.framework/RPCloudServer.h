/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Rapport/Rapport-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/RPCloudXPCClientInterface.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString, RPCloudXPCConnection;

@interface RPCloudServer : NSObject <NSSecureCoding, RPCloudXPCClientInterface> {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	LogCategory* _ucat;
	NSXPCConnection* _xpcCnx;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	NSString* _serviceIdentifier;
	/*^block*/id _sessionAcceptHandler;
	RPCloudXPCConnection* _serverXPCCnx;

}

@property (nonatomic,retain) RPCloudXPCConnection * serverXPCCnx;                     //@synthesize serverXPCCnx=_serverXPCCnx - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * serviceIdentifier;                              //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,copy) id sessionAcceptHandler;                                   //@synthesize sessionAcceptHandler=_sessionAcceptHandler - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)_invalidated;
-(void)_ensureXPCStarted;
-(void)_interrupted;
-(void)_activateWithCompletion:(/*^block*/id)arg1 reactivate:(BOOL)arg2 ;
-(void)xpcCloudReceivedSessionStartRequest:(id)arg1 fromID:(id)arg2 multicastFromID:(id)arg3 ;
-(id)sessionAcceptHandler;
-(void)setSessionAcceptHandler:(id)arg1 ;
-(RPCloudXPCConnection *)serverXPCCnx;
-(void)setServerXPCCnx:(RPCloudXPCConnection *)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)serviceIdentifier;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)invalidate;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)interruptionHandler;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
@end
