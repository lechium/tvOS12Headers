/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Accounts/Accounts-Structs.h>
#import <libobjc.A.dylib/NSXPCProxyCreating.h>

@class NSXPCConnection, NSString;

@interface ACRemoteAccountStoreSession : NSObject <NSXPCProxyCreating> {

	NSXPCConnection* _connection;
	os_unfair_lock_s _connectionLock;
	BOOL _hasConfiguredRemoteAccountStore;
	BOOL _xpcConnectionHasBeenInvalidated;
	BOOL _notificationsEnabled;
	NSString* _spoofedBundleID;

}

@property (nonatomic,copy) NSString * spoofedBundleID;               //@synthesize spoofedBundleID=_spoofedBundleID - In the implementation block
@property (assign,nonatomic) BOOL notificationsEnabled;              //@synthesize notificationsEnabled=_notificationsEnabled - In the implementation block
-(void)setSpoofedBundleID:(NSString *)arg1 ;
-(void)_configureConnection;
-(void)_setConnectionInterrupted;
-(void)_setConnectionInvalidated;
-(void)_configureRemoteAccountStoreIfNecessary;
-(NSString *)spoofedBundleID;
-(id)initWithXPCConnection:(id)arg1 ;
-(void)setNotificationsEnabled:(BOOL)arg1 ;
-(BOOL)notificationsEnabled;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_connection;
-(void)disconnect;
-(void)connect;
-(id)remoteObjectProxy;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
@end
