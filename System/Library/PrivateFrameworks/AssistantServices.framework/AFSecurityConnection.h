/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFSecurityService.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString;

@interface AFSecurityConnection : NSObject <AFSecurityService> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_dispatchCallbackForProcessedData:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_processData:(id)arg1 usingProcedure:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_dispatchCallbackForProcessedDataMap:(id)arg1 errorMap:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_processDataMap:(id)arg1 usingProcedure:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(oneway void)setKeychainValue:(id)arg1 forKey:(id)arg2 accountIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_connectionInterrupted;
-(void)_connectionInvalidated;
-(oneway void)processDataMap:(id)arg1 usingProcedure:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_invalidateConnection;
-(id)_connection;
-(oneway void)processData:(id)arg1 usingProcedure:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
@end

