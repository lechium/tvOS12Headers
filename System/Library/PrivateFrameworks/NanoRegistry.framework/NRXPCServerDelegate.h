/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NRXPCServerDelegate <NSObject>
@optional
-(void)xpcServer:(id)arg1 proxyWillConnect:(id)arg2;
-(void)xpcServer:(id)arg1 proxyDidDisconnect:(id)arg2;
-(void)xpcServer:(id)arg1 proxyDidSuspend:(id)arg2;
-(void)xpcServer:(id)arg1 proxyDidResume:(id)arg2;

@end

