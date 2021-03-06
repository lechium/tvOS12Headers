/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ASDServiceBroker;

@interface ASDDiagnosticService : NSObject {

	ASDServiceBroker* _serviceBroker;

}
+(id)defaultService;
+(id)interface;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)initWithServiceBroker:(id)arg1 ;
-(id)activeClientsWithError:(id*)arg1 ;
-(BOOL)pingWithError:(id*)arg1 ;
-(BOOL)sendCommand:(long long)arg1 WithError:(id*)arg2 ;
-(void)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

