/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSXPCConnection, NSObject, NSDictionary;

@interface SSErrorHandlerSession : NSObject {

	SSXPCConnection* _controlConnection;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSDictionary* _properties;
	long long _sessionID;

}
-(void)_setControlConnection:(id)arg1 ;
-(void)_setSessionID:(long long)arg1 ;
-(void)_setErrorProperties:(id)arg1 ;
-(void)performDefaultHandling;
-(void)redirectToURL:(id)arg1 ;
-(void)retry;
-(id)init;
-(void)dealloc;
-(id)valueForProperty:(id)arg1 ;
@end

