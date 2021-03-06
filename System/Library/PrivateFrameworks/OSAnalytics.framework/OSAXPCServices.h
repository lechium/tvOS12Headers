/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_source, OS_os_transaction;
@class NSObject;

@interface OSAXPCServices : NSObject {

	NSObject*<OS_xpc_object> _listenerConnection;
	NSObject*<OS_dispatch_source> _txnTimer;
	NSObject*<OS_os_transaction> _txn;

}
-(void)restartTransactionTimer;
-(BOOL)serviceRequest:(id)arg1 fromPID:(int)arg2 ;
-(BOOL)generateJetsamWithParams:(id)arg1 ;
-(void)dealloc;
-(BOOL)isInternalInstall;
-(id)initWithServiceName:(const char*)arg1 ;
-(void)postNotification:(id)arg1 ;
@end

