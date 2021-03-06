/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:59 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/ADSingleton.h>

@interface ADBackgroundTaskScheduler : ADSingleton
+(void)registerTaskDelegate:(id)arg1 forRequestID:(id)arg2 ;
+(void)unregisterTaskDelegate:(id)arg1 ;
+(id)sharedInstance;
-(void)handleXPCActivity:(id)arg1 withID:(id)arg2 ;
-(void)addBackgroundTask:(id)arg1 ;
-(void)cancelBackgroundTask:(id)arg1 ;
-(void)checkOnTask:(id)arg1 ;
-(id)init;
@end

