/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FMDaemon : NSObject
-(void)registerXPCEventHandlers;
-(void)startupWithCompletion:(/*^block*/id)arg1 ;
-(id)xpcDarwinEventHandlers;
-(id)xpcDistributedEventHandlers;
-(id)verifyLaunchEventsConfiguration:(id)arg1 withExclusions:(id)arg2 ;
-(void)startup;
-(void)initialize;
-(void)run;
@end

