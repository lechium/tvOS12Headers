/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BKSAssertionClientProtocol <NSObject>
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> assertionQueue; 
@required
-(NSObject*<OS_dispatch_queue>)assertionQueue;
-(void)registerClientHandler:(id)arg1 forAssertionIdentifier:(id)arg2;
-(void)unregisterClientHandlerForAssertionIdentifier:(id)arg1;
-(BOOL)sendCreateEvent:(id)arg1 error:(id*)arg2;
-(void)sendUpdateEvent:(id)arg1;
-(void)sendDestroyEvent:(id)arg1;

@end

