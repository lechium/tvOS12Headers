/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFServiceHelper <NSObject>
@required
-(void)handleCommand:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)openSensitiveURL:(id)arg1;
-(void)dismissAssistant;
-(id)assistantLocalizedStringForKey:(id)arg1 table:(id)arg2 bundle:(id)arg3;
-(BOOL)isDeviceLockedWithPasscode;
-(BOOL)isTimeoutSuspended;
-(id)peerInfoForCurrentCommand;

@end
