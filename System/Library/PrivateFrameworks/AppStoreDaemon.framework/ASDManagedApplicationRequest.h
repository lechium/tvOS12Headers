/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/ASDBaseClient.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, ASDManagedApplicationRequestOptions, NSString;

@interface ASDManagedApplicationRequest : ASDBaseClient <NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSXPCConnection* _connection;
	ASDManagedApplicationRequestOptions* _options;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setupConnection;
-(void)sendRequestWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_sendRequestCompletionWithOptions:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithOptions:(id)arg1 ;
@end

