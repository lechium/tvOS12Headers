/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSRecursiveLock;

@interface NSHTTPCookieStorageInternal : NSObject {

	OpaqueCFHTTPCookieStorageRef storage;
	OpaqueCFHTTPCookieStorageRef privateStorage;
	NSRecursiveLock* dataLock;
	BOOL privateBrowsing;
	BOOL _storage_didRegister;
	BOOL _privateStorage_didRegister;

}
-(void)_syncCookies;
-(void)registerForPostingNotificationsWithContext:(id)arg1 ;
-(id)initInternalWithCFStorage:(OpaqueCFHTTPCookieStorageRef)arg1 ;
-(void)_syncCookiesWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_initWithIdentifier:(id)arg1 private:(BOOL)arg2 ;
-(void)dealloc;
@end

