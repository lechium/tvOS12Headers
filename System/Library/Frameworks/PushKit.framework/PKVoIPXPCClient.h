/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:40 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/PushKit.framework/PushKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKVoIPXPCClient
@optional
-(void)voipRegistrationFailed;

@required
-(void)voipRegistrationSucceededWithDeviceToken:(id)arg1;
-(void)voipPayloadReceived:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;

@end

