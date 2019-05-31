/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>

@class NSError, _UIAsyncInvocation, NSString, _UIRemoteViewService, BKSProcessAssertion, NSXPCConnection;

@interface _UIViewServiceInterface : NSObject <NSXPCConnectionDelegate> {

	os_unfair_lock_s _terminationStateLock;
	NSError* _terminationError;
	/*^block*/id _terminationHandler;
	BOOL _isTerminated;
	_UIAsyncInvocation* _terminateInvocation;
	NSString* _serviceBundleIdentifier;
	_UIRemoteViewService* _service;
	BKSProcessAssertion* _serviceProcessAssertion;
	NSXPCConnection* _serviceConnection;
	int __automatic_invalidation_retainCount;
	BOOL __automatic_invalidation_invalidated;

}

@property (nonatomic,readonly) int servicePID; 
@property (nonatomic,readonly) SCD_Struct_UI1 serviceAuditToken; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)connectToViewServiceWithBundleIdentifier:(id)arg1 deputyInterfaces:(id)arg2 connectionHandler:(/*^block*/id)arg3 ;
+(id)connectToViewService:(id)arg1 deputyInterfaces:(id)arg2 connectionHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(oneway void)release;
-(id)retain;
-(unsigned long long)retainCount;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(id)disconnect;
-(int)__automatic_invalidation_logic;
-(id)_initWithConnectionInfo:(SCD_Struct_UI104)arg1 serviceBundleIdentifier:(id)arg2 deputyInterfaces:(id)arg3 ;
-(id)_initWithConnectionInfo:(SCD_Struct_UI104)arg1 service:(id)arg2 deputyInterfaces:(id)arg3 ;
-(void)_terminateUnconditionallyThen:(/*^block*/id)arg1 ;
-(id)_terminateWithError:(id)arg1 ;
-(id)_initWithConnectionInfo:(SCD_Struct_UI104)arg1 serviceBundleIdentifier:(id)arg2 service:(id)arg3 deputyInterfaces:(id)arg4 ;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(id)connectToDeputyWithInterface:(id)arg1 fromExportedHostingObject:(id)arg2 connectionHandler:(/*^block*/id)arg3 ;
-(void)setTerminationHandler:(/*^block*/id)arg1 ;
-(int)servicePID;
-(SCD_Struct_UI1)serviceAuditToken;
@end

