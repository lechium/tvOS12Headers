/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface RMWebUsageController : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,readonly) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(id)sharedController;
-(NSXPCConnection *)xpcConnection;
-(void)_asynchronousProxyWithHandler:(/*^block*/id)arg1 ;
-(void)deleteWebHistoryForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteWebHistoryForDomain:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteWebHistoryDuringInterval:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteAllWebHistoryWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
@end

