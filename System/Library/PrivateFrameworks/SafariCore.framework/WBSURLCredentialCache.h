/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDictionary;

@interface WBSURLCredentialCache : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSDictionary* _credentialCache;
	/*^block*/id _credentialFetchBlock;

}

@property (copy,readonly) NSDictionary * credentials; 
-(id)initWithCredentialFetchBlock:(/*^block*/id)arg1 ;
-(id)initWithCachingMode:(long long)arg1 credentialFetchBlock:(/*^block*/id)arg2 ;
-(void)getCredentialsWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSDictionary *)credentials;
-(void)invalidate;
@end
