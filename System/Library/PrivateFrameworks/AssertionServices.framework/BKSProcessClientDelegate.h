/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BKSProcessClientDelegate <NSObject>
@required
-(void)client:(id)arg1 processDidChangeTaskState:(long long)arg2;
-(void)client:(id)arg1 processDidChangeDebuggingState:(BOOL)arg2;
-(void)client:(id)arg1 processDidExitWithContext:(id)arg2 completion:(/*^block*/id)arg3;
-(void)processAssertionExpirationImminentForClient:(id)arg1;

@end

